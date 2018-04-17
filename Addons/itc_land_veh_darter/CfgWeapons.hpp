class CfgWeapons {
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;
    class TB_UAV_Packed_base: ACE_ItemCore {
        scope = 0;
        author = "Toadball";
        displayName = "AR-2i Darter 2 (Packed)";
        descriptionShort = "AR-2 Darter packed for carriage";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        //picture = "\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
        class ItemInfo: CBA_MiscItem_ItemInfo {
			mass = 75;
            allowedSlots[] = {901};
            scope = 0;
        };
    };
	class TB_B_AR2i_Packed: TB_UAV_Packed_base {displayName = "AR-2i Darter 2 [NATO] (Packed)"; scope = 2; itc_land_darter_unPacksTo = "TB_B_UAV_AR2i";};
	class TB_O_AR2i_Packed: TB_UAV_Packed_base {displayName = "AR-2i Darter 2 [CSAT] (Packed)"; scope = 2; itc_land_darter_unPacksTo = "TB_O_UAV_AR2i";};
	class TB_I_AR2i_Packed: TB_UAV_Packed_base {displayName = "AR-2i Darter 2 [AAF] (Packed)"; scope = 2; itc_land_darter_unPacksTo = "TB_I_UAV_AR2i";};

   class TB_B_UAV_Packed: TB_UAV_Packed_base {displayName = "AR-2 Darter [NATO] (Packed)"; scope = 2; itc_land_darter_unPacksTo = "B_UAV_01_F";};
    class TB_O_UAV_Packed: TB_UAV_Packed_base {displayName = "AR-2 Tayran [CSAT]  (Packed)"; scope = 2; itc_land_darter_unPacksTo = "O_UAV_01_F";};
    class TB_I_UAV_Packed: TB_UAV_Packed_base {displayName = "AR-2 Darter [AAF] (Packed)"; scope = 2; itc_land_darter_unPacksTo = "I_UAV_01_F";};
};
