if (!isServer) exitWith {};
params ["_cbr"];

itc_land_cobras pushBack _cbr;

private _linkID = _cbr getVariable ["init_datalink_id",""];
[_cbr,"","object_register",true] call itc_land_datalink_fnc_connect;

[_cbr, "cobra", "getData", {_this call itc_land_cobra_fnc_getCobraData;}] call itc_land_datalink_fnc_registerEvent;

_cbr setVariable ["shells", []];
_cbr setVariable ["origins", []];
_cbr setVariable ["firingPositions", []];
_cbr setVariable ["engagements", []];
_cbr setVariable ["start", 1000];
_cbr setVariable ["engagementTime", 30];

_cbr setVariable ["activeShells", []];
[{
  (_this select 0) params ["_cbr"];
  if(!alive _cbr) exitWith {
    [_this select 1] call CBA_fnc_removePerFrameHandler;
  };
  if(vectorMagnitude (velocity _cbr) < 1) then {
    [_cbr] call itc_land_cobra_fnc_scan;
  };
}, 1, [_cbr]] call CBA_fnc_addPerFrameHandler;


/*
[player,"AB01","object_register", true] call itc_land_datalink_fnc_connect;

[player, "cobra", "returnData", {
  params ["_target","_transmission"];
  _transmission params ["_destination","_origin","_header","_type","_data"];
  _data params ["_vehicle","_origins","_engagements","_activeShells"];
  _cobras = _target getVariable ["cobra_vehicles",[]];
  _target setVariable ["cobra_vehicles",_cobras + [_vehicle]];
  _target setVariable ["cobra_firingPositions",_origins];
  _target setVariable ["cobra_engagements",_engagements];
  _target setVariable ["cobra_activeShells",_activeShells];
}] call itc_land_datalink_fnc_registerEvent;

[player, "cobra", "shellDetected", {
  params ["_target","_transmission"];
  _transmission params ["_destination","_origin","_header","_type","_data"];
  _data params ["_position","_tof"];
  _activeShells = _target getVariable ["cobra_activeShells",[]];
  _target setVariable ["cobra_activeShells",_activeShells + [[_position, _tof + time]]];
}] call itc_land_datalink_fnc_registerEvent;

["0111","AB01","cobra","getData",""] call itc_land_datalink_fnc_transmit;

cbr_map_app_render = {
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
};


*/
