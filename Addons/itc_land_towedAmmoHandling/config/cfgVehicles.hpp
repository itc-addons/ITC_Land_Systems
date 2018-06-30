#define transportMagazine(CLASS, COUNT) \
  class _xx_##CLASS \
  { \
    magazine = CLASS; \
    count = COUNT; \
  };

class cfgVehicles {
  class Box_IND_Ammo_F;
  class itc_land_carryShell_base : Box_IND_Ammo_F {
    ace_cargo_size = 2;
    model = "\a3\Weapons_F_Tank\Launchers\MRAWS\rocket_MRAWS_HE_F_item.p3d";
    picture = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
    editorPreview = "\a3\Weapons_F_Tank\Launchers\MRAWS\Data\UI\icon_rocket_MRAWS_HE_F_ca.paa";
    class TransportMagazines {transportMagazine(itc_land_charge_105mm,7)};
    class TransportWeapons {};
    class TransportItems {};
    maximumLoad = 70;
  };
};
