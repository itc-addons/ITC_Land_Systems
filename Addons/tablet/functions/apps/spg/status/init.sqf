params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13420, true];
[_display, IDC_workspace_header, "Vehicle Status"] call itc_land_tablet_fnc_setText;
