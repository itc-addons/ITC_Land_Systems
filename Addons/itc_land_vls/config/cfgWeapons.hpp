class cfgWeapons {
  class weapon_rim162Launcher;
  class itc_land_mn230essm_launcher : weapon_rim162Launcher {
    weaponLockDelay = 0.1;
    magazines[] = {"itc_land_mn230essm_x18"};
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
    reloadTime=5;
    class EventHandlers {
        class itc_land_veh_weapons {
            fired = "_this call BIS_fnc_effectFiredCruiseMissile;";
        };
    };
  };
  class weapon_VLS_01;
  class itc_land_mn230slam_launcher: weapon_VLS_01 {
	magazines[] = {"itc_land_mn230slam_x18"};
    class EventHandlers {
        class itc_land_veh_weapons {
            fired = "_this call itc_land_vls_fnc_fired;";
        };
    };
  };
};
