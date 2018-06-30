/*
 * Author: Yax
 * Code for the shell interaction hotkey
 */

params ["_target"];

 //check if the player is carrying a shell
if(itc_land_carrying) then {
  _this call itc_land_towedAmmoHandling_fnc_drop;
} else {
  if(_target isKindOf "itc_land_carryShell_base") then {
    _this call itc_land_towedAmmoHandling_fnc_pickup;
  };
};

false
