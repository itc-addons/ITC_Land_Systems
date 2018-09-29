params ["_action"];
private ["_targetPos"];
_vehicle = (vehicle player);
_display = findDisplay 32562;

switch(_action) do {
    /*case "calc": {
        private _gridField = ctrlText 13716;
        private _elField = parseNumber (ctrlText 13717);
        _targetPos = [_gridField, false] call ace_common_fnc_getMapPosFromGrid;
        _targetPos = _targetPos vectorAdd [0,0,_elField];
        _vehicle setVariable ["itc_land_targetPos",_targetPos];
    };*/
	case "calc": {
		_gridField = ctrlText 13717;
		_vehicle setVariable ["itc_land_tablet_fcs_tgtgrid", _gridField, true];	
		_elField = parseNumber (ctrlText 13721);
		_vehicle setVariable ["itc_land_tablet_fcs_tgtelev", _elField, true];		
		_vehicle = vehicle player;
		_shellType = [_vehicle] call itc_land_ballistics_fnc_getVehicleShellType;
		_targetPos = [_gridField, false] call ace_common_fnc_getMapPosFromGrid;
		_gunPos = getPosASL _vehicle;
		_solutions = [_shellType, _gunPos, _gunPos # 2, getDir _vehicle, _targetPos, _elField] call itc_land_ballistics_fnc_calcShellTypeSolutions;
		_vehicle setVariable ["itc_land_tablet_fcs_solutions", _solutions, true];
		_vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0, true];	

		lbClear 13711;
		{	
			_solutionIndex = (_vehicle getVariable "itc_land_tablet_fcs_solutions_index");
			_solution = _solutions # _solutionIndex;
			_solutionString = "";
			_solution params ["_charge", "_az", "_df", "_qd", "_tof", "_impVel", "_impAng", "_maxOrd", "_dist"];
			_lbString = format ["%1: AZ: %2 QD: %3 TOF: %4 Impact Angle: %5 Max Ordinate: %6",_solutionIndex +1,_az,_qd,_tof,_impAng,_maxOrd];
			lbAdd [13711,_lbString];
		} forEach _solutions;
	};
};






_targetPos = _vehicle getVariable ["itc_land_targetPos", nil];

if(!isNil{_targetPos}) then {
  private _dir = _vehicle getDir _targetPos;
  private _dirMils = (_dir / 360) * 6400;
  private _dist = _vehicle distance _targetPos;
  _solutionString = format["Distance %1m<br/>", _dist];
  _solutionString = _solutionString + format["Azimuth %1 mils<br/>", _dirMils];
  _solutionString = _solutionString + "Launch Elevation 800 mils<br/>";
  (_display displayCtrl 137100) ctrlSetStructuredText parseText _solutionString;
};
