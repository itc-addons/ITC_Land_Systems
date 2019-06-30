params ["_control","_index"];

private _vehicle = [] call itc_land_common_fnc_getCurVehicle;
private _targetAngl = lbData [4110,_index];
_vehicle setVariable ["ITC_Land_VLS_adHocData_angl",[_index,_targetAngl],true];
