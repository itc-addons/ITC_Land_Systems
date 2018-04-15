params ["_action"];
_vehicle = (vehicle player);
switch(_action) do {
  case "calc": {
    _gridField = ctrlText 1400;
    _elField = parseNumber (ctrlText 1401);
    _solutions = [vehicle player, _gridField, _elField] call itc_land_ballistics_fnc_solutions;
    _vehicle setVariable ["itc_land_tablet_fcs_solutions", _solutions];
    _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", 0];
  };
  case "prev" : {
    _solutionIndex = _vehicle getVariable "itc_land_tablet_fcs_solutions_index";
    _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", (_solutionIndex - 1) max 0];
  };
  case "next" : {
    _solutionIndex = _vehicle getVariable "itc_land_tablet_fcs_solutions_index";
    _solutions = _vehicle getVariable "itc_land_tablet_fcs_solutions";
    _vehicle setVariable ["itc_land_tablet_fcs_solutions_index", (_solutionIndex + 1) min ((count _solutions) - 1)];
  };
};
