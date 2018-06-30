_this select 0 params ["_shell"];

if (!itc_land_carrying || !alive player || vehicle player != player) exitWith {
    [_shell] call itc_land_towedAmmoHandling_fnc_drop;
    [_this select 1] call CBA_fnc_removePerFrameHandler;
};

_shell setPosASL (eyePos player vectorAdd (positionCameraToWorld [0, 0, 1] vectorDiff positionCameraToWorld [0, 0, 0]));
