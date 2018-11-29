class SensorTemplateDataLink;
class SensorTemplateActiveRadar;
class CfgVehicles {
  class StaticWeapon;
  class StaticMGWeapon : StaticWeapon {
		class Turrets {
	     class MainTurret;
		};
  }
  class B_Ship_MRLS_01_base_F : StaticMGWeapon {
    class Turrets : Turrets {
      class MainTurret: MainTurret {};
    };
  };
  class itc_land_b_vls2 : B_Ship_MRLS_01_base_F {
		author = "Yax ";
    displayName = "MN230 VLS (Air Defense)";
    side = 1;
    faction = "BLU_F";
    crew = "B_UAV_AI";
    scope = 2;
    scopeCurator = 2;
    class Turrets : Turrets {
      class MainTurret: MainTurret {
        weapons[] = {"itc_land_weapon_m230_essm"};
        //weapons[] = {"weapon_rim162Launcher"};
        //magazines[] = {"magazine_Missile_rim162_x8"};
        magazines[] = {"itc_land_magazine_18rnd_essm"};
      };
    };
		class AnimationSources {
      class Missiles_revolving {
        animPeriod = 0.001;
        source = "ammo";
        weapon = "itc_land_weapon_m230_essm";
      };
    };
		class Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 2000;
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
						angleRangeVertical = 180;
						aimDown = -45;
						groundNoiseDistanceCoef = 0.1;
					};
				};
			};
		};
  };
  class itc_land_b_vls2_slam : B_Ship_MRLS_01_base_F {
		author = "Yax ";
    displayName = "MN230 VLS (Cruise Missile)";
    side = 1;
    faction = "BLU_F";
    crew = "B_UAV_AI";
    scope = 2;
    scopeCurator = 2;
  };
};
