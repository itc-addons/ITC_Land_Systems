if (!isServer) exitWith {};
params ["_cbr"];

itc_land_cobras pushBack _cbr;

_cbr setVariable ["shells", []];
_cbr setVariable ["origins", []];
_cbr setVariable ["firingPositions", []];
_cbr setVariable ["engagements", []];
_cbr setVariable ["start", 1000];
_cbr setVariable ["engagementTime", 30];

_cbr setVariable ["activeShells", []];
[{
  (_this select 0) params ["_cbr"];
  if(!alive _cbr) exitWith {
    [_this select 1] call CBA_fnc_removePerFrameHandler;
  };
  if(vectorMagnitude (velocity _cbr) < 1) then {
    [_cbr] call itc_land_cobra_fnc_scan;
  };
}, 1, [_cbr]] call CBA_fnc_addPerFrameHandler;
