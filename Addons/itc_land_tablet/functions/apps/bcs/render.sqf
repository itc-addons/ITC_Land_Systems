params ["_display"];

_fireMissions = (vehicle player) getVariable "bcs_missions";
_fireMissionStrings = _fireMissions apply {format["%1 %2", _x # 0, _x # 1]};
[15114, _fireMissionStrings, 0] call itc_land_tablet_fnc_fillComboBox;
