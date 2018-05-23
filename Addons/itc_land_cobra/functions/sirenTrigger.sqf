params ["_target","_transmission"];
_transmission params ["_destination","_origin","_header","_type","_data"];

private _recvID = _target getVariable ["init_datalink_ext_id",""];
if(_origin == _recvID && _header == "cobra") then {
  if(_type == "shellDetected") then {
    _data params ["_position","_tof"];
    private _sirenTriggerDist = _target getVariable ["sirenTriggerDist", 500];
    if(_target distance _position < _sirenTriggerDist) then {
      private _sirenActive = _target getVariable ["sirenActive", false];
      private _sirenEndTime = _target getVariable ["sirenEndTime", time];
      if(_data > _sirenEndTime) then {
        _target setVariable ["sirenEndTime", (time + _tof)];
      };
      if(!_sirenActive) then {
        _target setVariable ["sirenActive", true];
        [_target] spawn {
          while{time < (_this # 0) getVariable "sirenEndTime"} do {
            (_this # 0) say3D ["alarmCar",150,0.8];
            sleep 2;
          };
        };
      };
    };
  };
};
