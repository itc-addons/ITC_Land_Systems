params ["_unit", "", "", "", "_ammo", "_magazine", "_projectile", "_gunner"];
if (!local _gunner) exitWith {};

_fuze = getText (configFile >> "CfgMagazines" >> _magazine >> "itc_land_fuze");
_event = configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "firedEvent";

if (isText _event) then {
  _this call (missionNamespace getVariable [getText _event, {}]);
};

_dispersionEvent = configFile >> "CfgMagazines" >> _magazine >> "dispersionEvent";
if (isText _dispersionEvent) then {
  _this call (missionNamespace getVariable [getText _dispersionEvent, {}]);
};

_guidanceConfig = (configFile >> "CfgMagazines" >> _magazine >> "itc_land_guidance") call BIS_fnc_getCfgData;

if (!isNil{_guidanceConfig # 1}) then {
    //player sideChat format["INIT GUIDANCE %1",_guidanceConfig # 0];
  _this call (missionNamespace getVariable [_guidanceConfig # 1, {}]);
};
