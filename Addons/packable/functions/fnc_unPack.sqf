/*
 * Author: Toadball
 * UAV unpack function.
 *
 * Arguments:
 * 0: CALLER <OBJECT>
 *
 * Return Value:
 * unpacked drone, hopefully
 *
 * Example:
 * [uavItem,this] call ITC_LAND_VEH_DARTER_FNC_UNPACK
 *
 */
 params ["_item","_caller"];

 //get class of UAV to unpack:
 private _unpacked = (configFile >> "CfgWeapons" >> _item >> "itc_land_unPacksTo") call BIS_fnc_getCfgData;
 private _displayName = (configFile >> "CfgVehicles" >> _unpacked >> "displayName") call BIS_fnc_getCfgData;
 private _progtext = Format ["Unpacking: %1",_displayName];

//Assemble Darter
[_caller, "MedicOther"] call ace_common_fnc_doGesture;
[
	5,
	[_caller,_unpacked,_item],
	{
		(_this select 0) params ["_caller","_unpacked","_item"];
		if ( local _caller) then {
			 //create drone and if ACE battery module is present set fuel to 0 <- Future Toad get on this already, KR, Past Toad
			 private _drone = _unpacked createVehicle ( getPos _caller );
			 createVehicleCrew _drone;
			 _drone setPos (_caller modelToWorld [0,1,0]);
			  //if ( isClass(configFile >> "CfgPathces" >> "ace_logistics_uavbattery") ) then { _drone setFuel 0; };
			_caller removeItem _item;
		};
		[_caller, 'PutDown'] call ace_common_fnc_doGesture;
	},
	{},
	_progtext
] call ace_common_fnc_progressBar;
