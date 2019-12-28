//[this,"vtolAlarm",100,2] call itc_land_cobra_fnc_sirenInit

if (!isServer) exitWith {};
params ["_siren","_sirenSound","_sirenDistance","_sirenDuration"];

//_siren setVariable ["datalinkMethods",["itc_land_datalink_fnc_receiveIDRegistry","itc_land_cobra_fnc_sirenTrigger"]];

//[_siren, "cobra", "shellDetected", {
//  (_this # 0) say3D ["alarmCar",150,0.8];
//}] call itc_land_datalink_fnc_registerEvent;
//private _linkID = _siren getVariable ["init_datalink_id",""];
//[_siren,_linkID,"object_register", true] call itc_land_datalink_fnc_connect;

private _sirenType = typeOf _siren;
if (isNIl "ITC_Land_COBRA_SirenTypes") then {
  missionNameSpace setVariable ["ITC_Land_COBRA_SirenTypes",[_sirenType],true];
} else {
  ITC_Land_COBRA_SirenTypes append [_sirenType];
};

if ((count _this) < 4) then {
  _siren setVariable ["sirenParams",[true,"alarm",250,1.75],true];
} else {
  _siren setVariable ["sirenParams",[true,_sirenSound,_sirenDistance,_sirenDuration],true];
};

_this;
