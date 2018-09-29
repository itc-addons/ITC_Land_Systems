/**
 * Validate a datalink ID
 * Params:
 * - id string
 * - return errors bool, default false
 * - broadcast bool, default false, when true it allows 00 combinations for broadcasting
 * Return:
 *  - default: bool
 *  - If errors are on: [bool, errors]
 */

params ["_IDString",["_returnErrors", false],["_broadCastAllowed",false]];

//initialise return variables
private _isValid = true;
private _errors = [];
//prepare the ID string for checking
private _characterArray = _IDString splitString "";
private _idLength = count _characterArray;

//check if IDs have broadcasting IDs in them
if(!_broadCastAllowed) then {
  private _groupString = [_IDString, 0, 2] call CBA_fnc_substr;
  private _IDString = [_IDString, 2, 2] call CBA_fnc_substr;
  if(_groupString == "00" || _IDString == "00") then {
    _errors pushBack "Illegal broadcasting combination 00 found";
  };
};

//check the ID length
if(count _characterArray != itc_land_datalink_IDLength) then {
  _isValid = false;
  _errors pushBack format["Incorrect ID length %1, expected %2", _idLength, itc_land_datalink_IDLength];
};

//check the ID characters
{
  if(!(_x in itc_land_datalink_allowedIDCharacters)) then {
  	_isValid = false;
    _errors pushBack format ["Invalid character %1 at %2", _x, _forEachIndex];
  };
} forEach _characterArray;

//if error handling is on, exit with errors;
if(_returnErrors) exitWith {
  [_isValid, _errors];
};

_isValid
