/**
 * Transmit data over datalink
 * Params
 * - Destination id
 * - origin ID
 * - header
 * - type
 * - data
 */
params["_destination","_origin","_header","_type","_data"];
private _validDestination = [_destination, false, true] call itc_land_datalink_fnc_validateID;
private _validOrigin = [_origin] call itc_land_datalink_fnc_validateID;

if(_validDestination && _validOrigin) then {
  ["clientTX", [_destination,_origin,_header,_type,_data]] call CBA_fnc_serverEvent;
};
