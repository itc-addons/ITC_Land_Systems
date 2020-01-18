params ["_plane"];
([] call ace_common_fnc_getTargetAzimuthAndInclination) params ["_viewDir","_viewInc"]; //new method uses ace function to get player view direction and inclination, as this function works of camera position it is better suited for multiple platforms.
private _weaponDirD = [ _viewDir , 3 ] call CBA_fnc_formatNumber;     //Take weapon direction in degrees and format as 3 figure string
private _weaponDirM = round (_viewDir / 360 * 6400); //Take weapon direction in degrees, convert to mils and format as 4 figure string

//Format direction values: "000 / 0000"
private _displayedDir = format ["%1 / %2", _weaponDirD, _weaponDirM];
ctrlSetText [75013, _displayedDir];

//Get TGT grid
private _tgtposWorld = (screenToWorld [0.5,0.5]);
private _tgtposASL = AGLToASL _tgtposWorld;
ctrlSetText [19438, round (_tgtposWorld distance position _plane)];
private _tgtposMGRS = [_tgtposWorld] call ace_common_fnc_getMapGridFromPos;
private _tgtposDisplayed = format ["%1 %2",_tgtposMGRS # 0,_tgtposMGRS # 1];

private _uavpos = [position _plane] call ace_common_fnc_getMapGridFromPos;
private _uavposDisplayed = format ["%1 %2",_uavpos # 0,_uavpos # 1];

//display grids
ctrlSetText [75015, _tgtposDisplayed];
ctrlSetText [75018, _uavposDisplayed];

private _uavASL = round ((getPosASL _plane) select 2) + ace_common_mapAltitude;
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
 ctrlSetText [75017, _tgtASLdisplayed];
 ctrlSetText [75011, _uavASLDisplayed];
//Draw Situational Awareness Compass
//[_tgtposWorld] call itc_land_veh_darter_fnc_drawCompass;
(uiNamespace getVariable "itc_land_rover_ui_nArrow") ctrlSetAngle [(_viewDir) * -1, 0.5, 0.5];
ctrlSetText [19357, (format ["%1:%2", date # 3, date # 4])];
