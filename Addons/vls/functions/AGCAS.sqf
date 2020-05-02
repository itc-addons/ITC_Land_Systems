params ["_guidance","_bank","_bankRate","_pitch","_diveRate"];
_guidance params ["_projectile", "_steerPoint","_frameTime", "_angleX", "_angleY","_stage"];

_pitch = _pitch + 0.01;

private _speed = vectorMagnitude (velocity _projectile);
private _levelTime = if(_bank != 0 && _bankRate != 0)then[{(abs _bank) / _bankRate},{0}];
private _pitchTime = (10 - _pitch) / _diveRate;
private _pullDist = ((_levelTime * _speed) + (_pitchTime * _speed)) max 300;
private _velocityDirDist = ((vectorNormalized (velocity _projectile)) vectorMultiply _pullDist);
private _intersectPos = (getPosASL _projectile) vectorAdd _velocityDirDist;
//private _intersectPos = _projectile modelToWorldWorld [0,_pullDist,-50];

private _intersects = lineIntersectsSurfaces [getPosASL _projectile, _intersectPos, _projectile];
(count _intersects > 0)
