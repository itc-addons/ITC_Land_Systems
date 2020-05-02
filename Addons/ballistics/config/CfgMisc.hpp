class itc_land_ballistics {
  class batteryTypes {
    class G155 {
      displayName = "G155 155mm Howitzer";
      type = "cannon";
      ammunition[] = {"itc_land_g155hex","itc_land_g155smo","itc_land_g155icm","itc_land_g155mat","itc_land_g155map","itc_land_g155pgm","itc_land_g155lgm","itc_land_g155ill","itc_land_g155ext"};
      weaponClass = "itc_land_155mm_howitzer";
    };
    class G152 {
      displayName = "G152 152mm Howitzer";
      type = "cannon";
      ammunition[] = {"itc_land_g152hex","itc_land_g152smo","itc_land_g152icm","itc_land_g152mat","itc_land_g152map","itc_land_g152pgm","itc_land_g152lgm","itc_land_g152ill"};
      weaponClass = "itc_land_152mm_howitzer";
    };
    class NG127 {
      displayName = "NG127 127mm Naval Gun";
      type = "cannon";
      ammunition[] = {"itc_land_g127hex","itc_land_g127smo","itc_land_g127pgm","itc_land_g127lgm","itc_land_g127ill"};
      weaponClass = "itc_land_127mm_navalgunsystem";
    };	
    class M230 {
      displayName = "M230 227mm MLRS";
      type = "rocket";
      ammunition[] = {"itc_land_m230hex_12rnd","itc_land_m230pgm_12rnd","itc_land_m230pgm_6rnd","itc_land_m230icm_12rnd","itc_land_m230icm_6rnd","itc_land_m230gicm_12rnd","itc_land_m230gicm_6rnd","itc_land_m230mat_12rnd","itc_land_m230map_12rnd"};
      weaponClass = "itc_land_230mm_mlrs";
    };
    class Mk6 {
      displayName = "Mk6 82mm Mortar";
      type = "cannon";
      ammunition[] = {"ACE_1Rnd_82mm_Mo_HE","ACE_1Rnd_82mm_Mo_Smoke","ACE_1Rnd_82mm_Mo_Illum","8Rnd_82mm_Mo_shells","8Rnd_82mm_Mo_Flare_white","8Rnd_82mm_Mo_Smoke_white","8Rnd_82mm_Mo_guided","8Rnd_82mm_Mo_LG"};
      weaponClass = "mortar_82mm";
    };
  };
};
