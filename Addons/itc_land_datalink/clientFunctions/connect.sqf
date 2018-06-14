/**
 * Connect to the datalink server
 * Params
 * - (string)Connecting system
 * - (string)ID, default none, will auto-assign
 * - Object, default player
 * - bool autostore - automatically receive and store id on target
 */
params[["_object",player],["_id",""],"_system",["_autoStore", false]];

if(_autoStore) then {
  [_object, "object_register", "response", {
    _this call itc_land_datalink_fnc_receiveIDRegistry;
  }] call itc_land_datalink_fnc_registerEvent;
};

["clientConnect",[_object, _id, _system]] call CBA_fnc_serverEvent;
