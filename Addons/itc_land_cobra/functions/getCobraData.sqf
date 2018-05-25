params ["_target","_transmission"];
_transmission params ["_destination","_origin","_header","_type","_data"];

private _returnData = [
  _target,
  _target getVariable "firingPositions",
  _target getVariable "engagements",
  _target getVariable "activeShells"
];
[_origin,_target getVariable "datalink_id","cobra","returnData",_returnData] call itc_land_datalink_fnc_transmit;
