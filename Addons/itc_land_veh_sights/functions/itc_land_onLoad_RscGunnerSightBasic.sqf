["itc_land_onLoad_RscGunnerSightBasic", {
	private _veh =  [] call itc_land_common_fnc_getCurVehicle;
	_veh setVariable ["ITC_Land_SightEvent","itc_land_onLoad_RscGunnerSightBasic",true];
	[{
		params ["_args","_pfID"];
		disableSerialization;
		private _display = uiNamespace getVariable ["ITC_Land_RscGunnerSightBasic",displayNull];
		if (isNull _display) exitWith {};

		private _vehRole = ACE_player call CBA_fnc_vehicleRole;
		//hide control group if the camera is anything but GUNNER or the player is no longer controlling the turret
		//also remove PFH in this case.
		if ( (cameraView != "GUNNER") || ( _vehRole != "GUNNER") ) then {
			if (cameraView != "GUNNER") then {
				(_display displayCtrl 82001) ctrlShow false;
			};
			if (_vehRole != "GUNNER") then {
				(_display displayCtrl 82001) ctrlShow false;
				[_pfID] call CBA_fnc_removePerFrameHandler;
			};
			//ace_player sideChat "itc_land_onLoad_RscGunnerSightBasic hiding display";
		} else {

			//make sure control group is visible
			(_display displayCtrl 82001) ctrlShow true;
			//ace_player sideChat "itc_land_onLoad_RscGunnerSightBasic showing display";
			//get vehicle
			private _veh = vehicle ACE_player;

			//Get current azimuth
			private _weaponDirVector = _veh weaponDirection currentWeapon _veh; //Vector (array)
			private _weaponDir = (_weaponDirVector call CBA_fnc_vect2Polar) select 1;
			private _displayedDir = [_weaponDir, "mil4", true] call ace_mk6mortar_fnc_dev_formatNumber; //Take weapon direction in degrees, convert to mils and format as 4 figure string

			private _outputAzi = format ["CUR AZ: %1",_displayedDir];
			//display azimuth values
			(_display displayCtrl 82014) ctrlSetText _outputAzi;
			//ace_player sideChat format ["itc_land_onLoad_RscGunnerSightBasic %1",_outputAzi];
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

			private _outputquad = format ["CUR QD: %1",_displayedQuad];
			//display azimuth values
			(_display displayCtrl 82016) ctrlSetText _outputquad;
		};
	}, 0, []] call CBA_fnc_addPerFrameHandler;

	//ace_player sideChat "itc_land_onLoad_RscGunnerSightBasic local event added";
}] call CBA_fnc_addEventHandler;
