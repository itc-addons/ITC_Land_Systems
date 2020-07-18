class CfgPatches {
  class itc_land_veh_uav01 {
    requiredaddons[] = {"A3_Drones_F_Air_F_Gamma_UAV_01","itc_land_veh_sights","itc_land_packable"};
		requiredversion = 1.9;
    units[] = {"ITC_Land_B_UAV_AR2i","ITC_Land_O_UAV_AR2i","ITC_Land_I_UAV_AR2i","ITC_Land_B_UAV_AR2e","ITC_Land_O_UAV_AR2e","ITC_Land_I_UAV_AR2e","B_UAV_01_F","O_UAV_01_F","I_UAV_01_F","ITC_Land_b_uav_ar2i_backpack","ITC_Land_i_uav_ar2i_backpack","ITC_Land_o_uav_ar2i_backpack"};
		weapons[] = {"ITC_Land_B_AR2i_Packed","ITC_Land_O_AR2i_Packed","ITC_Land_I_AR2i_Packed","ITC_Land_B_AR2e_Packed","ITC_Land_O_AR2e_Packed","ITC_Land_I_AR2e_Packed","ITC_Land_B_UAV_Packed","ITC_Land_O_UAV_Packed","ITC_Land_I_UAV_Packed"};
		magazines[] = {};
  };
  class itc_land_veh_darter {
		requiredaddons[] = {"A3_Drones_F_Air_F_Gamma_UAV_01","itc_land_veh_sights","itc_land_packable"};
		requiredversion = 1.9;
    units[] = {};
    weapons[] = {};
    magazines[] = {};
	};
};
/*
class Optics_Commander_02: Optics_Armored
{
  class Wide: Wide
  {
    thermalMode[] = {0, 1};
    gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_w_F.p3d";
  };
  class Medium: Medium
  {
    thermalMode[] = {0, 1};
    gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_m_F.p3d";
  };
  class Narrow: Narrow
  {
    thermalMode[] = {0, 1};
    gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Commander_02_n_F.p3d";
  };
};
*/
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"
