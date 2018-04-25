params ["_display", ["_calculate", true]];
#include "..\..\..\BCS_idc_defines.hpp"
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
ctrlShow [13506, true];

[_display, IDC_workspace_header, format["%1 Solutions", _ident]] call itc_land_tablet_fnc_setText;

if(_calculate) then {
  bcs_solutions = [bcs_bty_guns,bcs_bty_type # 1,_tgtPos,["Parallel"]]  call itc_land_bcs_fnc_calcSolutions;
};

bcs_solutions params ["_btySolutions", "_gunSolutions"];
_mission set [5, (count _btySolutions) - 1];
(_btySolutions # _curSolution) params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
SETTEXT(8018, str (round _maxOrd));//ordinate
SETTEXT(8019, str (round _impAng));//angle
SETTEXT(8020, str (round _dist));//distance

lbClear 8500;
{
  _x params ["_num"];
  _solution = _gunSolutions # _forEachIndex # 1 # _curSolution;
  _solText = format[
    "G:%1     CH:%2     AZ:%3     DF:%4     QD:%5     TOF:%6",
    _num, _solution # 0, round (_solution # 1), _solution # 2, round (_solution # 3), round ( _solution # 4)];
  (_display displayCtrl 8500) lbAdd _solText;
}forEach bcs_bty_guns;
