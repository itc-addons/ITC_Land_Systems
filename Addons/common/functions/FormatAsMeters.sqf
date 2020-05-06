/*
 * Author: Pabst Mirror, Toadball
 * Converts input distance in meters to string with prefix for negative angles
 * Derived from old: ace_mk6mortar_fnc_dev_formatNumber
 *
 * Arguments:
 * 0: Input number <NUMBER>
 * 1: Number of decimal places <NUMBER>
 * 2: Number of integer places, used for adding leading 0s <NUMBER>
 *
 * Return Value:
 * Formatted number <STRING>
 *
 * Example:
 * [45, 0, 4] call itc_land_common_fnc_FormatAsMeters = "0045"
 *
 */

params ["_input", "_decimalPlaces", "_integerPlaces"];

private _prefix = if (_input < 0) then {"-"} else {""};
private _return = [abs (_input), _integerPlaces, _decimalPlaces, false] call CBA_fnc_formatNumber;
(_prefix + _return)
