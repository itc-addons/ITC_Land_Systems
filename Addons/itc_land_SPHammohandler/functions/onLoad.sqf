waitUntil {
	!(isNull (findDisplay 86000))
};
itc_land_SPHammoHandler_open = true;

[] call itc_land_SPHammoHandler_fnc_fillAmmoList;

// is gun loaded
if (currentMagazine vehicle ace_player isKindOf ["itc_land_how_mag", configFile >> "CfgMagazines"]) then {
	ctrlSetText [86009, "UNLOAD"];
	
	itc_land_SPHammoHandler_status = "READY TO FIRE";
	//ctrlSetText [86011, itc_land_SPHammoHandler_status];
} else {
	ctrlEnable [86010, false];
	itc_land_SPHammoHandler_status	= "WAITING";
	//ctrlSetText [86011, itc_land_SPHammoHandler_status];
};
	//Hide Guidance fields
	//LGM
	ctrlShow [86007, false];
	ctrlShow [86008, false];
	ctrlSetText [86008, "1111"];
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
		
waitUntil {
	ctrlSetText [86011, itc_land_SPHammoHandler_status];
	if(!alive ace_player) then {
		closeDialog 86000;
		itc_land_SPHammoHandler_open = false;
	};
	sleep 0.1;
	!itc_land_SPHammoHandler_open;
};		
