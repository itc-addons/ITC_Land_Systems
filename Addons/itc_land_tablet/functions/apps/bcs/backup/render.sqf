params ["_display"];

_fireMissions = (vehicle player) getVariable "bcs_missions";
_fireMissionStrings = _fireMissions apply {format["%1", _x # 0]};
[15114, _fireMissionStrings, -1] call itc_land_tablet_fnc_fillComboBox;
