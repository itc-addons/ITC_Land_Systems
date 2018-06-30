class CfgFunctions
{
  class itc_land_towedAmmoHandling {
    class functions {
      class init {
        file = "itc_land_towedAmmoHandling\functions\init.sqf";
        postInit = 1;
      };
      class action {
        file = "itc_land_towedAmmoHandling\functions\carrying\action.sqf";
      };
      class carry {
        file = "itc_land_towedAmmoHandling\functions\carrying\carry.sqf";
      };
      class drop {
        file = "itc_land_towedAmmoHandling\functions\carrying\drop.sqf";
      };
      class pickup {
        file = "itc_land_towedAmmoHandling\functions\carrying\pickup.sqf";
      };
    };
  };
};
