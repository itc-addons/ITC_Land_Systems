waitUntil {
	!(isNull (findDisplay 86000))
};
itc_land_SPHammoHandler_open = true;

[] call itc_land_SPHammoHandler_fnc_fillAmmoList;

// Check gun status
if (isNil "itc_land_SPHammoHandler_mode") then {itc_land_SPHammoHandler_mode = "WAITING"};
if (isNil "itc_land_SPHammoHandler_status") then {itc_land_SPHammoHandler_status = "WAITING"};
switch (itc_land_SPHammoHandler_mode) do {
	case "LOADING" : {
		ctrlSetText [86010, "LOAD"];
		ctrlEnable [86010, false]; //disable loading/unloading
		ctrlEnable [86009, false]; //disable apply settings button	
	};
	case "UNLOADING" : {
		ctrlSetText [86010, "UNLOAD"];
		ctrlEnable [86010, false]; //disable loading/unloading
		ctrlEnable [86009, false]; //disable apply settings button	
	};
	case "WAITING" : {
		if (itc_land_SPHammoHandler_status == "WAITING") then {
			ctrlSetText [86010, "LOAD"];
			if (isNil "itc_land_sphloadersettings") then { 
				ctrlEnable [86010, false]; ctrlEnable [86009, true];  //disable loading until AL settings applied
			} else {
				ctrlEnable [86010, true]; ctrlEnable [86009, true];  //loading has not started but settings have been applied, enable both buttons	
			};
		} else {				
			if (itc_land_SPHammoHandler_status == "READY TO FIRE") then {
				ctrlSetText [86010, "UNLOAD"];
				ctrlEnable [86010, true]; ctrlEnable [86009, false];
			};
		};
	};
};

	//Hide Guidance fields
	//LGM
	ctrlShow [86007, false];
	ctrlShow [86008, false];
	if ( !(isNil "itc_land_guidance_laserCode")) then {ctrlSetText [86008, itc_land_guidance_laserCode]; } else {ctrlSetText [86008, "1111"];};	
	
	//PGM
	ctrlShow [86012, false];
	ctrlShow [86013, false];
	if ( !(isNil "itc_land_guidance_targetGrid")) then {ctrlSetText [86013, itc_land_guidance_targetGrid]; } else {ctrlSetText [86013, "00000000"];};
	ctrlShow [86014, false];
	ctrlShow [86015, false];
	if ( !(isNil "itc_land_guidance_targetAlt")) then {ctrlSetText [86015, str itc_land_guidance_targetAlt]; } else {ctrlSetText [86015, "0"];};
		
if ( !(isNil "itc_land_selectedMagIndex") && {itc_land_selectedMagIndex <= (lbSize 86001)}) then {
	lbSetCurSel [86001, itc_land_selectedMagIndex];
} else {
	lbSetCurSel [86001, 0];
};
if ( (!(isNil "itc_land_selectedFuzeIndex")) && {itc_land_selectedFuzeIndex <= (lbSize 86004)}) then {
	//Recall last selection in ComboBox
	lbSetCurSel [86004, itc_land_selectedFuzeIndex];
} else {
	//select first item in ComboBox
	lbSetCurSel [86004, 0];
};
if ( (!(isNil "itc_land_roundCount"))) then { ctrlSetText [86022,str itc_land_roundCount]; } else { ctrlSetText [86022,"0"]; };
//Autoloader Labels
if (!(isNil "itc_land_sphloadersettings") && {count itc_land_sphloadersettings > 0}) then {
	ctrlSetText[86019, ((itc_land_sphloadersettings # 0) # 0)];
	if (((itc_land_sphloadersettings # 0) # 3) >= 1 ) then {
		ctrlSetText[86020, str ((itc_land_sphloadersettings # 0) # 3)];	
	} else {
		ctrlSetText [86020, "-- N/A --"];	
	};
	ctrlSetText[86018, ((itc_land_sphloadersettings # 1) # 0)];	
	ctrlSetText[86017, ((itc_land_sphloadersettings # 2) # 0)];	
} else {
	ctrlSetText [86019, "-- N/A --"];
	ctrlSetText [86020, "-- N/A --"];	
	ctrlSetText [86018, "-- N/A --"];
	ctrlSetText [86017, "-- N/A --"];
};


		
waitUntil {
	ctrlSetText [86011, itc_land_SPHammoHandler_status];
	if(!alive ace_player) then {
		closeDialog 86000;
		itc_land_SPHammoHandler_open = false;
	};
	sleep 0.1;
	!itc_land_SPHammoHandler_open;
};		
