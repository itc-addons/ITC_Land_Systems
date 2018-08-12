/// Magazines macros definition ///

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_24(a) a, a, a, a, a, a, a, a, a, a, a, a,a, a, a, a, a, a, a, a, a, a, a, a

class SensorTemplateDataLink;
class SensorTemplateActiveRadar;
class CfgVehicles {
  class StaticWeapon;
  class StaticMGWeapon : StaticWeapon {
	class Turrets {
	 class MainTurret;
	};
  }
  class SAM_System_03_base_F : StaticMGWeapon {
    class Turrets : Turrets {
      class MainTurret: MainTurret {};
    };
    class AnimationSources;
  };
  class itc_land_b_defender2 : SAM_System_03_base_F {
	author = "Toadball";
    displayName = "MIM-145 mod. 0 Defender 2";
    editorSubcategory = "EdSubcat_AAs";
    side = 1;
	faction = "BLU_F";
	crew = "B_UAV_AI";
	typicalCargo[] = {"B_UAV_AI"};
    scope = 2;
    scopeCurator = 2;
    class Turrets : Turrets {
      class MainTurret: MainTurret {
        
        minelev = 35;
        initElev = 35;
        maxelev = 35;
		/*
        minturn = 0;
        initTurn = 0;
        maxturn = 0;
        */
        weapons[] = {"weapon_mim145Launcher"};
        magazines[] = {"magazine_Missile_mim145_x4"};
      };
    };
	class AnimationSources : AnimationSources {
      class Missiles_revolving {
        source = "revolving";
        weapon = "weapon_mim145Launcher";
      };
    };
  };
};
