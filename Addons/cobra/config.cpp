class CfgPatches {
	class itc_land_cobra{
		author = "ITC Addons Team";
		authors[] = {"ToadBall","Yax"};
		requiredAddons[] = {"A3_Data_F", "A3_Characters_F", "A3_Air_F", "A3_Armor_F", "A3_Boat_F", "A3_Soft_F", "A3_Air_F_Heli_Heli_Transport_04", "A3_Characters_F_exp", "A3_Props_F_Argo", "A3_Props_F_Orange", "A3_Characters_F_Orange"};
		requiredversion = 1.9;
		units[] = {"itc_land_COBRA01","itc_land_COBRA02","ITC_Land_Loudspeakers","ITC_Land_Loudspeakers2"};
		weapons[] = {};
		magazines[] = {};
	};
};

#include "config\cfgVehicles.hpp"
#include "config\cfgFunctions.hpp"
#include "config\cfgMisc.hpp"

class Extended_FiredBIS_EventHandlers {
    class All {
			class itc_land_cobra {
        firedBIS = "_this call itc_land_cobra_fnc_fired";
			};
    };
};
