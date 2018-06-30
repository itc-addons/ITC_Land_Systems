params ["_shell", "_remote"];

if(_shell distance player < 3 || _remote) then {
  itc_land_carrying = true;
  [itc_land_towedAmmoHandling_fnc_carry, 0, [_shell]] call CBA_fnc_addPerFrameHandler;
};
