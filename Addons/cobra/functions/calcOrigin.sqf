params ["_shell"];
private ["_x","_y","_vx","_vy","_elevation","_fc","_tof"];
_ammo = typeOf _shell;
_vel = vectorMagnitude (velocity _shell);
_airFriction = -1 * (getNumber(configFile >> "CfgAmmo" >> _ammo >> "airFriction"));
_grav = 9.80665;
_fps = 60;
_elevation = (_shell call BIS_fnc_getPitchBank) # 0;
_fc = 0;
_tof = 0;
_useElevation = _elevation;

// Set t0 parameters
_vx = _vel * cos(_useElevation);
_vy = _vel * sin(_useElevation);
_frame = 1 / _fps;
_x = 0;
_y = 0.1;
_alt = 0;
_aboveLand = true;
_simulatedPos = [];
while {_aboveLand} do
{

    if(_fc % 5 == 0) then {
        _simulatedPosXY = ((getPosASL _shell) getPos [_x, getDir _shell]) vectorAdd [0,0,_y];
        _simulatedPos = [_simulatedPosXY # 0, _simulatedPosXY # 1, ((getPosASL _shell) # 2) + _y];
        _alt = _simulatedPos # 2;
        _terrainAlt = getTerrainHeightASL  _simulatedPos;
        _aboveLand = _terrainAlt < _alt;
    };

    // Calculate next velocity frame
    _vx = _vx + (_vx * _vel * _airFriction * _frame);
    _vy = _vy + (_vy * _vel * _airFriction * _frame);
    _vy = _vy + (_grav * _frame);
    _vel = sqrt(_vx*_vx + _vy*_vy);
    // Increment positions
    _y = _y - (_vy * _frame);
    _x = _x - (_vx * _frame);
    // Increment frame count.
    _fc = _fc + 1;
};

_simulatedPos
