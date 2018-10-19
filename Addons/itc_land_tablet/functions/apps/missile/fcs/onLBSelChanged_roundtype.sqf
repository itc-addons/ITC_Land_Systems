params ["_control","_index"];

//Generate globals
private _selectedMagIndex = _index;
private _selectedMagClass = lbData [2402,_index];
private _selectedMagConfig = configFile >> "CfgMagazines" >> _selectedMagClass;

//player sideChat Format ["%1 %2 %3",_control,_index, lbData [86001,_index]];

private _fuze = getText (_selectedMagConfig >> "itc_land_fuze");
private _fuzeModeArray = getArray (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "modes"); 
private _fuzeDescArray = getArray (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "modeDesc");

if ( !(isNil "itc_land_selectedFuzeIndex") && {itc_land_selectedFuzeIndex <= (lbSize 1904)}) then {
	//Recall last selection in ComboBox
	[1904, _fuzeDescArray, itc_land_selectedFuzeIndex, _fuzeModeArray] call itc_land_tablet_fnc_fillComboBox;
	//[1904, lbCurSel 1904] call itc_land_tablet_fnc_mlrsfci_onlblselchanged_fuzemode;	
} else {
	//select first item in ComboBox
	[1904, _fuzeDescArray, 0, _fuzeModeArray] call itc_land_tablet_fnc_fillComboBox;
	//[1904, lbCurSel 1904] call itc_land_tablet_fnc_mlrsfci_onlblselchanged_fuzemode;		
};

//Guided munition elements 
if ( isArray (_selectedMagConfig >> "itc_land_guidance") ) then {
	private _isSmart = (getArray (_selectedMagConfig >> "itc_land_guidance")) select 0;
	switch _isSmart do {
		case "laser_coded" : {
	
		};
		case "gps_inertial" : {
			//Show Guidance header
			ctrlShow [1907, true];
			
			//Show PGM elements
			ctrlShow [1908, true];
			ctrlShow [1909, true];
			ctrlShow [1910, true];
			ctrlShow [1911, true];		
		};
		default { 
			//Hide Guidance fields
			//Guidance header
			ctrlShow [1907, false];

			//PGM
			ctrlShow [1908, false];
			ctrlShow [1909, false];
			ctrlShow [1910, false];
			ctrlShow [1911, false];	
		};
	};	
} else {
	//Hide Guidance fields
			//Guidance header
			ctrlShow [1907, false];
			ctrlShow [1908, false];
			ctrlShow [1909, false];
			ctrlShow [1910, false];
			ctrlShow [1911, false];	
};