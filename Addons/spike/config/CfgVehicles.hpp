class CfgVehicles {
  class LandVehicle;
  class StaticWeapon: LandVehicle {
    class Turrets {
      class MainTurret: NewTurret {};
    };
  };
  class StaticMGWeapon: StaticWeapon {
    class Turrets: Turrets {
      class MainTurret: MainTurret {};
    };
  };
  class AT_01_base_F: StaticMGWeapon {};
  class B_static_AT_F: AT_01_base_F {
    class SimpleObject;
    class Turrets: Turrets {
      class MainTurret: MainTurret {};
    };
    class AnimationSources {
      class muzzle_source;
      class muzzle_source_rot;
      class ReloadAnim;
      class ReloadMagazine;
      class Revolving;
    };
  };
  class ITC_Land_B_SpikeLR: B_static_AT_F {
    displayName = "Spike LR ATGM [NATO]";
    model = "\A3\Static_F_Gamma\AA_01\AA_01.p3d";

    class SimpleObject: SimpleObject {};
    editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_Static_AA_F.jpg";
    hiddenSelections[] = {"camo_launcher","camo_tube"};
    hiddenSelectionsTextures[] = {"\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_01_co.paa","\a3\weapons_f_exp\launchers\titan\data\launch_b_titan_tna_f_02_co.paa"};
    class Turrets: Turrets {
      class MainTurret: MainTurret {
        weapons[] = {"itc_land_spikeLR_atgm"};
        magazines[] = {"itc_land_spikeLR_1rnd","itc_land_spikeLR_1rnd","itc_land_spikeLR_1rnd","itc_land_spikeLR_1rnd"};
      };
    };
    class Armory {
      description = " ";
    };
    class AnimationSources: AnimationSources {
      class muzzle_source: muzzle_source {
        weapon = "itc_land_spikeLR_atgm";
      };
      class muzzle_source_rot: muzzle_source_rot {
        weapon = "itc_land_spikeLR_atgm";
      };
      class ReloadAnim: ReloadAnim {
        weapon = "itc_land_spikeLR_atgm";
      };
      class ReloadMagazine: ReloadMagazine {
        weapon = "itc_land_spikeLR_atgm";
      };
      class Revolving: Revolving {
        weapon = "itc_land_spikeLR_atgm";
      };
    };
  };
};
