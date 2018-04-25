params ["_action"];
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
if(_action == "back") then {
  (vehicle player) setVariable ["page", "engageMission"];
};

if(_action == "solup") then {
  if(_curSolution < _solutionLimit) then {
    _mission set [4, _curSolution + 1];
  };
};
if(_action == "soldn") then {
  _mission set [4, (_curSolution - 1) max 0];
};

[findDisplay 32562, false] call itc_land_tablet_fnc_pageInit;
