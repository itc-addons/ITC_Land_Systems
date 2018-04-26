params ["_pfhValues","_pfhId"];
_pfhValues params ["_projectile", "_magazine", "_position", "_fuzeType","_fuzeTime", "_firedTime",""];

if (alive _projectile) then {
  _position = getPosATL _projectile;
  _pfhValues set [2, _position];
};

_triggered = time > _firedTime + _fuzeTime;

if(_triggered || !alive _projectile) exitWith {
  deleteVehicle _projectile;
  [_pfhId] call CBA_fnc_removePerFrameHandler;
  _subMunition = getText (configFile >> "CfgMagazines" >> _magazine >> "ITC_subMunition");
  _subMunition createVehicle _position;
};