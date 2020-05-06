(_this select 0) params ["_projectile", "_ammo", "_position", "_targetCoordinates", "_stage", "_time", "_angle", "_lastFrameTime","_azimuth","_steerPoint"];
(_this select 0) set [7, time];
_position = getPosASL _projectile;
(_this select 0) set [2, _position];
