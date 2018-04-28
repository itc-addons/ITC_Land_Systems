/*
 * Calculates solutions for a firemission
 * Params: battery array, firemission target(posASL), engagement
 * Returns: solutions in format [battery, [gun1, gun2, etc]]
 */
params ["_guns", "_shellType", "_targetPos", "_engagement"];
_engagement params ["_shellTypeIndex","_sheafType", "_sheafQuick", "_sheafDir", "_sheafSize","_magazine"];

_magazineHeightModifier = configFile >> "CfgMagazines" >> _magazine >> "itc_land_heightModifier";
_magazineHeightModifier = if(isText _magazineHeightModifier) then [{getText _magazineHeightModifier}, {0}];
_targetPos = _targetPos vectorAdd [0,0,_magazineHeightModifier];
_magazineTimeModifier = configFile >> "CfgMagazines" >> _magazine >> "itc_land_timeModifier";
_magazineTimeModifier = if(isNumber _magazineTimeModifier) then [{getNumber _magazineTimeModifier}, {0}];

_batteryPos = [_guns] call itc_land_bcs_fnc_getBatteryPosition;
_batterySolution = [_shellType, _batteryPos, _batteryPos # 2, 0, _targetPos, _targetPos # 2] call itc_land_ballistics_fnc_calcShellTypeSolutions;

_gunTargets = [];
switch(_sheafType) do {
  case 0: { //0: Parralel, 1: Converged, 2: Linear, 3: Open, 4: Special
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
  _gunSolution apply {_x set [4, (_x # 4) + _magazineTimeModifier]};
  _gunSolutions pushBack [_num, _gunSolution];
}forEach _guns;

[_batterySolution, _gunSolutions]
