params ["_action", "_listBox", "_target", "_value"];
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;

if(_action == "back") then {
  (vehicle player) setVariable ["page", "newMission"];
};

if(_action == "save") then {
  _magType = (bcs_availableTables # (bcs_bty_type # 0) # 2) # (lbCurSel 7100);
  _engagePage = [lbCurSel 7101, lbCurSel 7401, UINUMBER(7402), UINUMBER(7403), lbCurSel 7100, _magType];
  _mission set [3, _engagePage];
  SAVEMISSION(_mission);
  _mission set [1, "solutionMission"];
  (vehicle player) setVariable ["page", "solutionMission"];
};
