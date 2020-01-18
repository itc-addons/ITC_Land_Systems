call itc_land_rover_fnc_ui_populateListBox;
private _plane = call itc_land_rover_fnc_ui_curPlane;
private _feed = [_plane] call itc_land_rover_fnc_createFeed;
sliderSetPosition [1600, 5];
[{
  private _plane = call itc_land_rover_fnc_ui_curPlane;
  if(!dialog || !alive player) exitWith {
    [_this select 1] call CBA_fnc_removePerFrameHandler;
    call itc_land_rover_fnc_killFeed;
  };
  private _illumination = ([] call ace_common_fnc_ambientBrightness);
  ctrlShow [1201, (_illumination < 0.5)];
  if (isNil "_plane") exitWith {
    ctrlShow [2205, true];
    ctrlShow [1004, true];
    ctrlShow [1005, true];
  };
  [_plane] call itc_land_rover_fnc_ui_draw;
  ctrlShow [2205, (isNull (laserTarget _plane))];
  ctrlShow [1004, (isNull (laserTarget _plane))];
  ctrlShow [1005, (isNull (laserTarget _plane))];
  if (!(isNull (laserTarget _plane))) then {
    itc_land_rover_camera camSetPos (_plane modelToWorldVisual itc_land_rover_mempointPos);
    itc_land_rover_camera camSetTarget (getPos (laserTarget _plane));
    itc_land_rover_camera camSetFov itc_land_rover_ui_camFov;
  };
  itc_land_rover_camera camCommit 0;
}, 0, []] call CBA_fnc_addPerFrameHandler;
