params ["_control","_index"];

//Generate globals
itc_land_selectedFuzeIndex = _index;
itc_land_fuzeMode = lbData [1904,_index];
itc_land_fuzeDesc =  lbText [1904,_index];

private _fuzeTime = 0;

if (!(isNil "itc_land_mlrsfci_fuzeTime")) then {	_fuzeTime = itc_land_mlrsfci_fuzeTime; };


private _fuzeType = lbData [1904, _index];
	ctrlShow [1905, false];
	ctrlShow [1906, false];
	
if(_fuzeType == "time") then {
	ctrlShow [1905, true];
	ctrlShow [1906, true];
	ctrlSetText [1906,format["%1", _fuzeTime]];
} else {
	ctrlShow [1905, false];
	ctrlShow [1906, false];	
};