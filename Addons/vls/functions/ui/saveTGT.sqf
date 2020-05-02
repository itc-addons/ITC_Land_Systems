// get information from adhoc fields and save a target.
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
private _targetAnglNum = parseNumber (_targetAngl # 1);

private _targetName = ctrlText 4112;
_vehicle setVariable ["ITC_Land_VLS_adHocData_name", _targetName, true];

private _TGTData = [_targetName,_targetPos,_targetAnglNum];
private _TGTLabel = format ["%1: GRID: %2 - ELEV: %3m - ANGLE: %4",_targetName,_targetGrid,_targetElev,_targetAngl # 1];

private _index = lbAdd [4103, format["%1", _TGTLabel]];
lbSetData [4103, _index, str _TGTData];

private _TGTRecord = [_TGTLabel, str _TGTData];
private _targetsArray = _vehicle getVariable ["ITC_Land_VLS_TGTList",[]];
_targetsArray pushBack _TGTRecord;
_vehicle setVariable ["ITC_Land_VLS_TGTList",_targetsArray,true];
