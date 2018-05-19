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
class NewTurret;

class CfgVehicles {
	class LandVehicle;
	class Car: LandVehicle {
		class ACE_SelfActions;
	};
	class Car_F: Car {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Truck_F: Car_F {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Truck_02_base_F: Truck_F {
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class Truck_02_MRL_base_F: Truck_02_base_F {
		class Turrets {
			class MainTurret: NewTurret {};
		};
		class AnimationSources;
		class ACE_SelfActions: ACE_SelfActions {};
	};
	class itc_land_MLRS02_base: Truck_02_MRL_base_F	{
		artilleryScanner = 0;
		class ACE_SelfActions : ACE_SelfActions {
			class ITC_Land_MountedTablet {
				displayName = "Open Mounted Tablet";
				icon = "\itc_land_tablet\UI\arty-icon.paa";
				condition = "([_target] call itc_land_tablet_fnc_vehicleHasTablet) && (( gunner _target ) == ACE_Player)";
				statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
			};
		};
		class itc_land {
			tabletInterfaces[] = {"spg"};
			mountedTablet = "itc_land_tablet_spg";
			class fcs {
				tableList = "b_230";
			};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				weapons[] = {"itc_land_230mm_mlrs"};
				magazines[] = {"itc_land_m230hex_12rnd"};
				maxHorizontalRotSpeed = "((360/30)/45)";
				turretInfoType = "ITC_Land_RscGunnerSightZamakMRLi";
			};
		};
		class AnimationSources: AnimationSources {
			class Missiles_revolving {
				source = "revolving";
				weapon = "itc_land_230mm_mlrs";
			};
		};

	};
	class itc_land_i_mlrs_zamak: itc_land_MLRS02_base {
		author = "Toadball";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Truck_02_MRL_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Zamak MRLi";
		side = 2;
		faction = "IND_F";
		crew = "I_Soldier_F";
		typicalCargo[] = {"I_Soldier_F","I_Soldier_F"};
	};
	class itc_land_o_mlrs_zamak: itc_land_MLRS02_base {
		author = "Toadball";
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\I_Truck_02_MRL_F.jpg";
		scope = 2;
		scopeCurator = 2;
		displayName = "Zamak MRLi";
		side = 0;
		faction = "OPF_F";
		crew = "O_Soldier_F";
		typicalCargo[] = {"O_Soldier_F","O_Soldier_F"};
		textureList[] = {"Hex",1};
		hiddenSelections[] = {"Camo1","Camo2","camo3"};
		hiddenSelectionsTextures[] = {"\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa","\a3\soft_f_beta\truck_02\data\truck_02_int_co.paa","\a3\soft_f_gamma\truck_02\data\truck_02_mrl_OPFOR_co.paa"};
	};
};
