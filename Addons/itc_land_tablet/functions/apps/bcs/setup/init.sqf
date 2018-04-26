params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"
ctrlShow [13502, true];

[_display, IDC_workspace_header, "Battery Setup"] call itc_land_tablet_fnc_setText;
SETTEXT(4303,bcs_bty_name);

_tables = (configFile >> "itc_land_ballistics" >> "availableTables")  call BIS_fnc_getCfgData;
_gunNames = _tables apply {((configFile >> "CfgVehicles" >> _x # 0 >> "displayName")  call BIS_fnc_getCfgData)};
_shellTypes = _tables apply {_x # 1};
[4304,_gunNames,(bcs_bty_type # 0),_shellTypes] call itc_land_tablet_fnc_fillComboBox;

_gunStrings = bcs_bty_guns apply {format["%1               %2              %3               %4", _x # 0, _x # 1, _x # 3, _x # 4]};
[4315,_gunStrings,-1] call itc_land_tablet_fnc_fillComboBox;
