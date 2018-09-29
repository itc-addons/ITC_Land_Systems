  params ["_display"];
  private _map = (_display displayCtrl 10001);

  {
    private _direction = deg (_x animationPhase "mainTurret");
    _direction = (getDir _x - _direction);
    if(_direction > 360) then {_direction = _direction - 360;};
    private _position = getPos _x;
    _map drawIcon ["iconExplosiveGPDirectional",[0,0,1,1],_position, 24, 24, 0, "",0,0.05,"TahomaB","right"];
    _map drawLine [_x, (_position getPos [10000, _direction + 22]),[0,0,1,1]];
    _map drawLine [_x, (_position getPos [10000, _direction - 22]),[0,0,1,1]];
  }forEach (missionNameSpace getVariable ["itc_land_cobras",[]]);

  {
    _x params ["_roundCount","_origins","_lastActive"];
    _map drawIcon ["iconExplosiveGPDirectional",[1,0,0,1],_origins # 0, 24, 24, 0, str _roundcount,0,0.05,"TahomaB","right"];
  }forEach (missionNameSpace getVariable ["itc_land_cobra_firingPositions",[]]);
  {
    _x params ["_impactPoint","_impactTime"];
    if(time < _impactTime) then {
      _map drawIcon ["a3\ui_f\data\Map\Markers\Military\destroy_CA.paa",[1,0,0,1],_impactPoint, 24, 24, 0, str round(_impactTime - time),0,0.05,"TahomaB","right"];
    };
  }forEach (missionNameSpace getVariable ["itc_land_cobra_activeShells",[]]);
