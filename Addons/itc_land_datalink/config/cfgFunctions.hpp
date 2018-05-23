class CfgFunctions
{
  class itc_land_datalink {
    class server {
      class serverInit {
        preInit = 1;
        file = "itc_land_datalink\serverFunctions\init.sqf";
      };
      class findAvailableID {
        file = "itc_land_datalink\serverFunctions\findAvailableID.sqf";
      };
      class onClientConnect {
        file = "itc_land_datalink\serverFunctions\onClientConnect.sqf";
      };
      class onClientDisconnect {
        file = "itc_land_datalink\serverFunctions\onClientDisconnect.sqf";
      };
      class onClientTX {
        file = "itc_land_datalink\serverFunctions\onClientTX.sqf";
      };
      class findIDTargets {
        file = "itc_land_datalink\serverFunctions\findIDTargets.sqf";
      };
      class receiveIDRegistry {
        file = "itc_land_datalink\serverFunctions\receiveIDRegistry.sqf";
      };
    };
    class client {
      class connect {
        file = "itc_land_datalink\clientFunctions\connect.sqf";
      };
      class disconnect {
        file = "itc_land_datalink\clientFunctions\disconnect.sqf";
      };
      class transmit {
        file = "itc_land_datalink\clientFunctions\transmit.sqf";
      };
    };
    class functions {
      class init {
        preInit = 1;
        file = "itc_land_datalink\functions\init.sqf";
      };
      class validateID {
        file = "itc_land_datalink\functions\validateID.sqf";
      };
      class onObjectClientRX {
        file = "itc_land_datalink\functions\onObjectClientRX.sqf";
      };
    };
  };
};
