private _plane = call itc_land_rover_fnc_ui_curPlane;
private _feed = [_plane] call itc_land_rover_fnc_createFeed;

private _turret = [_plane] call itc_land_rover_fnc_getLaserTurret;
if (isNil "_turret") exitWith {};
if (count _turret == 1 && {_turret # 0 == -1}) then {
  private _memPointName = getText (configFile >> "CfgVehicles" >> typeOf _plane >> "memoryPointDriverOptics");
  itc_land_rover_mempointPos = _plane selectionPosition _memPointName;
} else {
  private _turretConfig = [_plane, _turret] call CBA_fnc_getTurret;
  private _memPointName = getText (_turretConfig >> "memoryPointGunnerOptics");
  itc_land_rover_mempointPos = _plane selectionPosition _memPointName;
};
