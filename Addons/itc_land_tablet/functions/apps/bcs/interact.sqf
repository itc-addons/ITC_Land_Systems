params ["_action"];
_vehicle = vehicle player;
switch(_action) do {
  case "side1": {
    _vehicle setVariable ["page", "settings"];
  };
  case "side2": {
    _vehicle setVariable ["page", "setup"];
  };
  case "side3": {
    _vehicle setVariable ["page", "locStores"];
  };
  case "side5": {
    _vehicle setVariable ["bcs_mission_index", -1];
    if(_vehicle getVariable "page" == "newMission") then {
      [findDisplay 32562] call itc_land_tablet_fnc_pageInit;
    } else {
      _vehicle setVariable ["page", "newMission"];
    };
  };
  case "sideList": {
    _index = lbCurSel 15114;
    //if(!isNil{_index} && !isNil{(_vehicle getVariable "bcs_missions")}) then {
    _mission = (_vehicle getVariable "bcs_missions") # _index;
    _vehicle setVariable ["bcs_mission_index", _index];
    if(_vehicle getVariable "page" == _mission # 1) then {
      [findDisplay 32562] call itc_land_tablet_fnc_pageInit;
    } else {
      _vehicle setVariable ["page", _mission # 1];
    };
    //};
  };
};
