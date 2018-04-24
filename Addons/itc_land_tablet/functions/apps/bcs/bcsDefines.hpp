#define GENIDENT format["%1%2",bcs_mission_code,[bcs_mission_start,4] call cba_fnc_formatNumber];(bcs_mission_start = bcs_mission_start + 1)
#define EMPTYMISSION(IDENT) [IDENT, "newMission",["Grid",-1,0,0,0,0,[0,0,0]],["Converged","ON",0,0]];
#define MISSION _mission = bcs_missions # bcs_mission_index
#define MISSIONPARAMS _mission params ["_ident", "_page","_targetPage","_engagePage"]; _targetPage params ["_targetType","_kpi","_in0","_in1","_in2","_in3"]; _engagePage params ["_sheafType","_quick","_sheafdir","_sheaflength"]
#define UINUMBER(IDC) parseNumber (ctrlText IDC)
#define UITEXT(IDC) ctrlText IDC
#define FINDIDENT(ARR,IDENT) ARR findIf {_x # 0 == IDENT}
