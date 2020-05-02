params ["_action", "_listBox", "_target", "_value"];
_vehicle = [] call itc_land_common_fnc_getCurVehicle;
_display = findDisplay 32562;
if(_action == "sheafType") then {
  _type = lbText [7101, lbCurSel 7101];
  _hide = if(_type == "Special") then [{0},{1}];
  [_display, 7020, _hide] call itc_land_tablet_fnc_setFade;
  [_display, 7021, _hide] call itc_land_tablet_fnc_setFade;
  [_display, 7022, _hide] call itc_land_tablet_fnc_setFade;
  [_display, 7401, _hide] call itc_land_tablet_fnc_setFade;
  [_display, 7402, _hide] call itc_land_tablet_fnc_setFade;
  [_display, 7403, _hide] call itc_land_tablet_fnc_setFade;
};

if(_action == "back") then {
  _vehicle setVariable ["page", "newMission"];
};

if(_action == "save") then {
  _curIndex = _vehicle getVariable "bcs_mission_index";
  _fireMissions = _vehicle getVariable "bcs_missions";
  _curMission = _fireMissions # _curIndex;
  _curMission set [1, "solutionMission"];
  _type = lbText [7101, lbCurSel 7101];
  _sheaf = [_type];
  if(_type == "Special") then {
    _quick = lbText [7401, lbCurSel 7401];
    _dir = parseNumber (ctrlText 7402);
    _length = parseNumber (ctrlText 7403);
    _sheaf = _sheaf + [_quick, _dir, _length];
  };
  _fireMissions set [_curIndex, _curMission + [_sheaf]];
  _vehicle setVariable ["bcs_missions", _fireMissions];
  _vehicle setVariable ["page", "solutionMission"];
};
