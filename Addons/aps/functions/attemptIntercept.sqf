params ["_projectile", "_vehicle"];
scopeName "main";

private _apsModules = _vehicle getVariable ["itc_land_aps_modules", []];
{
  private _canIntercept = [_vehicle, _x, _projectile] call itc_land_aps_fnc_canIntercept;
  if (_canIntercept) then {
    _x params [
      "_name",
      "_position",
      "_turret",
      "_direction",
      "_traverseLim",
      "_elevateLim",
      "_range",
      "_ammoCount",
      "_pk",
      "_reloadTime",
      "_triggersAmmo",
      "_lastFiredTime"
    ];
    _lastFiredTime = cba_missionTime;
    _ammoCount = _ammoCount - 1;
    _apsModules set [_forEachIndex, [
      _name, _position, _turret, _direction, _traverseLim, _elevateLim, _range, _ammoCount, _pk, _reloadTime, _triggersAmmo, _lastFiredTime
    ]];
    systemChat "FIRED";
    if (random 1 <= _pk) then {
      systemChat format ["KILL AT %1m", _projectile distance _vehicle];
      if (_triggersAmmo) then {
        triggerAmmo _projectile;
      } else {
        private _newProjectile = "ammo_Penetrator_PG7" createVehicle [0,0,100];
        private _pos = getPosASL _projectile;
        (_projectile call bis_fnc_getPitchBank) params ["_pitch", "_bank"];
        deleteVehicle _projectile;
        [_newProjectile, _pitch, _bank] call bis_fnc_setPitchBank;
        _newProjectile setPosASL _pos;
        triggerAmmo _newProjectile;
      };
      breakOut "main";
    } else {
      private _velocity = velocity _projectile;
      private _inverseMagnitude = -1 * (vectorMagnitude _velocity);
      private _ammo = "B_127x108_APDS" createVehicle [0,0,100];
      _ammo setVelocity ((vectorNormalized _velocity) vectorMultiply _inverseMagnitude);
      _ammo setPosASL (getPosASL _projectile);
    };
  };
} forEach _apsModules;

_vehicle setVariable ["itc_land_aps_modules", _apsModules, true];
