params ["_target","_transmission"];
_transmission params ["_destination","_origin","_header","_type","_data"];

if( _header == "cobra") then {
  if(_type == "getData") then {
    private _returnData = [
      _target getVariable "origins",
      _target getVariable "engagements",
      _target getVariable "activeShells"
    ];
    [_origin,_cbr getVariable "datalink_id","cobra","returnCobraData",_returnData] call itc_land_datalink_fnc_transmit;
  };
};
