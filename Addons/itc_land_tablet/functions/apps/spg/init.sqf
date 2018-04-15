#include "..\..\BCS_idc_defines.hpp"

params ["_display"];
_vehicle = (vehicle player);
_interfaces = (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "itc_land" >> "tabletInterfaces")  call BIS_fnc_getCfgData;
_canOpen = (!isNil{_interfaces}); //can't open if there's no interfaces
if(_canOpen) then { //check if it has the right interfaces
  _canOpen = "spg" in _interfaces;
};
if(!_canOpen) exitWith {
  [_display] call itc_land_tablet_fnc_app_clear;

  [_display, IDC_header1, "APP ERR"] call itc_land_tablet_fnc_set_text;
  [_display, IDC_header2, "NO INTERFACE"] call itc_land_tablet_fnc_set_text;

  [_display, IDC_sidebar_button1, 1] call itc_land_tablet_fnc_set_fade;
  [_display, IDC_sidebar_button2, 1] call itc_land_tablet_fnc_set_fade;
  [_display, IDC_sidebar_button3, 1] call itc_land_tablet_fnc_set_fade;
  [_display, IDC_sidebar_button4, 1] call itc_land_tablet_fnc_set_fade;
};

_vehicleName = (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "displayName")  call BIS_fnc_getCfgData;
[_display, IDC_header1, _vehicleName] call itc_land_tablet_fnc_set_text;
[_display, IDC_header2, "Vehicle Systems"] call itc_land_tablet_fnc_set_text;

[_display, IDC_sidebar_button1, "CFCS"] call itc_land_tablet_fnc_set_text;
[_display, IDC_sidebar_button2, "Status"] call itc_land_tablet_fnc_set_text;
[_display, IDC_sidebar_button3, 1] call itc_land_tablet_fnc_set_fade;
[_display, IDC_sidebar_button4, 1] call itc_land_tablet_fnc_set_fade;

"fcs"
