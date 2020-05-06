/*
 * itc_land_spike_fnc_handleLock
 */

private _viewASL = AGLtoASL positionCameraToWorld [0,0,0];
private _viewDir = _viewASL vectorFromTo (AGLtoASL positionCameraToWorld [0,0,1]);
itc_land_spike_lockInformation params ["_lockObject", "_lockPosition", "_lockLostTime", "_originalLockPosition"];
if (!isNil "itc_land_spike_currentMissile") then {
 _viewASL = getPosASL itc_land_spike_currentMissile;
 private _viewTarget = if (!isNil "_lockObject") then [{getPosASL _lockObject}, {itc_land_spike_targetPos}];
 _viewDir = _viewASL vectorFromTo _viewTarget;
};

private _missileActivationTime = missionNamespace getVariable ["itc_land_spike_activated_" + currentMagazineDetail player, nil];
if (isNil "_missileActivationTime") then {
  missionNamespace setVariable ["itc_land_spike_activated_" + currentMagazineDetail player, cba_missionTime];
} else {
  if (inputAction "gunElevAuto" > 0 && isNil "_lockObject") then {
    systemChat str ["LASING", cursorTarget];
    private _target = [_viewASL, _viewDir, true] call itc_land_spike_fnc_intersectScreenToWorld;
    private _intersect = [_viewASL, _viewDir] call itc_land_spike_fnc_intersectScreenToWorld;
    private _targetPos = if (!isNil "_target") then [{_target worldToModelVisual (ASLtoAGL _intersect)}, {[0,0,0]}];
    itc_land_spike_lockInformation = [_target, _targetPos, nil, _targetPos];
  };
};

//systemChat str itc_land_spike_lockInformation;
if (!isNil "_lockObject") then {
    private _targetASL = _lockObject modelToWorldVisualWorld _lockPosition;
    private _direction = getCameraViewDirection player;
    private _vector = _viewASL vectorFromTo _targetASL;
    private _angle = acos (_vector vectorDotProduct _viewDir);
    private _visibility = [player, "FIRE", _lockObject] checkVisibility [_viewASL, _targetASL];
    if (_visibility < 0.1 && isNil "_lockLostTime") then {
      itc_land_spike_lockInformation set [2, cba_missionTime];
    };
    if (!isNil "_lockLostTime") then {
      if (_visibility > 0.2) then {
        itc_land_spike_lockInformation set [1, _originalLockPosition];
        itc_land_spike_lockInformation set [2, nil];
      } else {
        itc_land_spike_lockInformation set [1, _lockPosition vectorAdd [random 0.1, random 0.1, random 0.1]];
        if (cba_missionTime - _lockLostTime > 2) then {itc_land_spike_lockInformation = [nil, [0,0,0], nil, [0,0,0]];};
      };
    };
    //systemChat str _visibility;
    if (_angle > 1.5 && isNil "itc_land_spike_currentMissile") then {
      itc_land_spike_lockInformation = [nil, [0,0,0], nil, [0,0,0]];
    };
    itc_land_spike_targetPos = _lockObject modelToWorldVisualWorld _lockPosition;
    //drop ["\a3\data_f\Cl_basic","","Billboard",1,20,ASLtoAGL itc_land_spike_targetPos,[0,0,0],1,1.275,1.0,0.0,[1],[[0,0,1,1]],[0],0.0,2.0,"","",""];//red fwd
};
