params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13505, true];
_vehicle  = vehicle player;
_mission = (_vehicle getVariable "bcs_missions") # (_vehicle getVariable "bcs_mission_index");
[_display, IDC_workspace_header, format["%1 Engagement", _mission # 0]] call itc_land_tablet_fnc_setText;
[7101, ["Parallel", "Converged", "Linear", "Open", "Special"], 0] call itc_land_tablet_fnc_fillComboBox;
[7401, ["OFF", "ON"], 0] call itc_land_tablet_fnc_fillComboBox;

[_display, 7020, 1] call itc_land_tablet_fnc_setFade;
[_display, 7021, 1] call itc_land_tablet_fnc_setFade;
[_display, 7022, 1] call itc_land_tablet_fnc_setFade;
[_display, 7401, 1] call itc_land_tablet_fnc_setFade;
[_display, 7402, 1] call itc_land_tablet_fnc_setFade;
[_display, 7403, 1] call itc_land_tablet_fnc_setFade;
/*
_guns = vehicle player getVariable "bcs_bty_guns";

itc_land_firemission_engage_adj_gns = [_guns apply {"ON"}];
itc_land_firemission_engage_adj_shl = [_guns apply {"HE"}];

itc_land_firemission_engage_ffe_gns = [_guns apply {"ON"}];
itc_land_firemission_engage_ffe_shl = [_guns apply {"HE"}];
itc_land_firemission_engage_ffe_cnt = [_guns apply {"1"}];
itc_land_firemission_engage_ffe_fze = [_guns apply {"QUICK"}];

[7500, itc_land_firemission_engage_adj_gns, 0] call itc_land_tablet_fnc_fillComboBox;
[7501, itc_land_firemission_engage_adj_shl, 0] call itc_land_tablet_fnc_fillComboBox;
[7502, itc_land_firemission_engage_ffe_gns, 0] call itc_land_tablet_fnc_fillComboBox;
[7503, itc_land_firemission_engage_ffe_shl, 0] call itc_land_tablet_fnc_fillComboBox;
[7504, itc_land_firemission_engage_ffe_cnt, 0] call itc_land_tablet_fnc_fillComboBox;
[7505, itc_land_firemission_engage_ffe_fze, 0] call itc_land_tablet_fnc_fillComboBox;


*/
