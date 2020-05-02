class CfgWeapons {
  class CBA_MiscItem_ItemInfo;
  class ACE_ItemCore;
  class itc_land_packableItem: ACE_ItemCore {
    class ItemInfo: CBA_MiscItem_ItemInfo {};
  };
  class ITC_Land_UAV06_Packed_base: itc_land_packableItem {
        scope = 0;
        author = "Toadball";
        displayName = "AL-6 Pelican (Packed)";
        descriptionShort = "AL-6 Pelican packed for carriage";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        class ItemInfo: CBA_MiscItem_ItemInfo {
			      mass = 90;
            allowedSlots[] = {901};
            scope = 0;
        };
    };
	class ITC_Land_B_AL6_Packed: ITC_Land_UAV06_Packed_base {displayName = "AL-6 Pelican [NATO] (Packed)"; scope = 2; scopeCurator = 2; itc_land_unPacksTo = "B_UAV_06_F";};
	class ITC_Land_O_AL6_Packed: ITC_Land_UAV06_Packed_base {displayName = "AL-6 Pelican [CSAT] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "O_UAV_06_F";};
	class ITC_Land_I_AL6_Packed: ITC_Land_UAV06_Packed_base {displayName = "AL-6 Pelican [AAF] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "I_UAV_06_F";};
	class ITC_Land_C_AL6_Packed: ITC_Land_UAV06_Packed_base {displayName = "Civilian Utility Drone (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "C_UAV_06_F";};
	class ITC_Land_C_IDAP_AL6_Packed: ITC_Land_UAV06_Packed_base {displayName = "IDAP Utility Drone (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "C_IDAP_UAV_06_F";};

  class ITC_Land_B_AL6m_Packed: ITC_Land_UAV06_Packed_base {displayName = "AL-6M Pelican [NATO] (Packed)"; scope = 2; scopeCurator = 2; itc_land_unPacksTo = "B_UAV_06_medical_F";};
	class ITC_Land_O_AL6m_Packed: ITC_Land_UAV06_Packed_base {displayName = "AL-6M Pelican [CSAT] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "O_UAV_06_medical_F";};
	class ITC_Land_I_AL6m_Packed: ITC_Land_UAV06_Packed_base {displayName = "AL-6M Pelican [AAF] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "I_UAV_06_medical_F";};
	class ITC_Land_C_AL6m_Packed: ITC_Land_UAV06_Packed_base {displayName = "Civilian Medical Drone (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "C_UAV_06_medical_F";};
	class ITC_Land_C_IDAP_AL6m_Packed: ITC_Land_UAV06_Packed_base {displayName = "IDAP Medical Drone (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "ITC_Land_C_IDAP_AL6m_Packed";};
};
