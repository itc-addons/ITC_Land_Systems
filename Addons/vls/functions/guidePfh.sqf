(_this select 0) params ["_projectile", "_ammo", "_position", "_targetCoordinates", "_stage", "_time", "_angle", "_lastFrameTime","_azimuth","_steerPoint"];
if (_lastFrameTime == time) exitWith {};

if (!alive _projectile) exitWith {
    [_this select 1] call CBA_fnc_removePerFrameHandler;
};
private _frameTime = time - _lastFrameTime;
_this call itc_land_vls_fnc_updateData;

private _angles = [_projectile, _steerPoint] call itc_land_vls_fnc_angleToTarget;

_return = ([_projectile, _steerPoint, _frameTime] + _angles + [_stage, _targetCoordinates,_azimuth,_angle]) call itc_land_vls_fnc_determineSteerPoint;
_stage = (_return # 0);
(_this select 0) set [9, (_return # 1)];

if(_stage != "SEP" && _stage != "TURN") then {
  _stage = ([_projectile, _steerPoint, _frameTime] + _angles + [_stage]) call itc_land_vls_fnc_steerTo;
} else {
  if(_stage == "TURN") then {
    (_projectile call BIS_fnc_getPitchBank) params ["_pitch", "_bank"];
    _projectile setDir (_projectile getDir _targetCoordinates);
    if (_pitch > 0) then {
      [_projectile, _pitch - (_frameTime * 10), 0] call BIS_fnc_setPitchBank;
    };
  };
};
(_this select 0) set [4, _stage];
