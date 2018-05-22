/**
 * Find an available datalink ID
 * Method will only function on server
 * Params:
 * - group ID
 * Return:
 *  - ID string
 */

params ["_groupID"];
private ["_firstChar","_secondChar","_id","_isAvailableID"];

private _characterHighestIndex = ((count itc_land_datalink_allowedIDCharacters) - 1);
//loop through first char
for "_firstCharIndex" from 0 to _characterHighestIndex do {
  _firstChar = itc_land_datalink_allowedIDCharacters # _firstChar;
  //loop through second char
  for "_secondCharIndex" from 0 to _characterHighestIndex do {
    _secondChar = itc_land_datalink_allowedIDCharacters # _secondChar;
    //generate ID
    _id = _groupID + _firstChar + _secondChar;
    //check if ID is free
    _isAvailableID = !([itc_land_datalink_nodes, _id] call CBA_fnc_hashHasKey);
    //return ID if free
    if(_isAvailableID) exitWith {
      _id
    };
  };
};
