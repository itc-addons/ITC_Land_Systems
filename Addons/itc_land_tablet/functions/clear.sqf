#include "BCS_idc_defines.hpp"

[_display, IDC_header1, ""] call itc_land_tablet_fnc_setText;
[_display, IDC_header2, ""] call itc_land_tablet_fnc_setText;
[_display, IDC_workspace_header, ""] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button1, 1] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button2, 1] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button3, 1] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button4, 1] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button5, 1] call itc_land_tablet_fnc_setFade;

[_display, IDC_fire_mission_list, 1] call itc_land_tablet_fnc_setFade;

[_display, 15208, 1] call itc_land_tablet_fnc_setFade;

[_display, 15010, 1] call itc_land_tablet_fnc_setFade;
[_display, 15011, 1] call itc_land_tablet_fnc_setFade;
