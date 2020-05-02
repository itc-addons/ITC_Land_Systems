params ["_cbr", "_impact"];
_impact params ["_position", "_tof"];
private _impacts = missionNameSpace getVariable "itc_land_cobra_activeShells";
private _impactTime = cba_missionTime + _tof;
_impacts pushBack [_position, _impactTime];

missionNameSpace setVariable ["itc_land_cobra_activeShells",_impacts];

private _sirenTypes = [0] call itc_land_cobra_fnc_sirenTypes;

{
  [_x, _position, _impactTime] call itc_land_cobra_fnc_sirenTrigger;
}forEach (nearestObjects [_position, _sirenTypes,500]);
//["0000",_cbr getVariable "datalink_id","cobra","shellDetected",_impact] call itc_land_datalink_fnc_transmit;
