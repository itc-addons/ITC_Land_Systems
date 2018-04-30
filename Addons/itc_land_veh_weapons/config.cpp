class CfgPatches {
	class itc_land_veh_weapons {
		author = "ITC Addons Team";
		authors[] = {"ToadBall","Yax","VKing"};
		requiredaddons[] = {"A3_Weapons_F"};
		requiredversion = 1.8;
		units[] = {};
		weapons[] = {
			"itc_land_155mm_howitzer",
			"itc_land_152mm_howitzer"
		};
		magazines[] = {
		};
	};
};

class mode_semiauto;

#include "ITC_Land_CfgFuzes.hpp"
#include "CfgFunctions.hpp"
#include "CfgAmmo.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgEventHandlers.hpp"
#include "CfgVehicles.hpp"
