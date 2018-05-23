/**
 * Connect to the datalink server
 * Params
 * - (string)Connecting system
 * - (string)ID, default none, will auto-assign
 * - Object, default player
 */
params[["_object",player],["_id",""],"_system"];

["clientConnect",[_object, _id, _system]] call CBA_fnc_serverEvent;
