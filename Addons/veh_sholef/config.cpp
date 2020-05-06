 class CfgPatches {
	class itc_land_veh_sholef	{
		units[] = {	"itc_land_b_SPH_Sholef2","itc_land_b_t_SPH_Sholef2" };
		weapons[] = {};
		requiredVersion = 1.8;
		requiredAddons[] = {"A3_Weapons_F","A3_Armor_F_Gamma_MBT_01","itc_land_veh_sights","itc_land_veh_weapons","itc_land_sphammohandler"};
		author = "ITC Addons Team";
		authors[] = {"ToadBall","Yax"};
	};
};
class RCWSOptics;
class Optics_Armored {
	class Wide: RCWSOptics {};
};
class Optics_Gunner_MBT_01: Optics_Armored {
	class Wide: Wide {};
};
class ITC_Land_Optics_IGS: Optics_Gunner_MBT_01 {
	class Wide: Wide {};
};
#include "CfgVehicles.hpp"