itc_land_carrying = false;
["ITC Land","itc_land_shellInteract", "Shell pickup/load/drop", {[cursorTarget, false] call itc_land_towedAmmoHandling_fnc_action;}, "", [46, [false, false, false]]] call CBA_fnc_addKeybind;
