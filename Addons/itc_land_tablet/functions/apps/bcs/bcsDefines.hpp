#define GENIDENT format["%1%2",bcs_mission_code,[bcs_mission_start,4] call cba_fnc_formatNumber];bcs_mission_start = bcs_mission_start + 1
#define EMPTYMISSION(IDENT) [IDENT, "newMission",[0,-1,"0","0","0","0",[0,0,0]],[0,0,0,0,0,""], 0, 0, 0];
#define MISSION _mission = bcs_missions select bcs_mission_index
#define SAVEMISSION(MSN) bcs_missions set [bcs_mission_index, MSN]
#define MISSIONPARAMS _mission params ["_ident", "_page","_targetPage","_engagePage", "_curSolution", "_solutionLimit", "_shotEnd"]; \
_targetPage params ["_targetTypeIndex","_kpi","_in0","_in1","_in2","_in3","_tgtPos"]; \
_engagePage params ["_sheafTypeIndex","_quick","_sheafdir","_sheaflength","_shellTypeIndex","_magazineType"]
#define UINUMBER(IDC) parseNumber (ctrlText IDC)
#define UITEXT(IDC) ctrlText IDC
#define SETTEXT(IDC,TXT) (_display displayCtrl IDC) ctrlSetText TXT
#define FINDIDENT(ARR,IDENT) ARR findIf {_x # 0 == IDENT}
