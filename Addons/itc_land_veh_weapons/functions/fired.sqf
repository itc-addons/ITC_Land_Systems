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
