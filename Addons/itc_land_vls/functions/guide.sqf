params ["", "", "", "", "_ammo", "", "_projectile", "_gunner"];
if(([] call itc_air_wpt_fnc_getCurrent) # 0 == "N/A") exitWith{};
if (!local _gunner) exitWith {};
_angle = 45;
_azimuth = 0;//keep this 0 until target azimuth works
_targetCoordinates = itc_land_target_test;
(vehicle player) setVariable ["bomb_flying_target", _targetCoordinates];
_dropTime = time;
//GUIDANCE
[itc_land_vls_fnc_guidePfh, 0, [_projectile, _ammo, getPosATL _projectile, _targetCoordinates, "SEP", _dropTime, _angle, time,_azimuth, _targetCoordinates]] call CBA_fnc_addPerFrameHandler;
