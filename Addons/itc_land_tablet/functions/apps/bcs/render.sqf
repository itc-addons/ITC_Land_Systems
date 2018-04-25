params ["_display"];

_fireMissionStrings = bcs_missions apply {format["%1", _x # 0]};
[15114, _fireMissionStrings, -1] call itc_land_tablet_fnc_fillComboBox;
