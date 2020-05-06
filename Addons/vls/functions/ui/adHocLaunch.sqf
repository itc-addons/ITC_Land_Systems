// use inputs to launch missile on an adhoc target

waitUntil {
	!(isNull (findDisplay 86002))
};
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;

//get data from edit fields
private _targetGrid = ctrlText 4106;
_vehicle setVariable ["ITC_Land_VLS_adHocData_grid",_targetGrid,true];

private _targetElev = parseNumber(ctrlText 4108);
_vehicle setVariable ["ITC_Land_VLS_adHocData_elev", _targetElev, true];

private _targetPos = [_targetGrid,true] call CBA_fnc_mapGridToPos;
_targetPos set [2,(_targetElev  - ace_common_mapAltitude)];

private _targetAngl = _vehicle getVariable ["ITC_Land_VLS_adHocData_angl",[1,"45"]];

_vehicle setVariable ["itc_land_vls_targetAngl",  parseNumber (_targetAngl # 1), true];
itc_land_target_IAtest = _vehicle getVariable "itc_land_vls_targetAngl";

_vehicle setVariable ["itc_land_vls_targetPos", _targetPos, true];
itc_land_target_test = _vehicle getVariable "itc_land_vls_targetPos";

_vehicle fire (currentWeapon _vehicle);
