#include "..\..\..\BCS_idc_defines.hpp"
ctrlShow [13410, true];
[_display, IDC_workspace_header, "FIRING COMMAND INTERFACE"] call itc_land_tablet_fnc_setText;

if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions", [], true];
};
if(isNil{_vehicle getVariable "itc_land_tablet_fcs_solutions_index"}) then {
  _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0, true];
};
//Clear or populate local FCS inputs and solution output

if ((!(isNil {_vehicle getVariable "itc_land_tablet_fcs_tgtgrid"}))&&(!(isNil {_vehicle getVariable "itc_land_tablet_fcs_tgtelev"})) ) then {
	ctrlSetText [1400,_vehicle getVariable "itc_land_tablet_fcs_tgtgrid"];
	ctrlSetText [1401,str(_vehicle getVariable "itc_land_tablet_fcs_tgtelev")];
} else {
	ctrlSetText [1400,""];
	ctrlSetText [1401,""];
};


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

lbClear 1501;
(_display displayCtrl 1501) lbAdd "MANUAL TARGETING";
(_display displayCtrl 1501) lbAdd "L-FCS TARGETING";
if (isNil "itc_land_fcimode") then {
	lbSetCurSel [1501,0];
	[_display,0] call itc_land_tablet_fnc_fcimode_onlblselchanged;	
} else {
	lbSetCurSel [1501,itc_land_fcimode # 0];
	[_display,itc_land_fcimode # 0] call itc_land_tablet_fnc_fcimode_onlblselchanged;				
};

//Hide fuze and guidance specific fields
{ ctrlShow [_x, false]; } forEach [1907,1908,1909,1910,1911,1912,1913,1914];
//Set selected ammo type
private _selectedMagIndex = _vehicle getVariable ["fci_selectedMagIndex",0];
lbSetCurSel [1902, _selectedMagIndex];
[1902,_selectedMagIndex] call itc_land_tablet_fnc_fci_onSelectAmmo;

