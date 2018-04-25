params ["_action"];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"

_listIndex = lbCurSel 4315;
switch(_action) do {
  case "save": {
    bcs_bty_name = UITEXT(4303);
    _gunIndex = lbCurSel 4304;
    bcs_bty_type = [_gunIndex, lbData [4304, _gunIndex]];
  };
  case "addGun": {
    _num = UITEXT(4306);
    _posStr = UITEXT(4308);
    _elev = UINUMBER(4310);
    _dir = UINUMBER(4312);
    _pos = [_posStr, false] call ace_common_fnc_getMapPosFromGrid;
    _pos = _pos vectorAdd [0,0,_elev];
    _gunString = format["%1               %2              %3               %4", _num, _posStr, _elev, _dir];
    _gunData = [_num, _posStr, _pos, _elev, _dir];

    _gun = bcs_bty_guns findIf {_x # 0 == _num};
    if(_gun == -1) then {
      lbAdd [4315, _gunString];
      bcs_bty_guns pushBack _gunData;
    } else {
      bcs_bty_guns set [_gun, _gunData];
      [findDisplay 32562] call itc_land_tablet_fnc_pageInit;
    };
  };
  case "removeGun": {
    bcs_bty_guns deleteAt _listIndex;
    lbDelete [4315, _listIndex];
  };
};
