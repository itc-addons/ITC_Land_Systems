params ["_vehicle","_weapon","_muzzle","_mode","_ammo","_magazine","_projectile"];

private _currentSpeed = vectorMagnitude (velocity _projectile);
private _randomFactor = random [(_currentSpeed / 100) * -0.5,0,(_currentSpeed / 100) * 0.5];
private _targetSpeed = _currentSpeed + _randomFactor;
private _targetVelocity = (vectorNormalized velocity _projectile) vectorMultiply _targetSpeed;
_projectile setVelocity _targetVelocity;
player sideChat format["Adjusting velocity from %1 to %2", _currentSpeed, _targetSpeed];
