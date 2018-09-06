#include "..\..\BCS_idc_defines.hpp"

params ["_display"];
_vehicle = (vehicle player);
_interfaces = (configFile >> "CfgVehicles" >> typeOf (vehicle player) >> "itc_land" >> "tabletInterfaces")  call BIS_fnc_getCfgData;
_canOpen = (!isNil{_interfaces}); //can't open if there's no interfaces
if(_canOpen) then { //check if it has the right interfaces
  _canOpen = "spg" in _interfaces;
};

[_display, IDC_header1, "MSL CONF"] call itc_land_tablet_fnc_setText;

if(!_canOpen) exitWith {
  [_display] call itc_land_tablet_fnc_appClear;

  [_display, IDC_header2, "NO INTERFACE"] call itc_land_tablet_fnc_setText;
  //[_display, IDC_sidebar_button5, 1] call itc_land_tablet_fnc_setFade;
  [_display, IDC_workspace_header, "Self Propelled Gun Interface not found"] call itc_land_tablet_fnc_setText;
  ""
};

[_display, IDC_header2, "Missile Target"] call itc_land_tablet_fnc_setText;

"msl"
