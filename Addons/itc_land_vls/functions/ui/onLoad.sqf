// onLoad.sqf
waitUntil {
	!(isNull (findDisplay 86002))
};
private _vehicle = [] call itc_land_common_fnc_getCurVehicle;

//clear and populate saved target list
lbClear 4103;
private _targetList = _vehicle getVariable ["ITC_Land_VLS_TGTList",[]];
if ((count _targetList) > 0) then {
	{
	    private _label = _x # 0;
	    private _data = _x # 1;
		private _index = lbAdd [4103, format["%1", _label]];
		lbSetData [4103, _index, _data];
	} forEach _targetList;
};
private _currentTGTindex = _vehicle getVariable ["ITC_Land_VLS_selectedTGT",[]];
if ((lbSize 4103) > 0) then {
	if ( (_currentTGTindex # 0) <= (lbSize 4103)) then {
		//Recall last selection in ComboBox
		lbSetCurSel [4103, (_currentTGTindex # 0)];
	} else {
		//select first item in ComboBox
		lbSetCurSel [4103, 0];
	};
};
//populate edit fields
private _targetGrid = _vehicle getVariable ["ITC_Land_VLS_adHocData_grid","00000000"];
ctrlSetText [4106, _targetGrid];

private _targetElev = _vehicle getVariable ["ITC_Land_VLS_adHocData_elev",0];
ctrlSetText [4108, str _targetElev];

lbClear 4110;
{
    private _desc = _x # 0;
    private _angl = _x # 1;
	private _index = lbAdd [4110, format["%1", _desc]];
	lbSetData [4110, _index, _angl];
} forEach [["LOW - 25","25"],["NORMAL - 45","45"],["HIGH - 75","75"]];

private _targetAngl = _vehicle getVariable ["ITC_Land_VLS_adHocData_angl",[1,"45"]];

if ( (_targetAngl # 0) <= (lbSize 4110)) then {
	//Recall last selection in ComboBox
	lbSetCurSel [4110, (_targetAngl # 0)];
} else {
	//select first item in ComboBox
	lbSetCurSel [4110, 0];
};
private _targetName = _vehicle getVariable ["ITC_Land_VLS_adHocData_name","TGT000"];
ctrlSetText [4112, _targetName];


//_vehicle getVariable []"ITC_Land_VLS_targetList",[]];
//targetlist format
//[targetgrid,targetElev,targetANGL,targetName]
