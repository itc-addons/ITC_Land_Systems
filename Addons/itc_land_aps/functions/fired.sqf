params ["_unit", "_weapon", "", "", "_ammo", "", "_projectile", "_gunner"];

private _simulation = getText (configFile >> "cfgAmmo" >> _ammo >> "simulation");

if (!(_simulation in ["shotRocket", "shotMissile"])) exitWith {};

[{
  (_this select 0) params ["_projectile"];
  //_aps params ["_name", "_position", "_direction", "_traverse", "_elevate", "_range", "_ammoCount", "_reloadTime"]
  if (!alive _projectile) exitWith {
    setAccTime 1;
    [_this select 1] call CBA_fnc_removePerFrameHandler;
  };

  _begin = getPosASL _projectile;
  _end = _begin vectorAdd ((vectordir _projectile) vectorMultiply 30);
  _intersects = lineIntersectsWith  [_begin, _end, objNull, objNull];
  if (count _intersects > 0) exitWith {
    { // forEach _intersects
      private _aps = _x getVariable ["itc_land_aps_modules", nil];
      if (!(isNil "_aps")) then {
        [_projectile, _x] call itc_land_aps_fnc_attemptIntercept;
      };
    } forEach _intersects;
  };
}, 0.05, [_projectile]] call CBA_fnc_addPerFrameHandler;
