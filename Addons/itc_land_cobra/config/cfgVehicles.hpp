class CBA_Extended_EventHandlers_base;
class CfgVehicles {
  class Radar_System_01_base_F;
  class B_Radar_System_01_F : Radar_System_01_base_F {
    class EventHandlers;
    class Attributes;
  };
  class itc_land_COBRA01 : B_Radar_System_01_F {
		author = "Yax";
    displayName = "AN/TPQ-105 COBRA";
    side = 1;
    editorSubcategory = "EdSubcat_Artillery";
    scope = 2;
    crew = "B_UAV_AI";
    faction = "BLU_F";
		class Components {};
    class EventHandlers : EventHandlers {
      class itc_land_cobra_eventHandlers {
          init = "_this call itc_land_cobra_fnc_vehicleInit;";
      };
      class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    };
  };

  class Radar_System_02_base_F;
  class O_Radar_System_02_F : Radar_System_02_base_F {
    class EventHandlers;
    class Attributes;
  };
  class itc_land_COBRA02 : O_Radar_System_02_F {
		author = "Yax";
    displayName = "R-750 Mod 2. COBRA";
    side = 0;
    editorSubcategory = "EdSubcat_Artillery";
    scope = 2;
    crew = "O_UAV_AI";
    faction = "OPF_F";
		class Components {};
    class EventHandlers : EventHandlers {
      class itc_land_cobra_eventHandlers {
          init = "_this call itc_land_cobra_fnc_vehicleInit;";
      };
      class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
    };
  };
  class NonStrategic;
  class Land_Loudspeakers_F : NonStrategic {
    class EventHandlers;
    class Attributes;
  };
  class ITC_Land_Loudspeakers : Land_Loudspeakers_F {
    displayName = "COBRA Siren";
    class ITC_Land_COBRA_SirenParams {
      soundClass = "alarmCar";
      soundDistance = 200;
      soundDuration = 2;
    };
    /*
    Commented out as is old concept content that may be referred back to in later versions
    class EventHandlers : EventHandlers {
      class itc_land_cobra_eventHandlers {
          init = "_this call itc_land_cobra_fnc_sirenInit;";
      };
    };
    class Attributes : Attributes {
  		class ITC_Land_Datalink_Ext_ID
  		{
        displayName = "Trigger Datalink ID";
        tooltip = "4 character ID, characters 0-F allowed";
        property = "ITC_Land_Datalink_ext_ID";
        expression = "_this setVariable ['init_datalink_ext_id',_value];"
        control = "Edit";
        defaultValue = "CF01";
        unique = 1;
      };
  		class ITC_Land_Datalink_ID
  		{
        displayName = "Own Datalink ID(optional)";
        tooltip = "4 character ID, characters 0-F allowed";
        property = "ITC_Land_Datalink_ID";
        expression = "_this setVariable ['init_datalink_id',_value];"
        control = "Edit";
        defaultValue = "CF01";
        unique = 1;
      };
    };*/
  };
  class ITC_Land_Loudspeakers2 : ITC_Land_Loudspeakers {
    displayName = "COBRA Siren 2";
    class ITC_Land_COBRA_SirenParams: ITC_Land_COBRA_SirenParams {
      soundClass = "vtolAlarm";
      soundDistance = 400;
      soundDuration = 2;
    };
  };
};
