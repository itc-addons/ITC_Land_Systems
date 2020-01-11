["itc_land_onLoad_RscOptics_UAV_gunner", {
	[{
		params ["_args","_pfID"];

		disableSerialization;
		private _display = uiNamespace getVariable ["ITC_Land_RscOptics_UAV_gunner",displayNull];
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

		   //Get direction
       /*Old method based on weapon direction - not suitable for all types of UAV
		   private _weaponDirVector = _uav weaponDirection currentWeapon _uav; //Vector (array)
		   private _weaponDir = (_weaponDirVector call CBA_fnc_vect2Polar) select 1;
       */
      ([] call ace_common_fnc_getTargetAzimuthAndInclination) params ["_viewDir","_viewInc"]; //new method uses ace function to get player view direction and inclination, as this function works of camera position it is better suited for multiple platforms.
      private _weaponDirD = [ _viewDir , 3 ] call CBA_fnc_formatNumber;     //Take weapon direction in degrees and format as 3 figure string
      private _weaponDirM = [_viewDir, 0, 4] call itc_land_common_fnc_formatasmils; //Take weapon direction in degrees, convert to mils and format as 4 figure string

		   //Format direction values: "000 / 0000"
		   private _displayedDir = format ["%1 / %2", _weaponDirD, _weaponDirM];
		   (_display displayCtrl 75013) ctrlSetText _displayedDir;

		   //Get TGT grid
		   private _tgtposWorld = (screenToWorld [0.5,0.5]);
		   private _tgtposASL = AGLToASL _tgtposWorld;
		   private _tgtposMGRS = [_tgtposWorld] call ace_common_fnc_getMapGridFromPos;
		   private _tgtposDisplayed = format ["%1 %2",_tgtposMGRS # 0,_tgtposMGRS # 1];

		   private _uavpos = [position _uav] call ace_common_fnc_getMapGridFromPos;
		   private _uavposDisplayed = format ["%1 %2",_uavpos # 0,_uavpos # 1];

		   //display grids
		   (_display displayCtrl 75015) ctrlSetText _tgtposDisplayed;
		   (_display displayCtrl 75018) ctrlSetText _uavposDisplayed;

		   private _uavASL = round ((getPosASL _uav) select 2) + ace_common_mapAltitude;
		   private _uavASLdisplayed = [_uavASL, 0, 4] call itc_land_common_fnc_formatasmeters;


		   private _tgtASL = round (_tgtposASL select 2) + ace_common_mapAltitude;

		  //make sure _tgtASL is not returning depth of water: getTrrainHeightASL will return negative values for terrain underwater
		  private _tgtASLdisplayed = 0;
		   if (_tgtASL < 0) then {
				_tgtASLdisplayed = [0, 0, 4] call itc_land_common_fnc_formatasmeters;
		   } else {
				_tgtASLdisplayed = [_tgtASL, 0, 4] call itc_land_common_fnc_formatasmeters;
			};

		   //display ALTS
		   (_display displayCtrl 75017) ctrlSetText _tgtASLdisplayed;
		   (_display displayCtrl 75011) ctrlSetText _uavASLDisplayed;
			//Draw Situational Awareness Compass
			//[_tgtposWorld] call itc_land_veh_darter_fnc_drawCompass;
			(_display displayCtrl 75020) ctrlSetAngle [(_viewDir) * -1, 0.5, 0.5];

		};
	}, 0, []] call CBA_fnc_addPerFrameHandler;


}] call CBA_fnc_addEventHandler;
//["tb_ar2i_onLoadTurretDisplay", []] call CBA_fnc_localEvent;
//["cameraView", {_this call tb_ar2i_fnc_cameraPEH},true] call CBA_fnc_addPlayerEventHandler;
