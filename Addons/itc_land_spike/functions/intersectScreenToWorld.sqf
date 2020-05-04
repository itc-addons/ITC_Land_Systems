params ["_originPosition", "_direction"];
if (isNil "_direction") then {
  _direction = _originPosition vectorFromTo (AGLtoASL (screenToWorld [0.5,0.5]));
};
private _vect = _direction;
private _polar = _vect call cba_fnc_vect2polar;
[_originPosition, _polar # 1, _polar # 2] call itc_land_spike_fnc_intersectAtPolar;
