params ["", "", "", "", "_ammo", "", "_projectile", "_gunner"];
_targetPos = itc_land_guidance_targetPos;
if(isNil{_targetPos}) exitWith {};
[{
  (_this select 0) params ["_projectile", "_ammo", "_position", "_targetCoordinates"];
  if (!alive _projectile) exitWith {
      [_this select 1] call CBA_fnc_removePerFrameHandler;
  };

  _position = getPosASL _projectile;
  (_this select 0) set [2, _position];
  (_projectile call BIS_fnc_getPitchBank) params ["_pitch", "_bank"];
  _speed = vectorMagnitude (velocity _projectile);

  _dElev = (_position select 2) - (_targetCoordinates select 2);
  _distHorizontal = [_position select 0, _position select 1, 0] distance [_targetCoordinates select 0, _targetCoordinates select 1, 0];
  _angleTo = atan(_dElev / _distHorizontal);
  _angleToHoriz = _projectile getRelDir _targetCoordinates;
  _angleToHoriz = if(_angleToHoriz > 180) then [{_angleToHoriz - 360},{_angleToHoriz}];

  _diff = abs(_pitch - (_angleTo * -1));

  if(_diff < 20) then {
    if((_projectile getDir _targetCoordinates) > getDir _projectile) then {
      _projectile setDir (getDir _projectile + 0.5);
    } else {
      _projectile setDir (getDir _projectile - 0.5);
    };

    _turnRate = 2;
    if(_pitch > (_angleTo * -1)) then {
      [_projectile, _pitch - (_diff / _turnRate), 0] call BIS_fnc_setPitchBank;
    } else {
      [_projectile, _pitch + (_diff / _turnRate), 0] call BIS_fnc_setPitchBank;
    };
  };
}, 0.1, [_projectile, _ammo, getPosATL _projectile, _targetPos]] call CBA_fnc_addPerFrameHandler;
