params ["_vehicle"];

_tablet = (configFile >> "CfgVehicles" >> typeOf _vehicle >> "itc_land" >> "mountedTablet")  call BIS_fnc_getCfgData;

if(!isNil{_tablet}) then {
  [_tablet] call itc_land_tablet_fnc_open;
};
