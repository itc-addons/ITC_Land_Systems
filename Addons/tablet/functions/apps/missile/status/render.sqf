params ["_display"];

_allDamage = getAllHitPointsDamage _vehicle;
_allDamage params ["", "_name", "_status"];

_resString = "";

for "_i" from 0 to (count _status - 1) step 1 do {
  _col = "acff99";
  _stat = "OK";
  if(_status select _i > 0) then {_col = "ff7f00"; _stat = "DAM";};
  if(_status select _i > 0.5) then {_col = "ff0000"; _stat = "FAIL";};
  _resString = _resString + format["<t align='left' color='#%1'>%2    %3</t>",_col,_name select _i, _stat] + "<br/>";
};

(_display displayCtrl 2100) ctrlSetStructuredText parseText _resString;
(_display displayCtrl 2100) ctrlCommit 0;

[_display, 2013, format["%1%2",round ((fuel _vehicle) * 100),"%"]] call itc_land_tablet_utils_fnc_setText;
