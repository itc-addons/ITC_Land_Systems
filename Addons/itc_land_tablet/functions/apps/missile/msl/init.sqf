params ["_display"];
#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13701, true];
[_display, IDC_workspace_header, "Missile Targeting"] call itc_land_tablet_fnc_setText;

_targetPos = _vehicle getVariable ["itc_land_targetPos", nil];
if(!isNil{_targetPos}) then {
  private _dir = _vehicle getDir _targetPos;
  private _dirMils = (_dir / 360) * 6400;
  private _dist = _vehicle distance _targetPos;
  _solutionString = format["Distance %1m<br/>",round _dist];
  _solutionString = _solutionString + format["Azimuth %1 mils<br/>",round _dirMils];
  _solutionString = _solutionString + "Launch Elevation 800 mils<br/>";
  (_display displayCtrl 137100) ctrlSetStructuredText parseText _solutionString;
};
