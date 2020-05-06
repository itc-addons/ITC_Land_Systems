params ["_action"];
_vehicle = [] call itc_land_common_fnc_getCurVehicle;
_display = findDisplay 32562;

switch(_action) do {
  case "calc": {
	//#include "interact_calc.sqf"
    _gridField = ctrlText 1400;
	_vehicle setVariable ["itc_land_tablet_fcs_tgtgrid", _gridField, true];
    
	_elField = parseNumber (ctrlText 1401);
	_elTgt =  _elField - ace_common_mapAltitude;
	
	_vehicle setVariable ["itc_land_tablet_fcs_tgtelev", _elField, true];

    private _shellType = lbData[1402, (lbCurSel 1402)];
	
    _targetPos = [_gridField, false] call ace_common_fnc_getMapPosFromGrid;
	
    _gunPos = getPosASL _vehicle;
	
    _solutions = [_shellType, _gunPos, _gunPos # 2, getDir _vehicle, _targetPos, _elTgt] call itc_land_ballistics_fnc_calcShellTypeSolutions;
    _vehicle setVariable ["itc_land_tablet_fcs_solutions", _solutions, true];
    _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0, true];
  };
  case "prev" : {
    _solutionIndex = _vehicle getVariable "itc_land_tablet_fcs_solutions_index";
    _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", (_solutionIndex - 1) max 0, true];
  };
  case "next" : {
    _solutionIndex = _vehicle getVariable "itc_land_tablet_fcs_solutions_index";
    _solutions = _vehicle getVariable "itc_land_tablet_fcs_solutions";
    _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", (_solutionIndex + 1) min ((count _solutions) - 1), true];
  };
};

if (_action in ["calc","prev","next"]) then {
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
};
