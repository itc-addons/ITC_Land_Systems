#define CREATE_APS(CLASS,NAME,DIR,T,E,R,AMMO,PK,LOAD,TR) \
class CLASS { \
  displayName = NAME; \
  direction = DIR; \
  traverse = T; \
  elevate = E; \
  range = R; \
  munitions = AMMO; \
  pk = PK; \
  reloadTime = LOAD; \
  trigger = TR;

//CREATE_APS(DROZD,"drozd",{0,1.5,1},{0},0,60,20,10,8,0.3,0.5,1)

#define APS_INIT_EH \
  class EventHandlers: EventHandlers { \
    class itc_land_aps { \
      init = "_this call itc_land_aps_fnc_vehicleInit"; \
    }; \
  };

class CfgVehicles {
  // MERKAVA
  class MBT_01_base_F;
  class B_MBT_01_base_F: MBT_01_base_F {
    class EventHandlers;
  };
  class B_MBT_01_cannon_F: B_MBT_01_base_F {
    APS_INIT_EH
    class itc_land_aps {
      class TROPHY_L {
        displayName = "Trophy Left";
        position[] = {-1,0,1.5};
        turret[] = {0};
        direction = -90;
        traverse = 93;
        elevate = 40;
        range = 15;
        munitions = 10;
        pk = 0.8;
        reloadTime = 0.1;
        trigger = 1;
      };
      class TROPHY_R: TROPHY_L {
        displayName = "Trophy Right";
        position[] = {1,0,1.5};
        direction = 90;
      };
    };
  }; // B_MBT_01_cannon_F

  // T-100
  class MBT_02_base_F;
  class O_MBT_02_base_F: MBT_02_base_F {
    class EventHandlers;
  };
  class O_MBT_02_cannon_F: O_MBT_02_base_F {
    APS_INIT_EH
    class itc_land_aps {
      CREATE_APS(DROZD_L,"Drozd L",-40,45,15,15,4,0.3,0.5,1)
        position[] = {-1,1.5,1};
        turret[] = {0};
      };
      CREATE_APS(DROZD_R,"Drozd R",40,45,15,15,4,0.3,0.5,1)
        position[] = {1,1.5,1};
        turret[] = {0};
      };
    };
  }; // B_MBT_01_cannon_F

  // T-14
  class Tank;
  class Tank_F: Tank {
    class EventHandlers;
  };
  class MBT_04_base_F: Tank_F {
    APS_INIT_EH
    class itc_land_aps {
      CREATE_APS(AFGHANIT_L,"Afghanit L",-50,55,10,30,5,0.8,0.1,1)
        position[] = {-1,1.5,1};
        turret[] = {0};
      };
      CREATE_APS(AFGHANIT_R,"Afghanit R",50,55,10,30,5,0.8,0.1,1)
        position[] = {1,1.5,1};
        turret[] = {0};
      };
    };
  }; // MBT_04_base_F
};
