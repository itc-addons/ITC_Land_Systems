class CfgMagazines {
	class VehicleMagazine;
    class itc_land_how_mag : VehicleMagazine {
        scope = 2;
        count = 1;
        nameSound = "cannon";
    };	
	class itc_land_g155hex_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 HE";
		ammo = "Sh_155mm_AMOS";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 HE";
		itc_land_fuze = "mof35_mod0";
		itc_land_submunition = "itc_land_155mm_helper";		
	};
	class itc_land_g155hex_chg2: itc_land_g155hex_chg1 { initSpeed = 324; };
	class itc_land_g155hex_chg3: itc_land_g155hex_chg1 { initSpeed = 486; };
	class itc_land_g155hex_chg4: itc_land_g155hex_chg1 { initSpeed = 648; };
	class itc_land_g155hex_chg5: itc_land_g155hex_chg1 { initSpeed = 810; };
	
	class itc_land_g155smo_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 SMOKE";
		ammo = "Smoke_120mm_AMOS_White";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 SMOKE";
		itc_land_fuze = "mof35_mod1";
	};
	
	class itc_land_g155smo_chg2: itc_land_g155smo_chg1 { initSpeed = 324; };	
	class itc_land_g155smo_chg3: itc_land_g155smo_chg1 { initSpeed = 486; };	
	class itc_land_g155smo_chg4: itc_land_g155smo_chg1 { initSpeed = 648; };
	class itc_land_g155smo_chg5: itc_land_g155smo_chg1 { initSpeed = 810; };
	
	class itc_land_g155icm_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 ICM";
		ammo = "Cluster_155mm_AMOS";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 ICM";
		itc_land_fuze = "mof35_mod1";
	}; 

	class itc_land_g155icm_chg2: itc_land_g155icm_chg1 { initSpeed = 324; };	
	class itc_land_g155icm_chg3: itc_land_g155icm_chg1 { initSpeed = 486; };	
	class itc_land_g155icm_chg4: itc_land_g155icm_chg1 { initSpeed = 648; };
	class itc_land_g155icm_chg5: itc_land_g155icm_chg1 { initSpeed = 810; };

	class itc_land_g155mat_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 MINE-AT";
		ammo = "AT_Mine_155mm_AMOS_range";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 MAT";
		itc_land_fuze = "mof35_mod1";
	}; 

	class itc_land_g155mat_chg2: itc_land_g155mat_chg1 { initSpeed = 324; };	
	class itc_land_g155mat_chg3: itc_land_g155mat_chg1 { initSpeed = 486; };	
	class itc_land_g155mat_chg4: itc_land_g155mat_chg1 { initSpeed = 648; };
	class itc_land_g155mat_chg5: itc_land_g155mat_chg1 { initSpeed = 810; };	

	class itc_land_g155map_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 MINE-AP";
		ammo = "Mine_155mm_AMOS_range";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 MAP";
		itc_land_fuze = "mof35_mod1";
	}; 

	class itc_land_g155map_chg2: itc_land_g155map_chg1 { initSpeed = 324; };	
	class itc_land_g155map_chg3: itc_land_g155map_chg1 { initSpeed = 486; };	
	class itc_land_g155map_chg4: itc_land_g155map_chg1 { initSpeed = 648; };
	class itc_land_g155map_chg5: itc_land_g155map_chg1 { initSpeed = 810; };

	class itc_land_g155pgm_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 GPS GUIDED";
		ammo = "Mine_155mm_AMOS_range";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 PGM";
		itc_land_fuze = "mof35_mod2";
		itc_land_guidance = "gps_inertial";
		itc_land_submunition = "itc_land_155mm_helper";	

	}; 

	class itc_land_g155pgm_chg2: itc_land_g155pgm_chg1 { initSpeed = 324; };	
	class itc_land_g155pgm_chg3: itc_land_g155pgm_chg1 { initSpeed = 486; };	
	class itc_land_g155pgm_chg4: itc_land_g155pgm_chg1 { initSpeed = 648; };
	class itc_land_g155pgm_chg5: itc_land_g155pgm_chg1 { initSpeed = 810; };

	class itc_land_g155lgm_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 LASER GUIDED";
		ammo = "Sh_155mm_AMOS_LG";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 PGM";
		itc_land_fuze = "mof35_mod2";
		itc_land_guidance = "laser_coded";
		itc_land_submunition = "itc_land_155mm_helper";	
	}; 

	class itc_land_g155lgm_chg2: itc_land_g155lgm_chg1 { initSpeed = 324; };	
	class itc_land_g155lgm_chg3: itc_land_g155lgm_chg1 { initSpeed = 486; };	
	class itc_land_g155lgm_chg4: itc_land_g155lgm_chg1 { initSpeed = 648; };
	class itc_land_g155lgm_chg5: itc_land_g155lgm_chg1 { initSpeed = 810; };	

	class itc_land_g155ill_chg1: itc_land_how_mag {
		author = "Toadball";
		initSpeed = 162;
		displayName = "G155 ILLUM";
		ammo = "itc_land_155mm_illum";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G155 ILLUM";
		itc_land_fuze = "mof35_mod1";
	}; 

	class itc_land_g155ill_chg2: itc_land_g155ill_chg1 { initSpeed = 324; };	
	class itc_land_g155ill_chg3: itc_land_g155ill_chg1 { initSpeed = 486; };	
	class itc_land_g155ill_chg4: itc_land_g155ill_chg1 { initSpeed = 648; };
	class itc_land_g155ill_chg5: itc_land_g155ill_chg1 { initSpeed = 810; };	
};	