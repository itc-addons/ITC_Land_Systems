//private _vehicle = vehicle ace_player;
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;
private _selectedMagConfig = (_vehicle getVariable "itc_land_currentMagInfo") # 2;

//Clear then re-fill the fuze combobox
lbClear 86004;

//Look up fuze on magazine and modes
private _fuze = getText (_selectedMagConfig >> "itc_land_fuze");
private _fuzeModeArray = getArray (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "modes"); 
private _fuzeDescArray = getArray (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "modeDesc");

{
	private _desc = _fuzeDescArray # _forEachIndex;
	//player sideChat _desc;
	private _index = lbAdd [86004, format["%1", _desc]];
	lbSetData [86004, _index, _x];
} forEach _fuzeModeArray;