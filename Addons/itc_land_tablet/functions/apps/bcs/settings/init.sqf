params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13501, true];

[_display, IDC_workspace_header, "Battery Control System Settings"] call itc_land_tablet_fnc_setText;

_vehicle = vehicle player;
[_display, 3205, str (_vehicle getVariable "bcs_splash_time")] call itc_land_tablet_fnc_setText;
[_display, 3206, _vehicle getVariable "bcs_mission_code"] call itc_land_tablet_fnc_setText;
[_display, 3207, str (_vehicle getVariable "bcs_mission_start")] call itc_land_tablet_fnc_setText;
