params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13501, true];

[_display, IDC_workspace_header, "Battery Control System Settings"] call itc_land_tablet_fnc_setText;

[_display, 3205, str (missionNameSpace getVariable "bcs_splash_time")] call itc_land_tablet_fnc_setText;
[_display, 3206, missionNameSpace getVariable "bcs_mission_code"] call itc_land_tablet_fnc_setText;
[_display, 3207, str (missionNameSpace getVariable "bcs_mission_start")] call itc_land_tablet_fnc_setText;
