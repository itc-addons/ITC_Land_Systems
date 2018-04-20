params ["_action"];
_vehicle = (vehicle player);
switch(_action) do {
  case "side1": {
    _vehicle setVariable ["page", "settings"];
  };
  case "side2": {
    _vehicle setVariable ["page", "setup"];
  };
  case "side3": {
    _vehicle setVariable ["page", "locStores"];
  };
  case "side5": {
    _vehicle setVariable ["page", "newMission"];
  };
};
