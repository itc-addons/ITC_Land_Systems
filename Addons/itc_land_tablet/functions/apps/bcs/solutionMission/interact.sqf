params ["_action"];
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
bcs_solutions params ["_btySolutions", "_gunSolutions"];
if(_action == "back") then {
  (vehicle player) setVariable ["page", "engageMission"];
};
if(_action == "adjust") then {
  (vehicle player) setVariable ["page", "adjustMission"];
};

if(_action == "solup") then {
  if(_curSolution < _solutionLimit) then {
    _mission set [4, _curSolution + 1];
  };
};
if(_action == "soldn") then {
  _mission set [4, (_curSolution - 1) max 0];
};

if(_action == "shot") then {
  _mission set [6, time + ((_btySolutions # _curSolution) # 4)];
};

if(_action find "eom" > -1) then {
  if(_action == "eomsave") then {
    _MGRS = [_tgtPos] call ace_common_fnc_getMapGridFromPos;
    bcs_locations pushBack [_ident, format["%1 %2",_MGRS # 0, _MGRS # 1], _tgtPos , round (_tgtPos # 2), false];
  };
  bcs_missions deleteAt bcs_mission_index;
  (vehicle player) setVariable ["page", "locStores"];
};
[findDisplay 32562, false] call itc_land_tablet_fnc_pageInit;
