params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13503, true];

[_display, IDC_workspace_header, "Location Stores"] call itc_land_tablet_fnc_setText;

[5408,["no","yes"],0] call itc_land_tablet_fnc_fillComboBox;

lbClear 5411;
_locationsStrings = bcs_locations apply {format["%1               %2              %3               %4", _x # 0, _x # 1, _x # 3, _x # 4]};
[5411, _locationsStrings, 0] call itc_land_tablet_fnc_fillComboBox;
