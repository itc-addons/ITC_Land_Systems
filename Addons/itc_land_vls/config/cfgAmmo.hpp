class cfgAmmo {
  class ammo_Missile_MediumRangeAABase;
  class ammo_Missile_rim162 : ammo_Missile_MediumRangeAABase {
    class Components;
  };
  class itc_land_ammo_mn230_essm : ammo_Missile_rim162 {
    //trackLead = 0.4;
    //trackOversteer = 1;
    effectsMissile = "CruiseMissile";
    missileKeepLockedCone = 360;
    missileLockCone = 360;
    missileLockMaxDistance = 32000;
    autoSeekTarget = 1;
    missileLockMinDistance = 50;
    thrust = 150;
    thrustTime = 10;
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
		};
  };
};
