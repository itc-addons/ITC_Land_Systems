params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13301, true];
[_display, 15208, 0] call itc_land_tablet_fnc_setFade;

_vehicle = vehicle player;
_apps = _vehicle getVariable "apps";
{
  if(_x < count _apps) then {
    _name = (configFile >> "itc_land" >> "apps" >> _apps # _x >> "displayName")  call BIS_fnc_getCfgData;
    _ifaces = (configFile >> "itc_land" >> "apps" >> _apps # _x >> "interfaces")  call BIS_fnc_getCfgData;
    [_display, 91000 + _x, _name] call itc_land_tablet_fnc_setText;
    [_display, 91010 + _x, _ifaces] call itc_land_tablet_fnc_setText;
  } else {
    [_display, 91000 + _x, ""] call itc_land_tablet_fnc_setText;
    [_display, 91010 + _x, ""] call itc_land_tablet_fnc_setText;
  };
}forEach [0,1,2];
