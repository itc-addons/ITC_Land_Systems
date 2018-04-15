/*
 * Author: Toadball
 * Takes directions in degrees, converts them to mils and then calculates deflection.
 *
 * Arguments:
 * 0: Direction to fixed point <NUMBER>
 * 1: Direction to deflect to: Gun direction / Target Direction <NUMBER>
 *
 * Return Value:
 * number <STRING>
 *
 * Example:
 * [45, 90] call ace_mk6mortar_fnc_dev_formatNumber = "0800"
 *
 * Public: No
 */
 
 params ["_fixed","_deflecting"];
 
 //convert degrees to mills
_fixed = (_fixed / 360) * 6400;
_deflecting = (_wepDir / 360) * 6400;
if ((_fixed < 1) && (_deflecting > 3200)) then {_fixed = 6400};

//calculate deflection using mills
private _df = 3200 - (_fixed - _deflecting);

// ensure numbers are in range 0 - 6400
_df = if(_df < 0) then [{_df + 6400}, {_df}];
_df = if(_df > 6400) then [{_df - 6400}, {_df}];

[_df,4,0] call CBA_fnc_formatNumber;
