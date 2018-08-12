params ["_control","_index"];

//Generate globals
private _selectedFuzeIndex = _index;
private _fuzeMode = lbData [1906,_index];
private _fuzeDesc =  lbText [1906,_index];

private _vehicle = vehicle ace_player;
_vehicle setVariable ["fci_selectedFuzeIndex",_selectedFuzeIndex];
_vehicle setVariable ["fci_fuzeMode",_fuzeMode];
_vehicle setVariable ["fci_fuzeDesc",_fuzeDesc];

private _fuzeTime = 0;

//if (!(isNil "itc_land_fuzeTime")) then {	_fuzeTime = itc_land_fuzeTime; };


private _fuzeType = lbData [1906, _index];
	ctrlShow [1907, false];
	ctrlShow [1908, false];
	
if(_fuzeType == "time") then {
	ctrlShow [1907, true];
	ctrlShow [1908, true];
	//ctrlSetText [1908,format["%1", _fuzeTime]];
} else {
	ctrlShow [1907, false];
	ctrlShow [1908, false];	
};


