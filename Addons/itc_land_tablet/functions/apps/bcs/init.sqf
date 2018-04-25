#include "..\..\BCS_idc_defines.hpp"
_vehicle = vehicle player;

[_display, IDC_header1, "AIFMS"] call itc_land_tablet_fnc_setText;
[_display, IDC_header2, "FDC Suite"] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button1, "BCS Settings"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button2, "Bty Setup"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button3, "Location Stores"] call itc_land_tablet_fnc_setText;
//[_display, IDC_sidebar_button4, "Ammo Stores"] call itc_land_tablet_fnc_setText;
[_display, IDC_sidebar_button5, "New Firemission"] call itc_land_tablet_fnc_setText;

[_display, IDC_sidebar_button1, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button2, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button3, 0] call itc_land_tablet_fnc_setFade;
[_display, IDC_sidebar_button5, 0] call itc_land_tablet_fnc_setFade;

[_display, IDC_fire_mission_list, 0] call itc_land_tablet_fnc_setFade;

_defaults = [
  ["bcs_splash_time", 10],
  ["bcs_mission_code", "FM"],
  ["bcs_mission_start", 1],

  ["bcs_bty_name", ""],
  ["bcs_bty_type", [0,"b_155"]],
  ["bcs_bty_guns", []],
  ["bcs_locations", []],
  ["bcs_missions", []],
  ["bcs_mission_index", 0]
];
{
  if(isNil{missionNameSpace getVariable (_x # 0)}) then {
    missionNameSpace setVariable [_x # 0, _x # 1];
  };
} forEach _defaults;

bcs_bty_guns = [["1","018058",[1800,5800,5],5,1],["2","018059",[1800,5900,5],5,1]];
bcs_missions = [["FM0001","solutionMission",[0,-1,"020035","5","0","0",[2000,3500,5]],["Parallel","ON",0,0],0,0,0]];
bcs_bty_name = "asdf";
bcs_bty_type = [3,"b_82"];
bcs_mission_index = 0;

"settings"
