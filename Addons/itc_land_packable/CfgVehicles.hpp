class CfgVehicles {

	class Man;
  class CAManBase: Man {
    class ACE_SelfActions {
      class ACE_Equipment {
        class ITC_Land_Unpack {
          displayName = "Unpack";
          condition = "[ACE_player] call itc_land_packable_fnc_canunpack";
          statement = "";
          exceptions[] = {"isNotDragging", "notOnMap", "isNotInside", "isNotSitting"};
          showDisabled = 0;
          priority = 0;
        };        
      };
    };
  };

};
