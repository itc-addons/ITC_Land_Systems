private _vehicle = vehicle ace_player;
private _vehMags = magazines _vehicle;
private _magArray = [];

lbClear 86001; //clear listbox

//create array of magazines to count in the ammo handler
{
	private _mag = _x;
	private _isCounted = 0;
	_isCounted = (configFile >> "CfgMagazines" >> _mag >> "itc_land_CountInAH") call BIS_fnc_getCfgData;
	//is round to be counted in ammo list: Not to include _chgX variants
	if(_isCounted == 1) then {
		_magArray pushBack _x;
	};
} forEach _vehMags;

//consolidate array of magazines so we know how many of each we have.
_magArray = _magArray call BIS_fnc_consolidateArray;

//populate listbox
{
	private _mag = _x # 0;
	private _count = _x # 1;
	private	_displayName = getText (configFile >> "CfgMagazines" >> _mag >> "displayName");

	private _index = lbAdd [86001, format["%1 -- %2", _count, _displayName]];
	lbSetData [86001, _index, _mag];	

} forEach _magArray;
