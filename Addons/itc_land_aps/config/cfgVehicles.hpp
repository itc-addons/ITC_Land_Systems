//#define CREATE_APS(CLASS,NAME,POS,TURRET,DIR,T,E,R,AMMO,PK,LOAD,TR) \
//class CLASS { \
//  displayName = NAME; \
//  //position[] = POS; \
//  //turret[] = TURRET; \
//  direction = DIR; \
//  traverse = T; \
//  elevate = E; \
//  range = R; \
//  munitions = AMMO; \
//  pk = PK; \
//  reloadTime = LOAD; \
//  trigger = TR; \
//};

//CREATEP_APS(DROZD,"drozd",{0,1.5,1},{0},0,60,20,10,8,0.3,0.5,1)

class CfgVehicles {
  class MBT_01_base_F;
  class B_MBT_01_base_F: MBT_01_base_F {
    class EventHandlers;
  };
  class B_MBT_01_cannon_F: B_MBT_01_base_F {
    class EventHandlers: EventHandlers {
      class itc_land_aps {
        init = "_this call itc_land_aps_fnc_vehicleInit";
      };
    };
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
    };
  };
};
