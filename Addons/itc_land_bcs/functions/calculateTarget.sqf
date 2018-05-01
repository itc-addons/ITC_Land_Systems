/*
 * Calculates a target position
 * Params: targetTypeIndex, knownPointIndex, input0, input1, input2, input3
 * targetTypeIndices are: 0: grid, 1: shift, 2: polar, 3: quickLay
 * Returns: positionASL
 */
params ["_targetTypeIndex","_kpi","_in0","_in1","_in2","_in3"];
_targetPos = [];
if(_targetTypeIndex == 0) then {
  _pos = [_in0, false] call ace_common_fnc_getMapPosFromGrid;
  _targetPos = [_pos # 0, _pos # 1, parseNumber _in1];
};
if(_targetTypeIndex == 1 || _targetTypeIndex == 2) then {
  _targetPos = (bcs_locations # _kpi) # 2;
};
if(_targetTypeIndex == 3) then {
  _targetPos = [bcs_bty_guns] call itc_land_bcs_fnc_getBatteryPosition;
};

if(_targetTypeIndex > 0) then {
  _lr = if(_targetTypeIndex == 1) then [{_in2},{"0"}];
  _ud = if(_targetTypeIndex == 1) then [{_in3},{_in2}];
  _targetPos = [_targetPos, parseNumber _in0, parseNumber _in1, parseNumber _lr, parseNumber _ud] call itc_land_bcs_fnc_adjustGrid;
};
_targetPos
