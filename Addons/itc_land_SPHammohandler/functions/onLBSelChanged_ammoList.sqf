params ["_control","_index"];

//Generate globals
itc_land_selectedMagIndex = _index;
itc_land_selectedMagClass = lbData [86001,_index];
itc_land_selectedMagConfig = configFile >> "CfgMagazines" >> itc_land_selectedMagClass;

//player sideChat Format ["%1 %2 %3",_control,_index, lbData [86001,_index]];

//Get Displayname and set header text
private _displayName = getText(itc_land_selectedMagConfig >> "displayName");
ctrlSetText [86002, format["PREPARE: %1", _displayName]];

//Set current Charge label
private _maxChargeIndex =  getNumber(itc_land_selectedMagConfig >> "itc_land_maxChargeIndex");				
if (isNil "itc_land_currentChargeIndex") then { itc_land_currentChargeIndex = 1; };
ctrlSetText [86003, format["CHARGE: %1 / %2", itc_land_currentChargeIndex, _maxChargeIndex]];

[] call itc_land_SPHammoHandler_fnc_fillFuzeList;
if ( !(isNil "itc_land_selectedFuzeIndex") && {itc_land_selectedFuzeIndex <= (lbSize 86004)}) then {
	//Recall last selection in ComboBox
	lbSetCurSel [86004, itc_land_selectedFuzeIndex];
} else {
	//select first item in ComboBox
	lbSetCurSel [86004, 0];
};

//Guided munition elements 
if ( isArray (itc_land_selectedMagConfig >> "itc_land_guidance") ) then {
	private _isSmart = (getArray (itc_land_selectedMagConfig >> "itc_land_guidance")) select 0;
	switch _isSmart do {
		case "laser_coded" : {
			//Show LGM elements
			ctrlShow [86007, true];
			ctrlShow [86008, true];		
			//hide PGM elements
			ctrlShow [86012, false];
			ctrlShow [86013, false];
			ctrlShow [86014, false];
			ctrlShow [86015, false];		
		};
		case "gps_inertial" : {
			//Hide LGM elements
			ctrlShow [86007, false];
			ctrlShow [86008, false];		
			//Show PGM elements
			ctrlShow [86012, true];
			ctrlShow [86013, true];
			ctrlShow [86014, true];
			ctrlShow [86015, true];		
		};
		default { 
			//Hide Guidance fields
			//LGM
			ctrlShow [86007, false];
			ctrlShow [86008, false];

			//PGM
			ctrlShow [86012, false];
			ctrlShow [86013, false];
			ctrlShow [86014, false];
			ctrlShow [86015, false];		
		};
	};	
} else {
	//Hide Guidance fields
	ctrlShow [86007, false];
	ctrlShow [86008, false];
		
	ctrlShow [86012, false];
	ctrlShow [86013, false];
	ctrlShow [86014, false];
	ctrlShow [86015, false];
};