// get information from adhoc fields and save a target.
waitUntil {
	!(isNull (findDisplay 86002))
};
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;

//get selected target
private _target = _vehicle getVariable ["ITC_Land_VLS_selectedTGT",[]];
if ((count _target) < 1) exitWith {};

lbDelete [4103, _target # 0];

private _targetsArray = _vehicle getVariable ["ITC_Land_VLS_TGTList",[]];
_targetsArray deleteAt (_target # 0);
_vehicle setVariable ["ITC_Land_VLS_TGTList",_targetsArray,true];
