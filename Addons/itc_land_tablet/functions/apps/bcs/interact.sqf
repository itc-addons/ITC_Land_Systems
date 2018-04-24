params ["_action"];
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
    _vehicle setVariable ["bcs_mission_index", -1];
  };
  case "sideList": {
    _index = lbCurSel 15114;
  };
};
