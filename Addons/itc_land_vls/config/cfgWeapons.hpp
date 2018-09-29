class cfgWeapons {
  class weapon_rim162Launcher;
  class itc_land_weapon_m230_essm : weapon_rim162Launcher {
    weaponLockDelay = 0.1;
    magazines[] = {"itc_land_magazine_18rnd_essm"};
    fireSpreadAngle = 3;
    enableAttack = 1;
    initSpeed = 0;
    lockAcquire = 1;
    minRange = 800;
    minRangeProbab = 1;
    midRange = 3500;
    midRangeProbab = 1;
    maxRange = 20000;
    maxRangeProbab = 1;
    class EventHandlers
    {
        class itc_land_veh_weapons
        {
            fired = "_this call BIS_fnc_effectFiredCruiseMissile;";
        };
    };
  };
};
