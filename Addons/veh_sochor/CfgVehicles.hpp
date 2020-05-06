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
	};
	class MBT_02_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};
		class Turrets: Turrets {
				class MainTurret: MainTurret {};
		};
	};
	class MBT_02_arty_base_F: MBT_02_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
		class Turrets: Turrets {
				class MainTurret: MainTurret { };
		};
	};
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
		class Turrets: Turrets {
				class MainTurret: MainTurret {};
		};
	};
	class itc_land_SPH02_base: O_MBT_02_arty_base_F {
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
		  loaderType = 1; // semi automatic
		  class fcs {
			tableList = "g_152";
		  };
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscIGS_SPH";
				weapons[] = {"itc_land_152mm_howitzer"};
				magazines[] = {
					mag_24("itc_land_g152hex"),
					mag_10("itc_land_g152smo"),
					mag_5("itc_land_g152ill"),
					mag_5("itc_land_g152icm"),
					mag_5("itc_land_g152lgm")
				};
				lockWhenVehicleSpeed= 1;
				maxHorizontalRotSpeed = "((360/30)/45)";
				class OpticsIn: ITC_Land_Optics_IGS {
					class Wide: Wide {};
				};
			};
		};
	};
	class itc_land_o_sph_sochor2: itc_land_SPH02_base {
		author = "Toadball";
		displayName = "2S9 mod. 0 Sochor 2";
		mapSize = 12.09;
		textureList[] = {"Hex",1};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_MBT_02_arty_F.jpg";
		scope = 2;
		scopeCurator = 2;
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"wheel_koll1", 0}, {"wheel_kolol1", 0}, {"wheel_podkolol1", 0.47}, {"wheel_kolp1", 0}, {"wheel_kolop1", 0}, {"wheel_podkolop1", 0.49}, {"wheel_koll2", 0}, {"wheel_kolp2", 0}, {"wheel_kolol2", 0}, {"wheel_kolol3", 0}, {"wheel_kolol4", 0}, {"wheel_kolol5", 0}, {"wheel_kolol6", 0}, {"wheel_kolol7", 0}, {"wheel_kolop2", 0}, {"wheel_kolop3", 0}, {"wheel_kolop4", 0}, {"wheel_kolop5", 0}, {"wheel_kolop6", 0}, {"wheel_kolop7", 0}, {"wheel_podkolol2", 0.48}, {"wheel_podkolol3", 0.49}, {"wheel_podkolol4", 0.49}, {"wheel_podkolol5", 0.5}, {"wheel_podkolol6", 0.5}, {"wheel_podkolop2", 0.52}, {"wheel_podkolop3", 0.52}, {"wheel_podkolop4", 0.49}, {"wheel_podkolop5", 0.57}, {"wheel_podkolop6", 0.57}, {"podkolol1_hide_damage", 0}, {"podkolol2_hide_damage", 0}, {"podkolol3_hide_damage", 0}, {"podkolol4_hide_damage", 0}, {"podkolol5_hide_damage", 0}, {"podkolol6_hide_damage", 0}, {"podkolol7_hide_damage", 0}, {"podkolol8_hide_damage", 0}, {"podkolop1_hide_damage", 0}, {"podkolop2_hide_damage", 0}, {"podkolop3_hide_damage", 0}, {"podkolop4_hide_damage", 0}, {"podkolop5_hide_damage", 0}, {"podkolop6_hide_damage", 0}, {"podkolop7_hide_damage", 0}, {"podkolop8_hide_damage", 0}, {"damagevez", 0}, {"mainturret", 0}, {"maingun", 0.17}, {"hatchcommander", 0}, {"recoil", 0}, {"obsturret", 0}, {"obsgun", 0}, {"wheel_podkolop7", 0.56}, {"wheel_podkolol7", 0.51}, {"hatchdriver", 0}, {"damagevezvelitele", 0}, {"poklop_commander_damage", 0}, {"poklop_gunner_damage", 0}, {"poklop_driver_damage", 0}, {"zaslehrot_hmg", 0}, {"recoil_2", 0}, {"driver_fan", 4773.25}, {"lights_driver", 0}, {"lights_driver_off", 0}, {"indicatorspeed", 0}, {"indicatorrpm", 0}, {"indicatorvoltammeter", 0}, {"indicatortempoil", 0}, {"indicatortempwater", 0}, {"random_light_flicker", 4773.25}, {"engine_damage_fire_indicator", 0}, {"ltrack_dmg_hide", 0}, {"rtrack_dmg_hide", 0}, {"era_front_01_hide", 0}, {"era_front_02_hide", 0}, {"era_front_03_hide", 0}, {"era_front_04_hide", 0}, {"era_front_05_hide", 0}, {"era_front_06_hide", 0}, {"era_front_07_hide", 0}, {"era_front_08_hide", 0}, {"era_front_09_hide", 0}, {"era_front_10_hide", 0}, {"maingunoptics", 0.17}, {"artillery_muzzle_flash", 0}, {"gmg_muzzle_flash", 0}, {"zaslehrot_gmg", 0}};
			hide[] = {"clan", "zasleh2", "light_l", "light_r", "bulb_turret2", "bulb_driver2", "zadni svetlo", "brzdove svetlo", "podsvit pristroju", "poskozeni"};
			verticalOffset = 2.744;
			verticalOffsetWorld = 0.008;
			init = "''";
		};

	};
	class itc_land_o_t_sph_sochor2: itc_land_o_sph_sochor2 {
		author = "Toadball";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0.47},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0.49},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolol7",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_kolop7",0},{"wheel_podkolol2",0.48},{"wheel_podkolol3",0.49},{"wheel_podkolol4",0.49},{"wheel_podkolol5",0.5},{"wheel_podkolol6",0.5},{"wheel_podkolop2",0.52},{"wheel_podkolop3",0.52},{"wheel_podkolop4",0.49},{"wheel_podkolop5",0.57},{"wheel_podkolop6",0.57},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"hatchcommander",0},{"recoil",0},{"obsturret",0},{"obsgun",0},{"wheel_podkolop7",0.56},{"wheel_podkolol7",0.51},{"hatchdriver",0},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_gunner_damage",0},{"poklop_driver_damage",0},{"zaslehrot_hmg",0},{"recoil_2",0},{"driver_fan",5145.88},{"lights_driver",0},{"lights_driver_off",0},{"indicatorspeed",0},{"indicatorrpm",0},{"indicatorvoltammeter",0},{"indicatortempoil",0},{"indicatortempwater",0},{"random_light_flicker",5145.88},{"engine_damage_fire_indicator",0},{"ltrack_dmg_hide",0},{"rtrack_dmg_hide",0},{"era_front_01_hide",0},{"era_front_02_hide",0},{"era_front_03_hide",0},{"era_front_04_hide",0},{"era_front_05_hide",0},{"era_front_06_hide",0},{"era_front_07_hide",0},{"era_front_08_hide",0},{"era_front_09_hide",0},{"era_front_10_hide",0},{"maingunoptics",0.17},{"artillery_muzzle_flash",0},{"gmg_muzzle_flash",0},{"zaslehrot_gmg",0}};
			hide[] = {"clan","zasleh2","light_l","light_r","bulb_turret2","bulb_driver2","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 2.744;
			verticalOffsetWorld = 0.008;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\O_T_MBT_02_arty_ghex_F.jpg";
		scope = 2;
		scopeCurator = 2;
		DLC = "Expansion";
		side = 0;
		faction = "OPF_T_F";
		crew = "O_T_crew_F";
		typicalCargo[] = {"O_T_Soldier_F","O_T_Soldier_F","O_T_Soldier_F"};
		textureList[] = {"GreenHex",1};
		hiddenSelectionsTextures[] = {"a3\Armor_F_Exp\MBT_02\Data\MBT_02_body_ghex_CO.paa","a3\Armor_F_Exp\MBT_02\Data\MBT_02_scorcher_ghex_CO.paa","a3\Armor_F_Exp\MBT_02\Data\MBT_02_ghex_CO.paa","a3\Data_F_Exp\Vehicles\Turret_ghex_CO.paa","A3\Armor_F\Data\camonet_CSAT_HEX_Green_CO.paa"};
		class TransportMagazines {
			class _xx_SmokeShell {
				magazine = "SmokeShell";
				count = 2;
			};
			class _xx_SmokeShellRed {
				magazine = "SmokeShellRed";
				count = 2;
			};
			class _xx_30Rnd_580x42_Mag_F {
				magazine = "30Rnd_580x42_Mag_F";
				count = 4;
			};
		};
		class TransportWeapons {
			class _xx_arifle_CTAR_blk_F {
				weapon = "arifle_CTAR_blk_F";
				count = 2;
			};
		};
	};
};
