//private _vehicle = vehicle ace_player;
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;
private _status = (_vehicle getVariable ["itc_land_ammoHandler_status",[0,0,"WAITING"]]) # 0;

private _sphloadersettings = _vehicle getVariable ["itc_land_sphloadersettings", []];
private _roundCount = ((_sphloadersettings # 0) # 3);
private _roundsFired = _vehicle getVariable ["itc_land_roundsFired",0];

private _curMag = (currentMagazine _vehicle);

if (_roundCount == _roundsFired) then { _vehicle setVariable ["itc_land_roundsFired",0,true] };

//check gun status. if 3 (loaded and ready to fire), then unload, if 1 (empty and ready to load) then load, otherwise do nothing.

switch ( _status ) do {
	case 3: {
		//systemChat "Remove loaded magazine.";
		[_vehicle,_curMag] spawn {
			private _vehicle = _this select 0;
			private _curMag = _this select 1;
			private _loadedMagClass = _vehicle getVariable "itc_land_loadedMagClass";

			disableSerialization;

			_vehicle setVariable ["itc_land_ammoHandler_status",[4,0,"SAFING WEAPON"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;

			sleep 3+random(2);
			_vehicle setVariable ["itc_land_ammoHandler_status",[4,1,"REMOVING CHARGE"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;

			sleep 2+random(1);
			_vehicle setVariable ["itc_land_ammoHandler_status",[4,2,"REMOVING ROUND"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;

			_vehicle removeMagazine _curMag; //remove loaded magazine

			sleep 5+random(3);

			_vehicle addMagazine _loadedMagClass;
			_vehicle setVariable ["itc_land_ammoHandler_status",[4,3,"STOWING ROUND"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;

			sleep 2+random(2);

			_vehicle setVariable ["itc_land_ammoHandler_status",[1,0,"WAITING"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;
		};
	};
	case 1: {
		//systemChat "Load the magazine";
		[_vehicle] spawn {
			disableSerialization;

			private _vehicle = _this select 0;
			private _currentMagInfo = _vehicle getVariable "itc_land_currentMagInfo";
			_currentMagInfo params ["_selectedMagIndex","_selectedMagClass","_selectedMagConfig"];

			//Get class of magazine to load
			private _magFormat = getText (_selectedMagConfig >> "itc_land_charge_format");
			private _magClass = Format [ _magFormat , (_vehicle getVariable ["itc_land_currentChargeIndex",1]) ];
			_vehicle setVariable ["itc_land_loadedMagClass",_selectedMagClass,true];

			_vehicle removeMagazine (_vehicle getVariable "itc_land_loadedMagClass");
			_vehicle setVariable ["itc_land_ammoHandler_status",[2,0,"PULLING SHELL"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;
			sleep 2+random(1);

			_vehicle setVariable ["itc_land_ammoHandler_status",[2,1,"RAMMING SHELL"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;

			sleep 2+random(1);
			_vehicle setVariable ["itc_land_ammoHandler_status",[2,2,"INSERTING CHARGE"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;

			sleep 2+random(1);

			_weapon = (weapons _vehicle) select 0;

			_vehicle removeWeapon _weapon;
			_vehicle addMagazine _magClass;
			_vehicle addWeapon _weapon;
			_vehicle selectWeapon _weapon;

			_vehicle setVariable ["itc_land_ammoHandler_status",[2,3,"CLOSING BREECH"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;

			sleep 2+random(1);
			_vehicle setVariable ["itc_land_ammoHandler_status",[2,4,"INSERTING PRIMER"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;


			sleep 2+random(1);
			_vehicle setVariable ["itc_land_ammoHandler_status",[2,5,"ATTACHING LANYARD"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;


			sleep 1+random(1);
			_vehicle setVariable ["itc_land_ammoHandler_status",[3,0,"READY TO FIRE"],true]; [] call itc_land_SPHammoHandler_fnc_updateStatus;


		};
	};
	default {
		//systemChat "Shit aint working toad";
	};
};
