params ["_vehicle", "_interface"];

_interfaces = (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "itc_land" >> "tabletInterfaces")  call BIS_fnc_getCfgData;
if(isNil{_interfaces}) exitWith {false};

_interface in _interfaces
