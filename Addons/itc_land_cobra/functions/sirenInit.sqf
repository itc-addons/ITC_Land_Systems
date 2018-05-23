if (!isServer) exitWith {};
params ["_siren"];

_siren setVariable ["datalinkMethods",["itc_land_datalink_fnc_receiveIDRegistry","itc_land_cobra_fnc_sirenTrigger"]];
private _linkID = _siren getVariable ["init_datalink_id",""];
[_siren,_linkID,"object_register"] call itc_land_datalink_fnc_connect;
