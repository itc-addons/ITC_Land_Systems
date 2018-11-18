class CfgAmmo {
  class GrenadeHand;
  class APERSMineDispenser_Ammo;
  class ITC_Land_RemoteFrag_Ammo : APERSMineDispenser_Ammo {
		submunitionAmmo[] = {"ITC_Land_remoteFrag_Deploy",1};
    ace_explosives_Explosive = "ITC_Land_RemoteFrag_Ammo_Scripted";
    ace_explosives_magazine = "itc_land_remoteFrag_mag";
    defaultMagazine = "itc_land_remoteFrag_mag";
    model = "\A3\Weapons_f\ammo\Handgrenade_throw";
    submunitionConeType[] = {"randomupcone",1};
    indirectHit = 0;
    hit = 0;
    submunitionInitSpeed = 1;
  };
  class ITC_Land_RemoteFrag_Ammo_Scripted : ITC_Land_RemoteFrag_Ammo {
		triggerWhenDestroyed = 1;
  };
  class APERSMineDispenser_Deploy;
  class ITC_Land_remoteFrag_Deploy : APERSMineDispenser_Deploy {
		submunitionAmmo = "GrenadeHand";
    //model = "\A3\Weapons_f\ammo\Handgrenade_throw";
  };
  class ITC_Land_remoteFrag_Munition : GrenadeHand {
    ace_frag_enabled = 1;
    weaponLockSystem = "1+2+4";
  };
};
