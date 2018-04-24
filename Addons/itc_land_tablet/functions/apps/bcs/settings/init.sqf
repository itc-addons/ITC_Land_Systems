params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13501, true];

[_display, IDC_workspace_header, "Battery Control System Settings"] call itc_land_tablet_fnc_setText;
