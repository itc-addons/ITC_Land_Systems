class 12Rnd_230mm_rockets;
class itc_land_m230hex_12rnd : 12Rnd_230mm_rockets {
  author = "Yax";
  initSpeed = 600;
  ammo = "itc_land_230mm_he";
  itc_land_fuze = "mof35_mod4";
  itc_land_submunition = "itc_land_230mm_helper";
  itc_land_btabListFile = "itc_land_ballistics\tables\b_230\list.sqf";
};
class itc_land_m230hex_6rnd : itc_land_m230hex_12rnd {
  count = 6;
};
class itc_land_m230pgm_12rnd : itc_land_m230hex_12rnd {
  itc_land_guidance[] = {"gps_inertial","itc_land_guidance_fnc_pgm230"};
  displayName = "227mm PGM HE";
  displayNameShort = "227mm PGM HE";
};
class itc_land_m230pgm_6rnd : itc_land_m230hex_6rnd {
  itc_land_guidance[] = {"gps_inertial","itc_land_guidance_fnc_pgm230"};
  displayName = "227mm PGM HE";
  displayNameShort = "227mm PGM HE";
};
