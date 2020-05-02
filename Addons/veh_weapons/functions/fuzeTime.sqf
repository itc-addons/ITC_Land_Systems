params ["_pfhValues","_pfhId"];
_pfhValues params ["_projectile", "_magazine", "_position", "_fuzeType","_fuzeTime", "_firedTime",""];

if (alive _projectile) then {
  _position = getPosATL _projectile;
  _pfhValues set [2, _position];
};

_triggered = time > _firedTime + _fuzeTime;

if(_triggered || !alive _projectile) exitWith {
  
  _vProj = velocity _projectile;
  _dProj = getDir _projectile;
  _pbProj = _projectile call BIS_fnc_getPitchBank;
  [_pfhId] call CBA_fnc_removePerFrameHandler;
  deleteVehicle _projectile;
  
  _subMunitionClass = getText (configFile >> "CfgMagazines" >> _magazine >> "itc_land_submunition");
  _subMunition = createVehicle [_subMunitionClass, _position, [], 0, "FLY"];
  _subMunition setDir _dProj;
  ([_subMunition] + _pbProj) call BIS_fnc_setPitchBank;  
  _subMunition setVelocity _vProj;
  
};
