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
 
 _fixed = _fixed * (6400 / 360);
 _deflecting = _deflecting * (6400 / 360);
 
 
 
 private _def = (_fixed - _def) + 3200;
 