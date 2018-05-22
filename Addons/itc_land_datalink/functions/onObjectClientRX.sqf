/**
 * Non-player receive data over datalink
 * Params
 * - object
 * - transmission
 */
params ["_object","_transmission"];

private _datalinkMethods = _object getVariable "datalinkMethods";
{
  [_object, _transmission] call (missionNameSpace getVariable _x);
}forEach _datalinkMethods;
