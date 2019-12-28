class CBA_MiscItem_ItemInfo;
class ACE_ItemCore;
class itc_land_packableItem: ACE_ItemCore {
    scope = 0;
    author = "Toadball";
    displayName = "Packable Item (Packed)";
    descriptionShort = "Packable Item (Packed)";
    model = "\A3\Structures_F_Heli\Items\Luggage\PlasticCase_01_small_F.p3d";

    class ItemInfo: CBA_MiscItem_ItemInfo {
      mass = 75;
      allowedSlots[] = {901};
      scope = 0;
    };
};
