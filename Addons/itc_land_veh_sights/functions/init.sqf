#include "itc_land_onLoad_RscGunnerSightSPH.sqf"
#include "itc_land_onLoad_RscGunnerSightBasic.sqf"
#include "itc_land_onLoad_RscAltGunnerSightSPH.sqf"
#include "itc_land_onLoad_RscGunnerSightMLRS.sqf"
#include "itc_land_onLoad_RscGunnerSightZamakMRLi.sqf"
#include "itc_land_onLoad_RscIGS_SPH.sqf"
#include "itc_land_onLoad_RscOptics_UAV_gunner.sqf"
#include "itc_land_onLoad_RscOptics_strider_commander.sqf"

["vehicle", {
    params ["_player", "_newVehicle"];
    if (count (currentWeapon _player) > 0) exitWith {};
    if (isNull _newVehicle) exitWith {};
    private _sightEvent = _newVehicle getVariable "ITC_Land_SightEvent";
    if (isNil "_sightEvent") exitWith {};

    //Restore sight display
    [_sightEvent, []] call CBA_fnc_localEvent;
}, true] call CBA_fnc_addPlayerEventHandler;
