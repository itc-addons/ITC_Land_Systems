/*
 * Author: Toadball
 * "Packs" an item into player inventory or a ground weaponholder if there is no space.
 *
 * Arguments:
 * 0: Target <OBJECT>
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

 params ["_item","_caller"];

//get item to pack item to:
private _packed = (configFile >> "CfgVehicles" >> typeOf _item >> "itc_land_PacksTo") call BIS_fnc_getCfgData;
 private _displayName = (configFile >> "CfgVehicles" >> typeOf _item >> "displayName") call BIS_fnc_getCfgData;
 private _progtext = Format ["Packing: %1",_displayName];

//Pack Darter
[_caller, "MedicOther"] call ace_common_fnc_doGesture;
[
	5,
	[_caller,_item,_packed],
	{
		(_this select 0) params ["_caller","_item","_packed"];
		if (local _item) then {
			deleteVehicle _item;
			private _gwh = [getPos _item, 0, 'GroundWeaponHolder', side _caller] call BIS_fnc_spawnVehicle;
			(_gwh select 0) addItemCargo [_packed,1];
		};
	},
	{},
	_progtext
] call ace_common_fnc_progressBar;
