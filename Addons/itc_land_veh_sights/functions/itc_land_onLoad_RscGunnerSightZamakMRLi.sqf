["itc_land_onLoad_RscGunnerSightZamakMRLi", {
	private _veh =  [] call itc_land_common_fnc_getCurVehicle;
	_veh setVariable ["ITC_Land_SightEvent","itc_land_onLoad_RscGunnerSightZamakMRLi",true];
	[{
		params ["_args","_pfID"];
		disableSerialization;
		private _display = uiNamespace getVariable ["ITC_Land_RscGunnerSightZamakMRLi",displayNull];
		if (isNull _display) exitWith {};

		private _vehRole = ACE_player call CBA_fnc_vehicleRole;
		//hide control group if the camera is anything but GUNNER or the player is no longer controlling the turret
		//also remove PFH in this case.
		if ( (cameraView != "GUNNER") || ( _vehRole != "GUNNER") ) then {
			if (cameraView != "GUNNER") then {
				(_display displayCtrl 83101) ctrlShow false;
			};
			if (_vehRole != "GUNNER") then {
				(_display displayCtrl 83101) ctrlShow false;
				[_pfID] call CBA_fnc_removePerFrameHandler;
			};
		} else {

			//make sure control group is visible
			(_display displayCtrl 83101) ctrlShow true;

			//get vehicle
		   private _veh = vehicle ACE_player;

		   //Get current azimuth
		   private _weaponDirVector = _veh weaponDirection currentWeapon _veh; //Vector (array)
		   private _weaponDir = (_weaponDirVector call CBA_fnc_vect2Polar) select 1;

			 //Get current quadrant
			 private _weaponQuad = (_weaponDirVector call CBA_fnc_vect2Polar) select 2;

			 //check if camera is pointed at the ground
			 private _testSeekerPosASL = AGLtoASL (positionCameraToWorld [0,0,0]);
			 private _testSeekerDir = _testSeekerPosASL vectorFromTo (AGLtoASL (positionCameraToWorld [0,0,1]));
			 private _testPoint = _testSeekerPosASL vectorAdd (_testSeekerDir vectorMultiply viewDistance);
			 if ((terrainIntersectASL [_testSeekerPosASL, _testPoint]) || {lineIntersects [_testSeekerPosASL, _testPoint]}) then {
					 //it's not pointing at the ground, which means the shell will now fly in a different direction
					 private _lookVector = ((positionCameraToWorld [0,0,0]) call ace_common_fnc_positionToASL) vectorFromTo ((positionCameraToWorld [0,0,10]) call ace_common_fnc_positionToASL);
					 _weaponDir = ((_lookVector select 0) atan2 (_lookVector select 1));
					 private _upVectorDir = (((vectorUp _veh) select 0) atan2 ((vectorUp _veh) select 1));
					 private _elevationDiff = (cos (_weaponDir - _upVectorDir)) * acos ((vectorUp _veh) select 2);
					 _weaponQuad = ((180 / PI) * (_veh animationPhase "tower_fake")) - _elevationDiff;
					 if(_weaponDir <= 0) then {_weaponDir = _weaponDir + 360};
			 };
			 private _displayedQuad = [_weaponQuad, 0, 4] call itc_land_common_fnc_formatasmils;
		   private _displayedDir = [_weaponDir, 0, 4] call itc_land_common_fnc_formatasmils; //Take weapon direction in degrees, convert to mils and format as 4 figure string
			//display current azimuth


			//Get mission azimuth
			private _displayedMISazi = "----";
			private _slnIndex = _veh getVariable "itc_land_tablet_fcs_solutions_index";
			if !(isNil {_slnIndex}) then {
				private _sln = _veh getVariable "itc_land_tablet_fcs_solutions";
				_sln = _sln select _slnIndex;
				private _MISazi = _sln select 1;
				_displayedMISazi = [_MISazi, 4, 0] call CBA_fnc_formatNumber;
			//_solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions", []];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];
			};
			//display azimuth values
			(_display displayCtrl 83116) ctrlSetText _displayedMISazi;
		    (_display displayCtrl 83114) ctrlSetText _displayedDir;

			//Get mission quadrant
			private _displayedMISquad = "----";
			_slnIndex = _veh getVariable "itc_land_tablet_fcs_solutions_index";
			if !(isNil {_slnIndex}) then {
				private _sln = _veh getVariable "itc_land_tablet_fcs_solutions";
				_sln = _sln select _slnIndex;
				private _MISquad = _sln select 3;
				_displayedMISquad = [_MISquad, 4, 0] call CBA_fnc_formatNumber;
			//_solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions", []];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];
			};
			(_display displayCtrl 83121) ctrlSetText _displayedMISquad;
		    (_display displayCtrl 83119) ctrlSetText _displayedQuad;

		};
	}, 0, []] call CBA_fnc_addPerFrameHandler;


}] call CBA_fnc_addEventHandler;
