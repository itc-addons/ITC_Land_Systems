/**
 * Initialisation of the datalink server
 * Can only be run on the server
 */
if(!isServer) exitWith {}; //end code if not server

//create the address list hash, this will consist of IDGR: machine(server or client)
itc_land_datalink_nodes = [] call CBA_fnc_hashCreate;

//add the eventhandlers for connecting and disconnecting clients
itc_land_datalink_eh_clientConnect = ["clientConnect", itc_land_datalink_fnc_onClientConnect] call CBA_fnc_addEventHandler;
itc_land_datalink_eh_clientDisconnect = ["clientDisconnect", itc_land_datalink_fnc_onClientDisconnect] call CBA_fnc_addEventHandler;
