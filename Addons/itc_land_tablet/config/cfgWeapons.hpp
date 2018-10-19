class CfgWeapons {
  class ACE_HuntIR_monitor;
  class itc_land_tablet_spg : ACE_HuntIR_monitor {
    displayName = "SPG Vehicle Management Tablet";
    descriptionShort = "SPG Vehicle Management Tablet";
    picture = "\itc_land_tablet\UI\tableticon256.paa";
    apps[] = {"spg", "bcs"};
	scope = 1;	
  };
  class itc_land_tablet_mlrs : ACE_HuntIR_monitor {
    displayName = "MLRS Vehicle Management Tablet";
    descriptionShort = "MLRS Vehicle Management Tablet";
    picture = "\itc_land_tablet\UI\tableticon256.paa";
    apps[] = {"missile", "bcs"};
	scope = 1;
  };  
  class itc_land_tablet_fdc : itc_land_tablet_spg {
    displayName = "Fire Direction Tablet";
    descriptionShort = "Fire Direction Tablet";
    picture = "\itc_land_tablet\UI\tableticon256.paa";
    apps[] = {"bcs", "cbr"};
	scope = 2;	
  };
};
