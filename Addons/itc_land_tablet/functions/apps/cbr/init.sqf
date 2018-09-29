params ["_display"];
#include "..\..\BCS_idc_defines.hpp"

[_display, IDC_header1, "COBRA"] call itc_land_tablet_fnc_setText;
[_display, IDC_header2, "Radar Suite"] call itc_land_tablet_fnc_setText;

//[_display, IDC_sidebar_button1, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button2, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button3, 0] call itc_land_tablet_fnc_setFade;
//[_display, IDC_sidebar_button1, "COBRA Settings"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button2, "Map view"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button3, "Data view"] call itc_land_tablet_fnc_setText;

//[_display, IDC_sidebar_button5, 0] call itc_land_tablet_fnc_setFade;
//[_display, IDC_sidebar_button5, "Refresh data"] call itc_land_tablet_fnc_setText;

/*
if(!(missionNameSpace getVariable ["itc_land_cobra_app_hasInitialized",false])) then {
  [player, "cobra", "returnData", {
    params ["_target","_transmission"];
    _transmission params ["_destination","_origin","_header","_type","_data"];
    _data params ["_vehicle","_origins","_engagements","_activeShells"];
    _cobras = _target getVariable ["cobra_vehicles",[]];
    _target setVariable ["cobra_vehicles",_cobras + [_vehicle]];
    _target setVariable ["cobra_firingPositions",_origins];
    _target setVariable ["cobra_engagements",_engagements];
    _target setVariable ["cobra_activeShells",_activeShells];
  }] call itc_land_datalink_fnc_registerEvent;

  [player, "cobra", "shellDetected", {
    params ["_target","_transmission"];
    _transmission params ["_destination","_origin","_header","_type","_data"];
    _data params ["_position","_tof"];
    _activeShells = _target getVariable ["cobra_activeShells",[]];
    _target setVariable ["cobra_activeShells",_activeShells + [[_position, _tof + time]]];
  }] call itc_land_datalink_fnc_registerEvent;
};

itc_land_cobra_app_hasInitialized = true;
*/
"map"
