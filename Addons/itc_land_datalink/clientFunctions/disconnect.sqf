/**
 * Disconnect from the datalink server
 * Params
 * - (string)ID, default none, will remove all IDs of object
 * - object, which object the ID belongs to(if removing all)
 */
params[["_object",player],["_id",""]];

["clientDisconnect",[_object, _id]] call CBA_fnc_serverEvent;
