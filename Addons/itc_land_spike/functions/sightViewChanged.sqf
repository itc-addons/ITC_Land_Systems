/*
 * itc_land_spike_fnc_cameraViewChanged
 */

//systemChat str ["VIEW CHANGED", cameraView];

if (cameraView != "GUNNER" && isNil "itc_land_spike_camera") exitWith {
  [] call itc_land_spike_fnc_sightClosed;
};

"colorCorrections" ppEffectAdjust [0.9, 0.4, 0, [0.9, 0.4, 0, 0], [1, 1, 1, 0], [1, 1, 1, 0]];;
"colorCorrections" ppEffectCommit 0;
"colorCorrections" ppEffectEnable true;

"filmGrain" ppEffectAdjust [0.5, 2, 1, 1, 1];
"filmGrain" ppEffectCommit 0;
"filmGrain" ppEffectEnable true;
itc_land_spike_ppEffect = true;
