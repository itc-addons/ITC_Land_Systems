params ["_action"];
_vehicle = (vehicle player);
_display = findDisplay 32562;

switch(_action) do {
  case "calc": {
	//#include "interact_calc.sqf"
    _gridField = ctrlText 2400;
	_vehicle setVariable ["itc_land_tablet_fcs_tgtgrid", _gridField, true];
    _elField = parseNumber (ctrlText 2401);
	_vehicle setVariable ["itc_land_tablet_fcs_tgtelev", _elField, true];
    _vehicle = vehicle player;
    //_shellType = [_vehicle] call itc_land_ballistics_fnc_getVehicleShellType;
    private _shellType = lbData[2402, (lbCurSel 2402)];
    _targetPos = [_gridField, false] call ace_common_fnc_getMapPosFromGrid;
    _gunPos = getPosASL _vehicle;

	_solutions = [_shellType, _gunPos, _gunPos # 2, getDir _vehicle, _targetPos, _elField] call itc_land_ballistics_fnc_calcShellTypeSolutions;	
	
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
  case "setFG" : {
	private _curMag = (currentMagazine _vehicle);
	[_vehicle,_curMag] spawn {
		disableSerialization;
		private _fuze  = getText (configFile >> "CfgMagazines" >> lbData [2402, lbCurSel 2402] >> "itc_land_fuze");
		if (isNil "itc_land_fuzeDesc") then { itc_land_fuzeDesc = lbText [1904,itc_land_selectedFuzeIndex]; };	
		if (isNil "itc_land_fuzeValues") then { itc_land_fuzeValues = 0; };	
		switch (lbData [1904, lbCurSel 1904 ]) do {
			case "pd" : {
				_fuzeText = itc_land_fuzeDesc;
			};
			case "prox" : {
				private _proxHOB = getNumber (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "proxHOB");
				itc_land_fuzeValues = _proxHOB;
				_fuzeText = Format ["%1: %2m",itc_land_fuzeDesc,itc_land_fuzeValues];
			};
			case "time" : {
				itc_land_mlrsfci_fuzeTime = parseNumber(ctrlText 1906); 
				itc_land_fuzeValues = itc_land_mlrsfci_fuzeTime;
				_fuzeText = Format ["%1: %2s",itc_land_fuzeDesc,itc_land_fuzeValues];		
			};
			case "delay" : {
				itc_land_fuzeValues = 0.005;
				_fuzeText = itc_land_fuzeDesc;	
			};
		};		
	};
	itc_land_guidance = getArray (configFile >> "CfgMagazines" >> lbData [2402, lbCurSel 2402] >> "itc_land_guidance");

	if (count itc_land_guidance > 0) then {
		switch (itc_land_guidance # 0) do {
			case "gps_inertial" : {
				itc_land_guidance_targetGrid = ctrlText 1909;
				//player sidechat itc_land_guidance_targetGrid;
				private _targetPos = [itc_land_guidance_targetGrid,true] call CBA_fnc_mapGridToPos;
				//player sidechat str _targetPos;
				itc_land_guidance_targetAlt = parseNumber(ctrlText 1911);
				_targetPos set [2,itc_land_guidance_targetAlt];
				//player sidechat str _targetPos;	
				itc_land_guidance_targetPos = _targetPos;
				
			};

			default { 	};
			
		};
	};	
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
	  _solutionString = _solutionString + format ["AZIMUTH: %1<br/>",round _az];
	  _solutionString = _solutionString + format ["DEFLECTION: %1<br/>",_df];
	  _solutionString = _solutionString + format ["QUADRANT: %1<br/>",round _qd];
	  _solutionString = _solutionString + format ["TOF: %1<br/>",round _tof];
	  _solutionString = _solutionString + format ["MAXIMUM ORDINATE: %1<br/>",round _maxOrd];
	  _solutionString = _solutionString + format ["TARGET DISTANCE: %1<br/>",round _dist];

	  (_display displayCtrl 2403) ctrlSetStructuredText parseText _solutionString;
	} else {
	  (_display displayCtrl 2403) ctrlSetStructuredText parseText "NO SLN";
	};
	(_display displayCtrl 2403) ctrlCommit 0;
};
