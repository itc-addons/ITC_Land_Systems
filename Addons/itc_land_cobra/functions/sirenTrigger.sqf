params ["_siren","_position","_impactTime"];
private _sirenTriggerDist = _siren getVariable ["sirenTriggerDist", 500];
if(_siren distance _position < _sirenTriggerDist) then {
  private _sirenActive = _siren getVariable ["sirenActive", false];
  private _sirenEndTime = _siren getVariable ["sirenEndTime", time];
  if(_impactTime > _sirenEndTime) then {
    _siren setVariable ["sirenEndTime", _impactTime];
  };
  if(!_sirenActive) then {
    _siren setVariable ["sirenActive", true];
    [_siren] spawn {
      while{time < (_this # 0) getVariable "sirenEndTime"} do {
        (_this # 0) say3D ["alarmCar",200,1];
        sleep 2;
      };
      (_this # 0) setVariable ["sirenActive", false];
    };
  };
};
