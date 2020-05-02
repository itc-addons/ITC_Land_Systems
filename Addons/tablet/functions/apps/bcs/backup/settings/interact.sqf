params ["_action"];
_vehicle = [] call itc_land_common_fnc_getCurVehicle;
if(_action == "save") then {
  _splashTime = ctrlText 3205;
  missionNameSpace setVariable ["bcs_splash_time", parseNumber _splashTime];
  _missionCode = ctrlText 3206;
  missionNameSpace setVariable ["bcs_mission_code", _missionCode];
  _missionStart = ctrlText 3207;
  missionNameSpace setVariable ["bcs_mission_start", parseNumber _missionStart];
};
