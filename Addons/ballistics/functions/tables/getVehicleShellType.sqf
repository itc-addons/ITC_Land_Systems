/*
 *
 *
 *
 */
params ["_vehicle"];

_hasFCS = isClass (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "itc_land" >> "fcs");
if(!_hasFCS) exitWith {};

_tableListFile = (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "itc_land" >> "fcs" >> "tableList")  call BIS_fnc_getCfgData;
_tableListFile
