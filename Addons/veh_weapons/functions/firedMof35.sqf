/*
 * Author: Yax
 * Fired event for ITC Howitzers with Mof35 fuzed shells
 */
params ["_vehicle", "", "", "", "_ammo", "_magazine", "_projectile", "_gunner"];
if (!local _gunner) exitWith {};
_fuzeType = _vehicle getVariable ["itc_land_selectedFuzeMode","pd"];
_fuzeValue = _vehicle getVariable ["itc_land_fuzeValues",0];


if(isNil{_fuzeType}) exitWith {};
if(_fuzeType == "" || _fuzeType == "pd") exitWith {};

_fuzeMethods = [
  ["delay",itc_land_veh_weapons_fnc_fuzeDelay],
  ["time",itc_land_veh_weapons_fnc_fuzeTime],
  ["prox",itc_land_veh_weapons_fnc_fuzeProx]
];

_fuzeMethod = _fuzeMethods # (_fuzeMethods findIf {(_x # 0) == _fuzeType}) # 1;
[_fuzeMethod, 0, [_projectile, _magazine, getPosATL _projectile, _fuzeType, _fuzeValue, time,[0,0,0]]] call CBA_fnc_addPerFrameHandler;
