	class CannonCore;
	class itc_land_howitzer_base: CannonCore { };
	class itc_land_howitzer: itc_land_howitzer_base {
		scope = 0;
		displayName = "Howitzer 155 mm";
		nameSound = "cannon";
		cursor = "mortar";
		cursorAim = "EmptyCursor";
		sounds[] = {"StandardSound"};
		class StandardSound {
			begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.51189,1,1500};
			soundBegin[] = {"begin1",1};
			SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
		};
		reloadSound[] = {"A3\Sounds_F\vehicles\armor\noises\reload_tank_cannon_2",31.6228,1,15};
		reloadTime = 0.01;
		magazineReloadTime = 0.01;
		autoReload = 0;
		canLock = 0;
		//magazines[] = {"32Rnd_155mm_Mo_shells","32Rnd_155mm_Mo_shells_O","6Rnd_155mm_Mo_smoke","6Rnd_155mm_Mo_smoke_O","2Rnd_155mm_Mo_guided","4Rnd_155mm_Mo_guided","4Rnd_155mm_Mo_guided_O","2Rnd_155mm_Mo_LG","4Rnd_155mm_Mo_LG","4Rnd_155mm_Mo_LG_O","6Rnd_155mm_Mo_mine","6Rnd_155mm_Mo_mine_O","2Rnd_155mm_Mo_Cluster","2Rnd_155mm_Mo_Cluster_O","6Rnd_155mm_Mo_AT_mine","6Rnd_155mm_Mo_AT_mine_O"};
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
				begin1[] = {"A3\Sounds_F\arsenal\weapons_vehicles\cannon_155mm\sochor_155mm_distant",2.51189,1,1500};
				soundBegin[] = {"begin1",1};
				SoundSetShot[] = {"Cannon155mm_Shot_SoundSet","Cannon155mm_Tail_SoundSet"};
			};
			reloadSound[] = {"A3\sounds_f\dummysound",1,1,20};
			reloadTime = 8;
			artilleryDispersion = 3.2;
			artilleryCharge = 0.19;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class EventHandlers
		{
				class itc_land_veh_weapons
				{
						fired = "_this call itc_land_veh_weapons_fnc_fired;";
				};
		};
	};

	class itc_land_155mm_howitzer: itc_land_howitzer {
		scope = 1;
		#include "CfgWeapons_howitzers_magazines155mm.hpp"
		displayName = "H155 L/52";
	};
	class itc_land_152mm_howitzer: itc_land_howitzer {
		scope = 1;
		#include "CfgWeapons_howitzers_magazines152mm.hpp"
		displayName = "H152 L/52";
	};
