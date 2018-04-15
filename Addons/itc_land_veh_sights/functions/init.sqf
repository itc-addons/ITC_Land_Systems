["itc_land_onLoadSPHGunnerDisplay", {

	[{  
		params ["_args","_pfID"];
		['itc_land_onLoadSPHGunnerDisplay', []] call CBA_fnc_localEvent;
		disableSerialization; 
		private _display = uiNamespace getVariable ["ITC_Land_RscGunnerSightSPH",displayNull];	
		if (isNull _display) exitWith {};
		
		private _vehRole = ACE_player call CBA_fnc_vehicleRole;
		//hide control group if the camera is anything but GUNNER or the player is no longer controlling the turret
		//also remove PFH in this case.
		if ( (cameraView != "GUNNER") || ( _vehRole != "GUNNER") ) then {			
			if (cameraView != "GUNNER") then {
				(_display displayCtrl 81001) ctrlShow false; 
			};
			if (_vehRole != "GUNNER") then {
				(_display displayCtrl 81001) ctrlShow false; 
				[_pfID] call CBA_fnc_removePerFrameHandler;
			};
		} else {

			//make sure control group is visible
			(_display displayCtrl 81001) ctrlShow true;
			
			//get vehicle
		   private _veh = vehicle ACE_player; 

		   //Get current azimuth 
		   private _weaponDirVector = _veh weaponDirection currentWeapon _veh; //Vector (array) 
		   private _weaponDir = (_weaponDirVector call CBA_fnc_vect2Polar) select 1; 
		   private _displayedDir = [_weaponDir, "mil4", true] call ace_mk6mortar_fnc_dev_formatNumber; //Take weapon direction in degrees, convert to mils and format as 4 figure string 
			//display current azimuth
		  // (_display displayCtrl 81014) ctrlSetText _displayedDir; 

			//Get current deflection
			
			//Get mission deflection
			private _displayedMISdef = "----";
			private _slnIndex = getVariable ["itc_land_tablet_fcs_solutions_index";
			if !(isNil _slnIndex) then {
				private _sln = _veh getVariable "itc_land_tablet_fcs_solutions";
				_sln = _sln select _slnIndex;
				private _MISdef = _sln select 1;
				_displayedMISdef = [_MISdef, 4, 0] call CBA_fnc_formatNumber;
			//_solution params ["_charge", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions", []];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];			
			};
			//display deflection values
			(_display displayCtrl 81016) ctrlSetText _displayedMISdef;
  

		};
	}, 0, []] call CBA_fnc_addPerFrameHandler;


}] call CBA_fnc_addEventHandler;
//["tb_ar2i_onLoadTurretDisplay", []] call CBA_fnc_localEvent;
//["cameraView", {_this call tb_ar2i_fnc_cameraPEH},true] call CBA_fnc_addPlayerEventHandler; 
