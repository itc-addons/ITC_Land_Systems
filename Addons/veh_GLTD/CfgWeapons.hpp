class CfgWeapons {
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;
    class itc_land_packableItem: ACE_ItemCore {
      class ItemInfo: CBA_MiscItem_ItemInfo {};
    };
    class ITC_Land_RemoteGLTD_Packed_base: itc_land_packableItem {
        scope = 0;
        author = "Toadball";
        displayName = "Remote GLTD (Packed)";
        descriptionShort = "Remote GLTD packed for carriage";
        model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";
        //picture = "\A3\Drones_F\Air_F_Gamma\UAV_01\Data\UI\UAV_01_CA.paa";
        class ItemInfo: ItemInfo {
			      mass = 75;
            allowedSlots[] = {901};
            scope = 0;
        };
    };
	class ITC_Land_B_RemoteGLTD_Packed: ITC_Land_RemoteGLTD_Packed_base {displayName = "Remote GLTD [NATO] (Packed)"; scope = 2; scopeCurator = 2; itc_land_unPacksTo = "ITC_Land_B_RemoteGLTD";};

	class ITC_Land_BW_RemoteGLTD_Packed: ITC_Land_RemoteGLTD_Packed_base {displayName = "Remote GLTD [NATO] (Green, Packed)"; scope = 2; scopeCurator = 2; itc_land_unPacksTo = "ITC_Land_BW_RemoteGLTD";};  
};
