params ["_action"];
_vehicle = vehicle player;
if(_action == "save") then {
  _splashTime = ctrlText 3205;
  _vehicle setVariable ["bcs_splash_time", parseNumber _splashTime];
  _missionCode = ctrlText 3206;
  _vehicle setVariable ["bcs_mission_code", _missionCode];
  _missionStart = ctrlText 3207;
  _vehicle setVariable ["bcs_mission_start", parseNumber _missionStart];
};
