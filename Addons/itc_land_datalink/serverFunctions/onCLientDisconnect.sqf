/**
 * Process a discconnecting client
 * params: ID string, player, requesting system string
 */
params ["_player","_id"];

//remove all IDs with this target
if(isNil {_id} || _id == "") then {
  private _toRemoveIDs = [];
  [itc_land_datalink_nodes,{
    if(_value == _player) then {
      _toRemoveIDs pushBack _key;
    };
  }] call CBA_fnc_hashEachPair;
  {
    [itc_land_datalink_nodes,_x] call CBA_fnc_hashRem;
  }forEach _toRemoveIDs;
} else {
  [itc_land_datalink_nodes,_id] call CBA_fnc_hashRem;
};
