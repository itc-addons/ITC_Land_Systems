params ["_cbr", "_impact"];
_impact params ["_position", "_tof"];
_impacts = _cbr getVariable "activeShells";
_impactTime = time + _tof;
_impacts pushBack [_position, _impactTime];

_cbr setVariable ["activeShells",_impacts];
