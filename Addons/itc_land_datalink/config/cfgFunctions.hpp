class CfgFunctions
{
  class itc_land_datalink {
    class server {
      class init {
        postInit = 1;
        file = "itc_land_datalink\serverFunctions\init.sqf";
      };
      class findAvailableId {
        file = "itc_land_datalink\serverFunctions\findAvailableId.sqf";
      };
    };
    class client {

    };
    class functions {
      class validateId {
        file = "itc_land_datalink\functions\validateId.sqf";
      };
    };
  };
};
