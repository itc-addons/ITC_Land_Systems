["itc_land_onLoad_RscOptics_GLTD_gunner", {
	[{
		params ["_args","_pfID"];

		disableSerialization;
		private _display = uiNamespace getVariable ["ITC_Land_RscOptics_GLTD_gunner",displayNull];
		if (isNull _display) exitWith {};

		private _uavControlPos =  [ACE_Player] call ace_common_fnc_getUavControlPosition;
		//hide control group if the camera is anything but GUNNER or the player is no longer controlling the turret
		//also remove PFH in this case.
		if ( (cameraView != "GUNNER") || (_uavControlPos != "GUNNER") ) then {
			if (cameraView != "GUNNER") then {
				(_display displayCtrl 75001) ctrlShow false;
			};
			if (_uavControlPos != "GUNNER") then {
				(_display displayCtrl 75001) ctrlShow false;
				[_pfID] call CBA_fnc_removePerFrameHandler;
			};
		} else {

			//make sure control group is visible
			(_display displayCtrl 75001) ctrlShow true;

			//get connected UAV
		   private _uav = getConnectedUAV ACE_player;

      ([] call ace_common_fnc_getTargetAzimuthAndInclination) params ["_viewDir","_viewInc"]; //new method uses ace function to get player view direction and inclination, as this function works of camera position it is better suited for multiple platforms.
      private _weaponDirD = [ _viewDir , 4 ] call CBA_fnc_formatNumber;     //Take weapon direction in degrees and format as 3 figure string
      private _weaponDirM = [_viewDir, 0, 4] call itc_land_common_fnc_formatasmils; //Take weapon direction in degrees, convert to mils and format as 4 figure string

		   //Format direction values: "000 / 0000"
		   private _displayedDir = format ["%1 / %2", _weaponDirD, _weaponDirM];
		   (_display displayCtrl 75013) ctrlSetText _displayedDir;

		   //Get TGT grid
		   private _tgtposWorld = (screenToWorld [0.5,0.5]);
		   private _tgtposASL = AGLToASL _tgtposWorld;
		   private _tgtposMGRS = [_tgtposWorld] call ace_common_fnc_getMapGridFromPos;
		   private _tgtposDisplayed = format ["%1 %2",_tgtposMGRS # 0,_tgtposMGRS # 1];

		   private _vehpos = [position _uav] call ace_common_fnc_getMapGridFromPos;
		   private _vehposDisplayed = format ["%1 %2",_vehpos # 0,_vehpos # 1];

		   private _vehASL = round ((getPosASL _uav) select 2) + ace_common_mapAltitude;
		   private _vehASLdisplayed = [_vehASL, 0, 4] call itc_land_common_fnc_formatasmeters;


		   private _tgtASL = round (_tgtposASL select 2) + ace_common_mapAltitude;

		  //make sure _tgtASL is not returning depth of water: getTrrainHeightASL will return negative values for terrain underwater
		  private _tgtASLdisplayed = 0;
		   if (_tgtASL < 0) then {
				_tgtASLdisplayed = [0, 0, 4] call itc_land_common_fnc_formatasmeters;
		   } else {
				_tgtASLdisplayed = [_tgtASL, 0, 4] call itc_land_common_fnc_formatasmeters;
			};

       private _tgtString = _tgtposDisplayed + " / " + _tgtASLdisplayed;
       (_display displayCtrl 75015) ctrlSetText _tgtString;

       private _vehString = _vehposDisplayed + " / " + _vehASLdisplayed;
       (_display displayCtrl 75018) ctrlSetText _vehString;

			(_display displayCtrl 75020) ctrlSetAngle [(_viewDir) * -1, 0.5, 0.5];

      if ( !(isLaserOn _uav) ) then {
        [_display, 75021, 1] call itc_land_tablet_fnc_setFade;
      } else {
        [_display, 75021, 0] call itc_land_tablet_fnc_setFade;
        private _laserCode = _uav getVariable ["ace_laser_code",1111];
        (_display displayCtrl 75021) ctrlSetText ([_laserCode, 4, 0, false] call CBA_fnc_formatNumber);
      };
		};
	}, 0, []] call CBA_fnc_addPerFrameHandler;
 }] call CBA_fnc_addEventHandler;
