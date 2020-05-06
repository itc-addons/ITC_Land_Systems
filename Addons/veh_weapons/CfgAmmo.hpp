class CfgAmmo {
  //Base Classes - Howitzer
  class FlareCore;
  class Sh_155mm_AMOS;
	class Smoke_120mm_AMOS_White;
  class Mine_155mm_AMOS_range;
  class AT_Mine_155mm_AMOS_range;
  class Cluster_155mm_AMOS;
  //Base Classes - Missile



  //155mm Ammo
  class itc_land_155mm: Sh_155mm_AMOS {
  	//artilleryLock = 0;
  	//airFriction = -0.0000395;
    //sideAirFriction = 1;
    //whistleOnFire = 1;
    //whistleDist = 500;
    suppressionRadiusHit = 100;
    ace_frag_enabled = 1;
    ace_frag_classes[] = {ACE_frag_large, ACE_frag_large, ACE_frag_large_HD, ACE_frag_large, ACE_frag_medium_HD, ACE_frag_medium_HD, ACE_frag_medium, ACE_frag_huge, ACE_frag_huge_HD, ACE_frag_huge};
    ace_frag_metal = 36000;
    ace_frag_charge = 10800;
    ace_frag_gurney_c = 2440;
    ace_frag_gurney_k = 1/2;
    ace_rearm_caliber = 155;
	};
  class itc_land_155mm_inert: itc_land_155mm {
		indirectHitRange = 1;
		indirectHit = 100;
		explosionEffects = "";
		ace_frag_enabled = 0;
		explosive = 0;
    CraterEffects = "NoCrater";
    ace_rearm_caliber = 155;
	};
  class itc_land_155mm_helper: itc_land_155mm {
		explosionTime = 0.0001;
	};
  class itc_land_155mm_smoke : Smoke_120mm_AMOS_White {
		ace_frag_enabled = 0;
		triggerTime = 0.05;
		triggerDistance = 0.1;
		submunitionConeType[] = {"poissondisc",20};
		submunitionConeAngle = 4;
    //submunitionAmmo = "SmokeLauncherAmmo";
    ace_rearm_caliber = 155;
	};
	class itc_land_155mm_illum: FlareCore {
		model = "\A3\weapons_f\ammo\shell";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[] = {50, 80, 140, 200, 260, 320, 380};
		aimAboveDefault = 4;
		triggerSpeedCoef = 1;
		triggerTime = 0.001;
		lightColor[] = {0.95, 0.95, 1, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
		brightness = 200;
		//intensity = 180000;
		//flareSize = 500;
		timeToLive = 90;
		ace_rearm_caliber = 155;
		//explosionTime = 1;
	};
	class itc_land_155mm_dpicm_helper: Cluster_155mm_AMOS {
		triggerTime = 0.05;
		triggerDistance = 0.1;
		submunitionConeType[] = {"poissondisc",100};
		submunitionAmmo[] = {"Mo_cluster_AP",0.33,"Mo_cluster_Bomb_01_F",0.66,"Mo_cluster_AP_UXO_deploy",0.07};
		submunitionConeAngle = 4;
	};
  class itc_land_155mm_fascam_ap_helper : Mine_155mm_AMOS_range {
		triggerTime = 0.05;
	};
	class itc_land_155mm_fascam_at_helper : AT_Mine_155mm_AMOS_range {
		triggerTime = 0.05;
	};
  /*
	class itc_land_155mm_apf_helper: Cluster_155mm_AMOS {
		triggerTime = 0.05;
		triggerDistance = 0.1;
		submunitionConeType[] = {"poissondisc",1500};
		submunitionAmmo[] = {"ITC_APF_Submunition",0.33};
		submunitionConeAngle = 7;
		submunitionInitSpeed = 880;
	};
    class B_127x99_Ball;
    class ITC_APF_Submunition : B_127x99_Ball {
        caliber = 3.5;
        initSpeed = 880;
    };
	*/

  //105mm
  class itc_land_105mm: itc_land_155mm {
    hit = 210;
    indirectHit = 75;
    indirectHitRange = 20;
    ace_frag_enabled = 1;
    ace_frag_classes[] = {ACE_frag_large, ACE_frag_large, ACE_frag_large_HD, ACE_frag_large, ACE_frag_medium_HD, ACE_frag_medium_HD, ACE_frag_medium, ACE_frag_huge, ACE_frag_huge_HD, ACE_frag_huge};
    ace_frag_metal = 16000;
    ace_frag_charge = 2900;
    ace_frag_gurney_c = 2440;
    ace_frag_gurney_k = 1/2;
    ace_rearm_caliber = 105;
	};
  class itc_land_105mm_inert: itc_land_155mm_inert {
    ace_rearm_caliber = 105;
  };
  class itc_land_105mm_helper: itc_land_105mm {
		explosionTime = 0.0001;
	};
  class itc_land_105mm_smoke : itc_land_155mm_smoke {
		submunitionConeType[] = {"poissondisc",10};
    ace_rearm_caliber = 105;
	};
  class itc_land_105mm_illum: itc_land_155mm_illum {
		brightness = 200;
		ace_rearm_caliber = 105;
	};
  class itc_land_105mm_dpicm_helper: itc_land_155mm_dpicm_helper {
		submunitionConeType[] = {"poissondisc",42};
    ace_rearm_caliber = 105;
	};

  //122mm
  class itc_land_122mm: itc_land_105mm {
    hit = 250;
    indirectHit = 85;
    indirectHitRange = 22;
    ace_rearm_caliber = 122;
	};
  class itc_land_122mm_inert: itc_land_105mm_inert {
    ace_rearm_caliber = 122;
  };
  class itc_land_122mm_helper: itc_land_122mm {
		explosionTime = 0.0001;
	};
  class itc_land_122mm_smoke : itc_land_105mm_smoke {
    ace_rearm_caliber = 122;
	};
  class itc_land_122mm_illum: itc_land_105mm_illum {
		ace_rearm_caliber = 122;
	};
  class itc_land_122mm_dpicm_helper: itc_land_105mm_dpicm_helper {
    ace_rearm_caliber = 122;
	};

  //127mm
  class itc_land_127mm: itc_land_155mm {
    hit = 300;
    indirectHit = 95;
    indirectHitRange = 25;
    ace_frag_metal = 16000;
    ace_frag_charge = 2900;
    ace_frag_gurney_c = 2440;
    ace_frag_gurney_k = 1/2;
    ace_rearm_caliber = 127;
	};
  class itc_land_127mm_inert: itc_land_155mm_inert {
    ace_rearm_caliber = 127;
  };
  class itc_land_127mm_helper: itc_land_105mm {
		explosionTime = 0.0001;
	};
  class itc_land_127mm_smoke : itc_land_155mm_smoke {
		submunitionConeType[] = {"poissondisc",10};
    ace_rearm_caliber = 127;
	};
  class itc_land_127mm_illum: itc_land_155mm_illum {
		brightness = 200;
		ace_rearm_caliber = 127;
	};
  class itc_land_127mm_dpicm_helper: itc_land_155mm_dpicm_helper {
		submunitionConeType[] = {"poissondisc",42};
    ace_rearm_caliber = 127;
	};

  //MLRS
  //230mm
	class R_230mm_HE;
	class itc_land_230mm_he : R_230mm_HE {
		hit = 1200;
		indirectHit = 800;
		indirectHitRange = 30;
		simulation = "shotShell";
	};
	class itc_land_230mm_helper : itc_land_155mm_helper {
		indirectHit = 800;
		indirectHitRange = 30;
	};
	class itc_land_230mm_inert : itc_land_230mm_he {
		indirectHitRange = 1;
		indirectHit = 100;
		explosionEffects = "";
		ace_frag_enabled = 0;
		explosive = 0;
        CraterEffects = "NoCrater";
	};
	class R_230mm_Cluster;
	class itc_land_230mm_icm_helper: R_230mm_Cluster {
		triggerTime = 0.05;
		triggerDistance = 0.1;
		submunitionConeType[] = {"poissondisc",240};
		submunitionAmmo[] = {"Mo_cluster_AP",0.33,"Mo_cluster_Bomb_01_F",0.66,"Mo_cluster_AP_UXO_deploy",0.07};
		submunitionConeAngle = 5;
	};

	class itc_land_230mm_fascam_ap_helper : Mine_155mm_AMOS_range {
		triggerTime = 0.05;
		submunitionConeType[] = {"randomcenter",50};
	};

	class itc_land_230mm_fascam_at_helper : AT_Mine_155mm_AMOS_range {
		triggerTime = 0.05;
		submunitionConeType[] = {"randomcenter",50};
	};
};
