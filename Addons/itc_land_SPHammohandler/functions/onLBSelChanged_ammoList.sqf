params ["_control","_index"];

//private _vehicle = vehicle ace_player;
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;

//Generate globals
private _selectedMagIndex = _index;
private _selectedMagClass = lbData [86001,_index];
private _selectedMagConfig = configFile >> "CfgMagazines" >> _selectedMagClass;

_vehicle setVariable ["itc_land_currentMagInfo",[_selectedMagIndex,_selectedMagClass,_selectedMagConfig],true];

//Get Displayname and set header text
private _displayName = getText(_selectedMagConfig >> "displayName");
ctrlSetText [86002, format["PREPARE: %1", _displayName]];

//Set current Charge label
private _maxChargeIndex =  getNumber(_selectedMagConfig >> "itc_land_maxChargeIndex");
private _curChargeIndex = _vehicle getVariable ["itc_land_currentChargeIndex",1];
ctrlSetText [86003, format["CHARGE: %1 / %2", _curChargeIndex, _maxChargeIndex]];

[] call itc_land_SPHammoHandler_fnc_fillFuzeList;
private _selectedFuzeIndex = _vehicle getVariable ["itc_land_selectedFuzeIndex",0];
if ( _selectedFuzeIndex <= (lbSize 86004)) then {
	//Recall last selection in ComboBox
	lbSetCurSel [86004, _selectedFuzeIndex];
} else {
	//select first item in ComboBox
	lbSetCurSel [86004, 0];
};

//Guided munition elements 
if ( isArray (_selectedMagConfig >> "itc_land_guidance") ) then {
	private _isSmart = (getArray (_selectedMagConfig >> "itc_land_guidance")) select 0;
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