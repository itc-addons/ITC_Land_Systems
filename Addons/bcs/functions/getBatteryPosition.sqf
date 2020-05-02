/*
 * Gets the center point of a list of howitzers
 * Params: array of howitzers([gun number, position string, positionASL, elevation, direction])
 * Returns: positionASL
 */
params ["_gunList"];
if(count _gunList == 0) exitWith {[0,0,0]};
//add up all the eastings, northings and elevations
_totalEasting = 0;
_totalNorthing = 0;
_totalElev = 0;

{
  (_x # 2) params ["_easting", "_northing", "_elev"];
  _totalEasting = _totalEasting + _easting;
  _totalNorthing  = _totalNorthing + _northing;
  _totalElev = _totalElev + _elev;
}forEach _gunList;

_number = count _gunList;
//return the totals divided by the gun count
[_totalEasting / _number, _totalNorthing / _number, _totalElev / _number]
