/// Magazines macros definition ///

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_24(a) a, a, a, a, a, a, a, a, a, a, a, a,a, a, a, a, a, a, a, a, a, a, a, a

class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
        class ACE_SelfActions;	
	};
	class Tank_F: Tank {
        class ACE_SelfActions: ACE_SelfActions {};		
		class Turrets {
			class MainTurret;
		};
		class AnimationSources;
	};
	class MBT_01_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};		
		class Turrets: Turrets {
				class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class MBT_01_arty_base_F: MBT_01_base_F {
        class ACE_SelfActions: ACE_SelfActions {};		
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F {
        class ACE_SelfActions: ACE_SelfActions {};				
		class AnimationSources: AnimationSources {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};

	class itc_land_SPH01_base: B_MBT_01_arty_base_F {
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_SPHammohandler {
                displayName = "Open Ammo Handling Interface";
                condition = "( gunner _target ) == ACE_Player";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };	
			class ITC_Land_CommanderTablet {
				displayName = "Open Mounted Tablet";
				icon = "\itc_land_tablet\UI\tableticon256.paa";
				condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( commander _target ) == ACE_Player)";
				statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
			};			
		};				
		artilleryScanner = 0;
		class itc_land {
		  tabletInterfaces[] = {"spg"};
		  mountedTablet = "itc_land_tablet_spg";
		  class fcs {
			tableList = "g_155";
		  };
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightSPH";
				weapons[] = {"itc_land_155mm_howitzer"};
				magazines[] = {
					mag_24("itc_land_g155hex"),
					mag_10("itc_land_g155smo"),
					mag_5("itc_land_g155ill"),
					mag_5("itc_land_g155icm"),
					mag_5("itc_land_g155pgm")
				};
				lockWhenVehicleSpeed= 1;
				maxHorizontalRotSpeed = "((360/30)/45)";
			};
		};
		class AnimationSources: AnimationSources {};

	};
	class itc_land_b_SPH_Sholef2: itc_land_SPH01_base {
		author = "Toadball";
		scope = 2;
		scopeCurator = 2;		
		displayName = "M4 mod. 0 Sholef 2";
		mapSize = 11.83;
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0.33},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0.33},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0.39},{"wheel_podkolol3",0.47},{"wheel_podkolol4",0.53},{"wheel_podkolol5",0.61},{"wheel_podkolol6",0.67},{"wheel_podkolop2",0.41},{"wheel_podkolop3",0.53},{"wheel_podkolop4",0.52},{"wheel_podkolop5",0.65},{"wheel_podkolop6",0.73},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"hatchcommander",0},{"recoil",0},{"obsturret",0},{"obsgun",0},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"maingunoptics",0.17},{"zaslehrot_hmg",0},{"artillery_muzzle_flash",0},{"gmg_muzzle_flash",0},{"zaslehrot_gmg",0}};
			hide[] = {"clan","zasleh2","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.925;
			verticalOffsetWorld = 0.031;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_arty_F.jpg";

		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa","A3\Data_F\Vehicles\Turret_CO.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
		class TextureSources {
			class Sand {
				displayName = "Sand";
				author = "Bohemia Interactive";
				textures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\data\MBT_01_scorcher_co.paa","A3\Data_F\Vehicles\Turret_CO.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
				factions[] = {"BLU_F"};
			};
			class Olive {
				displayName = "Olive";
				author = "Bohemia Interactive";
				textures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa","A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
				factions[] = {"BLU_T_F"};
			};
		};
		availableForSupportTypes[] = {"Artillery"};
	};
	class itc_land_b_t_SPH_Sholef2: itc_land_b_SPH_Sholef2 {
		author = "Toadball";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0.33},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0.33},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0.39},{"wheel_podkolol3",0.47},{"wheel_podkolol4",0.53},{"wheel_podkolol5",0.61},{"wheel_podkolol6",0.67},{"wheel_podkolop2",0.41},{"wheel_podkolop3",0.53},{"wheel_podkolop4",0.52},{"wheel_podkolop5",0.65},{"wheel_podkolop6",0.73},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"hatchcommander",0},{"recoil",0},{"obsturret",0},{"obsgun",0},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"maingunoptics",0.17},{"zaslehrot_hmg",0},{"artillery_muzzle_flash",0},{"gmg_muzzle_flash",0},{"zaslehrot_gmg",0}};
			hide[] = {"clan","zasleh2","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.926;
			verticalOffsetWorld = 0.031;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_arty_F.jpg";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 1;
		faction = "BLU_T_F";
		crew = "B_T_Crew_F";
		typicalCargo[] = {"B_T_Soldier_F"};
		class TransportWeapons {
			class _xx_arifle_MXC_khk_F {
				weapon = "arifle_MXC_khk_F";
				count = 2;
			};
		};
		hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_scorcher_olive_CO.paa","A3\Data_F_Exp\Vehicles\Turret_olive_CO.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
	};
};
