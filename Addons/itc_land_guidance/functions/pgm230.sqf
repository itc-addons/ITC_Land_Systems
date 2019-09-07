params ["_unit", "", "", "", "_ammo", "", "_projectile", "_gunner"];
_targetPos = _unit getVariable ["itc_land_guidance_targetPos", itc_land_guidance_targetPos];

if(isNil{_targetPos}) exitWith {};
[{
  (_this select 0) params ["_projectile", "_lastFrameTime", "_targetCoordinates","_launchPos"];
  private _frameTime = time - _lastFrameTime;
  (_this select 0) set [1, time];

  if (!alive _projectile) exitWith {
    [_this select 1] call CBA_fnc_removePerFrameHandler;
  };
  private _distance2D = _projectile distance2D _targetCoordinates;
  private _distance2DTotal = _launchPos distance2D _targetCoordinates;
  private _targetDistance = _targetCoordinates distance _projectile;
  private _velocity = vectorMagnitude velocity _projectile;
  private _position = getPosASL _projectile;
  (_projectile call BIS_fnc_getPitchBank) params ["_pitch", "_bank"];
  private _vectToTarget = _position vectorFromTo _targetCoordinates;
  private _vectToTargetDiff = _vectToTarget vectorDiff (vectorNormalized (velocity _projectile));
  private _vectorModelSpace = _projectile vectorWorldToModel _vectToTargetDiff;
  private _angleX = asin (_vectorModelSpace # 0);
  private _angleY = asin (_vectorModelSpace # 2);

  _turnRate = 12 * _frameTime;
  _projectile setDir (getDir _projectile) + (_angleX min _turnRate  max -_turnRate );
  if(((-_angleY) > 45)) then {
    [_projectile, _pitch + (_angleY  min _turnRate  max -_turnRate), 0] call BIS_fnc_setPitchBank;
  };

  if(_distance2D < (_distance2DTotal / 2)) then {
    [_projectile, _pitch + (_angleY  min _turnRate  max -_turnRate), 0] call BIS_fnc_setPitchBank;
  };

}, 0, [_projectile, time, _targetPos, getPosASL _projectile]] call CBA_fnc_addPerFrameHandler;
