private _aircraft = call itc_land_rover_fnc_getAircraft;
itc_land_rover_ui_aircraftList = [nil] + _aircraft;
lbClear 2100;
lbAdd [2100, "none"];
{
  lbAdd [2100, (getText (configFile >> "cfgVehicles" >> typeOf _x >> "displayName")) + " (" + (name _x) + ")"];
} forEach _aircraft;
