params ["_projectile", "_steerPoint","_frameTime", "_angleX", "_angleY","_stage","_targetCoordinates","_azimuth"];
//(_this select 0) params ["_projectile", "_ammo", "_position", "_targetCoordinates", "_stage", "_time", "_angle", "_lastFrameTime","_azimuth","_steerPoint"];
private _return = [_stage, _steerPoint];
if(_stage == "SEP") exitWith {
  if(time > _time + 1) then {
    //if(_azimuth > 0) then {
    //  _return set [0, "NAV"];
    //  _return set [1,(_this call itc_air_sdb_fnc_navSteerPoint)];
    //} else {
      _return set [0, "TURN"];
    //};
  };
  _return
};


if(_stage == "TURN") exitWith {
  if((velocity _projectile) # 2 < 1) then {
    _return set [0, "GLIDE"];
  };
  _return
};

if(_stage == "GLIDE") then {
  _return set [1,_targetCoordinates];
  //[ASLtoAGL (_return # 1), "ColorYellow"] call test_fnc_mark;
};
_return
