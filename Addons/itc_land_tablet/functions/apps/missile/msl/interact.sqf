params ["_action"];
private ["_targetPos"];
_vehicle = (vehicle player);
_display = findDisplay 32562;

switch(_action) do {
    case "calc": {
        private _gridField = ctrlText 13716;
        private _elField = parseNumber (ctrlText 13717);
        _targetPos = [_gridField, false] call ace_common_fnc_getMapPosFromGrid;
        _targetPos = _targetPos vectorAdd [0,0,_elField];

        _vehicle setVariable ["itc_land_targetPos",_targetPos];
    };
};

_targetPos = _vehicle getVariable ["itc_land_targetPos", nil];
if(!isNil{_targetPos}) then {
  private _dir = _vehicle getDir _targetPos;
  private _dirMils = (_dir / 360) * 6400;
  private _dist = _vehicle distance _targetPos;
  _solutionString = format["Distance %1m<br/>", _dist];
  _solutionString = _solutionString + format["Azimuth %1 mils<br/>", _dirMils];
  _solutionString = _solutionString + "Launch Elevation 800 mils<br/>";
  (_display displayCtrl 137100) ctrlSetStructuredText parseText _solutionString;
};
