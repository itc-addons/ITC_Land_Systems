class CfgVehicles {
  class UAV;
  class UAV_02_base_F: UAV {
    class Turrets {
      class MainTurret: NewTurret {};
    };
  };
  class UAV_02_dynamicLoadout_base_F: UAV_02_base_F {
    class Turrets: Turrets {
      class MainTurret: MainTurret { };
    };
  };
  class B_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F {
    class Turrets: Turrets {
      class MainTurret: MainTurret { };
    };
  };
  class ITC_Land_B_UAV_MQ4i: B_UAV_02_dynamicLoadout_F {
    author = "Toadball";
    displayName = "MQ-4I Greyhawk";
		scopeCurator = 2;
    class Turrets: Turrets {
      class MainTurret: MainTurret {
        turretInfoType = "ITC_Land_RscOptics_UAV_gunner";
        gunnerOpticsModel = "";

        //gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";

      };
    };
  };
  class O_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F {
    class Turrets: Turrets {
      class MainTurret: MainTurret { };
    };
  };
  class ITC_Land_O_UAV_K40i: O_UAV_02_dynamicLoadout_F{
    author = "Toadball";
    displayName = "K40i Ababil-3";
		scopeCurator = 2;
    class Turrets: Turrets {
      class MainTurret: MainTurret {
        turretInfoType = "ITC_Land_RscOptics_UAV_gunner";
      };
    };
  };
  class I_UAV_02_dynamicLoadout_F: UAV_02_dynamicLoadout_base_F {
    class Turrets: Turrets {
      class MainTurret: MainTurret { };
    };
  };
  class ITC_Land_I_UAV_K40i: I_UAV_02_dynamicLoadout_F {
    author = "Toadball";
    displayName = "K40i Ababil-3";
		scopeCurator = 2;
    class Turrets: Turrets {
      class MainTurret: MainTurret {
        turretInfoType = "ITC_Land_RscOptics_UAV_gunner";
      };
    };
  };
};
