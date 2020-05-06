class CfgMagazines {
  class HandGrenade;
  class ITC_Land_remoteFrag_mag : HandGrenade {
		displayName = "Remote Frag";
		displayNameShort = "Remote Frag";
		ammo = "ITC_Land_RemoteFrag_Ammo";
    ACE_Explosives_SetupObject = "ITC_Land_remoteFrag_Place";
    ACE_Explosives_DelayTime = 0.2;
    ACE_Explosives_Placeable = 1;
    model = "\A3\Weapons_f\ammo\Handgrenade_throw";
    scope = 2;
    class ACE_Triggers {
      SupportedTriggers[] = {"Command","MK16_Transmitter"};
      class Command {
        ammo = "ITC_Land_RemoteFrag_Ammo";
      };
      class MK16_Transmitter: Command {};
    };
  };
};
