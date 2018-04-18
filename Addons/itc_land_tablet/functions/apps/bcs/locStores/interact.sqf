params ["_action"];
_vehicle = vehicle player;
switch(_action) do {
  case "addLocation": {
    _num = ctrlText 5402;
    _posString = ctrlText 5404;
    _elev = parseNumber (ctrlText 5406);
    _friendly = lbText [5408, (lbCurSel 5408)];
    _pos = [_posString, false] call ace_common_fnc_getMapPosFromGrid;

    _locString = format["%1               %2              %3               %4", _num, _posString, _elev, _friendly];
    _locData = [_num, _posString, _pos, _elev, _friendly];
    _locations = (_vehicle getVariable "bcs_locations");
    _index = -1;
    for "_i" from 0 to ((count _locations) - 1) step 1 do { //find gun number
        if(_locations # _i # 0 == _num) then {_index = _i};
    };
    if(_index == -1) then { //if gun is new
      lbAdd [5411, _locString];
      player sideChat _locString;
      _locations pushBack _locData;
    } else {
      _locations set [_index, _locData];
      lbClear 5411;
      _locations = _vehicle getVariable "bcs_locations";
      for "_i" from 0 to (count _locations) - 1 step 1 do {
        _location = _locations # _i;
        lbAdd [5411, format["%1               %2              %3               %4", _location # 0, _location # 1, _location # 3, _location # 4]];
      };
    };
    _vehicle setVariable ["bcs_locations", _locations];
  };
  case "removeLocation": {
    _index = lbCurSel 5411;
    _locations = (_vehicle getVariable "bcs_locations");
    _locations deleteAt _index;
    _vehicle setVariable ["bcs_locations", _locations];
    lbDelete [5411, _index];
  };
};
