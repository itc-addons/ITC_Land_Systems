 class CfgPatches {
	class itc_land_veh_sights	{
		units[] = {	};
		weapons[] = {};
		requiredVersion = 0.10;
		requiredAddons[] = {"ace_common","ace_mk6mortar"};
		author = "ITC Addons Team";
		authors[] = {"ToadBall","Yax"};
	};
};
class RCWSOptics;
class ITC_Land_Optics_IGS {
	class Wide: RCWSOptics {
		initFov = "(36 / 120)";
		minFov = "(36 / 120)";
		maxFov = "(36 / 120)";
		visionMode[] = {"Normal","NVG"};
		thermalMode[] = {};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
		gunnerOpticsEffect[] = {};
	};
};


#include "CfgFunctions.hpp"
#include "RscInGameUI.hpp"