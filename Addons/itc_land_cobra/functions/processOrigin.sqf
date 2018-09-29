params ["_cbr", "_origin"];
_origins = missionNameSpace getVariable "itc_land_cobra_origins";
_firingPositions = missionNameSpace getVariable "itc_land_cobra_firingPositions";
_origins pushBack _origin;
_existingPosition = nil;
{
    _x params ["_shots", "_positions"];
    for "_i" from 0 to (count _positions) - 1 step 1 do {
        if(_origin distance (_positions # _i) < 15) then {
            if(isNil{_existingPosition}) then {
                _existingPosition = _x;
                _positions pushBack _origin;
                _x set [0,_shots + 1];
                _x set [2, time];
            };
        };
    };
}forEach _firingPositions;

if(isNil{_existingPosition}) then {
    _firingPositions pushBack [1, [_origin], time];
};

missionNameSpace setVariable ["itc_land_cobra_firingPositions",_firingPositions];
missionNameSpace setVariable ["itc_land_cobra_origins",_origins];
