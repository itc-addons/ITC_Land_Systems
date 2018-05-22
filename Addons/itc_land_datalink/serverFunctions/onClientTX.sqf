/**
 * Transmit data over datalink
 * Params
 * - Destination id
 * - origin ID
 * - header
 * - type
 * - data
 */
params["_destination","_origin","_header","_type","_data"];

//find all targets matching the destination ID
private _targets = [_destination] call itc_land_datalink_fnc_findIDTargets;

//split these up in to players and non players
private _playerTargets = [];
private _nonPlayerTargets = [];
{
  if(isPlayer _x) then {
    _playerTargets pushBack _x;
  } else {
    _nonPlayerTargets pushBack _x;
  };
}forEach _targets;

//send it on to players
["clientRX", _this ,_playerTargets] call CBA_fnc_targetEvent;

//send it on to non-player targets
{
  [_x,_this] remoteExec ["itc_land_datalink_fnc_onObjectClientRX", _x, false];
}forEach _nonPlayerTargets;
