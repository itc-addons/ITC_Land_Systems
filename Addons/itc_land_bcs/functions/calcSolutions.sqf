/*
 * Calculates solutions for a firemission
 * Params: battery array, firemission target(posASL), sheaf
 * Returns: solutions in format [battery, [gun1, gun2, etc]]
 */
params ["_guns", "_shellType", "_targetPos", "_sheaf"];
_sheaf params ["_sheafType", "_sheafQuick", "_sheafDir", "_sheafSize"];

_batteryPos = [_guns] call itc_land_bcs_fnc_getBatteryPosition;
_batterySolution = [_shellType, _batteryPos, _batteryPos # 2, 0, _targetPos, _targetPos # 2] call itc_land_ballistics_fnc_calcShellTypeSolutions;

_gunTargets = [];
switch(_sheafType) do {
  case "Parallel": {
    {
      _x params ["_num", "_posStr", "_pos", "_elev", "_dir"];
      _gunTargets pushBack (_targetPos vectorAdd (_pos vectorDiff _batteryPos));
    }forEach _guns;
  };
};

_gunSolutions = [];
{
  _x params ["_num", "_posStr", "_pos", "_elev", "_dir"];
  _gunSolution = [_shellType, _pos, _pos # 2, _dir, (_gunTargets # _forEachIndex), (_gunTargets # _forEachIndex) # 2] call itc_land_ballistics_fnc_calcShellTypeSolutions;
  _gunSolutions pushBack [_num, _gunSolution];
}forEach _guns;

[_batterySolution, _gunSolutions]
