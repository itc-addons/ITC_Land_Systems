class CfgFunctions
{
  class itc_land_datalink {
    class server {
      class serverInit {
        postInit = 1;
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
    };
    class client {
      class connect {
        file = "itc_land_datalink\clientFunctions\connect.sqf";
      };
    };
    class functions {
      class init {
        postInit = 1;
        file = "itc_land_datalink\functions\init.sqf";
      };
      class validateID {
        file = "itc_land_datalink\functions\validateID.sqf";
      };
    };
  };
};
