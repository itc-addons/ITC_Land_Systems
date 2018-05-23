if (!isServer) exitWith {};
params ["_siren"];

//_siren setVariable ["datalinkMethods",["itc_land_datalink_fnc_receiveIDRegistry","itc_land_cobra_fnc_sirenTrigger"]];

[_siren, "cobra", "shellDetected", {
  (_this # 0) say3D ["alarmCar",150,0.8];
}] call itc_land_datalink_fnc_registerEvent;
private _linkID = _siren getVariable ["init_datalink_id",""];
[_siren,_linkID,"object_register", true] call itc_land_datalink_fnc_connect;
