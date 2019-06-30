params ["", "", "", "", "_ammo", "", "_projectile", "_gunner"];
if (!local _gunner) exitWith {};
_this call itc_land_vls_fnc_guide;
_this call BIS_fnc_effectFiredCruiseMissile;
