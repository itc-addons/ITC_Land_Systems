/*
 * itc_land_aps_fnc_vehicleInit
 *
 * Initializes APS modules on vehicles
 *
 * params (array)[(object) vehicle]
 */
params ["_vehicle"];

private _config = (configFile >> "cfgVehicles" >> (typeof _vehicle) >> "itc_land_aps");

if (isClass _config) then {
  private _apsArray = [];
  private _apsSystems = "true" configClasses _config;
  { // forEach _apsSystems
    private _aps = [
      getText (_x >> "displayName"),
      ((_x >> "position") call BIS_fnc_getCfgData),
      ((_x >> "turret") call BIS_fnc_getCfgData),
      getNumber (_x >> "direction"),
      getNumber (_x >> "traverse"),
      getNumber (_x >> "elevate"),
      getNumber (_x >> "range"),
      getNumber (_x >> "munitions"),
      getNumber (_x >> "pk"),
      getNumber (_x >> "reloadTime"),
      (getNumber (_x >> "trigger") == 1),
      0
    ];
    _apsArray pushBack _aps;
  } foreach _apsSystems;

  if (count _apsArray > 0) then {
    _vehicle setVariable ["itc_land_aps_modules", _apsArray, true];
  };
};
