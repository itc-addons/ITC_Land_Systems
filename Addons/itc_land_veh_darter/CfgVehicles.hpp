#define STRINGIFY(s) #s
#define action_darter_unpack(CLASS, NAME, ITEM) \
  class CLASS { \
    displayName = NAME; \
    condition = STRINGIFY(ITEM)  in (items _player); \
    statement = [STRINGIFY(ITEM),_player] call itc_land_veh_darter_fnc_unPackUAV; \
    priority = 1.5; \
    showDisabled = 1; \
    exceptions[] = {"isNotInside","isNotSitting"}; \
  };

class CfgVehicles {

	class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ITC_Land_UnpackDarter {
                displayName = "Unpack UAS";
                condition = "[ACE_player] call itc_land_veh_darter_fnc_canunpack";
                statement = "";
                exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
                showDisabled = 0;
                priority = 0;
				
             /*	action_darter_unpack(ITC_Land_Unpack_AR2_B, "AR-2 Darter [NATO]", ITC_Land_B_UAV_Packed)
				action_darter_unpack(ITC_Land_Unpack_AR2_O, "AR-2 Tayran [CSAT]", ITC_Land_O_UAV_Packed)
				action_darter_unpack(ITC_Land_Unpack_AR2_I, "AR-2 Darter [AAF]", ITC_Land_I_UAV_Packed)				*/
				
				class ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2 Darter [NATO]";
                    condition = "'ITC_Land_B_UAV_Packed' in (items _player)";
                    statement = "['ITC_Land_B_UAV_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                    priority = 1;
                    showDisabled = 1;
					exceptions[] = {"isNotInside","isNotSitting"};
                    enableInside = 0;
                };
                class ITC_Land_Unpack_AR2_O: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2 Tayran [CSAT]";
                    condition = "'ITC_Land_O_UAV_Packed' in (items _player)";
                    statement = "['ITC_Land_O_UAV_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };
                class ITC_Land_Unpack_AR2_I: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2 Darter [AAF]";
                    condition = "'ITC_Land_I_UAV_Packed' in (items _player)";
                    statement = "['ITC_Land_I_UAV_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };
                class ITC_Land_Unpack_AR2i_B: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2i Darter 2 [NATO]";
                    condition = "'ITC_Land_B_AR2i_Packed' in (items _player)";
                    statement = "['ITC_Land_B_AR2i_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };
                class ITC_Land_Unpack_AR2i_O: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2i Tayran 2 [CSAT]";
                    condition = "'ITC_Land_O_AR2i_Packed' in (items _player)";
                    statement = "['ITC_Land_O_AR2i_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };
                class ITC_Land_Unpack_AR2i_I: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2i Darter 2 [NATO]";
                    condition = "'ITC_Land_I_AR2i_Packed' in (items _player)";
                    statement = "['ITC_Land_I_AR2i_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };
				
                class ITC_Land_Unpack_AR2e_B: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2e Darter [NATO]";
                    condition = "'ITC_Land_B_AR2e_Packed' in (items _player)";
                    statement = "['ITC_Land_B_AR2e_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };
                class ITC_Land_Unpack_AR2e_O: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2e Tayran [CSAT]";
                    condition = "'ITC_Land_O_AR2e_Packed' in (items _player)";
                    statement = "['ITC_Land_O_AR2e_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };
                class ITC_Land_Unpack_AR2e_I: ITC_Land_Unpack_AR2_B {
                    displayName = "AR-2e Darter [NATO]";
                    condition = "'ITC_Land_I_AR2e_Packed' in (items _player)";
                    statement = "['ITC_Land_I_AR2e_Packed',_player] call itc_land_veh_darter_fnc_unPackUAV";
                };				
            };
        };
    };
    class Air;
    class Helicopter: Air {
        class ACE_Actions {
            class ACE_MainActions {};
        };
        class Turrets {
            class MainTurret;
        };
    };
    class Helicopter_Base_F: Helicopter {
        class ACE_Actions: ACE_Actions{
            class ACE_MainActions: ACE_MainActions {};
        };
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };
	class UAV_01_base_F: Helicopter_Base_F	{
        class ACE_Actions: ACE_Actions {
            class ACE_MainActions: ACE_MainActions {};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {};
		};
	};

	class ITC_Land_UAV_AR2i_base: UAV_01_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                    turretInfoType = "ITC_Land_AR2I_RscOptics_UAV_gunner";
            };
        };
    };
	class ITC_Land_B_UAV_AR2i: ITC_Land_UAV_AR2i_base {
		author = "Toadball";
		displayName = "AR-2i Darter 2";
		itc_land_darter_PacksTo = "ITC_Land_B_AR2i_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;		
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"};
		textureList[] = {"Blufor", 1};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};

	};
	class ITC_Land_O_UAV_AR2i: ITC_Land_UAV_AR2i_base {
		author = "Toadball";
		displayName = "AR-2i Tayran 2";
		itc_land_darter_PacksTo = "ITC_Land_O_AR2i_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;		
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_OPFOR_CO.paa"};
		textureList[] = {"Opfor", 1};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};

	};
	class ITC_Land_I_UAV_AR2i: ITC_Land_UAV_AR2i_base {
		author = "Toadball";
		displayName = "AR-2i Darter 2";
		itc_land_darter_PacksTo = "TB_I_AR2i_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;		
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		accuracy = 0.5;
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_INDP_CO.paa"};
		textureList[] = {"Indep", 1};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};

	};

	class ITC_Land_UAV_AR2e_base: UAV_01_base_F {
		fuelCapacity = 15;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
				class OpticsIn {
					class Wide {
						opticsDisplayName = "W";
						initAngleX = 0;
						minAngleX = -30;
						maxAngleX = 30;
						initAngleY = 0;
						minAngleY = -100;
						maxAngleY = 100;
						initFov = 0.75;
						minFov = 0.75;
						maxFov = 0.75;
						directionStabilized = 1;
						visionMode[] = {"Normal","NVG"};
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";											
					};
					class Mid: Wide {
						opticsDisplayName = "M";
						initFov = 0.375;
						minFov = 0.375;
						maxFov = 0.375;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";						
					};						
					class Narrow: Wide {
						opticsDisplayName = "N";
						initFov = 0.1875;
						minFov = 0.1875;
						maxFov = 0.1875;
						gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";						
					};					
				};
            };
        };
    };
	class ITC_Land_B_UAV_AR2e: ITC_Land_UAV_AR2e_base {
		author = "Toadball";
		displayName = "AR-2e Darter";
		itc_land_darter_PacksTo = "ITC_Land_B_AR2e_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\B_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;		
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		accuracy = 0.5;
        class Turrets: Turrets {
            class MainTurret: MainTurret {  };
        };		
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"};
		textureList[] = {"Blufor", 1};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};

	};	
	class ITC_Land_O_UAV_AR2e: ITC_Land_UAV_AR2e_base {
		author = "Toadball";
		displayName = "AR-2e Trayan";
		itc_land_darter_PacksTo = "ITC_Land_O_AR2e_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\O_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;		
		side = 0;
		faction = "OPF_F";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
		accuracy = 0.5;
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };		
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"};
		textureList[] = {"Opfor", 1};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};
	};	
	class ITC_Land_I_UAV_AR2e: ITC_Land_UAV_AR2e_base {
		author = "Toadball";
		displayName = "AR-2e Darter";
		itc_land_darter_PacksTo = "ITC_Land_I_AR2e_Packed";
		class SimpleObject {
			eden = 1;
			animate[] = {{"damagehide", 0}, {"rotorimpacthide", 0}, {"tailrotorimpacthide", 0}, {"propeller1_rotation", 1}, {"propeller1_blur_rotation", 1}, {"propeller2_rotation", 0}, {"propeller2_blur_rotation", 0}, {"propeller3_rotation", 1}, {"propeller3_blur_rotation", 1}, {"propeller4_rotation", 0}, {"propeller4_blur_rotation", 0}, {"propeller1_hide", 0}, {"propeller1_blur_hide", 0}, {"propeller2_hide", 0}, {"propeller2_blur_hide", 0}, {"propeller3_hide", 0}, {"propeller3_blur_hide", 0}, {"propeller4_hide", 0}, {"propeller4_blur_hide", 0}, {"mainturret", 0}, {"maingun", -0.05}};
			hide[] = {"zasleh", "light_r", "tail rotor blur", "main rotor blur", "zadni svetlo", "clan", "podsvit pristroju", "poskozeni"};
			verticalOffset = 0.15;
			verticalOffsetWorld = -0.001;
			init = "''";
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_UAV_01_F.jpg";
		scope = 2;
		scopeCurator = 2;		
		side = 2;
		faction = "IND_F";
		crew = "I_UAV_AI";
		typicalCargo[] = {"I_UAV_AI"};
		accuracy = 0.5;
        class Turrets: Turrets {
            class MainTurret: MainTurret {  };
        };		
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		hiddenSelectionsTextures[] = {"A3\Drones_F\Air_F_Gamma\UAV_01\Data\UAV_01_CO.paa"};
		textureList[] = {"Indep", 1};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};

	};		

	class B_UAV_01_F: UAV_01_base_F {
		itc_land_darter_PacksTo = "ITC_Land_B_UAV_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};
	};
	class O_UAV_01_F: UAV_01_base_F {
		itc_land_darter_PacksTo = "ITC_Land_O_UAV_Packed";
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};

		};
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};

	};
	class I_UAV_01_F: UAV_01_base_F {
		itc_land_darter_PacksTo = "ITC_Land_B_UAV_Packed";
		class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackDarter {
					displayName = "Repack UAV";
					condition = "(( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_veh_darter_fnc_PackUAV";
				};

			};
		};
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};			
		};

	};
	
	class Bag_Base;	
	class ITC_Land_uav_backpack_base: Bag_Base {
			author = "Toadball";
			displayName = "UAV Bag";
			maximumLoad = 300;
			mass = 60;
			mapSize = 0.6;
			scope = 0;
			model = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\UAV_backpack_F.p3d";
			editorCategory = "EdCat_Equipment";
			editorSubcategory = "EdSubcat_Backpacks";
			hiddenSelectionsMaterials[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_backpack.rvmat"};				
	};
	class ITC_Land_b_uav_backpack: ITC_Land_uav_backpack_base {
			author = "Toadball";
			displayName = "UAV Bag [NATO]";
			scope = 2;
			scopeCurator = 2;
			faction = "BLU_F";
			picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_rgr_ca";
			hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_NATO_co.paa"};
	};			
	class ITC_Land_i_uav_backpack: ITC_Land_uav_backpack_base {
			author = "Toadball";
			displayName = "UAV Bag [AAF]";
			scope = 2;
			scopeCurator = 2;
			faction = "IND_F";
			picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_oli_ca";
			hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_AAF_co.paa"};							
	};
	class ITC_Land_o_uav_backpack: ITC_Land_uav_backpack_base {
			author = "Toadball";
			displayName = "UAV Bag [CSAT]";
			scope = 2;
			scopeCurator = 2;
			faction = "OPF_F";
			picture = "\A3\Drones_F\Weapons_F_Gamma\Ammoboxes\Bags\Data\UI\icon_B_C_UAV_cbr_ca";
			hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_CSAT_co.paa"};							
	};	

};
