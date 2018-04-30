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
	};
	class Sh_155mm_AMOS;
	class itc_land_155mm_helper: Sh_155mm_AMOS {
		explosionTime = 0.0001;
	};

	class SubmunitionBase;
	class R_230mm_HE : SubmunitionBase {
		effectFly = "itc_land_particles_rockets_smokeTrail";
	};

	class Smoke_120mm_AMOS_White;
	class itc_land_155mm_smoke : Smoke_120mm_AMOS_White {
		submunitionAmmo = "itc_land_155mm_smoke_helper";
		submunitionConeType[] = {"poissondisc",30};
	};

	class SmokeShellArty;
	class itc_land_155mm_smoke_helper : SmokeShellArty {
		effectsSmoke = "itc_land_particles_wpSmoke";
	};
};
