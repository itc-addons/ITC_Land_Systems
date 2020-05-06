params ["_display"];
private _group = _display displayCtrl 170;
private _boxHidePosition = if (((call CBA_fnc_getFOV) # 0) > 0.1) then [{[22 * (safezoneW / 64),10 * 	(safezoneH / 40)]}, {[-1,-1]}];
(_group controlsGroupCtrl 1020) ctrlSetPosition _boxHidePosition;
(_group controlsGroupCtrl 1020) ctrlCommit 0;
(_group controlsGroupCtrl 1011) ctrlSetText (if (currentVisionMode player == 0) then [{"DTV"}, {"HOT"}]);

itc_land_spike_lockInformation params ["_lockObject", "_lockPosition", "_lockLostTime", "_originalLockPosition"];
if (!isNil "_lockObject") then {
  private _screenPos = worldToScreen (_lockObject modelToWorld _lockPosition);
  private _screenPosX = (_screenPos # 0) - safeZoneX;
  private _screenPosY = (_screenPos # 1) - safeZoneY;
  _screenPosX = _screenPosX - (10 * (SafeZoneW / 64));
  _screenPosY = _screenPosY - (10 * (SafeZoneH / 40));
  (_group controlsGroupCtrl 1021) ctrlSetPosition [_screenPosX, _screenPosY];
  (_group controlsGroupCtrl 1022) ctrlSetPosition [_screenPosX, _screenPosY];
} else {
  (_group controlsGroupCtrl 1021) ctrlSetPosition [22 * (safezoneW / 64),10 * 	(safezoneH / 40)];
  (_group controlsGroupCtrl 1022) ctrlSetPosition [-1, -1];
};
(_group controlsGroupCtrl 1021) ctrlCommit 0;
(_group controlsGroupCtrl 1022) ctrlCommit 0;
