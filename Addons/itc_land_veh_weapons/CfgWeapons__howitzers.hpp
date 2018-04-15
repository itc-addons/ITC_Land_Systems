	class itc_land_howitzer_base: CannonCore {
		class mode_semiauto;
	};	
	
	class itc_land_155mm_howitzer: itc_land_howitzer_base {
			scope = 1;
			nameSound = "cannon";
			cursor = "mortar";
			cursorAim = "EmptyCursor";
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant", 2.51189, 1, 1500};
				soundBegin[] = {"begin1", 1};
				SoundSetShot[] = {"Cannon155mm_Shot_SoundSet", "Cannon155mm_Tail_SoundSet"};
			};
			reloadSound[] = {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2", 31.6228, 1, 15};
			minRange = 10;
			minRangeProbab = 0.7;
			midRange = 1800;
			midRangeProbab = 0.7;
			maxRange = 3000;
			maxRangeProbab = 0.1;
			reloadTime = 0.01;
			dispersion = 0.004;
			magazineReloadTime = 0.01;
			autoReload = 0;
			canLock = 0;
			#include "CfgWeapons_Magazines.hpp"			
			//magazines[] = {"32Rnd_155mm_Mo_shells", "6Rnd_155mm_Mo_smoke", "2Rnd_155mm_Mo_guided", "2Rnd_155mm_Mo_LG", "6Rnd_155mm_Mo_mine", "2Rnd_155mm_Mo_Cluster", "6Rnd_155mm_Mo_AT_mine"};
			modes[] = {"Single"};
			class GunParticles {
				class Effect1 {
					effectName = "ArtilleryFired1";
					positionName = "Usti hlavne3";
					directionName = "Konec hlavne3";
				};
				class Effect2 {
					effectName = "ArtilleryFiredL";
					positionName = "Usti hlavne";
					directionName = "Usti hlavne b";
				};
				class Effect3 {
					effectName = "ArtilleryFiredR";
					positionName = "Usti hlavne";
					directionName = "Usti hlavne b";
				};
			};
			
			class Single: Mode_SemiAuto {
				displayName = "";
				sounds[] = {"StandardSound"};
				class StandardSound {
					begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant", 2.51189, 1, 1500};
					soundBegin[] = {"begin1", 1};
					SoundSetShot[] = {"Cannon155mm_Shot_SoundSet", "Cannon155mm_Tail_SoundSet"};
				};
				reloadSound[] = {"A3\sounds_f\dummysound", 1, 1, 20};
				reloadTime = 0.01;
				minRange = 0;
				midRange = 0;
				maxRange = 0;
				artilleryDispersion = 0;
			};

			ace_overpressure_priority = 1;
			ace_overpressure_angle = 90;
			ace_overpressure_range = 60;
			ace_overpressure_damage = 1;
			displayName = "L/52";
		};		
		
		
	};

