params ["_pfhValues","_pfhId"];
_pfhValues params ["_projectile", "_magazine", "_position", "_fuzeType","_fuzeValue", "",""];

if (alive _projectile) then {
  _position = getPosATL _projectile;
  _pfhValues set [2, _position];
};

_alt = (getPosATL _projectile) select 2;
if((_alt < _fuzeValue && (velocity _projectile) # 2 < 0) || !alive _projectile) exitWith {
  _subMunition = getText (configFile >> "CfgMagazines" >> _magazine >> "ITC_subMunition");
  deleteVehicle _projectile; _subMunition createVehicle _position;
  [_pfhId] call CBA_fnc_removePerFrameHandler;
};
