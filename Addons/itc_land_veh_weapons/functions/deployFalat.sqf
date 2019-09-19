params ["_subMunitionIndex", "_position", "_velocity", "_pitch", "_bank", "_guidanceInfo"];

private _laserCode = 1111;
if (_subMunitionIndex < 2) then {
  _laserCode = _guidanceInfo # 0 # _subMunitionIndex;
};

//player sideChat format ["%1 deployed", _subMunitionIndex];
_spawnPosAdjustment = (vectorNormalized _velocity) vectorMultiply _subMunitionIndex;
_extra = createVehicle ["Land_FoodContainer_01_F", _position vectorAdd _spawnPosAdjustment, [], 0, "FLY"];
//_extra = createVehicle ["Land_FoodContainer_01_F", _position, [], 0, "FLY"];
_randomizedVelocity = _velocity vectorAdd [random 5, random 5, random 5];
_extra setVelocity _randomizedVelocity;

[{
  params ["_pfhValues","_pfhId"];
  _pfhValues params ["_projectile", "_firedTime", "_initialSpeed", "_laserCode"];
  //INITIAL DEPLOYMENT FLIGHT
  if(time > _firedTime + 4 && typeOf _projectile == "Land_FoodContainer_01_F") then { //OPEN THE PARACHUTE
    //systemChat "PARACHUTE DEPLOYED";
    _extra = createVehicle ["ITC_155Extra", getPos _projectile, [], 0, "FLY"];
    _extra setVelocity (velocity _projectile);
    deleteVehicle _projectile;
    _projectile = _extra;
    _pfhValues set [0, _extra];
  };

  if(time > _firedTime + 8 && typeOf _projectile == "ITC_155Extra") then { //SEARCH FOR A TARGET
    _spot = [getPosASL _projectile, [0,0,-1], 90, 300, [1500, 1550], _laserCode] call ace_laser_fnc_seekerFindLaserSpot;
    if(!isNil{_spot select 0}) then {
      _heat = createVehicle ["R_MRAAWS_HEAT_F", getPos _projectile, [], 0, "FLY"];
      [_heat, -90, 0] call BIS_fnc_setPitchBank;
      _vectorToTank = (getPosASL _projectile) vectorFromTo (_spot select 0);
      _heat setVelocity (_vectorToTank vectorMultiply 5000);

      deleteVehicle _projectile;
      [_pfhId] call CBA_fnc_removePerFrameHandler;
    };
  };

  if(time > _firedTime + 180 && typeOf _projectile == "ITC_155Extra") then { //SEARCH FOR A TARGET
        _heat = createVehicle ["R_MRAAWS_HEAT_F", getPos _projectile, [], 0, "FLY"];
        [_heat, -90, 0] call BIS_fnc_setPitchBank;
        triggerAmmo _heat;
        deleteVehicle _projectile;
  };

  if(!alive _projectile) exitWith {
    [_pfhId] call CBA_fnc_removePerFrameHandler;
  };
}, 0.5, [_extra, time, vectorNormalized _velocity, _laserCode]] call CBA_fnc_addPerFrameHandler;
