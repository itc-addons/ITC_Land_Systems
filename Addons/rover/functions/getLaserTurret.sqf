params ["_vehicle"];
private _turrets = allTurrets _vehicle;
_turrets pushBack [-1]; //driver
scopeName "main";
private ["_allWeapons", "_turret", "_lasers"];
{
  _turret = _x;
  _allWeapons = _vehicle weaponsTurret _x;
  _lasers = {_x isKindOf ["Laserdesignator_mounted", configFile >> "cfgWeapons"]} count _allWeapons;
  if (_lasers > 0) then {_turret breakOut "main"};
} forEach _turrets;
