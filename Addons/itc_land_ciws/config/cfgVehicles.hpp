class SensorTemplateIR;
class SensorTemplateDataLink;
class SensorTemplateActiveRadar;
class CfgVehicles {
  class B_UAV_01_F;
  class itc_land_shell_b : B_UAV_01_F {
      displayName = "Shell Target";
      //model = "\A3\weapons_F\AmmoBoxes\AmmoBox_F";
      model = "\A3\Weapons_F\Ammoboxes\Supplydrop.p3d";
      hiddenSelectionsTextures[] = {"",""};
      threat[] = {1,1,0};
      laserTarget = 0;
      nvTarget = 0;
      visualTarget = 0;
      irTarget = 0;
      radarTarget = 1;
      radarTargetSize = 0.5;
      acceleration = 0;
      scope = 1;
      armor = 1;
  };
  class itc_land_shell_o : itc_land_shell_b {
      crew="O_UAV_AI";
      side = 0;
  };
  class itc_land_shell_i : itc_land_shell_b {
      crew="I_UAV_AI";
      side = 2;
  };
  class StaticWeapon;
  class StaticMGWeapon : StaticWeapon {
		class Turrets {
	     class MainTurret;
		};
  }
  class AAA_System_01_base_F : StaticMGWeapon {
    class Turrets : Turrets {
      class MainTurret: MainTurret {};
    };
  };
  class itc_land_cram_praetorian2 : AAA_System_01_base_F {
		author = "Yax ";
    displayName = "Praetorian 2 Mod 0";
    side = 1;
    faction = "BLU_F";
    crew = "B_UAV_AI";
    scope = 2;
    class Turrets : Turrets {
      class MainTurret: MainTurret {
        weapons[] = {"itc_land_weapon_cram"};
        magazines[] = {"itc_land_20mm_phalanx_mag","itc_land_20mm_phalanx_mag"};
        maxHorizontalRotSpeed = 3;
        maxVerticalRotSpeed = 3;
      };
    };
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
							maxRange = 4000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = 1;
						};
						class GroundTarget
						{
							minRange = 500;
							maxRange = 3500;
							objectDistanceLimitCoef = 1;
							viewDistanceLimitCoef = 1;
						};
						typeRecognitionDistance = 3500;
						maxTrackableSpeed = 600;
						angleRangeHorizontal = 60;
						angleRangeVertical = 40;
						animDirection = "mainGun";
						aimDown = -0.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange = 20000;
							maxRange = 20000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						class GroundTarget
						{
							minRange = 7000;
							maxRange = 7000;
							objectDistanceLimitCoef = -1;
							viewDistanceLimitCoef = -1;
						};
						typeRecognitionDistance = 20000;
						angleRangeHorizontal = 360;
						angleRangeVertical = 180;
						aimDown = -45;
						groundNoiseDistanceCoef = 0.1;
					};
					class DataLinkSensorComponent: SensorTemplateDataLink
					{
					};
				};
			};
		};
  };
  /*

  class All {
    class EventHandlers {
      class itc_land_ciws_eventhandlers {
        fired = "_this call itc_land_ciws_fnc_fired";
      };
    };
  };
  class StaticCannon: StaticWeapon {
    class EventHandlers {
      class itc_land_ciws_eventhandlers {
        fired = "_this call itc_land_ciws_fnc_fired";
      };
    };
  };

  class StaticMortar;
  class Mortar_01_base_F: StaticMortar {
    class EventHandlers {
      class itc_land_ciws_eventhandlers {
        fired = "_this call itc_land_ciws_fnc_fired";
      };
    };
  };

  class Tank;
  class Tank_F: Tank {
    class EventHandlers {
      class itc_land_ciws_eventhandlers {
        fired = "_this call itc_land_ciws_fnc_fired";
      };
    };
  };

  class Plane;
  class Plane_Base_F: Plane {
    class EventHandlers {
      class itc_land_ciws_eventhandlers {
        fired = "_this call itc_land_ciws_fnc_fired";
      };
    };
  };

  class Land_Orange_01_Base_F;
  class Land_Orange_01_F: Land_Orange_01_Base_F {
    class EventHandlers {
      class itc_land_ciws_eventhandlers {
        fired = "_this call itc_land_ciws_fnc_fired";
      };
    };
  };
  */
};
