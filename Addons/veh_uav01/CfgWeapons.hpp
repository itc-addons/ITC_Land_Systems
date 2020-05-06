class CfgWeapons {
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;
    class itc_land_packableItem: ACE_ItemCore {
      class ItemInfo: CBA_MiscItem_ItemInfo {};
    };
    class ITC_Land_UAV_Packed_base: itc_land_packableItem {
        scope = 0;
        author = "Toadball";
        displayName = "AR-2i Darter 2 (Packed)";
        descriptionShort = "AR-2 Darter packed for carriage";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        //picture = "\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
        class ItemInfo: ItemInfo {
			      mass = 75;
            allowedSlots[] = {901};
            scope = 0;
        };
    };
	class ITC_Land_B_AR2i_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2i Darter 2 [NATO] (Packed)"; scope = 2; scopeCurator = 2; itc_land_unPacksTo = "ITC_Land_B_UAV_AR2i";};
	class ITC_Land_O_AR2i_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2i Tayran 2 [CSAT] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "ITC_Land_O_UAV_AR2i";};
	class ITC_Land_I_AR2i_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2i Darter 2 [AAF] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "ITC_Land_I_UAV_AR2i";};

	class ITC_Land_B_AR2e_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2e Darter [NATO] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "ITC_Land_B_UAV_AR2e";};
	class ITC_Land_O_AR2e_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2e Tayran [CSAT] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "ITC_Land_O_UAV_AR2e";};
	class ITC_Land_I_AR2e_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2e Darter [AAF] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "ITC_Land_I_UAV_AR2e";};

	class ITC_Land_B_UAV_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2 Darter [NATO] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "B_UAV_01_F";};
    class ITC_Land_O_UAV_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2 Tayran [CSAT] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "O_UAV_01_F";};
    class ITC_Land_I_UAV_Packed: ITC_Land_UAV_Packed_base {displayName = "AR-2 Darter [AAF] (Packed)"; scope = 2; scopeCurator = 2;  itc_land_unPacksTo = "I_UAV_01_F";};
};
