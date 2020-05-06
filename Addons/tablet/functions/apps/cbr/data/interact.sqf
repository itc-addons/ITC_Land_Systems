params ["_action"];

switch(_action) do {
  case "savePos": {
    _posIndex = lbCurSel 136001;
    _pos = itc_land_cobra_engagements # _posIndex;
    _MGRS = [_pos # 2 # 0] call ace_common_fnc_getMapGridFromPos;
    if(isNil{bcs_locations}) then {bcs_locations = [];};
    bcs_locations pushBack [_pos # 0, format["%1 %2",_MGRS # 0, _MGRS # 1], _pos # 2 # 0 , round (_pos # 2 # 0 # 2), false];
  };
};
