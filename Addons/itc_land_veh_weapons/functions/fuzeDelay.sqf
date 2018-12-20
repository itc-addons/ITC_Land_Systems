params ["_pfhValues","_pfhId"];
_pfhValues params ["_projectile", "_magazine", "_position", "_fuzeType","_fuzeTime", "_lastFrameTime","_velocity"];

if (alive _projectile) then {
  _position = getPosATL _projectile;
  _pfhValues set [2, _position];
  _velocity = velocity _projectile;
  if(vectorMagnitude _velocity > 10) then {
    _pfhValues set [6, _velocity];
  };
};

if(!alive _projectile) exitWith {
  [_pfhId] call CBA_fnc_removePerFrameHandler;
  _subMunition = getText (configFile >> "CfgMagazines" >> _magazine >> "itc_land_submunition");
  //_lastFrameLength = time - _lastFrameTime;
  _lastSpeed = vectorMagnitude _velocity;
  //player sideChat format["last speed %1ms based on %2",_lastSpeed,_velocity];
  _lastFrameDist = _fuzeTime * _lastSpeed;
  _lastExplosionVector = (vectorNormalized _velocity) vectorMultiply _lastFrameDist;
  //player sideChat format ["delay fuze, distance %1 ", _lastFrameDist];
  _explosionPosition = _position vectorAdd _lastExplosionVector;
  _subMunition createVehicle _explosionPosition;

  //drop ["\a3\data_f\Cl_basic","","Billboard",1,20,_position,[0,0,0],1,1.275,1.0,0.0,[1],[[1,0,0,1]],[0],0.0,2.0,"","",""];
  //drop ["\a3\data_f\Cl_basic","","Billboard",1,20,_explosionPosition,[0,0,0],1,1.275,1.0,0.0,[1],[[238,255,0,1]],[0],0.0,2.0,"","",""];
};


_pfhValues set [5, time];
