class cfgAmmo {
  class FlareCore;
  class itc_82mm_flare: FlareCore { //ILLUM
    model = "\A3\weapons_f\ammo\shell";
    effectFlare = "CounterMeasureFlare";
    aimAboveTarget[] = {50, 80, 140, 200, 260, 320, 380};
    aimAboveDefault = 4;
    lightColor[] = {0.95, 0.95, 0.4, 0.5};
    smokeColor[] = {1, 1, 1, 0.5};
    brightness = 50;
    //intensity = 180000;
    //flareSize = 100;
    timeToLive = 70;
    ace_rearm_caliber = 155;
    //explosionTime = 1;
  };
  class itc_82mm_flare_scripted: itc_82mm_flare { //SCRIPTED ILLUM FOR IN MISSION SPAWNING (TOAD)
	triggerTime = 0.001;
  };
};
