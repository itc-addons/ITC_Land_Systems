params ["_action"];
_vehicle = (vehicle player);
switch(_action) do {
  //case "side1": {
  //  _vehicle setVariable ["page", "settings"];
  //};
  case "side2": {
    _vehicle setVariable ["page", "map"];
  };
  case "side3": {
    _vehicle setVariable ["page", "data"];
  };
  //case "side5": {
  //  [player getVariable ["itc_land_cobra_id","xxxx"],"AB01","cobra","getData",""] call itc_land_datalink_fnc_transmit;
  //};
};
