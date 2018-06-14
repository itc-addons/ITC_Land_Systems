  params ["_display"];
  private _map = (_display displayCtrl 10001);
  {
    private _direction = direction _x;
    private _position = getPos _x;
    _map drawIcon ["iconExplosiveGPDirectional",[0,0,1,1],_position, 24, 24, 0, _x getVariable "datalink_id",0,0.05,"TahomaB","right"];
    _map drawLine [_x, (_position getPos [10000, _direction + 22]),[0,0,1,1]];
    _map drawLine [_x, (_position getPos [10000, _direction - 22]),[0,0,1,1]];
  }forEach (player getVariable ["cobra_vehicles",[]]);
  {
    _x params ["_roundCount","_origins","_lastActive"];
    _map drawIcon ["iconExplosiveGPDirectional",[1,0,0,1],_origins # 0, 24, 24, 0, str _roundcount,0,0.05,"TahomaB","right"];
  }forEach (player getVariable ["cobra_firingPositions",[]]);
  {
    _x params ["_impactPoint","_impactTime"];
    if(time < _impactTime) then {
      _map drawIcon ["a3\ui_f\data\Map\Markers\Military\destroy_CA.paa",[1,0,0,1],_impactPoint, 24, 24, 0, str round(_impactTime - time),0,0.05,"TahomaB","right"];
    };
  }forEach (player getVariable ["cobra_activeShells",[]]);
