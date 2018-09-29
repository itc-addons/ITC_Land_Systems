/*
 * Register an event to an object
 */
params ["_target", "_header", "_type", "_code"];

private _functions = _target getVariable ["datalink_functions",[]];
_functions pushBack _this;
_target setVariable ["datalink_functions",_functions];
