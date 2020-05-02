/*
 * Adjusts a grid
 * Params: origin positionASL, ot direction(mils), add/drop, left/right, up/down
 * Returns: positionASL
 */
params ["_origin", "_ot", "_ad", "_lr", "_ud"];
//player sideChat str _this;
_otDeg = _ot / 6400 * 360; //ot dir in mils
_target = _origin getPos [_ad, _otDeg]; //apply add/drop
_target = _target getPos [_lr, _otDeg + 90]; //apply left/right by simply adding the distance 90 degrees offset from the OT
_target = _target vectorAdd [0,0,_ud]; //finally apply up/down
_target
