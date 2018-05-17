params ["_action"];
_vehicle = (vehicle player);
switch(_action) do {
  case "side1": {
    _vehicle setVariable ["page", "fcs"];
  };
  case "side2": {
    _vehicle setVariable ["page", "status"];
  };
};
