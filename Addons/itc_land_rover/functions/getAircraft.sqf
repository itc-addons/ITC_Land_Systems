private _planes = [];
private ["_turret"];
{
  if (_x isKindOf "Air") then {
    _turret = [_x] call itc_land_rover_fnc_getLaserTurret;
    if (!isNil "_turret") then {_planes pushBack _x};
  };
} forEach vehicles;
_planes
