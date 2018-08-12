params ["_control","_index"];
private _vehicle = vehicle ace_player;

private _selectedMagIndex = _index;
private _selectedMagClass = lbData [1902,_index];
private _selectedMagConfig = configFile >> "CfgMagazines" >> _selectedMagClass;
_vehicle setVariable ["fci_selectedMagIndex",_selectedMagIndex];
_vehicle setVariable ["fci_selectedMagClass",_selectedMagClass];
_vehicle setVariable ["fci_selectedMagConfig",_selectedMagConfig];

//player sideChat Format ["%1 %2 %3",_control,_index, lbData [86001,_index]];

//Get Display name
private _displayName = getText(_selectedMagConfig >> "displayName");

//Set current Charge label
private _maxChargeIndex =  getNumber(_selectedMagConfig >> "itc_land_maxChargeIndex");				
private _currentChargeIndex = _vehicle getVariable ["fci_currentChargeIndex",1];
ctrlSetText [1904, format["%1 / %2", _currentChargeIndex, _maxChargeIndex]];

[] call itc_land_tablet_fnc_fci_fillFuzeList;
private _selectedFuzeIndex = _vehicle getVariable ["fci_selectedFuzeIndex",0];
lbSetCurSel [1906, _selectedFuzeIndex];

//Guided munition elements 
if ( isArray (_selectedMagConfig >> "itc_land_guidance") ) then {
	private _isSmart = (getArray (_selectedMagConfig >> "itc_land_guidance")) select 0;
	switch _isSmart do {
		case "laser_coded" : {
			//Show LGM elements
			ctrlShow [1909, true];
			ctrlShow [1910, true];		
			//hide PGM elements
			ctrlShow [1911, false];
			ctrlShow [1912, false];
			ctrlShow [1913, false];
			ctrlShow [1914, false];		
		};
		case "gps_inertial" : {
			//Hide LGM elements
			ctrlShow [1909, false];
			ctrlShow [1910, false];		
			//Show PGM elements
			ctrlShow [1911, true];
			ctrlShow [1912, true];
			ctrlShow [1913, true];
			ctrlShow [1914, true];		
		};
		default { 
			//Hide Guidance fields
			//LGM
			ctrlShow [1909, false];
			ctrlShow [1910, false];

			//PGM
			ctrlShow [1911, false];
			ctrlShow [1912, false];
			ctrlShow [1913, false];
			ctrlShow [1914, false];		
		};
	};	
} else {
	//Hide Guidance fields
		ctrlShow [1909, false];
		ctrlShow [1910, false];
		ctrlShow [1911, false];
		ctrlShow [1912, false];
		ctrlShow [1913, false];
		ctrlShow [1914, false];	
};


