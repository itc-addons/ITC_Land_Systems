class CfgAmmo {
	class FlareCore;
	class itc_land_155mm_illum: FlareCore {
		model = "\A3\weapons_f\ammo\shell";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[] = {50, 80, 140, 200, 260, 320, 380};
		aimAboveDefault = 4;
		triggerSpeedCoef = 1;
		lightColor[] = {0.95, 0.95, 1, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
		brightness = 200;
		//intensity = 180000;
		//flareSize = 500;
		timeToLive = 90;
		ace_rearm_caliber = 155;
		explosionTime = 0.0001;
	};
	class Sh_155mm_AMOS;
	class itc_land_155mm: Sh_155mm_AMOS {
		//artilleryLock = 0;
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
};
