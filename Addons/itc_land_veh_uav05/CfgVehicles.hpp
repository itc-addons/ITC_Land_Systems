class CfgVehicles {
  class UAV;
  class UAV_05_Base_F: UAV {
    class Turrets {
      class MainTurret: NewTurret {};
    };
  };
  class B_UAV_05_F: UAV_05_Base_F {
    class Turrets: Turrets {
      class MainTurret: MainTurret {};
    };
  };
  class ITC_Land_B_UAV_UCAVi: B_UAV_05_F {
    author = "Toadball";
    displayName = "UCAVi Sentinel 2";
    class Turrets: Turrets {
      class MainTurret: MainTurret {
        turretInfoType = "ITC_Land_RscOptics_UAV_gunner";
      };
    };
  };
};
