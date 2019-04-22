disableSerialization;
private _display = (findDisplay 86000);
if (isNull _display) exitWith {};

/*if the player dies, or the dialog is closed make sure to ensure dialog is closed a
if((!alive ace_player) || (!itc_land_SPHammoHandler_open)) then {
	if (!alive ace_player) then {
		closeDialog 86000;
	};
	[_pfID] call CBA_fnc_removePerFrameHandler;
};*/

private _vehicle = vehicle ace_player;		
private _status = _vehicle getVariable ["itc_land_ammoHandler_status",[0,0,"WAITING"]];		
//Only run code required to update if status has changed.
//if (!(_status isEqualTo _lastStatus)) then {
	
	//Check status and adjust buttons and labels
	switch ( _status # 0 ) do {
	
		case 0: { 
			//Waiting - Unloaded Settings not applied
			//Can apply settings. (86009)
			//Cannot load/unload. (86010)
			
			ctrlEnable [86009, true]; //can apply settings
			
			ctrlSetText [86010, "LOAD"];
			ctrlEnable [86010, false];	//cannot load
			
		};
		case 1: { 
			//Waiting - Unloaded settings applied 1
			//Can Load
			//Can apply settings	
			ctrlEnable [86009, true]; //can apply settings
			
			ctrlSetText [86010, "LOAD"];
			ctrlEnable [86010, true];	//can load				
		
		};		
		case 2: {
			//Loading
			//Cannot apply settings
			//Cannot load/unload

			ctrlEnable [86009, false]; //cannot apply settings
			
			ctrlSetText [86010, "LOAD"];
			ctrlEnable [86010, false];	//cannot load
			
			//After pulling shell update available ammo list.
			//refresh ammo list
			private _currentMagInfo = _vehicle getVariable ["itc_land_currentMagInfo",[0,""]];
			private _selectedMagIndex = (_currentMagInfo # 0); 						
			if ((_status # 1) == 3) then {
				[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
				if ( _selectedMagIndex <= (lbSize 86001)) then {
					lbSetCurSel [86001, _selectedMagIndex];
				} else {
					lbSetCurSel [86001, 0];
				};
				[86001,_selectedMagIndex] call itc_land_SPHammoHandler_fnc_onSelectAmmo;	
			};
		};
		case 3: {
			//"READY TO FIRE" 0
			//Cannot apply settings
			//Can unload	
			ctrlEnable [86009, false]; //can apply settings
			
			ctrlSetText [86010, "UNLOAD"];
			ctrlEnable [86010, true];	//can unload							
		};
		case 4: {
			//"SAFING WEAPON" 0
			//"REMOVING CHARGE" 1
			//"REMOVING ROUND" 2
			//"STOWING ROUND" 3	
			ctrlEnable [86009, false]; //cannot apply settings
			
			ctrlSetText [86010, "UNLOAD"];
			ctrlEnable [86010, false];	//cannot unload
			
			if ((_status # 1) == 3) then {
				//refresh ammo list
				private _currentMagInfo = _vehicle getVariable ["itc_land_currentMagInfo",[0,""]];
				private _selectedMagIndex = (_currentMagInfo # 0); 
				[] call itc_land_SPHammoHandler_fnc_fillAmmoList;
				if ( _selectedMagIndex <= (lbSize 86001)) then {
					lbSetCurSel [86001, _selectedMagIndex];
				} else {
					lbSetCurSel [86001, 0];
				};
				[86001,_selectedMagIndex] call itc_land_SPHammoHandler_fnc_onSelectAmmo;
			};
		};
	};
	
	ctrlSetText [86011, _status # 2]; //updating status	label				
	_vehicle setVariable ["itc_land_ammoHandler_lastStatus",_status,true];
//};