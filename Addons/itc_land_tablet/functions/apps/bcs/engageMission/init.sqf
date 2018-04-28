params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
ctrlShow [13505, true];
[_display, IDC_workspace_header, format ["%1 ENGAGEMENT",_ident]] call itc_land_tablet_fnc_setText;

_shellTypes = bcs_availableTables # (bcs_bty_type # 0) # 2;
_shellNames = _shellTypes apply {((configFile >> "CfgMagazines" >> _x >> "displayName")  call BIS_fnc_getCfgData)};
[7100,_shellNames,_shellTypeIndex,_shellTypes] call itc_land_tablet_fnc_fillComboBox;

[7101,["Parallel","Converaged","Linear","Open","Special"],_sheafTypeIndex] call itc_land_tablet_fnc_fillComboBox;

[7401,["On","Off"],_sheafTypeIndex] call itc_land_tablet_fnc_fillComboBox;
