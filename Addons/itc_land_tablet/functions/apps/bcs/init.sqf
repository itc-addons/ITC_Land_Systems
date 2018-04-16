#include "..\..\BCS_idc_defines.hpp"

[_display, IDC_header1, "AIFMS"] call itc_land_tablet_fnc_setText;
[_display, IDC_header2, "FDC Suite"] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button1, "BCS Settings"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button2, "Bty Setup"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button3, "Location Stores"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button4, "Ammo Stores"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button5, "New Firemission"] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button1, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button2, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button3, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button4, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button5, 0] call itc_land_tablet_fnc_setFade;

"settings"
