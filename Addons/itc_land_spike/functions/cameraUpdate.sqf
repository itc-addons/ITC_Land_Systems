/*
 *  itc_land_spike_fnc_cameraUpdate
 */
params ["_display"];
if (!itc_land_spike_ppEffect) then {
  "colorCorrections" ppEffectAdjust [0.9, 0.4, 0, [0.9, 0.4, 0, 0], [1, 1, 1, 0], [1, 1, 1, 0]];;
  "colorCorrections" ppEffectCommit 0;
  "colorCorrections" ppEffectEnable true;

  "filmGrain" ppEffectAdjust [0.5, 2, 1, 1, 1];
  "filmGrain" ppEffectCommit 0;
  "filmGrain" ppEffectEnable true;
  itc_land_spike_ppEffect = true;
};
itc_land_spike_camera camSetPos (itc_land_spike_currentMissile modelToWorld [0,1,0]);
private _polarToTarget = ((getPosASL itc_land_spike_currentMissile) vectorFromTo itc_land_spike_targetPosCamera) call cba_fnc_vect2polar;
itc_land_spike_camera setDir (_polarToTarget # 1);
private _timePassed = time - itc_land_spike_launchTime;
private _bank = if (time > itc_land_spike_launchTime + ((itc_land_spike_wobble # 2)*pi)) then {0} else {sin deg (4*(_timePassed) + 3.2) * (itc_land_spike_wobble # 1)};
[itc_land_spike_camera, (_polarToTarget # 2), _bank * (itc_land_spike_wobble # 0)] call bis_fnc_setpitchbank;
itc_land_spike_camera camCommit 0;

private _ui = uiNamespace getVariable "itc_land_spike_ui";
if (isNull _ui || isNil "itc_land_spike_camera") exitWith {
  itc_land_spike_camera cameraEffect ["terminate", "back"];
  camDestroy itc_land_spike_camera;
  itc_land_spike_camera = nil;
  "colorCorrections" ppEffectEnable false;
  "filmGrain" ppEffectEnable false;
  itc_land_spike_ppEffect = false;  
};
(_ui displayCtrl 1011) ctrlShow false;
(_ui displayCtrl 1018) ctrlShow false;
(_ui displayCtrl -1) ctrlShow false;
(_ui displayCtrl 1020) ctrlShow false;
(_ui displayCtrl 1015) ctrlShow (time < (itc_land_spike_launchTime + 5));
(_ui displayCtrl 1013) ctrlSetText str (round ((time - itc_land_spike_activationTime) * 100));
(_ui displayCtrl 1015) ctrlSetText (format ["%1/%2/%3 %4:%5", date # 2, date # 1, date # 0, date # 3, date # 4]);
itc_land_spike_lockInformation params ["_lockObject", "_lockPosition", "_lockLostTime", "_originalLockPosition"];
private _screenPos = (worldToScreen (ASLtoAGL itc_land_spike_targetPos));
if (!isNil "_lockObject") then {
  _screenPos = worldToScreen (_lockObject modelToWorld _lockPosition);
};
_screenPos params ["_x", "_y"];
if (isNil "_x" || isNil "_y") exitWith {};
(_ui displayCtrl 1021) ctrlSetPosition [
  SafeZoneX + (safezoneW * _x) - (10 * 	(safezoneW / 64)),
  SafeZoneY + (safezoneH * _y) - (10 * 	(safezoneH / 40))
];
(_ui displayCtrl 1022) ctrlSetPosition [
  SafeZoneX + (safezoneW * _x) - (10 * 	(safezoneW / 64)),
  SafeZoneY + (safezoneH * _y) - (10 * 	(safezoneH / 40))
];
(_ui displayCtrl 1021) ctrlCommit 0;
(_ui displayCtrl 1022) ctrlCommit 0;
(_ui displayCtrl 1022) ctrlShow (!isNil {itc_land_spike_lockInformation # 0});
(_ui displayCtrl 1016) ctrlShow (isNil {itc_land_spike_lockInformation # 0});
