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
  class itc_land_o_s750 : SAM_System_04_base_F {
		author = "Yax ";
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
        weapons[] = {"itc_land_weapon_s750"};
        magazines[] = {"itc_land_magazine_4rnd_s750"};
      };
    };
		class AnimationSources : AnimationSources {
      class Missiles_revolving {
        source = "revolving";
        weapon = "itc_land_weapon_s750";
      };
    };
  };
};
