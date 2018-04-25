params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
ctrlShow [13504, true];
[_display, IDC_workspace_header, _ident] call itc_land_tablet_fnc_setText;
SETTEXT(6400,_ident);
SETTEXT(6401,_in0);
SETTEXT(6402,_in1);
SETTEXT(6403,_in2);
SETTEXT(6404,_in3);
[6100, ["Grid","Shift","Polar","QuickLay"], _targetTypeIndex] call itc_land_tablet_fnc_fillComboBox;
_knownPoints = bcs_locations apply {_x #  0};
[6101, _knownPoints, _kpi] call itc_land_tablet_fnc_fillComboBox;
