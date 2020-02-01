class CfgVehicles {

	class Man;
  class CAManBase: Man {
    class ACE_SelfActions {
      class ACE_Equipment {
        class ITC_Land_Unpack {
          class ITC_Land_Unpack_RemoteGLTD_B {
            displayName = "Remote GLTD [NATO]";
            condition = "'ITC_Land_B_RemoteGLTD_Packed' in (items _player)";
            statement = "['ITC_Land_B_RemoteGLTD_Packed',_player] call itc_land_packable_fnc_unPack";
            priority = 1;
            showDisabled = 1;
            exceptions[] = {"isNotInside","isNotSitting"};
            enableInside = 0;
          };
          class ITC_Land_Unpack_RemoteGLTD_BW: ITC_Land_Unpack_RemoteGLTD_B {
            displayName = "Remote GLTD (Green) [NATO]";
            condition = "'ITC_Land_BW_RemoteGLTD_Packed' in (items _player)";
            statement = "['ITC_Land_BW_RemoteGLTD_Packed',_player] call itc_land_packable_fnc_unPack";
          };
        };
      };
    };
  };


  class LandVehicle;
  class StaticWeapon: LandVehicle {
    class Turrets {
      class MainTurret: NewTurret {};
    };
  };
  class Static_Designator_01_base_F: StaticWeapon {
    class ACE_Actions {
      class ACE_MainActions {};
    };
    class Turrets: Turrets {
      class MainTurret: MainTurret {};
    };
  };
  class B_Static_Designator_01_F: Static_Designator_01_base_F {
    class ACE_Actions {
      class ACE_MainActions {};
    };
    class Turrets: Turrets {
      class MainTurret: MainTurret {};
    };
  };
  class ITC_Land_B_RemoteGLTD: B_Static_Designator_01_F {
    author = "Toadball";
    displayname = "Remote GLTD [NATO]";
    itc_land_PacksTo = "ITC_Land_B_RemoteGLTD_Packed";
    class ACE_Actions {
      class ACE_MainActions {
        class ITC_Land_PackGLTD {
					displayName = "Repack GLTD";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_packable_fnc_Pack";
				};
      };
    };
    class Turrets: Turrets {
      class MainTurret: MainTurret {
        turretInfoType = "ITC_Land_RscOptics_GLTD_gunner";
      };
    };
    class assembleInfo {
      primary = 0;
      base = "";
      assembleTo = "";
      dissasembleTo[] = {""};
      displayName = "";
    };
  };


  class B_W_Static_Designator_01_F: Static_Designator_01_base_F {
    class ACE_Actions {
      class ACE_MainActions {};
    };
    class Turrets: Turrets {
      class MainTurret: MainTurret {};
    };
  };
  class ITC_Land_BW_RemoteGLTD: B_W_Static_Designator_01_F {
    author = "Toadball";
    displayname = "Remote GLTD [NATO]";
    itc_land_PacksTo = "ITC_Land_BW_RemoteGLTD_Packed";
    class ACE_Actions {
      class ACE_MainActions {
        class ITC_Land_PackGLTD {
					displayName = "Repack GLTD";
					condition = "((alive _target) && ( ACE_Player distance _target ) < 3) && ( count (( UAVControl _target) select 1 ) < 1 )";
					statement = "[_target,_player] call itc_land_packable_fnc_Pack";
				};
      };
    };
    class Turrets: Turrets {
      class MainTurret: MainTurret {
        turretInfoType = "ITC_Land_RscOptics_GLTD_gunner";
      };
    };
    class assembleInfo {
      primary = 0;
      base = "";
      assembleTo = "";
      dissasembleTo[] = {""};
      displayName = "";
    };
  };

};
