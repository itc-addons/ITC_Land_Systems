class CfgVehicles {
  class LT_01_base_F;
  class LT_01_scout_base_F : LT_01_base_F {
    class EventHandlers;
    class Attributes;
  };
  class itc_land_COBRA01 : LT_01_scout_base_F {
		author = "Yax";
    displayName = "AWC 305 Nyx COBRA";
    side = 2;
    scope = 2;
    crew = "I_crew_F";
    faction = "IND_F";
		class Components {};
    class EventHandlers : EventHandlers
    {
      class itc_land_cobra_eventHandlers
      {
          init = "_this call itc_land_cobra_fnc_vehicleInit;";
      };
    };
    class Attributes : Attributes {
  		class ITC_Land_Datalink_ID
  		{
        displayName = "Datalink ID";
        tooltip = "4 character ID, characters 0-F allowed";
        property = "ITC_Land_Datalink_ID";
        expression = "_this setVariable ['init_datalink_id',_value];"
        control = "Edit";
        defaultValue = "CF01";
        validate = "variable";
        unique = 1;
      };
    };
  };
  class NonStrategic;
  class Land_Loudspeakers_F : NonStrategic {
    class EventHandlers;
    class Attributes;
  };
  class ITC_Land_Loudspeakers : Land_Loudspeakers_F {
    displayName = "COBRA Siren";
    class EventHandlers : EventHandlers
    {
      class itc_land_cobra_eventHandlers
      {
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
        validate = "variable";
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
        validate = "variable";
        unique = 1;
      };
    };
  };
};
