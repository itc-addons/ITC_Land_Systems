params ["_action"];
_vehicle = vehicle player;
switch(_action) do {
  case "addLocation": {
    _num = ctrlText 5402;
    _posString = ctrlText 5404;
    _elev = parseNumber (ctrlText 5406);
    _friendly = lbText [5408, (lbCurSel 5408)];
    _pos = [_posString, false] call ace_common_fnc_getMapPosFromGrid;
    _pos = _pos vectorAdd [0,0,_elev];
    _locString = format["%1               %2              %3               %4", _num, _posString, _elev, _friendly];
    _locData = [_num, _posString, _pos, _elev, _friendly];
    _locations = (missionNameSpace getVariable "bcs_locations");
    _index = -1;
    for "_i" from 0 to ((count _locations) - 1) step 1 do { //find gun number
        if(_locations # _i # 0 == _num) then {_index = _i};
    };
    if(_index == -1) then { //if gun is new
      lbAdd [5411, _locString];
      _locations pushBack _locData;
    } else {
      _locations set [_index, _locData];
      lbClear 5411;
      _locationsStrings = _locations apply {format["%1               %2              %3               %4", _x # 0, _x # 1, _x # 3, _x # 4]};
      [5411, _locationsStrings, 0] call itc_land_tablet_fnc_fillComboBox;
    };
  };
  case "removeLocation": {
    _index = lbCurSel 5411;
    _locations = (missionNameSpace getVariable "bcs_locations");
    _locations deleteAt _index;
    lbDelete [5411, _index];
  };
};
