itc_land_spike_camera = "camera" camCreate (getPos _projectile);
itc_land_spike_camera camSetFov 0.08333;

//_camera camSetTarget (ASLtoAGL itc_exp_spike_targetPosCamera);
private _polarToTarget = ((getPosASL _projectile) vectorFromTo itc_land_spike_targetPosCamera) call cba_fnc_vect2polar;
//systemChat str ["polar", _polarToTarget];

itc_land_spike_camera setDir (_polarToTarget # 1);
[itc_land_spike_camera, (_polarToTarget # 2), 0] call bis_fnc_setpitchbank;
itc_land_spike_camera setVectorUP [0,0.5,0];
//itc_land_spike_camera attachTo [itc_land_spike_currentMissile, [0,1,0]];
itc_land_spike_camera cameraEffect ["internal", "BACK"];

findDisplay 46 createDisplay  "ITC_Land_SpikeSeeker";
showCinemaBorder false;
