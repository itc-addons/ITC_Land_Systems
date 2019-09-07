params ["_control","_index"];
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;
private _curMag = (currentMagazine _vehicle);
//Generate globals

_vehicle setVariable ["itc_land_selectedFuzeIndex",_index,true];
_vehicle setVariable ["itc_land_selectedFuzeMode",lbData [1904,_index],true];
_vehicle setVariable ["itc_land_selectedFuzeDesc",lbText [1904,_index],true];

private _fuzeTime = _vehicle getVariable ["itc_land_mlrsfci_fuzeTime",0];

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
