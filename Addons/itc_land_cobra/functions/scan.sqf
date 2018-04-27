params ["_cbr"];
_shells = _cbr getVariable "shells";
_toRemove = [];
{
  _angleTo = abs (((direction _cbr) + 360) - ((_cbr getDir _x) + 360));
  _inRange = _x distance _cbr < 5000;
  if(_angleTo < 23 && _inRange && !(terrainIntersectASL [getPosASL _x, getPosASL _cbr])) then {
    _toRemove pushBack _x;
    _impact = [_x] call itc_land_cobra_fnc_calculateImpact;
    //[_cbr, _impact] call itc_land_cobra_fnc_processImpact;
    _origin = [_x] call itc_land_cobra_fnc_calculateOrigin;
    //[_cbr, _origin] call itc_land_cobra_fnc_processOrigin;
    //[_cbr, _origin] call itc_land_cobra_fnc_processEngagement;
  };
  if(!alive _x) then {
    _toRemove pushBack _x;
  }
} forEach _shells;
_shells = _shells - _toRemove;

_activeShells = _cbr getVariable "activeShells";
_toRemoveShells = [];
{
  if(time > _x # 1) then {_toRemoveShells pushBack _x;};
} forEach _activeShells;
_cbr setVariable ["activeShells",_activeShells - _toRemoveShells];
