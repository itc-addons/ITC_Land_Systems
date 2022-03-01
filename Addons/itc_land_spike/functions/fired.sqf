/*
 * itc_land_spike_fnc_fired
 */

params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
//player addmagazine _magazine;
if (!local _unit) exitWith {};

itc_land_spike_currentMissile = _projectile;
itc_land_spike_launchTime = cba_missionTime;
itc_land_spike_activationTime = cba_missionTime;

itc_land_spike_wobble = [if (random 1 > 0.5) then [{-1},{1}], 5 + (random 10), (round (random 3)) * 0.25];
private _viewASL = AGLtoASL positionCameraToWorld [0,0,0];
private _intersect = [AGLtoASL positionCameraToWorld [0,0,0], _viewASL vectorFromTo (AGLtoASL positionCameraToWorld [0,0,1])] call itc_land_spike_fnc_intersectScreenToWorld;
if (!isNil "_intersect" && {(_intersect distance player) > 500}) then {
	itc_land_spike_targetPos = _intersect;
	itc_land_spike_targetPosCamera = _intersect;
} else {
	private _forward = AGLtoASL (player modelToWorld [0,3000,0]);
	itc_land_spike_targetPos = _forward;
	itc_land_spike_targetPosCamera = _forward;
};

[] call itc_land_spike_fnc_startCamera;
