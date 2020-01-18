#define STRINGIFY(s) #s
#define action_tablet_open(CLASS, NAME) \
  class CLASS { \
    displayName = NAME; \
    condition = [_player,STRINGIFY(CLASS)] call ace_common_fnc_hasItem; \
    statement = [STRINGIFY(CLASS)] call itc_land_tablet_fnc_open; \
    priority = 2.6; \
    showDisabled = 1; \
    exceptions[] = {"isNotInside","isNotSitting"}; \
  };

class cfgVehicles {
  class Man;
  class CAManBase: Man {
    class ACE_SelfActions {
      class ACE_Equipment {
        class ITC_Land_Rover_Open {
          displayName = "Open Rover LAD";
          condition = "'itc_land_tablet_rover' in (items player)";
          statement = "createDialog ""itc_land_rover_tablet"";";
          priority = 2.6;
          showDisabled = 1;
          exceptions[] = {"isNotInside","isNotSitting"};
        };
      };
    };
  };
/*
  class LandVehicle;
  class Tank : LandVehicle {
    class ACE_SelfActions;
  };
  class Tank_F : Tank {
    class ACE_SelfActions : ACE_SelfActions {
      class ITC_Land_MountedTablet {
        displayName = "Open Mounted Tablet";
        icon = "\itc_land_tablet\UI\arty-icon.paa";
        condition = "[_target] call itc_land_tablet_fnc_vehicleHasTablet";
        statement = "[_target] call itc_land_tablet_fnc_openVehicleTablet"
      };
    };
  };
 */
};
