class CfgPatches {
  class itc_land_veh_uav06 {
    requiredaddons[] = {"A3_Air_F_Orange_UAV_06","itc_land_packable"};
		requiredversion = 1.9;
    units[] = {"B_UAV_06_F","O_UAV_06_F","I_UAV_06_F"};
		weapons[] = {"ITC_Land_B_AL6_Packed","ITC_Land_O_AL6_Packed","ITC_Land_I_AL6_Packed"};
		magazines[] = {};
  };
};

#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
