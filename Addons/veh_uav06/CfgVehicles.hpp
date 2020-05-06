class CfgVehicles {

	class Man;
    class CAManBase: Man {
      class ACE_SelfActions {
        class ACE_Equipment {
          class ITC_Land_Unpack {

            class ITC_Land_Unpack_AL6_B {
              displayName = "AL-6 Pelican [NATO]";
              condition = "'ITC_Land_B_AL6_Packed' in (items _player)";
              statement = "['ITC_Land_B_AL6_Packed',_player] call itc_land_packable_fnc_unPack";
              priority = 1;
              showDisabled = 1;
              exceptions[] = {"isNotInside","isNotSitting"};
              enableInside = 0;
            };

          };
        };
      };
    };
    class Air;
    class Helicopter: Air {
      class ACE_Actions {
          class ACE_MainActions {};
      };
    };
    class Helicopter_Base_F: Helicopter {
      class ACE_Actions: ACE_Actions{
          class ACE_MainActions: ACE_MainActions {};
      };
    };
	class UAV_06_base_F: Helicopter_Base_F	{
    class ACE_Actions: ACE_Actions {
			class ACE_MainActions: ACE_MainActions {
				class ITC_Land_PackAL6 {
					displayName = "Repack UAV";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_packable_fnc_Pack";
				};
			};
		};
	};

  class B_UAV_06_F: UAV_06_base_F {
    itc_land_PacksTo = "ITC_Land_B_AL6_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class O_UAV_06_F: UAV_06_base_F {
    itc_land_PacksTo = "ITC_Land_O_AL6_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class I_UAV_06_F: UAV_06_base_F {
    itc_land_PacksTo = "ITC_Land_I_AL6_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class C_IDAP_UAV_06_F: UAV_06_base_F {
    itc_land_PacksTo = "ITC_Land_C_IDAP_AL6_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class C_UAV_06_F: UAV_06_base_F {
    itc_land_PacksTo = "ITC_Land_C_AL6_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class UAV_06_medical_base_F: UAV_06_base_F {};
  class B_UAV_06_medical_F: UAV_06_medical_base_F {
    itc_land_PacksTo = "ITC_Land_B_AL6m_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class O_UAV_06_medical_F: UAV_06_medical_base_F {
    itc_land_PacksTo = "ITC_Land_O_AL6m_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class I_UAV_06_medical_F: UAV_06_medical_base_F {
    itc_land_PacksTo = "ITC_Land_I_AL6m_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class C_IDAP_UAV_06_medical_F: UAV_06_medical_base_F {
    itc_land_PacksTo = "ITC_Land_C_IDAP_AL6m_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };
  class C_UAV_06_medical_F: UAV_06_medical_base_F {
    itc_land_PacksTo = "ITC_Land_C_AL6m_Packed";
		class assembleInfo {
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {};
		};
  };


	class Bag_Base;
	class ITC_Land_uav06_backpack_base: Bag_Base {
			author = "Toadball";
			displayName = "UAV Bag (AL-6)";
			maximumLoad = 300;
			mass = 60;
			mapSize = 0.6;
			scope = 0;
			model = "\A3\Supplies_F_Orange\Bags\B_UAV_06_medical_F.p3d";
			editorCategory = "EdCat_Equipment";
			editorSubcategory = "EdSubcat_Backpacks";
			hiddenSelectionsMaterials[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_backpack.rvmat"};
	};

	class ITC_Land_b_uav06_backpack: ITC_Land_uav06_backpack_base {
			author = "Toadball";
			displayName = "UAV Bag (AL-6) [NATO]";
			scope = 2;
			scopeCurator = 2;
			faction = "BLU_F";
			picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_B_UAV_06_medical_ca";
			hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_NATO_co.paa", "a3\air_f_orange\uav_06\data\b_uav_06_co.paa"};
	};
	class ITC_Land_i_uav06_backpack: ITC_Land_uav06_backpack_base {
			author = "Toadball";
			displayName = "UAV Bag (AL-6) [AAF]";
			scope = 2;
			scopeCurator = 2;
			faction = "IND_F";
      picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_I_UAV_06_medical_ca";
			hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_AAF_co.paa", "a3\air_f_orange\uav_06\data\i_uav_06_co.paa"};
	};
	class ITC_Land_o_uav06_backpack: ITC_Land_uav06_backpack_base {
			author = "Toadball";
			displayName = "UAV Bag (AL-6) [CSAT]";
			scope = 2;
			scopeCurator = 2;
			faction = "OPF_F";
      picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_O_UAV_06_medical_ca";
			hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_06_backpack_CSAT_co.paa", "a3\air_f_orange\uav_06\data\o_uav_06_co.paa"};
	};
};
