params ["_display"];
#include "..\..\BCS_idc_defines.hpp"

[_display, IDC_header1, "COBRA"] call itc_land_tablet_fnc_setText;
[_display, IDC_header2, "Radar Suite"] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button1, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button2, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button3, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button1, "COBRA Settings"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button2, "Map view"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button3, "Data view"] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button5, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button5, "Reload data"] call itc_land_tablet_fnc_setText;
"settings"
