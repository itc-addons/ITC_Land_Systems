#include "..\..\BCS_idc_defines.hpp"

params ["_display"];
_vehicle = [] call itc_land_common_fnc_getCurVehicle;
_interfaces = (configFile >> "CfgVehicles" >> typeOf (_vehicle) >> "itc_land" >> "tabletInterfaces")  call BIS_fnc_getCfgData;
_canOpen = (!isNil{_interfaces}); //can't open if there's no interfaces
if(_canOpen) then { //check if it has the right interfaces
  _canOpen = "spg" in _interfaces;
};
if(!_canOpen) exitWith {
  [_display] call itc_land_tablet_fnc_appClear;

  [_display, IDC_header1, "SPG APP"] call itc_land_tablet_fnc_setText;
  [_display, IDC_header2, "NO INTERFACE"] call itc_land_tablet_fnc_setText;
  [_display, IDC_sidebar_button5, 1] call itc_land_tablet_fnc_setFade;
  [_display, IDC_workspace_header, "Self Propelled Gun Interface not found"] call itc_land_tablet_fnc_setText;
  ""
};

[_display, IDC_header1, "Vehicle"] call itc_land_tablet_fnc_setText;
[_display, IDC_header2, "SP Artillery"] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button1, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button2, 0] call itc_land_tablet_fnc_setFade;
//[_display, IDC_sidebar_button3, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button1, "FCI"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button2, "INS / DATA"] call itc_land_tablet_fnc_setText;
//[_display, IDC_sidebar_button3, "Status"] call itc_land_tablet_fnc_setText;

"fcs"
