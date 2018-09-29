/**
 * Non-player receive data over datalink
 * Params
 * - object
 * - transmission
 */
params ["_object","_transmission"];
_transmission params ["_destination","_origin","_header","_type","_data"];

private _datalinkMethods = _object getVariable ["datalink_functions",[]];
{
  _x params ["_target", "_rxheader", "_rxtype", "_code"];
  if(_header == _rxheader && _type == _rxtype) then {
    [_object, _transmission] call _code;
  };
}forEach _datalinkMethods;
