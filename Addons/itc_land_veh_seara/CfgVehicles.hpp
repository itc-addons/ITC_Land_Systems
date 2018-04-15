class CfgVehicles {
  class Tank_F;
  class MBT_01_base_F : Tank_F {
    class Turrets;
  };
  class MBT_01_mlrs_base_F : MBT_01_base_F {
    class Turrets : Turrets {
      class MainTurret;
    };
  };
  class itc_land_seara_mkii : MBT_01_mlrs_base_F {
    side = 1;
    crew = "B_crew_F";
    faction = "BLU_F";
    scope = 2;
    displayName = "Seara Mkii";
    class itc_land {
      tabletInterfaces[] = {"spg"};
      class fcs {
        tableList = "itc_arty\tables\b_155\list.sqf";
      };
    };
    class Turrets : Turrets {
      class MainTurret : MainTurret {
        weapons[] = {"itc_land_230mm_mlrs"};
      };
    };
  };
};
