params ["_control","_index"];

//Generate globals
itc_land_selectedFuzeIndex = _index;
itc_land_fuzeMode = lbData [86004,_index];
itc_land_fuzeDesc =  lbText [86004,_index];

private _fuzeTime = 0;

if (!(isNil "itc_land_fuzeTime")) then {	_fuzeTime = itc_land_fuzeTime; };


private _fuzeType = lbData [86004, _index];
	ctrlShow [86005, false];
	ctrlShow [86006, false];
	
if(_fuzeType == "time") then {
	ctrlShow [86005, true];
	ctrlShow [86006, true];
	ctrlSetText [86006,format["%1", _fuzeTime]];
} else {
	ctrlShow [86005, false];
	ctrlShow [86006, false];	
};