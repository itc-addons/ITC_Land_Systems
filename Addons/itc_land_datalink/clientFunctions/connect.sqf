/**
 * Connect to the datalink server
 * Params
 * - (string)Connecting system
 * - (string)ID, default none, will auto-assign
 * - Object, default player
 */
params["_system",["_id",""],["_object",player]];

["clientConnect",[_object, _id, _system]] call CBA_fnc_serverEvent;
