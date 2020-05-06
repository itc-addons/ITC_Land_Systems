params ["_vehicle", "_aps", "_projectile"];
_aps params [
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

private _apsPosition = _vehicle modelToWorldWorld _position;
private _projectilePosition = getPosASL _projectile;

// out of range
if (_apsPosition distance _projectilePosition > _range) exitWith { systemChat "range"; false };

// reloading
if (_lastFiredTime + _reloadTime > cba_missionTime) exitWith { systemChat "time"; false };

private _vectToProjectile = _apsPosition vectorFromTo _projectilePosition;
private _vectPolar = _vectToProjectile call CBA_fnc_vect2Polar;

_vectPolar params ["", "_azimuth", "_elevation"];

private _mountDirection = (getDir _vehicle);
if (!isNil "_turret") then {
  private _turretVector = ([_vehicle, _turret] call ace_common_fnc_getTurretDirection) # 1;
  systemChat str ["VEHICLE", _mountDirection];
  _mountDirection = (_turretVector call CBA_fnc_vect2Polar) # 1;
  systemChat str ["TURRET", _mountDirection];
};

private _apsDir = (_mountDirection + _direction) % 360;
systemChat str [_apsDir, _azimuth];
if (!(_apsDir - _traverseLim < _azimuth && _azimuth < _apsDir + _traverseLim)) exitWith { systemChat "dir"; false };

if (_elevation < -_elevateLim && _elevation > _elevateLim) exitWith { systemChat "elev"; false };

// los check from aps module
_intersects = lineIntersectsWith  [_begin, _end, _vehicle, _projectile];
if (count _intersects > 0) exitWith { systemChat "LOS"; false };

systemChat str _vectPolar;

true
