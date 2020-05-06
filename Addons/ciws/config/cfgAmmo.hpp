class CfgAmmo {
  class ammo_AAA_Gun35mm_AA;
  class itc_land_20mm_phalanx : ammo_AAA_Gun35mm_AA {
    tracerColor[] = {0.7,0,0,0.04};
    tracerColorR[] = {0.7,0,0,0.04};
  };
  class missileCore;
  class MissileBase : missileCore {
    itc_land_ciws_target = "itc_land_missile";
  };
  class ammo_Missile_ShortRangeAABase;
  class ammo_Missile_rim116 : ammo_Missile_ShortRangeAABase {
    missileLockMaxDistance = 9000;
    missileLockMaxSpeed = 3000;
    trackLead = 0.4;
    trackOversteer = 1;
    irLock = 1;
    class Components
    {
      class SensorsManagerComponent
      {
        class Components
        {
          class IRSensorComponent: SensorTemplateIR
          {
            class AirTarget
            {
              minRange = 500;
              maxRange = 15000;
              objectDistanceLimitCoef = -1;
              viewDistanceLimitCoef = -1;
            };
            class GroundTarget
            {
              minRange = 500;
              maxRange = 3500;
              objectDistanceLimitCoef = -1;
              viewDistanceLimitCoef = -1;
            };
            typeRecognitionDistance = 9000;
            maxTrackableSpeed = 3000;
            angleRangeHorizontal = 360;
            angleRangeVertical = 180;
            animDirection = "mainGun";
            aimDown = -0.5;
          };
          class DataLinkSensorComponent: SensorTemplateDataLink
          {
          };
        };
      };
    };
  };
};
