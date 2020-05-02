// save adhoc details when entries are changed
params ["_control", "_charCode"];
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;
private _idc = ctrlIDC _control;
//systemChat str [ctrlClassName _control,_idc];

switch (_idc) do {
	case 4106: {
		private _targetGrid = ctrlText 4106;
		//systemChat _targetGrid;
		_vehicle setVariable ["ITC_Land_VLS_adHocData_grid",_targetGrid,true];
	};
	case 4108: {
		private _targetElev = parseNumber(ctrlText 4108);
		//systemChat str _targetElev;
		_vehicle setVariable ["ITC_Land_VLS_adHocData_elev", _targetElev, true];
	};
	case 4112: {
		private _targetName = ctrlText 4112;
		//systemChat _targetName;
		_vehicle setVariable ["ITC_Land_VLS_adHocData_name", _targetName, true];
	};
};
