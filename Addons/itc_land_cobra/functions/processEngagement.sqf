params ["_cbr", "_origin"];
_engagements = _cbr getVariable "engagements";
_existingPosition = nil;
{
    _x params ["_ident","_shots", "_positions", "_firstShot", "_lastShot"];
    for "_i" from 0 to (count _positions) - 1 step 1 do {
        if(_origin distance (_positions # _i) < 300 && (_lastShot + (_cbr getVariable "engagementTime")) > time) then {
            if(isNil{_existingPosition}) then {
                _existingPosition = _x;
                _positions pushBack _origin;
                _x set [1,_shots + 1];
                _x set [4, time];
            };
        };
    };
}forEach _engagements;

if(isNil{_existingPosition}) then {
    _start = _cbr getVariable "start";
    _engagements pushBack [format["CB%1",[_start,4] call cba_fnc_formatNumber],1, [_origin], time, time];
    _cbr setVariable ["start", _start + 1];
};
_cbr setVariable ["engagements",_engagements];
