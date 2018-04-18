#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13503, true];

[_display, IDC_workspace_header, "Location Stores"] call itc_land_tablet_fnc_setText;

lbClear 5408;
lbAdd [5408, "no"];
lbAdd [5408, "yes"];
lbSetCurSel [5408, 0];

lbClear 5411;
_locations = _vehicle getVariable "bcs_locations";
for "_i" from 0 to (count _locations) - 1 step 1 do {
  _location = _locations # _i;
  lbAdd [5411, format["%1               %2              %3               %4", _location # 0, _location # 1, _location # 3, _location # 4]];
};
