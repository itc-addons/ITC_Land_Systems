/*
 * Author: Toadball
 * Fired event for ITC SAM systems with SAM35 fuzed munitions
 */
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
if (!local _gunner) exitWith {};

[
   itc_land_veh_weapons_fnc_fuzeProxFOV, 
   0,
   [_this]
] call CBA_fnc_addPerFrameHandler;
