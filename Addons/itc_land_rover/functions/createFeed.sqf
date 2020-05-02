params ["_vehicle"];
if (isNull _vehicle) exitWith {
  call itc_land_rover_fnc_killFeed;
};
ctrlShow [2205, false];
ctrlShow [1004, false];
ctrlShow [1005, false];
itc_land_rover_camera cameraEffect ["internal", "BACK"];
"colorCorrections" ppEffectAdjust [0.3, 1.2, 0.3, [1, 1, 1, 0], [1, 1, 1, 0], [0.75, 0.25, 0, 1.0]];
"colorCorrections" ppEffectCommit 0;
"colorCorrections" ppEffectEnable TRUE;
"filmGrain" ppEffectAdjust [0.5, 2, 1, 1, 1];
"filmGrain" ppEffectCommit 0;
"filmGrain" ppEffectEnable TRUE;
