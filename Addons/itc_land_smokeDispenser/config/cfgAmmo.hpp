class CfgAmmo {
  class APERSMineDispenser_Ammo;
  class ITC_Land_SmokeDispenser_Ammo : APERSMineDispenser_Ammo {
		submunitionAmmo[] = {"ITC_Land_SmokeDispenser_Deploy",1};
    ace_explosives_Explosive = "ITC_Land_SmokeDispenser_Ammo_Scripted";
    ace_explosives_magazine = "itc_land_smokeDispenser_mag";
    defaultMagazine = "itc_land_smokeDispenser_mag";
    submunitionConeType[] = {"randomupcone",4};
    submunitionInitSpeed = 30;
  };
  class ITC_Land_SmokeDispenser_Ammo_Scripted : ITC_Land_SmokeDispenser_Ammo {
		triggerWhenDestroyed = 1;
  };
  class APERSMineDispenser_Deploy;
  class ITC_Land_SmokeDispenser_Deploy : APERSMineDispenser_Deploy {
		submunitionAmmo = "ITC_Land_SmokeDispenser_Munition";
  };
  class GrenadeHand;
  class ITC_Land_SmokeDispenser_Munition : GrenadeHand {
    ace_frag_enabled = 1;
    weaponLockSystem = "1+2+4";
    explosionEffects = "ITC_Land_CMSmoke";
    explosionTime = 0.5;
    indirectHit = 1;
    indirectHitRange = 1;
    explosive = 0.1;
  };
};
