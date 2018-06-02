/*params ["_display"];
_vehicle = vehicle player;
//weaponState [_vehicle, [0]] params ["_weapon", "_muzzle", "_firemode", "_magazine", "_ammoCount"];

_solutions = (_vehicle getVariable "itc_land_tablet_fcs_solutions");
if(count _solutions > 0) then {
  _solutionIndex = (_vehicle getVariable "itc_land_tablet_fcs_solutions_index");
  _solution = _solutions # _solutionIndex;
  _solutionString = "";
  _solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
  
  _solutionString = _solutionString + format ["SLN: %1 / %2<br/>", _solutionIndex+1,(count _solutions)];  
  _solutionString = _solutionString + format ["CHARGE: %1<br/>", _charge];
  _solutionString = _solutionString + format ["AZIMUTH: %1<br/>",round _az];
  _solutionString = _solutionString + format ["DEFLECTION: %1<br/>",_df];
  _solutionString = _solutionString + format ["QUADRANT: %1<br/>",round _qd];
  _solutionString = _solutionString + format ["TOF: %1<br/>",round _tof];
  _solutionString = _solutionString + format ["MAXIMUM ORDINATE: %1<br/>",round _maxOrd];
  _solutionString = _solutionString + format ["TARGET DISTANCE: %1<br/>",round _dist];

  (_display displayCtrl 1100) ctrlSetStructuredText parseText _solutionString;
} else {
  (_display displayCtrl 1100) ctrlSetStructuredText parseText "NO SLN";
};
(_display displayCtrl 1100) ctrlCommit 0;
*/