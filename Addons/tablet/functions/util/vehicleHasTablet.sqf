params ["_vehicle"];

_tablet = (configFile >> "CfgVehicles" >> typeOf _vehicle >> "itc_land" >> "mountedTablet")  call BIS_fnc_getCfgData;
(!isNil{_tablet})
