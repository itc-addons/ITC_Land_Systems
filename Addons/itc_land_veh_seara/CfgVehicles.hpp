class CfgVehicles {
	class Tank;
	class Tank_F: Tank {
		class Turrets {
			class MainTurret;
		};
		class AnimationSources;		
	};
	class MBT_01_base_F: Tank_F {
		class Turrets: Turrets {
				class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};		
	};	
	class MBT_01_mlrs_base_F : MBT_01_base_F {
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};
		class AnimationSources: AnimationSources {};
	};
	class B_MBT_01_mlrs_base_F: MBT_01_mlrs_base_F {  
		class Turrets : Turrets {
			class MainTurret: MainTurret {};
		};	
		class AnimationSources: AnimationSources {};
		
	};
	class itc_land_MLRS01_base: B_MBT_01_mlrs_base_F {
		artilleryScanner = 0;			
		class itc_land {
			tabletInterfaces[] = {"spg"};
			class fcs {
				tableList = "b_230";
			};
		};		
		class Turrets : Turrets {
			class MainTurret : MainTurret {
				turretInfoType = "ITC_Land_RscGunnerSightSPH";	
				lockWhenVehicleSpeed= 5;
				maxHorizontalRotSpeed = "((360/20)/45)";
				
				weapons[] = {"itc_land_230mm_mlrs"};
			};
		};	
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_230mm_mlrs";
			};
		};		
	};
	class itc_land_b_mlrs_seara2 : itc_land_MLRS01_base {
		author = "Yax";
		displayName = "M5 mod. 0 Seara 2";
		scope = 2;		
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_MBT_01_mlrs_F.jpg";
		hiddenSelections[] = {"Camo1","Camo2","CamoNet"};
		hiddenSelectionsTextures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};		
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0.37},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0.38},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0.43},{"wheel_podkolol3",0.49},{"wheel_podkolol4",0.54},{"wheel_podkolol5",0.61},{"wheel_podkolol6",0.66},{"wheel_podkolop2",0.42},{"wheel_podkolop3",0.53},{"wheel_podkolop4",0.58},{"wheel_podkolop5",0.6},{"wheel_podkolop6",0.74},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"elevator",0.17},{"elevator_piston",0.17},{"maingunoptics",0.17},{"maingunoptics_stabilization",0.17},{"hidemlrs_1",1},{"hidemlrs_2",1},{"hidemlrs_3",1},{"hidemlrs_4",1},{"hidemlrs_5",1},{"hidemlrs_6",1},{"hidemlrs_7",1},{"hidemlrs_8",1},{"hidemlrs_9",1},{"hidemlrs_10",1},{"hidemlrs_11",1},{"hidemlrs_12",1}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 1.837;
			verticalOffsetWorld = 0.011;
			init = "''";
		};
		class TextureSources {
			class Sand  {
				displayName = "Sand";
				author = "Bohemia Interactive";
				textures[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body_CO.paa","A3\armor_f_gamma\MBT_01\data\MBT_01_MLRS_co.paa","A3\Armor_F\Data\camonet_NATO_Desert_CO.paa"};
				factions[] = {"BLU_F"};
			};
			class Olive {
				displayName = "Olive";
				author = "Bohemia Interactive";
				textures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
				factions[] = {"BLU_T_F"};
			};
		};
		availableForSupportTypes[] = {"Artillery"};
	};
	class itc_land_b_t_mlrs_seara2: itc_land_b_mlrs_seara2 {
		author = "Toadball";
		class SimpleObject
		{
			eden = 1;
			animate[] = {{"damagehide",0},{"wheel_koll1",0},{"wheel_kolol1",0},{"wheel_podkolol1",0.37},{"wheel_kolp1",0},{"wheel_kolop1",0},{"wheel_podkolop1",0.37},{"wheel_koll2",0},{"wheel_kolp2",0},{"wheel_kolol2",0},{"wheel_kolol3",0},{"wheel_kolol4",0},{"wheel_kolol5",0},{"wheel_kolol6",0},{"wheel_kolop2",0},{"wheel_kolop3",0},{"wheel_kolop4",0},{"wheel_kolop5",0},{"wheel_kolop6",0},{"wheel_podkolol2",0.42},{"wheel_podkolol3",0.49},{"wheel_podkolol4",0.54},{"wheel_podkolol5",0.61},{"wheel_podkolol6",0.66},{"wheel_podkolop2",0.42},{"wheel_podkolop3",0.53},{"wheel_podkolop4",0.57},{"wheel_podkolop5",0.6},{"wheel_podkolop6",0.73},{"podkolol1_hide_damage",0},{"podkolol2_hide_damage",0},{"podkolol3_hide_damage",0},{"podkolol4_hide_damage",0},{"podkolol5_hide_damage",0},{"podkolol6_hide_damage",0},{"podkolol7_hide_damage",0},{"podkolol8_hide_damage",0},{"podkolop1_hide_damage",0},{"podkolop2_hide_damage",0},{"podkolop3_hide_damage",0},{"podkolop4_hide_damage",0},{"podkolop5_hide_damage",0},{"podkolop6_hide_damage",0},{"podkolop7_hide_damage",0},{"podkolop8_hide_damage",0},{"damagevez",0},{"mainturret",0},{"maingun",0.17},{"damagevezvelitele",0},{"poklop_commander_damage",0},{"poklop_driver_damage",0},{"hatchdriver",0},{"plates_1_y",0},{"plates_2_y",0},{"plates_1_x",0},{"plates_2_x",0},{"plates_1_bank",0},{"plates_2_bank",0},{"elevator",0.17},{"elevator_piston",0.17},{"maingunoptics",0.17},{"maingunoptics_stabilization",0.17},{"hidemlrs_1",1},{"hidemlrs_2",1},{"hidemlrs_3",1},{"hidemlrs_4",1},{"hidemlrs_5",1},{"hidemlrs_6",1},{"hidemlrs_7",1},{"hidemlrs_8",1},{"hidemlrs_9",1},{"hidemlrs_10",1},{"hidemlrs_11",1},{"hidemlrs_12",1}};
			hide[] = {"clan","zasleh","light_l","light_r","zadni svetlo","brzdove svetlo","podsvit pristroju","poskozeni"};
			verticalOffset = 1.838;
			verticalOffsetWorld = 0.012;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F_Exp\Data\CfgVehicles\B_T_MBT_01_mlrs_F.jpg";
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
		hiddenSelectionsTextures[] = {"A3\Armor_F_Exp\MBT_01\data\MBT_01_body_olive_CO.paa","A3\Armor_F_Exp\MBT_01\data\MBT_01_MLRS_olive_co.paa","A3\Armor_F\Data\camonet_NATO_Green_CO.paa"};
	};	
};
