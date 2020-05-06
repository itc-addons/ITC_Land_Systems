// Returns an array of COBRA siren types in different formats
// 0 (Default) = single array of config and mission defined sirens
// 1 = nested array: 0: array of sirens defined in config, 1: array of sirens defined in mission

params ["_mode"];
private _configTypes = [];
{
  if (getNumber _x > 0) then {
    _configTypes pushBackUnique configName _x;
  };
} forEach configProperties [configFile >> "ITC_Land_COBRA_SirenTypes", "isNumber _x"];
private _missionTypes = missionNameSpace getVariable ["ITC_Land_COBRA_SirenTypes",[]];
private _allTypes = [];

switch (_mode) do {
  case 0 : {
    { _allTypes pushBackUnique _x; } forEach _configTypes;
    { _allTypes pushBackUnique _x; } forEach _missionTypes;
  };
  case 1 : {
    _allTypes append [_configTypes];
    _allTypes append [_missionTypes];
  };
  default { };
};

_allTypes;
