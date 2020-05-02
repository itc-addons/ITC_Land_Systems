params ["_control","_index"];

//Generate globals
//private _vehicle = vehicle ace_player;
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;
private _selectedFuzeIndex = _index;
_vehicle setVariable ["itc_land_selectedFuzeIndex",_selectedFuzeIndex,true];

private _fuzeMode = lbData [86004,_index];
_vehicle setVariable ["itc_land_selectedFuzeMode",_fuzeMode,true];

private _fuzeDesc =  lbText [86004,_index];
_vehicle setVariable ["itc_land_selectedFuzeDesc",_fuzeDesc,true];

private _fuzeTime = _vehicle getVariable ["itc_land_fuzeTime",0];

	ctrlShow [86005, false];
	ctrlShow [86006, false];
	
if(_fuzeMode == "time") then {
	ctrlShow [86005, true];
	ctrlShow [86006, true];
	ctrlSetText [86006,format["%1", _fuzeTime]];
} else {
	ctrlShow [86005, false];
	ctrlShow [86006, false];	
};