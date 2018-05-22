/**
 * Find objects for the IDs
 * Method will only function on server
 * params: ID string
 * returns: targets
 */
params ["_id"];
private ["_groupID","_nodeID","_target","_groupMatch","_nodeMatch"];

private _targets = [];

//split the target ID in to group and node
private _targetGroupID = [_id, 0, 2] call CBA_fnc_substr;
private _targetNodeID = [_id, 2, 2] call CBA_fnc_substr;

//loop through all IDs
private _allIDs = [itc_land_datalink_nodes] call CBA_fnc_hashKeys;
{
  if(_x == _id) then {
    //if ID matches the target ID then push back target
    _target = [itc_land_datalink_nodes, _x] call CBA_fnc_hashGet;
    _targets pushBack _target;
  } else {
    if(_targetGroupID == "00" || _targetNodeID == "00") then {
      //split ID in to group and node
      _groupID = [_x, 0, 2] call CBA_fnc_substr;
      _nodeID = [_x, 2, 2] call CBA_fnc_substr;
      //check if they match
      _groupMatch = (_groupID == _targetGroupID || _targetGroupID == "00");
      _nodeMatch = (_nodeID == _targetNodeID || _targetNodeID == "00");
      //if both match then push back target
      if(_groupMatch && _nodeMatch) then {
        _targets pushBack _target;
      };
    };
  };
}forEach _allIDs;

_targets
