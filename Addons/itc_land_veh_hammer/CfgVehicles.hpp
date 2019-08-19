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
#define mag_48(a) a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a, a

class NewTurret;

class CfgVehicles {
	class LandVehicle;
	class StaticWeapon: LandVehicle {
        class ACE_SelfActions;
        class Turrets {
            class MainTurret: NewTurret {};
		};
	};
	class StaticMGWeapon: StaticWeapon {
        class ACE_SelfActions: ACE_SelfActions {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
	};
	class B_Ship_Gun_01_base_F: StaticMGWeapon {
        class ACE_SelfActions: ACE_SelfActions {};
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
		};
	};
	class itc_land_NGS01_base: B_Ship_Gun_01_base_F {
		class ACE_SelfActions: ACE_SelfActions {
			class ITC_Land_CommanderTablet {
				displayName = "Open Mounted Tablet";
				icon = "\itc_land_tablet\UI\tableticon256.paa";
                condition = "( _target ) == ([] call itc_land_common_fnc_getCurVehicle)";
				statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet";
			};
            class ITC_Land_SPHammohandler {
                displayName = "Open Ammo Handling Interface";
                condition = "( _target ) == ([] call itc_land_common_fnc_getCurVehicle)";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };
		};
		artilleryScanner = 0;
		class itc_land {
		  tabletInterfaces[] = {"spg"};
		  mountedTablet = "itc_land_tablet_spg";
  		  loaderType = 1; // semi automatic
		};
        class Turrets: Turrets {
            class MainTurret: MainTurret {
				turretInfoType = "ITC_Land_RscIGS_SPH";
				weapons[] = {"itc_land_127mm_navalgunsystem"};
				magazines[] = {
					mag_48("itc_land_g127hex"),
					mag_24("itc_land_g127smo"),
					mag_24("itc_land_g127ill"),
					mag_12("itc_land_g127pgm"),
					mag_12("itc_land_g127lgm")
				};
				class OpticsIn: ITC_Land_Optics_IGS {
					class Wide: Wide {};
				};
			};
		};
	};
	class itc_land_NGS01_hammer2: itc_land_NGS01_base {
		scope = 2;
		author = "Toadball";
		displayName = "Mk45 mod. 0 Hammer 2";
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		class itc_land: itc_land {

		};
	};
	class itc_land_NGS01_hammer2_mod1: itc_land_NGS01_base {
		scope = 2;
		author = "Toadball";
		displayName = "Mk45 mod. 1 Hammer 2";
		scopeCurator = 2;
		side = 1;
		faction = "BLU_F";
		crew = "B_UAV_AI";
		typicalCargo[] = {"B_UAV_AI"};
		class itc_land: itc_land {
 		  loaderType = 2; // fully automatic			
		};
	};
};
