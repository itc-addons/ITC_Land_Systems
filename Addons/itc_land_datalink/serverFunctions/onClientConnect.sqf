/**
 * Process a connecting client
 * params: ID string, player, requesting system string
 * returns: nothing, sends targetEvent to origin with [success, [strings]]
 */
 params ["_player","_id","_requestingSystem"];

//auto-assign ID if not set
if(isNil{_id} || _id == "") then {
  _id = ["01"] call itc_land_datalink_fnc_findAvailableID;
};

//validate the id
private _isAvailableID = false;
//check formating
([_id, true] call itc_land_datalink_fnc_validateID) params ["_isValidID","_errors"];
//check if it's free
private _isAvailableID = !([itc_land_datalink_nodes, _id] call CBA_fnc_hashHasKey);
if(!_isAvailableID) then {
  _errors pushBack "ID unavailable";
};

//if valid and available then add it
if (_isAvailableID && _isValidID) then {
  [itc_land_datalink_nodes, _id, _player] call CBA_fnc_hashSet;
  private _successMessage = format ["Connection success with ID %1", _id];
  [_requestingSystem,[true,[""]],_player] call CBA_fnc_targetEvent;
} else { //return errors
  [_requestingSystem,[false,_errors],_player] call CBA_fnc_targetEvent;
};
