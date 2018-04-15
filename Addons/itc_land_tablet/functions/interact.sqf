params ["_action"];
_vehicle = (vehicle player);

_app = _vehicle getVariable "app";
_page = [_action] call itc_land_tablet_fnc_app_interact;
