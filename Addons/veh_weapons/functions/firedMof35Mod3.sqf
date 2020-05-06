/*
 * Author: Yax
 * Fired event for ITC Howitzers with Mof35Mod3 fuzed shells
 */
params ["_vehicle", "", "", "", "_ammo", "_magazine", "_projectile", "_gunner"];
if (!local _gunner) exitWith {};

_fuzeType = "time";
_fuzeValue = _vehicle getVariable ["itc_land_fuzeValues",0];
private _guidanceInfo = [
  [
    _vehicle getVariable ["itc_land_guidance_laserCode",1111],
    _vehicle getVariable ["itc_land_guidance_laserCode_2",1112]
  ],
  _vehicle getVariable ["itc_land_guidance_targetGrid","00000000"],
  _vehicle getVariable ["itc_land_guidance_targetAlt",0]
];

[{
  params ["_pfhValues","_pfhId"];
  _pfhValues params ["_projectile", "_magazine", "_position", "_fuzeType","_fuzeTime", "_firedTime","", "_guidanceInfo"];

  if (alive _projectile) then {
    _position = getPosATL _projectile;
    _pfhValues set [2, _position];
  };

  _triggered = time > _firedTime + _fuzeTime;

  if(_triggered && alive _projectile) exitWith {
    _subMunitionScript = configFile >> "CfgMagazines" >> _magazine >> "itc_land_submunitionScript";
    _subMunitionCount = getNumber (configFile >> "CfgMagazines" >> _magazine >> "itc_land_submunitionCount");
    (_projectile call BIS_fnc_getPitchBank) params ["_pitch", "_bank"];
    if (isText _subMunitionScript) then {
      for "_i" from 1 to _subMunitionCount step 1 do {
        [_i, getPosASL _projectile, velocity _projectile, _pitch, _bank, _guidanceInfo] call (missionNamespace getVariable [getText _subMunitionScript, {}]);
      };
    };

    deleteVehicle _projectile;
    [_pfhId] call CBA_fnc_removePerFrameHandler;
  };

  if(!alive _projectile) exitWith {
    [_pfhId] call CBA_fnc_removePerFrameHandler;
  };
}, 0, [_projectile, _magazine, getPosATL _projectile, _fuzeType, _fuzeValue, time,[0,0,0], _guidanceInfo]] call CBA_fnc_addPerFrameHandler;
