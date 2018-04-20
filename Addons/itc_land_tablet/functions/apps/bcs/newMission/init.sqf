params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13504, true];

[_display, IDC_workspace_header, "New Firemission"] call itc_land_tablet_fnc_setText;

[6100, ["Grid","Shift","Polar","QuickLay"], 0] call itc_land_tablet_fnc_fillComboBox;
["targetType", _display] call itc_land_tablet_fnc_pageInteract;

_points = vehicle player getVariable "bcs_locations";
_pointsNames = _points apply {_x # 0};
[6101, _pointsNames, 0] call itc_land_tablet_fnc_fillComboBox;
