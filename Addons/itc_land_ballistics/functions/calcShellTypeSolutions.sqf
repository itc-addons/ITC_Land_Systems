params ["_shellType", "_gunPos", "_gunElev", "_gunDir", "_targetPos", "_targetEl"];
//_targetPos = [_targetGrid, true] call ace_common_fnc_getMapPosFromGrid;
_distance = [_gunPos # 0, _gunPos # 1] distance [_targetPos # 0, _targetPos # 1];
_elevDiff = _targetEl - _gunElev;

_dir = _gunDir / 360 * 6400;
_relDir = (_gunPos getDir _targetPos) / 360 * 6400;
_df = 3200 - (_relDir - _dir);

_tableList = []  call compile preProcessFile format["itc_land_ballistics\tables\%1\list.sqf", _shellType];
//_tableList = [vehicle player] call itc_land_fcs_fnc_get_vehicle_tables;
_tableList params ["_charges", "_tables"];

if(isnil{_tables}) exitWith {[]};
_solutions = [];
for "_i" from 0 to (count _charges) - 1 step 1 do {
  _table = _tables # _i;
  _btab = []  call compile preProcessFile _table;
  _solution = [_btab, _distance, _elevDiff] call itc_land_ballistics_fnc_calcBtabSolution;
  if(count _solution > 0) then {
    _solutions = _solutions + [[_charges # _i, _relDir, _df] + _solution];
  };
};
_solutions