class CfgAmmo {
	class FlareCore;
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
	class Sh_155mm_AMOS;
	class itc_land_155mm: Sh_155mm_AMOS {
		//artilleryLock = 0;
		airFriction = -0.0000395;
        whistleOnFire = 1;		
        whistleDist = 250;
        suppressionRadiusHit = 100;		
	};
	class itc_land_155mm_inert: itc_land_155mm {
		indirectHitRange = 1;
		indirectHit = 100;
	};
	class itc_land_155mm_helper: itc_land_155mm {
		explosionTime = 0.0001;
	};
	class Cluster_155mm_AMOS;
	class itc_land_155mm_dpicm_helper: Cluster_155mm_AMOS {
		triggerTime = 0.05;
		triggerDistance = 0.1;
		submunitionConeType[] = {"poissondisc",72};
		submunitionAmmo[] = {"Mo_cluster_AP",0.33,"Mo_cluster_Bomb_01_F",0.66,"Mo_cluster_AP_UXO_deploy",0.07};
		submunitionConeAngle = 4;
	};
	class Smoke_120mm_AMOS_White;
	class itc_land_155mm_smoke : Smoke_120mm_AMOS_White {
		triggerTime = 0.05;
		triggerDistance = 0.1;
		submunitionConeType[] = {"poissondisc",15};
		submunitionConeAngle = 4;
	};

	class Mine_155mm_AMOS_range;
	class itc_land_155mm_fascam_ap_helper : Mine_155mm_AMOS_range {
		triggerTime = 0.05;
	};

	class AT_Mine_155mm_AMOS_range;
	class itc_land_155mm_fascam_at_helper : AT_Mine_155mm_AMOS_range {
		triggerTime = 0.05;
	};

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
	};	
	class R_230mm_Cluster;
	class itc_land_230mm_icm_helper: R_230mm_Cluster {
		triggerTime = 0.05;
		triggerDistance = 0.1;
		submunitionConeType[] = {"poissondisc",120};
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
