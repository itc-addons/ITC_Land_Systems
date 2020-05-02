#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13701, true];
[_display, IDC_workspace_header, "FIRING COMMAND INTERFACE"] call itc_land_tablet_fnc_setText;
//(_display displayCtrl 1501) lbAdd "MANUAL TARGETING";
lbClear (_display displayCtrl 1512);
(_display displayCtrl 1512) lbAdd "L-FCS TARGETING";
(_display displayCtrl 1512) lbSetCurSel 0;
//[_display,1] call itc_land_tablet_fnc_fcimode_onlblselchanged;

if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions", [], true];
};
if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions_index"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0, true];
};

//Clear or populate local FCS inputs and solution output
if ((!(isNil {_vehicle getVariable "itc_land_tablet_fcs_tgtgrid"}))&&(!(isNil {_vehicle getVariable "itc_land_tablet_fcs_tgtelev"})) ) then {
	ctrlSetText [2400,_vehicle getVariable "itc_land_tablet_fcs_tgtgrid"];
	ctrlSetText [2401,str(_vehicle getVariable "itc_land_tablet_fcs_tgtelev")];
} else {
	ctrlSetText [2400,""];
	ctrlSetText [2401,""];
};
  private _magazineTypes = (((
    "(getText (_x >> ""weaponClass"")) == ((weapons vehicle player)#0)"
    configClasses
    (configFile >> "itc_land_ballistics" >> "batteryTypes")
  ) # 0) >> "ammunition") call BIS_fnc_getCfgData;
  private _magazines = [];
  {
	if (_x in _magazineTypes) then {
		_magazines pushBack _x;
	};
  } forEach ( magazines _vehicle );
 

  private _magazineNames = _magazines apply {
    getText (configFile >> "CfgMagazines" >> _x >> "displayName");
  };
  
  [2402,_magazineNames,0,_magazines] call itc_land_tablet_fnc_fillComboBox;
  [2402, lbCurSel 2402] call itc_land_tablet_fnc_mlrsfci_onlblselchanged_roundType;
  
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


/*
if (isNil "itc_land_fcimode") then {
	lbSetCurSel [1501,0];
	[_display,0] call itc_land_tablet_fnc_fcimode_onlblselchanged;
} else {
	lbSetCurSel [1501,itc_land_fcimode # 0];
	[_display,itc_land_fcimode # 0] call itc_land_tablet_fnc_fcimode_onlblselchanged;
};
*/
//(_display displayCtrl 1500) lbAdd "G: 0101   CH: 2    AZ: 800    DF: 3982    QD: 368    TOF:23.31";
