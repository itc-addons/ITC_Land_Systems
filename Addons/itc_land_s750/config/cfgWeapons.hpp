class CfgWeapons {
  class weapon_s750Launcher;
  class itc_land_weapon_s750 : weapon_s750Launcher {
    magazines[] = {"itc_land_magazine_4rnd_s750"};
    class EventHandlers
    {
        class itc_land_veh_weapons
        {
            fired = "_this call itc_land_s750_fnc_fired;";
        };
    };
  };
};
