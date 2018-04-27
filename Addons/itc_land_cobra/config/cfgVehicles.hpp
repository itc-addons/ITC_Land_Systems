class CfgVehicles {
  class Tank_F;
  class LT_01_base_F : Tank_F {
    class EventHandlers;
  };
  class LT_01_scout_base_F : LT_01_base_F {
		author = "Yax";
    displayName = "AWC 305 Nyx COBRA";
    side = 2;
    scope = 2;
    crew = "I_crew_F";
    faction = "IND_F";
		class Components {};
    class EventHandlers : EventHandlers
    {
      class itc_land_cobra_eventHandlers
      {
          init = "_this call itc_land_cobra_fnc_vehicleInit;";
      };
    };
  };
};
