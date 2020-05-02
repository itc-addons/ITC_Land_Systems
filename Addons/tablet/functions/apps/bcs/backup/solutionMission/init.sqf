params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13506, true];

_mission = (_vehicle getVariable "bcs_missions") # (_vehicle getVariable "bcs_mission_index");
[_display, IDC_workspace_header, format["%1 Solutions", _mission # 0]] call itc_land_tablet_fnc_setText;
