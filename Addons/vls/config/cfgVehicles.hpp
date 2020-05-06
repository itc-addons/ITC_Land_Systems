class SensorTemplateDataLink;
class SensorTemplateActiveRadar;
class CfgVehicles {
  class LandVehicle;
  class StaticWeapon: LandVehicle {
     class ACE_SelfActions;
  };
  class StaticMGWeapon : StaticWeapon {
		class Turrets {
	     class MainTurret;
		};
    class ACE_SelfActions: ACE_SelfActions {};
  };
  class B_Ship_MRLS_01_base_F : StaticMGWeapon {
    class Turrets : Turrets {
      class MainTurret: MainTurret {};
    };
	class AnimationSources {
		class Missiles_revolving;
	};
    class ACE_SelfActions: ACE_SelfActions {};
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
        weapons[] = {"itc_land_mn230essm_launcher"};
        magazines[] = {"itc_land_mn230essm_x18"};
      };
    };
	class AnimationSources: AnimationSources {
      class Missiles_revolving: Missiles_revolving {
         weapon = "itc_land_mn230essm_launcher";
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
	author = "Toadball";
    displayName = "MN230 VLS (Cruise Missile)";
    class Turrets : Turrets {
      class MainTurret: MainTurret {
		weapons[] = {"itc_land_mn230slam_launcher"};
		magazines[] = {"itc_land_mn230slam_x18"};
	  };
	};
    class ACE_SelfActions: ACE_SelfActions {
        class ITC_Land_CommanderTablet {
            displayName = "Open VLS Interface";
            icon = "";
            condition = "( _target ) == ([] call itc_land_common_fnc_getCurVehicle)";
            statement = "createDialog 'ITC_Land_RscVLSlaunch'";
        };
    };
    side = 1;
    faction = "BLU_F";
    crew = "B_UAV_AI";
    scope = 2;
    scopeCurator = 2;
	class AnimationSources: AnimationSources {
      class Missiles_revolving: Missiles_revolving {
         weapon = "itc_land_mn230slam_launcher";
      };
    };
  };
};
