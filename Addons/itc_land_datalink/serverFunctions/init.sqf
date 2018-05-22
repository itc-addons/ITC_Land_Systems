/**
 * Initialisation of the datalink server
 * Can only be run on the server
 */
if(!isServer) exitWith {}; //end code if not server

//create the address list hash, this will consist of IDGR: machine(server or client)
itc_land_datalink_nodes = [] call CBA_fnc_hashCreate;
