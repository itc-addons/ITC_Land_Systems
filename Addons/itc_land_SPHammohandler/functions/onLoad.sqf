waitUntil {
	!(isNull (findDisplay 86000))
};
itc_land_SPHammoHandler_open = true;

private _vehicle = vehicle ace_player;
private _status = _vehicle getVariable ["itc_land_ammoHandler_status",[0,0,"WAITING"]];
_vehicle setVariable ["itc_land_ammoHandler_status",_status,true];		
[] call itc_land_SPHammoHandler_fnc_updateStatus;

[] call itc_land_SPHammoHandler_fnc_fillAmmoList;

private _currentMagInfo = _vehicle getVariable ["itc_land_currentMagInfo",[0,""]];
private _selectedMagIndex = (_currentMagInfo # 0); 	
private _selectedFuzeIndex = _vehicle getVariable ["itc_land_selectedFuzeIndex",0];
	
if ( _selectedMagIndex <= (lbSize 86001)) then {
	lbSetCurSel [86001, _selectedMagIndex];
} else {
	lbSetCurSel [86001, 0];
};
if ( _selectedFuzeIndex <= (lbSize 86004)) then {
	//Recall last selection in ComboBox
	lbSetCurSel [86004, _selectedFuzeIndex];
} else {
	//select first item in ComboBox
	lbSetCurSel [86004, 0];
};
private _roundCount = _vehicle getVariable ["itc_land_roundCount",0];
ctrlSetText [86022,str _roundCount];

//Hide Guidance fields
//LGM
ctrlShow [86007, false];
ctrlShow [86008, false];
private _laserCode = _vehicle getVariable ["itc_land_guidance_laserCode","1111"];
ctrlSetText [86008, str _laserCode];

//PGM
ctrlShow [86012, false];
ctrlShow [86013, false];
private _targetGrid = _vehicle getVariable ["itc_land_guidance_targetGrid","00000000"];
ctrlSetText [86013, _targetGrid];
ctrlShow [86014, false];
ctrlShow [86015, false];
private _targetAlt = _vehicle getVariable ["itc_land_guidance_targetAlt",0];
ctrlSetText [86015, str _targetAlt];

//Autoloader Labels
private _sphloadersettings = _vehicle getVariable ["itc_land_sphloadersettings", []];
if (count _sphloadersettings > 0) then {
	ctrlSetText[86019, ((_sphloadersettings # 0) # 0)];
	if (((_sphloadersettings # 0) # 3) >= 1 ) then {
		ctrlSetText[86020, str ((_sphloadersettings # 0) # 3)];	
	} else {
		ctrlSetText [86020, "-- N/A --"];	
	};
	ctrlSetText[86018, ((_sphloadersettings # 1) # 0)];	
	ctrlSetText[86017, ((_sphloadersettings # 2) # 0)];	
} else {
	ctrlSetText [86019, "-- N/A --"];
	ctrlSetText [86020, "-- N/A --"];	
	ctrlSetText [86018, "-- N/A --"];
	ctrlSetText [86017, "-- N/A --"];
};

