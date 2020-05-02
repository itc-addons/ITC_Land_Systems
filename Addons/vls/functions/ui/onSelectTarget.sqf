params ["_control","_index"];

private _vehicle = [] call itc_land_common_fnc_getCurVehicle;

private _targetData = lbData [4103,_index];
_vehicle setVariable ["ITC_Land_VLS_selectedTGT",[_index,_targetData],true];
