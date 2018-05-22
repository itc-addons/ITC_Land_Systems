/**
 * Process a connecting client
 * params: ID string, player
 * returns: nothing
 */
params ["_player", "_id"];

//validate the id
private _isAvailableID = false;
//check formating
([_id, true] call itc_land_datalink_fnc_validateID) params ["_isValidID","_errorsID"];
//check if it's free
private _existingID = [itc_land_datalink_nodes, _id] call CBA_fnc_hashGet;
if(isNil {_existingID}) then { // if it's occupied
  _isAvailableID = true;
};

//if valid and available then add it
if (_isAvailableID && _isValidID) then {
  [itc_land_datalink_nodes, _id, _player] call CBA_fnc_hashSet;
};
