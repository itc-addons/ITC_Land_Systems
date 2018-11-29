params ["_projectile", "_target"];
private _vectToTarget = _position vectorFromTo _target;
private _vectToTargetDiff = _vectToTarget vectorDiff (vectorNormalized (velocity _projectile));
private _vectorModelSpace = _projectile vectorWorldToModel _vectToTargetDiff;
private _angleX = ((getPos _projectile) getDir _target) - (getDir _projectile);
if(_angleX < 0) then {_angleX = _angleX + 360};
if(_angleX > 180) then {_angleX = _angleX - 360};
private _angleY = asin (_vectorModelSpace # 2);
[_angleX, _angleY]
