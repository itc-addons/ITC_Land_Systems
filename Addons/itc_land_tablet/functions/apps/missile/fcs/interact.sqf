params ["_action"];
_vehicle = [] call itc_land_common_fnc_getCurVehicle;
_curMag = (currentMagazine _vehicle);
_display = findDisplay 32562;

switch(_action) do {
  case "calc": {
	//#include "interact_calc.sqf"
    _gridField = ctrlText 2400;
	_vehicle setVariable ["itc_land_tablet_fcs_tgtgrid", _gridField, true];
    _elField = parseNumber (ctrlText 2401);
	_elTgt =  _elField - ace_common_mapAltitude;

	_vehicle setVariable ["itc_land_tablet_fcs_tgtelev", _elField, true];

    private _shellType = lbData[2402, (lbCurSel 2402)];
    _targetPos = [_gridField, false] call ace_common_fnc_getMapPosFromGrid;
    _gunPos = getPosASL _vehicle;

	_solutions = [_shellType, _gunPos, _gunPos # 2, getDir _vehicle, _targetPos, _elTgt] call itc_land_ballistics_fnc_calcShellTypeSolutions;

	itc_land_guidance = getArray (configFile >> "CfgMagazines" >> lbData [2402, lbCurSel 2402] >> "itc_land_guidance");

	if (count itc_land_guidance > 0) then {
		if (count _solutions > 0) then {
			_solutions apply {
				_x set [3,800];
			};
		};
	};
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
	[_vehicle,_curMag] spawn {
        params ["_vehicle","_curMag"];
		disableSerialization;
		private _fuze  = getText (configFile >> "CfgMagazines" >> lbData [2402, lbCurSel 2402] >> "itc_land_fuze");

       //private _fuzeValues = _vehicle getVariable ["itc_land_fuzeValues",0];
		//if (isNil "itc_land_fuzeDesc") then { itc_land_fuzeDesc = lbText [1904,itc_land_selectedFuzeIndex]; };
        private _fuzeDesc = _vehicle getVariable ["itc_land_selectedFuzeDesc",(lbText [1904,lbCurSel 1904])];
        private _fuzeValues = _vehicle getVariable ["itc_land_fuzeValues",0];

		switch (lbData [1904, lbCurSel 1904 ]) do {
			case "pd" : {
				_fuzeText = _fuzeDesc;
			};
			case "prox" : {
				private _proxHOB = getNumber (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "proxHOB");
				//itc_land_fuzeValues = _proxHOB;
                _vehicle setVariable ["itc_land_fuzeValues",_proxHOB,true];
				_fuzeText = Format ["%1: %2m",_fuzeDesc,_proxHOB];
			};
			case "time" : {
				private _fuzeTime = parseNumber(ctrlText 1906);
                _vehicle setVariable ["itc_land_fuzeValues",_fuzeTime,true];
                _vehicle setVariable ["itc_land_mlrsfci_fuzeTime",_fuzeTime,true];
				_fuzeText = Format ["%1: %2s",_fuzeDesc,_fuzeTime];
			};
			case "delay" : {
                _vehicle setVariable ["itc_land_fuzeValues",0.005,true];
				_fuzeText = _fuzeDesc;
			};
		};
	};

	private _guidance = getArray (configFile >> "CfgMagazines" >> lbData [2402, lbCurSel 2402] >> "itc_land_guidance");

	if (count _guidance > 0) then {
		switch (_guidance # 0) do {
			case "gps_inertial" : {
				_targetGrid = ctrlText 1909;
				//player sidechat itc_land_guidance_targetGrid;
				_targetPos = [_targetGrid,true] call CBA_fnc_mapGridToPos;
				//player sidechat str _targetPos;
				_targetAlt = parseNumber(ctrlText 1911);
				_targetPos set [2,(_targetAlt - ace_common_mapAltitude)];
				//player sidechat str _targetPos;

				_vehicle setVariable ["itc_land_guidance_targetPos",_targetPos,true];
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
