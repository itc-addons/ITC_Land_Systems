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
  class SAM_System_04_base_F : StaticMGWeapon {
    class Turrets : Turrets {
      class MainTurret: MainTurret {};
    };
    class AnimationSources;
  };
  class itc_land_o_rhea2 : SAM_System_04_base_F {
	author = "Yax";
    displayName = "S750 mod. 0 Rhea 2";
    editorSubcategory = "EdSubcat_AAs";
    side = 0;
    faction = "OPF_F";
    crew = "O_UAV_AI";
    scope = 2;
    scopeCurator = 2;
    class Turrets : Turrets {
      class MainTurret: MainTurret {
        /*
        minelev = 90;
        initElev = 90;
        maxelev = 90;

        minturn = 0;
        initTurn = 0;
        maxturn = 0;
        */
        weapons[] = {"itc_land_s750_launcher"};
        magazines[] = {"itc_land_s750_x4"};
      };
    };
	class AnimationSources : AnimationSources {
      class Missiles_revolving {
        source = "revolving";
        weapon = "itc_land_s750_launcher";
      };
    };
  };
};
