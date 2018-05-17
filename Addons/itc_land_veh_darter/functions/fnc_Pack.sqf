/*
 * Author: Toadball
 * "Packs" a UAV into player inventory or a ground weaponholder if there is no space.
 *
 * Arguments:
 * 0: TENT <OBJECT>
 * 1: CALLER <OBJECT>
 *
 * Return Value:
 * Nothing
 *
 * Example:
 * [this] call TB_RALLYPOINT_FNC_PACK
 *
 * Public: No
 */
 
 params ["_uav","_caller"];
 
//get item to pack UAV to:
_packedUAV = (configFile >> "CfgVehicles" >> typeOf _uav >> "itc_land_darter_PacksTo") call BIS_fnc_getCfgData;
 private _displayName = (configFile >> "CfgVehicles" >> typeOf _uav >> "displayName") call BIS_fnc_getCfgData;
 private _progtext = Format ["Packing: %1",_displayName];

//Pack Darter
[_caller, "MedicOther"] call ace_common_fnc_doGesture;
[
	5,
	[_caller,_uav,_packedUAV],
	{
		(_this select 0) params ["_caller","_uav","_packedUAV"];
		if (local _uav) then {
			deleteVehicle _uav; 
			private _gwh = [getPos _uav, 0, 'GroundWeaponHolder', side _caller] call BIS_fnc_spawnVehicle; 
			(_gwh select 0) addItemCargo [_packedUAV,1];
		};
	}, 
	{}, 
	_progtext
] call ace_common_fnc_progressBar;
