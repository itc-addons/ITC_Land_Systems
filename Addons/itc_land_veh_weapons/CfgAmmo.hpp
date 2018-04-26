class CfgAmmo {
	class FlareCore;
	class itc_land_155mm_illum: FlareCore {
		model = "\A3\weapons_f\ammo\shell";
		effectFlare = "CounterMeasureFlare";
		aimAboveTarget[] = {30, 60, 120, 180, 240, 300, 360};
		aimAboveDefault = 4;
		triggerTime = -1;
		triggerSpeedCoef = 1;
		lightColor[] = {0.95, 0.95, 1, 0.5};
		smokeColor[] = {1, 1, 1, 0.5};
		intensity = 120000;
		flareSize = 20;
		timeToLive = 90;
		ace_rearm_caliber = 155;
	};	
	class Sh_155mm_AMOS;
	class itc_land_155mm_helper: Sh_155mm_AMOS {
		explosionTime = 0.0001;	
	};
	
};