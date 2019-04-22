//Depending on where the player camera is return ace_player or UAV
private _return = nil;

if (cameraOn in allUnitsUAV) then {
	_return = getConnectedUav ace_player;
} else {
	_return = vehicle ace_player;
};

_return;