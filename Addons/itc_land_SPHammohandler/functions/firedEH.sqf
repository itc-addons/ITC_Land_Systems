
private _gun = _this select 0;
private _weapon = _this select 1;
private _magazine = _this select 5;
private _shell = _this select 6;


_gun removeMagazine _magazine;
private _gunMags = magazines _gun;

itc_land_SPHammoHandler_status = "WAITING";

if (itc_land_SPHammoHandler_open) then {

	ctrlSetText [86010, "LOAD"];
	//ctrlEnable [86009, true];
	//ctrlEnable [86010, false];	

};
private _autoloadersetting = ((itc_land_sphloadersettings # 0) # 1);
if (_autoloadersetting in _gunMags) then {
	[] call itc_land_SPHammoHandler_fnc_loadGun;
};
