params ["_cbr", "_impact"];
_impact params ["_position", "_tof"];
_impacts = _cbr getVariable "activeShells";
_impactTime = time + _tof;
_impacts pushBack [_position, _impactTime];

_cbr setVariable ["activeShells",_impacts];

if(_cbr distance _position < 500) then {
  ["0000",_cbr getVariable "datalink_id","cobraSiren","trigger",_impactTime] call itc_land_datalink_fnc_transmit;
};
