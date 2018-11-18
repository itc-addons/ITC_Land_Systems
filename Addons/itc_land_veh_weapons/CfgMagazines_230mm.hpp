class 12Rnd_230mm_rockets;
class itc_land_m230hex_12rnd : 12Rnd_230mm_rockets {
  author = "Yax";
  initSpeed = 600;
  ammo = "itc_land_230mm_he";
  displayName = "M230 HE";
  displayNameShort = "M230 HE";  
  itc_land_fuze = "mof35_mod4";
  itc_land_submunition = "itc_land_230mm_helper";
  itc_land_btabListFile = "itc_land_ballistics\tables\b_230\list.sqf";
};
class itc_land_m230pgm_12rnd : itc_land_m230hex_12rnd {
  itc_land_guidance[] = {"gps_inertial","itc_land_guidance_fnc_pgm230"};
  displayName = "M230 PGM";
  displayNameShort = "M230 PGM";
};
class itc_land_m230pgm_6rnd : itc_land_m230pgm_12rnd {
  count = 6;
};
class itc_land_m230icm_12rnd : itc_land_m230hex_12rnd {
  author = "Toadball";
  ammo = "itc_land_230mm_inert";
  displayName = "M230 ICM";
  displayNameShort = "M230 ICM";  
  itc_land_fuze = "mof35_mod1";
  itc_land_submunition = "itc_land_230mm_icm_helper";
};
class itc_land_m230icm_6rnd : itc_land_m230icm_12rnd {
  count = 6;
};
class itc_land_m230mat_12rnd : itc_land_m230hex_12rnd {
  author = "Toadball";
  ammo = "itc_land_230mm_inert";
  displayName = "M230 MINE-AT";
  displayNameShort = "M230 MAT";  
  itc_land_fuze = "mof35_mod1";
  itc_land_submunition = "itc_land_230mm_fascam_at_helper";
};
class itc_land_m230map_12rnd : itc_land_m230hex_12rnd {
  author = "Toadball";
  ammo = "itc_land_230mm_inert";
  displayName = "M230 MINE-AP";
  displayNameShort = "M230 MAP";  
  itc_land_fuze = "mof35_mod1";
  itc_land_submunition = "itc_land_230mm_fascam_ap_helper";
};

