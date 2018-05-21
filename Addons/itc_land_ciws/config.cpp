class CfgPatches {
	class itc_land_ciws {
		author = "ITC Addons Team";
		authors[] = {"ToadBall","Yax"};
		requiredAddons[] = {"A3_Data_F", "A3_Characters_F", "A3_Air_F", "A3_Armor_F", "A3_Boat_F", "A3_Soft_F", "A3_Air_F_Heli_Heli_Transport_04", "A3_Characters_F_exp", "A3_Props_F_Argo", "A3_Props_F_Orange", "A3_Characters_F_Orange"};
		requiredversion = 1.8;
		units[] = {"itc_land_cram_praetorian2"};
		weapons[] = {};
		magazines[] = {};
	};
};

#include "config\cfgVehicles.hpp"
#include "config\cfgWeapons.hpp"
#include "config\cfgMagazines.hpp"
#include "config\cfgAmmo.hpp"
#include "config\cfgMisc.hpp"

#include "config\cfgFunctions.hpp"

class Extended_FiredBIS_EventHandlers {
    class All {
        eh_identifier_name = "_this call itc_land_ciws_fnc_fired";
    };
};
