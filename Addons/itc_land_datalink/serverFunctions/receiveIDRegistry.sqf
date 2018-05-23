/*
 * Process datalink registration data
 */
 params ["_target","_transmission"];
 _transmission params ["_destination","_origin","_header","_type","_data"];
if(_header == "object_register") then {
  if(_type == "response") then {
    _data params ["_success","_info"];
    if(_success) then {
      _target setVariable ["datalink_id",_destination];
    };
  };
};
