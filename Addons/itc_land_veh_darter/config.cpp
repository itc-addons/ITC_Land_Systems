class CfgPatches {
	class itc_land_veh_darter {
		requiredaddons[] = {"A3_Drones_F_Air_F_Gamma_UAV_01","ace_mk6mortar","ace_common"};
		requiredversion = 1.8;
		units[] = {"ITC_Land_B_UAV_AR2i","ITC_Land_O_UAV_AR2i","ITC_Land_I_UAV_AR2i","B_UAV_01_F","O_UAV_01_F","I_UAV_01_F","ITC_Land_b_uav_ar2i_backpack","ITC_Land_i_uav_ar2i_backpack","ITC_Land_o_uav_ar2i_backpack"};
		weapons[] = {"TB_B_AR2i_Packed","TB_O_AR2i_Packed","TB_I_AR2i_Packed","TB_B_UAV_Packed","TB_O_UAV_Packed","TB_I_UAV_Packed"};
		magazines[] = {};
	};
};
#include "RscInGameUI.hpp"
#include "CfgFunctions.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
