params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"
ctrlShow [13507, true];

[_display, IDC_workspace_header, "Adjust Mission"] call itc_land_tablet_fnc_setText;
