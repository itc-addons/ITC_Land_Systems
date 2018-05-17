params ["_display", ["_calculate", true]];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
ctrlShow [13506, true];

[_display, IDC_workspace_header, format["%1 Solutions", _ident]] call itc_land_tablet_fnc_setText;

if(_calculate) then {
  bcs_solutions = [bcs_bty_guns,bcs_bty_type # 1,_tgtPos,_engagePage]  call itc_land_bcs_fnc_calcSolutions;
};

bcs_solutions params ["_btySolutions", "_gunSolutions"];
if(count _btySolutions == 0) exitWith {
  SETTEXT(8022,"NO SOLUTIONS");
  lbClear 8500;
  SETTEXT(8018,"");//ordinate
  SETTEXT(8019,"");//angle
  SETTEXT(8020,"");//distance
  if(count bcs_bty_guns > 0) then {
    _btyPos = [bcs_bty_guns] call itc_land_bcs_fnc_getBatterySolution;
    SETTEXT(8020, str round (_btyPos distance _tgtPos));//distance
  };
};
_mission set [5, (count _btySolutions) - 1];
(_btySolutions # _curSolution) params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
SETTEXT(8018, str (round _maxOrd));//ordinate
SETTEXT(8019, str (round _impAng));//angle
SETTEXT(8020, str (round _dist));//distance
_text = format["SOLUTION %1 OUT OF %2", (_curSolution + 1), count (bcs_solutions # 0)];
SETTEXT(8022,_text);

lbClear 8500;
{
  _x params ["_num"];
  _solution = _gunSolutions # _forEachIndex # 1 # _curSolution;
  _solText = format[
    "G: %1     CH: %2     AZ: %3     DF: %4     QD: %5     TOF: %6",
    _num, _solution # 0, round (_solution # 1), _solution # 2, round (_solution # 3), [( _solution # 4),1,2] call CBA_fnc_formatNumber];
  (_display displayCtrl 8500) lbAdd _solText;
}forEach bcs_bty_guns;
