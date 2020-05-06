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
class Optics_Armored {
	class Wide: RCWSOptics {};
};
class Optics_Gunner_MBT_01: Optics_Armored {
	class Wide: Wide {};
};
class ITC_Land_Optics_IGS: Optics_Gunner_MBT_01 {
	class Wide: Wide {
		initFov = 0.174;
		minFov = 0.174;
		maxFov = 0.174;
		visionMode[] = {"Normal","NVG"};
		thermalMode[] = {};
		gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MBT_01_w_F.p3d";
		gunnerOpticsEffect[] = {};
	};
};


#include "CfgFunctions.hpp"
#include "RscInGameUI.hpp"