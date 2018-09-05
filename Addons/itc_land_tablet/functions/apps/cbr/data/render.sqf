params ["_display"];
_firesStrings = itc_land_cobra_engagements apply {
  _pos = [_x # 2 # 0] call ace_common_fnc_getMapGridFromPos;
  format["%1            POS %2 %3           Shots %4         Last Shot %5",
    _x # 0,
    _pos # 0, _pos # 1,
    _x # 1,
    (_x # 5) call BIS_fnc_timeToString
  ]
};
[136001,_firesStrings,-1] call itc_land_tablet_fnc_fillComboBox;
