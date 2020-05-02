/*
 * unregister an event
 */
params ["_target", "_header", "_type"];

private _functions = _target getVariable "datalink_functions";
private _indexToRemove = _functions findIf {((_x # 1) == _target && (_x # 2) == _type)};
if(_indexToRemove > -1) then {
  _functions deleteAt _indexToRemove;
};
_target setVariable ["datalink_functions",_functions];
