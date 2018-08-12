	class GrenadeBase;
	class itc_land_sam_helper: GrenadeBase {
        indirectHitRange = 6;
		hit = 80;
		indirectHit = 60;		
		explosionTime = 0.001;
		CraterEffects = "AAMissileCrater";
		explosionEffects = "AAMissileExplosion";
		model = "\A3\Weapons_F_beta\Launchers\titan\titan_missile_ap_fly.p3d";		
		class CamShakeExplode {
			power = "(110*0.2)";
			duration = "((round (110^0.5))*0.2 max 0.2)";
			frequency = 20;
			distance = "((8 + 110^0.5)*8)";
		};
		class CamShakeHit {
			power = 110;
			duration = "((round (110^0.25))*0.2 max 0.2)";
			frequency = 20;
			distance = 1;
		};	

	};
	class itc_land_sam1_helper: itc_land_sam_helper {
        hit = 100;
        indirectHit = 75;
        indirectHitRange = 9;		
	};
	class itc_land_sam2_helper: itc_land_sam_helper {
        hit = 200;
        indirectHit = 100;
        indirectHitRange = 7;	
	};
	
	class MissileBase;
	class M_Titan_AA: MissileBase {
		itc_air_hasProx = 1;
		itc_air_proxHelper = "itc_air_default_helper";
		itc_air_sensorFOV = 60;
		itc_air_sensorRAN = 30;	
	};
	class Missile_AA_04_F: MissileBase {
		itc_air_hasProx = 1;
		itc_air_proxHelper = "itc_air_default_helper";
		itc_air_sensorFOV = 60;
		itc_air_sensorRAN = 30;	

	};
	class M_Air_AA: MissileBase {
		itc_air_hasProx = 1;
		itc_air_proxHelper = "itc_air_default_helper";
		itc_air_sensorFOV = 60;
		itc_air_sensorRAN = 30;	

	};
	/*class ITC_missile_BOLIDE: M_Titan_AA {
		indirectHitRange = 30;
		manualControl = 1;
		maneuvrability = 10;
		maxControlRange = 8000;
		maxSpeed = 1500;
		thrust = 700;
		simulationStep = 0.01;
        airFriction = 0.1;
        sideAirFriction = 0.16;
		cmImmunity = 1;
		trackOversteer = 0.5;
		trackLead = 0.75;
		fuseDistance = 100;
		itc_air_hasProx = 1;
		itc_air_proxHelper = "itc_air_bolide_helper";		
	};*/