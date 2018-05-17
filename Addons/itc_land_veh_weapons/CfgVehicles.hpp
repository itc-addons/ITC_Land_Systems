class CfgVehicles {
  class Parachute_02_base_F;
  class ITC_155Extra: Parachute_02_base_F {
    castDriverShadow = 0;
    destrType = "DestructDefault";
    displayName = "155Extra";
    model = "\z\ace\addons\huntir\data\huntir.p3d";
    scope = 1;
    class HitPoints {
      class HitEngine {
        armor = 0;
        material = -1;
        name = "";
        visual = "";
        radius = 0;
        passThrough = 0;
        explosionShielding = 0;
      };
      class HitParachute {
        armor = 0.0001;
        material = -1;
        name = "parachute";
        visual = "";
        radius = 0.2;
        passThrough = 1;
        explosionShielding = 0;
      };
      class HitCamera {
        armor = 0.001;
        material = -1;
        name = "camera";
        visual = "";
        radius = 0.025;
        passThrough = 1;
        explosionShielding = 1;
      };
    };
  };
};
