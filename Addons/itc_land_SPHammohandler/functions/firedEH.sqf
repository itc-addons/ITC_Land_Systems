
_gun = _this select 0;
_weapon = _this select 1;
_magazine = _this select 5;
_shell = _this select 6;

_gun removeMagazine _magazine;
itc_land_SPHammoHandler_status = "WAITING";
if (itc_land_SPHammoHandler_open) then {

ctrlSetText [86009, "LOAD"];
ctrlEnable [86009, true];
ctrlEnable [86010, false];	

};
