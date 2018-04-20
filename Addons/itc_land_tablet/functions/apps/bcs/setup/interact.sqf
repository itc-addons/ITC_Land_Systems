params ["_action"];
_vehicle = vehicle player;
switch(_action) do {
  case "save": {
    _name = ctrlText 4303;
    _vehicle setVariable ["bcs_bty_name", _name];
    _index = lbCurSel 4304;
    _data = lbData [4304, _index];
    _vehicle setVariable ["bcs_bty_type", _data];
  };
  case "addGun": {
    _num = ctrlText 4306;
    _posString = ctrlText 4308;
    _elev = parseNumber (ctrlText 4310);
    _dir = parseNumber (ctrlText 4312);
    _pos = [_posString, false] call ace_common_fnc_getMapPosFromGrid;
    _pos = _pos vectorAdd [0,0,_elev];

    _guns = (_vehicle getVariable "bcs_bty_guns");
    _gunString = format["%1               %2              %3               %4", _num, _posString, _elev, _dir];
    _gunData = [_num, _posString, _pos, _elev, _dir];
    _index = -1;
    for "_i" from 0 to ((count _guns) - 1) step 1 do { //find gun number
        if(_guns # _i # 0 == _num) then {_index = _i};
    };
    player sideChat format ["setting %1", _index];
    if(_index == -1) then { //if gun is new
      lbAdd [4315, _gunString];
      _guns pushBack _gunData;
    } else {
      _guns set [_index, _gunData];
      lbClear 4315;
      for "_i" from 0 to (count _guns) - 1 step 1 do {
        _gun = _guns # _i;
        lbAdd [4315, format["%1               %2              %3               %4", _gun # 0, _gun # 1, _gun # 3, _gun # 4]];
      };
    };
    _vehicle setVariable ["bcs_bty_guns", _guns];
  };
  case "removeGun": {
    _index = lbCurSel 4315;
    _guns = (_vehicle getVariable "bcs_bty_guns");
    _guns deleteAt _index;
    _vehicle setVariable ["bcs_bty_guns", _guns];
    lbDelete [4315, _index];
  };
};
