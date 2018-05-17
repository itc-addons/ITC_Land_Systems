#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13502, true];

[_display, IDC_workspace_header, "Battery Setup"] call itc_land_tablet_fnc_setText;

_vehicle = vehicle player;
[_display, 4303, _vehicle getVariable "bcs_bty_name"] call itc_land_tablet_fnc_setText;
//[_display, 4304,] call itc_land_tablet_fnc_setText;

lbClear 4304;
_tables = (configFile >> "itc_land_ballistics" >> "availableTables")  call BIS_fnc_getCfgData;
for "_i" from 0 to (count _tables) - 1 step 1 do {
  (_tables # _i) params ["_gun", "_table"];
  lbAdd [4304, ((configFile >> "CfgVehicles" >> _gun >> "displayName")  call BIS_fnc_getCfgData)];
  lbSetData [4304, _i, _gun];
  if(_gun ==  _vehicle getVariable "bcs_bty_type")  then {
    lbSetCurSel [4304, _i];
  };
};
lbClear 4315;
_guns = _vehicle getVariable "bcs_bty_guns";
for "_i" from 0 to (count _guns) - 1 step 1 do {
  _gun = _guns # _i;
  lbAdd [4315, format["%1               %2              %3               %4", _gun # 0, _gun # 1, _gun # 3, _gun # 4]];
};
