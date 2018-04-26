params ["_action"];
_vehicle = vehicle player;
_display = findDisplay 32562;
if(_action == "targetType") then {
  _type = lbText [6100, lbCurSel 6100];
  [_display, 6019, 0] call itc_land_tablet_fnc_setFade;
  [_display, 6101, 0] call itc_land_tablet_fnc_setFade;
  [_display, 6601, 0] call itc_land_tablet_fnc_setFade;

  [_display, 6403, 0] call itc_land_tablet_fnc_setFade;
  [_display, 6404, 0] call itc_land_tablet_fnc_setFade;
  [_display, 6022, 0] call itc_land_tablet_fnc_setFade;
  [_display, 6023, 0] call itc_land_tablet_fnc_setFade;
  switch (_type) do {
      case "Grid" : {
        [_display, 6403, 1] call itc_land_tablet_fnc_setFade;
        [_display, 6404, 1] call itc_land_tablet_fnc_setFade;
        [_display, 6022, 1] call itc_land_tablet_fnc_setFade;
        [_display, 6023, 1] call itc_land_tablet_fnc_setFade;

        [_display, 6020, "Grid"] call itc_land_tablet_fnc_setText;
        [_display, 6021, "Elevation"] call itc_land_tablet_fnc_setText;
      };
      case "Shift" : {
        [_display, 6601, 1] call itc_land_tablet_fnc_setFade;

        //input labels
        [_display, 6020, "OT"] call itc_land_tablet_fnc_setText;
        [_display, 6021, "AD"] call itc_land_tablet_fnc_setText;
        [_display, 6022, "LR"] call itc_land_tablet_fnc_setText;
        [_display, 6023, "UD"] call itc_land_tablet_fnc_setText;
      };
      case "Polar" : {
        [_display, 6601, 1] call itc_land_tablet_fnc_setFade;

        //field 3+4 visibility
        [_display, 6404, 1] call itc_land_tablet_fnc_setFade;
        [_display, 6023, 1] call itc_land_tablet_fnc_setFade;

        //input labels
        [_display, 6020, "Direction"] call itc_land_tablet_fnc_setText;
        [_display, 6021, "Distance"] call itc_land_tablet_fnc_setText;
        [_display, 6022, "VI"] call itc_land_tablet_fnc_setText;
      };
      case "QuickLay" : {
        //knownpoint loading
        [_display, 6019, 1] call itc_land_tablet_fnc_setFade;
        [_display, 6101, 1] call itc_land_tablet_fnc_setFade;
        [_display, 6601, 1] call itc_land_tablet_fnc_setFade;

        //field 3+4 visibility
        [_display, 6404, 1] call itc_land_tablet_fnc_setFade;
        [_display, 6023, 1] call itc_land_tablet_fnc_setFade;

        //input labels
        [_display, 6020, "Direction"] call itc_land_tablet_fnc_setText;
        [_display, 6021, "Distance"] call itc_land_tablet_fnc_setText;
        [_display, 6022, "VI"] call itc_land_tablet_fnc_setText;
      };
  };
};

if(_action == "load") then {
  _knownPointNum = lbText [6101, lbCurSel 6101];
  _points = (_vehicle getVariable "bcs_locations");
  _point = _points # (_points findIf {_x # 0 == _knownPointNum});
  [_display, 6401, _point # 1] call itc_land_tablet_fnc_setText;
  [_display, 6402, str (_point # 3)] call itc_land_tablet_fnc_setText;
};


if(_action == "save") then {
  _ident = ctrlText 6400;
  _targetType = lbText [6100, lbCurSel 6100];
  _target = nil;
  _points = (_vehicle getVariable "bcs_locations");
  _knownPointNum = lbText [6101, lbCurSel 6101];
  _saveInfo = [];
  switch(_targetType) do {
    case "Grid":  {
      _pos = [ctrlText 6401, false] call ace_common_fnc_getMapPosFromGrid;
      _target = [_pos # 0, _pos # 1, parseNumber (ctrlText 6402)];
      _saveInfo = [_targetType,-1,ctrlText 6401,ctrlText 6402,0,0,_target];
    };
    case "Shift": {
      _knownPoint = _points # (_points findIf {_x # 0 == _knownPointNum});
      _startPoint = _knownPoint # 2;
      _ot = parseNumber (ctrlText 6401);
      _ad = parseNumber (ctrlText 6402);
      _lr = parseNumber (ctrlText 6403);
      _ud = parseNumber (ctrlText 6404);
      _target = [_startPoint, _ot, _ad, _lr, _ud] call itc_land_bcs_fnc_adjustGrid;
      _saveInfo = [_targetType,lbCurSel 6101,_ot,_ad,_lr,_ud,_target];
    };
    case "Polar": {
      _knownPoint = _points # (_points findIf {_x # 0 == _knownPointNum});
      _startPoint = _knownPoint # 2;
      _dir = parseNumber (ctrlText 6401);
      _dist = parseNumber (ctrlText 6402);
      _vi = parseNumber (ctrlText 6403);
      _target = [_startPoint, _dir, _dist, 0, _vi] call itc_land_bcs_fnc_adjustGrid;
      _saveInfo = [_targetType,lbCurSel 6101,_dir,_dist,_vi,0,_target];
    };
    case "QuickLay": {
      _knownPoint = _points # (_points findIf {_x # 0 == _knownPointNum});
      _origin = [(_vehicle getVariable "bcs_bty_guns")] call itc_land_bcs_fnc_getBatteryPosition;
      _dir = parseNumber (ctrlText 6401);
      _dist = parseNumber (ctrlText 6402);
      _vi = parseNumber (ctrlText 6403);
      _target = [_origin, _dir, _dist, 0, _vi] call itc_land_bcs_fnc_adjustGrid;
      _saveInfo = [_targetType,-1,_dir,_dist,_vi,0,_target];
    };
  };
  _index = (_vehicle getVariable "bcs_mission_index");
  _missions = _vehicle getVariable "bcs_missions";
  _mission = _missions # _index;
  _mission set [2, _saveInfo];
  _missions set [_index, _mission];
  _mission set [1, "solutionMission"];
  _vehicle setVariable ["page", "solutionMission"];
};
