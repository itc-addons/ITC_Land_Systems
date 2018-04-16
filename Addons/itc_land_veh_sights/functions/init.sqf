["itc_land_onLoadSPHGunnerDisplay", {

	[{  
		params ["_args","_pfID"];
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

			
			//Get mission azimuth
			private _displayedMISazi = "----";
			private _slnIndex = _veh getVariable "itc_land_tablet_fcs_solutions_index";
			if !(isNil _slnIndex) then {
				private _sln = _veh getVariable "itc_land_tablet_fcs_solutions";
				_sln = _sln select _slnIndex;
				private _MISazi = _sln select 1;
				_displayedMISazi = [_MISazi, 4, 0] call CBA_fnc_formatNumber;
			//_solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions", []];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];			
			};
			//display azimuth values
			(_display displayCtrl 81016) ctrlSetText _displayedMISazi;
		    (_display displayCtrl 81014) ctrlSetText _displayedDir; 			
			
			//Get current quadrant
			private _weaponQuad = (_weaponDirVector call CBA_fnc_vect2Polar) select 2;
			private _displayedQuad = [_weaponQuad, "mil4", true] call ace_mk6mortar_fnc_dev_formatNumber;  
			
			//Get mission quadrant
			private _displayedMISquad = "----";
			_slnIndex = _veh getVariable "itc_land_tablet_fcs_solutions_index";
			if !(isNil _slnIndex) then {
				private _sln = _veh getVariable "itc_land_tablet_fcs_solutions";
				_sln = _sln select _slnIndex;
				private _MISquad = _sln select 3;
				_displayedMISquad = [_MISquad, 4, 0] call CBA_fnc_formatNumber;
			//_solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions", []];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];			
			};	
			(_display displayCtrl 81021) ctrlSetText _displayedMISquad;
		    (_display displayCtrl 81019) ctrlSetText _displayedQuad; 				
			
		};
	}, 0, []] call CBA_fnc_addPerFrameHandler;


}] call CBA_fnc_addEventHandler;
