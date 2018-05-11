private _vehicle = vehicle ace_player;
private _curMag = (currentMagazine _vehicle);

//is the gun loaded?
if (_curMag isKindOf ["itc_land_how_mag", configFile >> "CfgMagazines"]) then {
	//Remove loaded magazine.
	[_vehicle,_curMag] spawn {
		private _vehicle = _this select 0;
		private _curMag = _this select 1;

		disableSerialization;
		//disableUserInput true;
		ctrlEnable [86010, false]; //disable load button
		ctrlEnable [86009, false]; //disable apply settings button

		itc_land_SPHammoHandler_status = "SAFING WEAPON";
		sleep 3+random(2);
		itc_land_SPHammoHandler_status = "REMOVING CHARGE";
		sleep 2+random(1);
		itc_land_SPHammoHandler_status = "REMOVING ROUND";

		_vehicle removeMagazine _curMag; //remove loaded magazine

		sleep 5+random(3);

		_vehicle addMagazine itc_land_loadedMagClass;

		itc_land_SPHammoHandler_status = "STOWING ROUND";

		sleep 2+random(2);

		itc_land_SPHammoHandler_status = "WAITING";
		if (itc_land_SPHammoHandler_open) then {
			[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
			if ( !(isNil "itc_land_selectedMagIndex") && {itc_land_selectedMagIndex <= (lbSize 86001)}) then {
				lbSetCurSel [86001, itc_land_selectedMagIndex];
			} else {
				lbSetCurSel [86001, 0];
			};
			[86001,itc_land_selectedMagIndex] call itc_land_SPHammoHandler_fnc_onSelectAmmo;


			ctrlSetText [86010, "LOAD"]; //reset load button text
			ctrlEnable [86010, true]; //re-enable load button
			ctrlEnable [86009, true]; //re-enable apply settings button
		};
		//disableUserInput false;
	};

} else {
	[_vehicle] spawn {
		disableSerialization;
		//disableUserInput true;
		private _vehicle = _this select 0;

		ctrlEnable [86010, false]; //disable loading/unloading
		ctrlEnable [86009, false]; //disable apply settings button
		
		itc_land_SPHammoHandler_status = "PULLING SHELL";
		
		//Get class of magazine to load
		private _magFormat = getText (itc_land_selectedMagConfig >> "itc_land_charge_format");
		private _magClass = Format [ _magFormat , itc_land_currentChargeIndex ];
		itc_land_loadedMagClass = itc_land_selectedMagClass;
		
		_vehicle removeMagazine itc_land_loadedMagClass;

		sleep 2+random(1);
		if (itc_land_SPHammoHandler_open) then {
			[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
			if ( !(isNil "itc_land_selectedMagIndex") && {itc_land_selectedMagIndex <= (lbSize 86001)}) then {
				lbSetCurSel [86001, itc_land_selectedMagIndex];
			} else {
				lbSetCurSel [86001, 0];
			};

			[86001,itc_land_selectedMagIndex] call itc_land_SPHammoHandler_fnc_onSelectAmmo;
		};

		itc_land_SPHammoHandler_status = "RAMMING SHELL";

		sleep 3+random(1);
		itc_land_SPHammoHandler_status = "INSERTING CHARGE";

		sleep 3+random(1);
		itc_land_SPHammoHandler_status = "CLOSING BREECH";

		
		_weapon = (weapons _vehicle) select 0;

		_vehicle removeWeapon _weapon;
		_vehicle addMagazine _magClass;
		_vehicle addWeapon _weapon;
		_vehicle selectWeapon _weapon;
		//reload _vehicle;

		sleep 2+random(1);
		itc_land_SPHammoHandler_status = "INSERTING PRIMER";
		sleep 1+random(2);
		itc_land_SPHammoHandler_status = "ATTACHING LANYARD";
		sleep 1+random(1);
		itc_land_SPHammoHandler_status = "READY TO FIRE";

		//disableUserInput false;

		if (itc_land_SPHammoHandler_open) then {
			[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
			if ( !(isNil "itc_land_selectedMagIndex") && {itc_land_selectedMagIndex <= (lbSize 86001)}) then {
				lbSetCurSel [86001, itc_land_selectedMagIndex];
			} else {
				lbSetCurSel [86001, 0];
			};

			[86001,itc_land_selectedMagIndex] call itc_land_SPHammoHandler_fnc_onSelectAmmo;
			ctrlSetText [86010, "UNLOAD"];
			ctrlEnable [86010, true];
			ctrlEnable [86009, true]; //re-enable apply settings button			

			private _ctrl = ((findDisplay 32562) displayCtrl 86010);
			ctrlSetFocus _ctrl;
		};			
	};
};
