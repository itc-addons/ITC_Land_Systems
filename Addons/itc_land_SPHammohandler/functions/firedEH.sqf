
private _gun = _this select 0;
private _weapon = _this select 1;
private _magazine = _this select 5;
private _shell = _this select 6;


_gun removeMagazine _magazine;
private _gunMags = magazines _gun;

itc_land_SPHammoHandler_status = "WAITING";
itc_land_SPHammoHandler_mode = "WAITING";
itc_land_roundsFired = itc_land_roundsFired + 1;

if (itc_land_SPHammoHandler_open) then {

	ctrlSetText [86010, "LOAD"];
	ctrlEnable [86009, true];
	ctrlEnable [86010, true];	

};
private _ammoToLoad = ((itc_land_sphloadersettings # 0) # 1);
private _roundCount = ((itc_land_sphloadersettings # 0) # 3);
if ((_ammoToLoad in _gunMags) && {(_roundCount < 1) || ((_roundCount >= 1) && (itc_land_roundsFired < _roundCount))}) then {
	[] call itc_land_SPHammoHandler_fnc_loadGun;
};
