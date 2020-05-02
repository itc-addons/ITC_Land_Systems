 class CfgPatches {
	class itc_land_veh_sochor	{
		units[] = {	"itc_land_o_sph_sochor2","itc_land_o_t_sph_sochor2"};
		weapons[] = {};
		requiredVersion = 1.8;
		requiredAddons[] = {"A3_Weapons_F","itc_land_veh_sights","itc_land_veh_weapons","itc_land_sphammohandler"};
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