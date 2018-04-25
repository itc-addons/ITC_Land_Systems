params ["_action"];
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
bcs_solutions params ["_btySolutions", "_gunSolutions"];
if(_action == "back") then {
  (vehicle player) setVariable ["page", "newMission"];
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

[findDisplay 32562, false] call itc_land_tablet_fnc_pageInit;
