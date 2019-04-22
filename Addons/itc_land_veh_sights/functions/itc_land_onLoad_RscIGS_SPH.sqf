["itc_land_onLoad_RscIGS_SPH", {

	[{
		params ["_args","_pfID"];
		disableSerialization;
		private _display = uiNamespace getVariable ["ITC_Land_RscIGS_SPH",displayNull];
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
					 _weaponQuad = ((180 / PI) * (_veh animationPhase "mainGun")) - _elevationDiff;
					 if(_weaponDir <= 0) then {_weaponDir = _weaponDir + 360};
			 };
			 private _displayedQuad = [_weaponQuad, "mil4", true] call ace_mk6mortar_fnc_dev_formatNumber;
		   private _displayedDir = [_weaponDir, "mil4", true] call ace_mk6mortar_fnc_dev_formatNumber; //Take weapon direction in degrees, convert to mils and format as 4 figure string
			//display current azimuth


			//Get mission azimuth
			private _displayedMISazi = "----";
			private _slnIndex = _veh getVariable "itc_land_tablet_fcs_solutions_index";
			if !(isNil {_slnIndex}) then {
				private _sln = _veh getVariable "itc_land_tablet_fcs_solutions";
				_sln = _sln select _slnIndex;
				_MISazi = _sln select 1;
				_displayedMISazi = [_MISazi, 4, 0] call CBA_fnc_formatNumber;
			//_solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions", []];
			//_vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];
			};
			//display azimuth values
			(_display displayCtrl 1104) ctrlSetText _displayedMISazi;
		    (_display displayCtrl 1102) ctrlSetText _displayedDir;

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
			(_display displayCtrl 1108) ctrlSetText _displayedMISquad;
		    (_display displayCtrl 1106) ctrlSetText _displayedQuad;

			if (isNil "itc_land_IGS_showAutoloader") then {itc_land_IGS_showAutoloader = true;};
			if (itc_land_IGS_showAutoloader) then {
				//make sure elements are shown
				if (!(ctrlVisible 1700)) then {
					{ [_display,_x,0] call itc_land_common_fnc_ctrlSetFade } forEach [1700,1701,1702,1703,1704];
				};
				//Autoloader and Gun Status Readout
				//Gun Status
				private _status = _veh getVariable ["itc_land_ammoHandler_status",[0,0,"WAITING"]];
				private _roundCount = _veh getVariable ["itc_land_roundCount",0];
				private _roundsFired = _veh getVariable ["itc_land_roundsFired",0];
				private _statusText = "";
				if (_roundCount < 1)then {
					_statusText = _status # 2;
					//player sideChat format ["STATUS: %1", _statusText];
				} else {
					if (_roundsFired == _roundCount) then {
						_statusText = format ["%1 ( %2 / %3 ROUNDS COMPLETE )",_status # 2,_roundsFired,_roundCount];

					} else {
						_statusText = format ["%1 ( %2 / %3 )",_status # 2,(_roundsFired+1),_roundCount];
					};
					//player sideChat format ["STATUS: %1", _statusText];
				};
				(_display displayCtrl 1701) ctrlSetText (format ["STATUS: %1",_statusText]);
				//Ammo to load
				private _settings = _veh getVariable ["itc_land_sphloadersettings",[]];
				if (count _settings > 0) then {
					(_display displayCtrl 1702) ctrlSetText (format ["LOAD: %1",((_settings # 0) # 0)]);
					(_display displayCtrl 1703) ctrlSetText (format ["FUZE: %1", toUpper ((_settings # 1) # 0)]);
					(_display displayCtrl 1704) ctrlSetText (format ["GUIDANCE: %1", toUpper ((_settings # 2) # 0)]);				
				} else {
					(_display displayCtrl 1702) ctrlSetText "LOAD: -- N/A --";
					(_display displayCtrl 1703) ctrlSetText "FUZE: -- N/A --";
					(_display displayCtrl 1704) ctrlSetText "GUIDANCE: -- N/A --";				
				};
			} else {
				{ [_display,_x,1] call itc_land_common_fnc_ctrlSetFade } forEach [1700,1701,1702,1703,1704];
			};
			if (isNil "itc_land_IGS_showOrders") then {itc_land_IGS_showOrders = false};
			if (itc_land_IGS_showOrders) then {
				//make sure elements are shown
				if (!(ctrlVisible 1600)) then {
					{ [_display,_x,0] call itc_land_common_fnc_ctrlSetFade } forEach [1600,1601,1602,1603,1604,1605];
				};			
				//TO BE FILLED IN
				//FOR NOW EMPTY!
					(_display displayCtrl 1600) ctrlSetText "FCI ORDERS";
					(_display displayCtrl 1601) ctrlSetText "COUNT: -- N/A --";
					(_display displayCtrl 1602) ctrlSetText "LOAD: -- N/A --";
					(_display displayCtrl 1603) ctrlSetText "FUZE: -- N/A --";
					(_display displayCtrl 1604) ctrlSetText "GUIDANCE: -- N/A --";	
					(_display displayCtrl 1605) ctrlSetText "AZ/QD: -- N/A --";	
			} else {
				{ [_display,_x,1] call itc_land_common_fnc_ctrlSetFade } forEach [1600,1601,1602,1603,1604,1605];
			};
			if (isNil "itc_land_IGS_showAlignmentGuides") then {itc_land_IGS_showAlignmentGuides = false};			
			if (itc_land_IGS_showAlignmentGuides) then {
				//make sure elements are shown
				if (!(ctrlVisible 1800)) then {
					{ [_display,_x,0] call itc_land_common_fnc_ctrlSetFade } forEach [1800,1801,1802];
				};			
				//TO BE FILLED IN
				#define adjustX(ARG) ((20.4 + (ARG)) * (0.01875 * SafezoneH))
				#define adjustY(ARG) ((14.0 + (ARG)) * (0.025 * SafezoneH))
				
				private _aziDif = (_weaponDir - _MISazi);

				if ((_aziDif <= 100) && (_aziDif >= -100)) then { 
					[_display, 1801, 0] call itc_land_tablet_fnc_setFade;
					private _adjustX = ( _aziDif / 100) * 4.55;
					(_display displayCtrl 1801) ctrlSetPosition [adjustX(_adjustX),adjustY(0)];   
					(_display displayCtrl 1801) ctrlCommit 0;   
				} else {
					[_display, 1801, 1] call itc_land_tablet_fnc_setFade;
				};
				
			} else {
				{ [_display,_x,1] call itc_land_common_fnc_ctrlSetFade } forEach [1800,1801,1802,1803,1804,1805,1806];
			};			
		
		};
	}, 0, []] call CBA_fnc_addPerFrameHandler;


}] call CBA_fnc_addEventHandler;