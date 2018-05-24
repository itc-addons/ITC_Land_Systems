class CfgAmmo {
  class APERSMineDispenser_Ammo;
  class ITC_Land_SmokeDispenser_Ammo : APERSMineDispenser_Ammo {
		submunitionAmmo[] = {"ITC_Land_SmokeDispenser_Deploy",1};
    ace_explosives_Explosive = "ITC_Land_SmokeDispenser_Ammo_Scripted";
    ace_explosives_magazine = "itc_land_smokeDispenser_mag";
    defaultMagazine = "itc_land_smokeDispenser_mag";
    submunitionConeType[] = {"randomupcone",10};
    submunitionInitSpeed = 8;
  };
  class ITC_Land_SmokeDispenser_Ammo_Scripted : ITC_Land_SmokeDispenser_Ammo {
		triggerWhenDestroyed = 1;
  };
  class APERSMineDispenser_Deploy;
  class ITC_Land_SmokeDispenser_Deploy : APERSMineDispenser_Deploy {
		submunitionAmmo = "SmokeShell";
  };
};
