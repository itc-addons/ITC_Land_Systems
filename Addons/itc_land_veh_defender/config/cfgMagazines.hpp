class cfgMagazines {
  class magazine_Missile_mim145_x4;
  class itc_land_mim145_x4 : magazine_Missile_mim145_x4 {
    ammo = "itc_land_mim145";
	itc_land_fuze = "sam35_mod0";
	itc_land_CountInAH = 0;
	itc_land_submunition = "itc_land_mim145_helper";
	itc_land_guidance[] = {"mim145_intercept","itc_land_guidance_fnc_nim145"};	
  };
};
