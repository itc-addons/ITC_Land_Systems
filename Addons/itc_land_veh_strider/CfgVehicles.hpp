class CfgVehicles {
  class Car;
  class Car_F: Car {
    class Turrets {
      class MainTurret: NewTurret {};
    };
  };
  class MRAP_03_base_F: Car_F {
    class Turrets: Turrets {
      class CommanderTurret: MainTurret {};
      class MainTurret: MainTurret {};
    };
  };
  class I_MRAP_03_F: MRAP_03_base_F {
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {};
      class MainTurret: MainTurret {};
    };
  };
  class itc_land_I_StriderRV: I_MRAP_03_F {
    displayName = "Strider RV";
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {
        turretInfoType = "ITC_Land_RscOptics_strider_commander";
      };
    };
  };

  class MRAP_03_hmg_base_F: MRAP_03_base_F {
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {};
      class MainTurret: MainTurret {};
    };
  };
  class I_MRAP_03_hmg_F: MRAP_03_hmg_base_F {
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {};
      class MainTurret: MainTurret {};
    };
  };
  class itc_land_I_StriderRV_HMG: I_MRAP_03_hmg_F {
    displayName = "Strider RV HMG";
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {
        turretInfoType = "ITC_Land_RscOptics_strider_commander";
      };
      class MainTurret: MainTurret {};
    };
  };

  class MRAP_03_gmg_base_F: MRAP_03_hmg_base_F {
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {};
      class MainTurret: MainTurret {};
    };
  };
  class I_MRAP_03_gmg_F: MRAP_03_gmg_base_F {
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {};
      class MainTurret: MainTurret {};
    };
  };
	class itc_land_I_StriderRV_GMG: I_MRAP_03_gmg_F {
    displayName = "Strider RV GMG";
    class Turrets: Turrets {
      class CommanderTurret: CommanderTurret {
        turretInfoType = "ITC_Land_RscOptics_strider_commander";
      };
      class MainTurret: MainTurret {};
    };
  };

};
