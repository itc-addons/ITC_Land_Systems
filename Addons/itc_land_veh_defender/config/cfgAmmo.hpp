class cfgAmmo {
  class ammo_Missile_LongRangeAABase;
  class ammo_Missile_mim145 : ammo_Missile_LongRangeAABase {
    class Components;
  };
  class itc_land_mim145 : ammo_Missile_mim145 {
	/*  
    missileKeepLockedCone = 360;
    missileLockCone = 360;
    missileLockMaxDistance = 32000;
    autoSeekTarget = 1;
    missileLockMinDistance = 50;
    initSpeed = 80;
    initTime = 1;
    manueuvrability = 0;
    thrust = 350;
    thrustTime = 25;
    radarLock = 1;
    class Components: Components
    {
      class SensorsManagerComponent
      {
        class Components
        {
          class ActiveRadarSensorComponent: SensorTemplateActiveRadar
          {
            class AirTarget
            {
              minRange = 1000;
              maxRange = 20000;
              objectDistanceLimitCoef = -1;
              viewDistanceLimitCoef = -1;
            };
            class GroundTarget
            {
              minRange = 7000;
              maxRange = 8000;
              objectDistanceLimitCoef = -1;
              viewDistanceLimitCoef = -1;
            };
            typeRecognitionDistance = 20000;
            angleRangeHorizontal = 360;
            angleRangeVertical = 360;
            aimDown = 0;
            groundNoiseDistanceCoef = 0.1;
          };
          class DataLinkSensorComponent: SensorTemplateDataLink
          {
          };
        };
      };
    };*/
  };
  class itc_land_mim145_helper : ammo_Missile_mim145 {
    timeToLive = 0;
	explosionTime = 0.0001;
  };
};
