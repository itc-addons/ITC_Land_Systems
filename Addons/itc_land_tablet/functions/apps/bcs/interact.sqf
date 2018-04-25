params ["_action"];
#include "bcsDefines.hpp"
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
    _ident = GENIDENT;
    _newMission = EMPTYMISSION(_ident);
    bcs_missions pushBack _newMission;
    bcs_mission_index = (count bcs_missions) - 1;
    if(_vehicle getVariable "page" == "newMission") then {
      [findDisplay 32562] call itc_land_tablet_fnc_pageInit;
    } else {
      _vehicle setVariable ["page", "newMission"];
    };
  };
  case "sideList": {
    bcs_mission_index = lbCurSel 15114;
    MISSION;
    if(_vehicle getVariable "page" == _mission # 1) then {
      [findDisplay 32562] call itc_land_tablet_fnc_pageInit;
    } else {
      _vehicle setVariable ["page", _mission # 1];
    };
  };
};
