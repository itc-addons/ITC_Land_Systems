params ["_action"];
#include "..\bcsDefines.hpp"

if(_action == "save") then {
  bcs_splash_time = UINUMBER(3205);
  bcs_mission_code = UITEXT(3206);
  bcs_mission_start = UINUMBER(3207);
};
