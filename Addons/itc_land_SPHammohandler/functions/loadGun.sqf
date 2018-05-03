private _vehicle = vehicle ace_player;
private _curMag = (currentMagazine _vehicle);

//is the gun loaded?
if (_curMag isKindOf ["itc_land_how_mag", configFile >> "CfgMagazines"]) then {
	//Remove loaded magazine.
	[_vehicle,_curMag] spawn {
		private _vehicle = _this select 0;
		private _curMag = _this select 1;

		disableSerialization;
		disableUserInput true;
		ctrlEnable [86009, false]; //disable load button
		ctrlEnable [86010, false]; //disable fire button

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

		[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
		if ( !(isNil "itc_land_selectedMagIndex") && {itc_land_selectedMagIndex <= (lbSize 86001)}) then {
			lbSetCurSel [86001, itc_land_selectedMagIndex];
		} else {
			lbSetCurSel [86001, 0];
		};
		[86001,itc_land_selectedMagIndex] call itc_land_SPHammoHandler_fnc_onSelectAmmo;


		ctrlSetText [86009, "LOAD"]; //reset load button text
		ctrlEnable [86009, true]; //enable loading button
		ctrlEnable [86010, false]; //make sure fire button is disabled

		disableUserInput false;
	};

} else {
	[_vehicle] spawn {
		disableSerialization;
		disableUserInput true;
		private _vehicle = _this select 0;
		//Get class of magazine to load

		private _magFormat = getText (itc_land_selectedMagConfig >> "itc_land_charge_format");
		private _magClass = Format [ _magFormat , itc_land_currentChargeIndex ];
		itc_land_loadedMagClass = itc_land_selectedMagClass;

		//Get fuze settings based on type
		switch (itc_land_fuzeMode) do {
			case "pd" : {
				itc_land_fuzeValues = 0;
			};
			case "prox" : {
				itc_land_fuzeValues = 15;
			};
			case "time" : {
				itc_land_fuzeValues = parseNumber(ctrlText 86006);
			};
			case "delay" : {
				itc_land_fuzeValues = 0.005;
			};
		};

		//Get guidance inputs\\
		private _guidance = getArray (itc_land_selectedMagConfig >> "itc_land_guidance");

		if (count _guidance > 0) then {
			switch (_guidance # 0) do {
				case "gps_inertial" : {
					itc_land_guidance_targetGrid = ctrlText 86013;
					//player sidechat itc_land_guidance_targetGrid;
					private _targetPos = [itc_land_guidance_targetGrid,true] call CBA_fnc_mapGridToPos;
					//player sidechat str _targetPos;
					itc_land_guidance_targetAlt = parseNumber(ctrlText 86015);
					_targetPos set [2,itc_land_guidance_targetAlt];
					//player sidechat str _targetPos;	
					itc_land_guidance_targetPos = _targetPos;
				};
				case "laser_coded" : {
					private _laserCode = parseNumber(ctrlText 86008);
					if ( [_laserCode] call itc_land_common_fnc_isLaserCode ) then {
						itc_land_guidance_laserCode = _laserCode;
						//player sidechat str itc_land_guidance_laserCode;
					} else {
						ctrlSetText [86008,"1111"];
						itc_land_guidance_laserCode = 1111;
						//player sidechat str itc_land_guidance_laserCode;
					};
				};
			};
		};



		ctrlEnable [12153, false]; //disable loading/unloading

		itc_land_SPHammoHandler_status = "PULLING SHELL";
		_vehicle removeMagazine itc_land_loadedMagClass;

		sleep 2+random(1);

		[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
		if ( !(isNil "itc_land_selectedMagIndex") && {itc_land_selectedMagIndex <= (lbSize 86001)}) then {
			lbSetCurSel [86001, itc_land_selectedMagIndex];
		} else {
			lbSetCurSel [86001, 0];
		};

		[86001,itc_land_selectedMagIndex] call itc_land_SPHammoHandler_fnc_onSelectAmmo;


		itc_land_SPHammoHandler_status = "RAMMING SHELL";

		sleep 3+random(1);
		itc_land_SPHammoHandler_status = "INSERTING CHARGE";

		sleep 3+random(1);
		itc_land_SPHammoHandler_status = "CLOSING BREECH";

		_weapon = (weapons _vehicle) select 0;

		//_vehicle removeWeapon _weapon;
		_vehicle addMagazine _magClass;
		//_vehicle addWeapon _weapon;
		//_vehicle selectWeapon _weapon;
		reload _vehicle;

		sleep 2+random(1);
		itc_land_SPHammoHandler_status = "INSERTING PRIMER";
		sleep 1+random(2);
		itc_land_SPHammoHandler_status = "ATTACHING LANYARD";
		sleep 1+random(1);
		itc_land_SPHammoHandler_status = "READY TO FIRE";

		disableUserInput false;

		[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
		ctrlSetText [86009, "UNLOAD"];
		ctrlEnable [86009, true];
		ctrlEnable [86010, true];

		_ctrl = ((findDisplay 32562) displayCtrl 86010);
		ctrlSetFocus _ctrl;

	};




};
