params ["_target","_transmission"];
_transmission params ["_destination","_origin","_header","_type","_data"];

private _recvID = _target getVariable ["init_datalink_ext_id",""];
if(_origin == _recvID && _header == "cobraSiren") then {
  if(_type == "trigger") then {
    private _sirenActive = _target getVariable ["cobraSirenActive", false];
    private _sirenEndTime = _target getVariable ["sirenEndTime", time];
    if(_data > _sirenEndTime) then {
      _target setVariable ["sirenEndTime", _data];
    };
    if(!_sirenActive) then {
      _target setVariable ["cobraSirenActive", true];
      [_target] spawn {
        while{time < (_this # 0) getVariable "sirenEndTime"} do {
          (_this # 0) say3D ["alarmCar",150,0.8];
          sleep 2;
        };
      };
    };
  };
};
