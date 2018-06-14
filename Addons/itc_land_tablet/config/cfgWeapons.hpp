class CfgWeapons {
  class ACE_HuntIR_monitor;
  class itc_land_tablet_spg : ACE_HuntIR_monitor {
    displayName = "SPG Vehicle Management Tablet";
    descriptionShort = "SPG Vehicle Management Tablet";
    picture = "\itc_land_tablet\UI\arty-icon.paa";
    apps[] = {"spg", "bcs"};
  };
  class itc_land_tablet_fdc : itc_land_tablet_spg {
    displayName = "Fire Direction Tablet";
    descriptionShort = "Fire Direction Tablet";
    picture = "\itc_land_tablet\UI\arty-icon.paa";
    apps[] = {"bcs", "cbr"};
  };
};
