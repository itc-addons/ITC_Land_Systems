params ["_display"];

_fireMissionStrings = bcs_missions apply {
  if(_x # 6 > time) then {
    _text = if(time > (_x # 6) - bcs_splash_time) then [{"SPLASH"},{"SHOT"}];
    format["%1 %2", _x # 0, _text];
  } else {
    format["%1", _x # 0];
  };
};
[15114, _fireMissionStrings, -1] call itc_land_tablet_fnc_fillComboBox;
