class RocketPods;
class rockets_230mm_GAT : RocketPods {
  class Mode_16;
};
class itc_land_230mm_mlrs : rockets_230mm_GAT {
  modes[] = {"Mode_16"};
  displayName = "M230 MLRS";  
  magazineReloadTime = 30;
  magazines[] = {
    "itc_land_m230hex_12rnd",
    "itc_land_m230pgm_12rnd","itc_land_m230pgm_6rnd",
    "itc_land_m230icm_12rnd","itc_land_m230icm_6rnd",	
	"itc_land_m230mat_12rnd","itc_land_m230map_12rnd"
  };
  class Mode_16 : Mode_16 {
    displayName = "MLRS";
    artilleryCharge = 1;
	   reloadTime = 0.5;
	   
  };
  class EventHandlers
  {
      class itc_land_veh_weapons
      {
          fired = "_this call itc_land_veh_weapons_fnc_fired;";
      };
  };
};
