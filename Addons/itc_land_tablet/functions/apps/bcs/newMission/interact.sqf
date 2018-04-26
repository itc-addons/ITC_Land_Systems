params ["_action"];
//player sideChat "type switch";
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
_display = findDisplay 32562;
_typeIndex = lbCurSel 6100;
if(_action == "targetType") then {
  //player sideChat format["ti %1",_typeIndex];
  {[_display, _x, 1] call itc_land_tablet_fnc_setFade;}forEach [6019,6403,6404,6019,6101,6601];
  _labelTexts = ["","","",""];
  _showFields = [];
  switch (_typeIndex) do {
    case 0: {
      _labelTexts = ["Grid","Elevation","",""];
      _showFields = [6019,6101,6601];
    };
    case 1: {
      _labelTexts = ["OT","AD","LR","UD"];
      _showFields = [6403,6404,6019,6101];
    };
    case 2: {
      _labelTexts = ["Direction","Distance","VI",""];
      _showFields = [6403,6019,6101];
    };
    case 3: {
      _labelTexts = ["Direction","Distance","VI",""];
      _showFields = [6403];
    };
  };
  {[_display, _x,_labelTexts select _forEachIndex] call itc_land_tablet_fnc_setText;} forEach [6020,6021,6022,6023];
  {[_display, _x, 0] call itc_land_tablet_fnc_setFade;}forEach _showFields;
};


if(_action == "load") then {
  _point = bcs_locations # (lbCurSel 6101);
  [_display, 6401, _point # 1] call itc_land_tablet_fnc_setText;
  [_display, 6402, str (_point # 3)] call itc_land_tablet_fnc_setText;
};

if(_action == "save") then {
  _targetPage = [_typeIndex, lbCurSel 6101, UITEXT(6401),UITEXT(6402),UITEXT(6403),UITEXT(6404)];
  _targetPos = _targetPage call itc_land_bcs_fnc_calculateTarget;
  _targetPage set [6, _targetPos];
  _mission set [2, _targetPage];
  _mission set [0, UITEXT(6400)];
  SAVEMISSION(_mission);
  _mission set [1, "solutionMission"];
  (vehicle player) setVariable ["page", "solutionMission"];
};
