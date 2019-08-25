
params ["_gun", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_shell", "_gunner"];

if (!(local _gunner)) exitWith {};

_gun removeMagazine _magazine;
private _gunMags = magazines _gun;

private _roundsFired = _gun getVariable ["itc_land_roundsFired",0];
_roundsFired = _roundsFired +1;
_gun setVariable ["itc_land_roundsFired",_roundsFired,true];

_gun setVariable ["itc_land_ammoHandler_status",[1,0,"WAITING"],true];
 [] call itc_land_SPHammoHandler_fnc_updateStatus;

private _sphloadersettings = _gun getVariable ["itc_land_sphloadersettings", []];
private _ammoToLoad = ((_sphloadersettings # 0) # 1);
private _roundCount = ((_sphloadersettings # 0) # 3);

if ((_ammoToLoad in _gunMags) && {(_roundCount < 1) || ((_roundCount >= 1) && (_roundsFired < _roundCount))}) then {
	[] call itc_land_SPHammoHandler_fnc_loadGun;
} else {
    if (_ammoToLoad in _gunMags) then {
        _gun setVariable ["itc_land_ammoHandler_status",[1,0,"WAITING"],true];
        [] call itc_land_SPHammoHandler_fnc_updateStatus;
    } else {
        _gun setVariable ["itc_land_ammoHandler_status",[0,0,"WAITING"],true];
        [] call itc_land_SPHammoHandler_fnc_updateStatus;
    };
};
