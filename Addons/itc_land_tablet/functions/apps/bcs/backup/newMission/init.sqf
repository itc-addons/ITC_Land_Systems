params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13504, true];
_vehicle = [] call itc_land_common_fnc_getCurVehicle;

_mission = [];
if(_vehicle getVariable "bcs_mission_index" == -1) then {
  _code = _vehicle getVariable "bcs_mission_code";
  _start = [_vehicle getVariable "bcs_mission_start", 4] call cba_fnc_formatNumber;
  _vehicle setVariable ["bcs_mission_start", (_vehicle getVariable "bcs_mission_start") + 1];
  _fmIdent = format["%1%2",_code,_start];
  _mission = [_fmIdent, "newMission",["Grid",-1,"",0,0,0,[0,0,0]],["Converged","ON",0,0]];
  _vehicle setVariable ["bcs_missions", (_vehicle getVariable "bcs_missions") + [_mission]];
  _vehicle setVariable ["bcs_mission_index", (_vehicle getVariable "bcs_missions") findIf {_x # 0 == _fmIdent}];
  //lbSetCurSel [15114,(_vehicle getVariable "bcs_mission_index")];
} else {
  _mission = (_vehicle getVariable "bcs_missions") # (_vehicle getVariable "bcs_mission_index");
};

[_display, IDC_workspace_header, format["%1 Setup", _mission # 0]] call itc_land_tablet_fnc_setText;
[_display, 6400, _mission # 0] call itc_land_tablet_fnc_setText;

[6100, ["Grid","Shift","Polar","QuickLay"], ["Grid","Shift","Polar","QuickLay"] find _mission # 2 # 0] call itc_land_tablet_fnc_fillComboBox;

[_display, 6401, _mission # 2 # 2] call itc_land_tablet_fnc_setText;
[_display, 6402, str (_mission # 2 # 3)] call itc_land_tablet_fnc_setText;
[_display, 6403, str (_mission # 2 # 4)] call itc_land_tablet_fnc_setText;
[_display, 6404, str (_mission # 2 # 5)] call itc_land_tablet_fnc_setText;

["targetType", _display] call itc_land_tablet_fnc_pageInteract;

_points = _vehicle getVariable "bcs_locations";
_pointsNames = _points apply {_x # 0};
[6101, _pointsNames, _mission # 2 # 1] call itc_land_tablet_fnc_fillComboBox;
