params ["_btn"];
switch (_btn) do {
  case "dtv": {
    camUseNVG false;
    false setCamUseTI 0;
  };
  case "nvg": {
    camUseNVG true;
    false setCamUseTI 0;
  };
  case "whot": {
    camUseNVG false;
    true setCamUseTI 0;
  };
  case "bhot": {
    camUseNVG false;
    true setCamUseTI 1;
  };
  case "fov": {
    itc_land_rover_ui_camFov = 0.02 + ((10 - (sliderPosition 1600)) / 10) * 0.33;
  };
};
