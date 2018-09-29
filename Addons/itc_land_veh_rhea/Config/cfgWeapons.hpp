class CfgWeapons {
  class weapon_s750Launcher;
  class itc_land_s750_launcher : weapon_s750Launcher {
    magazines[] = {"itc_land_s750_x4"};
    class EventHandlers
    {
        class itc_land_veh_weapons
        {
            fired = "_this call itc_land_veh_rhea_fnc_fired;";
        };
    };
  };
};
