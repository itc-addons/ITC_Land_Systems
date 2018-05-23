#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13401, true];
[_display, IDC_workspace_header, "Commander's Fire Control System"] call itc_land_tablet_fnc_setText;

if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions", [], true];
};
if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions_index"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0, true];
};
(_display displayCtrl 1500) lbAdd "G: 0101   CH: 2    AZ: 800    DF: 3982    QD: 368    TOF:23.31";
