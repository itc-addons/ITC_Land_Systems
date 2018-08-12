//Clear then re-fill the fuze combobox
lbClear 1906;

private _vehicle = vehicle ace_player;
private _selectedMagIndex = _vehicle getVariable "fci_selectedMagIndex";
private _selectedMagClass = _vehicle getVariable ["fci_selectedMagClass",lbData [1902,_selectedMagIndex]];
private _selectedMagConfig = _vehicle getVariable ["fci_selectedMagConfig",configFile >> "CfgMagazines" >> _selectedMagClass];

//Look up fuze on magazine and modes
private _fuze = getText (_selectedMagConfig >> "itc_land_fuze");
private _fuzeModeArray = getArray (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "modes"); 
private _fuzeDescArray = getArray (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "modeDesc");

{
	private _desc = _fuzeDescArray # _forEachIndex;
	private _index = lbAdd [1906, format["%1", _desc]];
	lbSetData [1906, _index, _x];
} forEach _fuzeModeArray;