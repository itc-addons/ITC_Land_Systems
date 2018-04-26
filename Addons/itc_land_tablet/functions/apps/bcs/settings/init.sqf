params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"
ctrlShow [13501, true];

[_display, IDC_workspace_header, "Battery Control System Settings"] call itc_land_tablet_fnc_setText;

SETTEXT(3205,str bcs_splash_time);
SETTEXT(3206,bcs_mission_code);
SETTEXT(3207,str bcs_mission_start);
