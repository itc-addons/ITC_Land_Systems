/*
 * Author: Yax
 * Fired event for certain weapon base classes
 * Checks if the ammo fired is of the correct base class for CIWS to apply, and if the shell type is one interceptable
 */
params ["", "", "", "", "_ammo", "", "_projectile", "_gunner"];
if(!local _gunner) exitWith {}; //make sure it doesn't get executed everywhere
if(!ITC_LAND_CIWS) exitWith {};  //if the CIWS system is turned off, stop the script

_interceptable = false;
{ //loop through interceptable ammo base classes
  if(_ammo isKindOf [_x, configFile >> "cfgAmmo"]) exitWith {_interceptable = true;};
}forEach ITC_LAND_CIWS_INTERCEPTABLE;

if(!_interceptable) exitWith {}; //if the ammo can't be intercepted, kill the script;

_this call itc_land_ciws_fnc_shellTarget;
