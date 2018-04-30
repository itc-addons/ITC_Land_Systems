params ["_display"];
_vehicle = vehicle player;
weaponState [_vehicle, [0]] params ["_weapon", "_muzzle", "_firemode", "_magazine", "_ammoCount"];
/*
_vehicleDirMils = (getDir _vehicle) / 360 * 6400;
_turretDir = ((vehicle player) animationPhase "mainturret" )* 180 / pi;
_turretDirMils = _turretDir / 360 * 6400;


//[_display, 1017, str (round _vehicleDirMils)] call itc_land_tablet_fnc_setText;
//[_display, 1018, str round (_turretDirMils + 3200)] call itc_land_tablet_fnc_setText;

private _lookVector = ((positionCameraToWorld [0,0,0]) call ace_common_fnc_positionToASL) vectorFromTo ((positionCameraToWorld [0,0,10]) call ace_common_fnc_positionToASL);
_realAzimuth = ((_lookVector select 0) atan2 (_lookVector select 1));
private _upVectorDir = (((vectorUp _vehicle) select 0) atan2 ((vectorUp _vehicle) select 1));
private _elevationDiff = (cos (_realAzimuth - _upVectorDir)) * acos ((vectorUp _vehicle) select 2);
_realElevation = ((180 / PI) * (_vehicle animationPhase "mainGun")) + 0 - _elevationDiff;

//[_display, 1019, str round _realElevation] call itc_land_tablet_fnc_setText;

_ammo = (configFile >> "CfgMagazines" >> _magazine >> "displayNameShort")  call BIS_fnc_getCfgData;

//[_display, 1021, _ammo] call itc_land_tablet_fnc_setText;

//[_display, 1025, str _ammoCount] call itc_land_tablet_fnc_setText;
*/
_solutions = (_vehicle getVariable "itc_land_tablet_fcs_solutions");
if(count _solutions > 0) then {
  _solution = _solutions # (_vehicle getVariable "itc_land_tablet_fcs_solutions_index");
  _solutionString = "";
  _solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
  _solutionString = _solutionString + format ["CHARGE %1<br/>", _charge];
  _solutionString = _solutionString + format ["AZIMUTH %1<br/>",round _az];
  _solutionString = _solutionString + format ["DEFLECTION %1<br/>",_df];
  _solutionString = _solutionString + format ["QUADRANT %1<br/>",round _qd];
  _solutionString = _solutionString + format ["TOF %1<br/>",round _tof];
  _solutionString = _solutionString + format ["MAXIMUM ORDINATE %1<br/>",round _maxOrd];
  _solutionString = _solutionString + format ["TARGET DISTANCE %1<br/>",round _dist];

  (_display displayCtrl 1100) ctrlSetStructuredText parseText _solutionString;
} else {
  (_display displayCtrl 1100) ctrlSetStructuredText parseText "NO SLN";
};
(_display displayCtrl 1100) ctrlCommit 0;
