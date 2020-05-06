//Toadball 03.05.2018 2211 GMT+1: ┻━┻ ︵ヽ(`Д´)ﾉ︵﻿ ┻━┻
class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
        class ACE_SelfActions;	
	};
	class Tank_F: Tank {
        class ACE_SelfActions: ACE_SelfActions {};
	};
	class MBT_01_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};
	};	
	class MBT_01_arty_base_F: MBT_01_base_F {
        class ACE_SelfActions: ACE_SelfActions {};		
	};
	class B_MBT_01_arty_base_F: MBT_01_arty_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
	};
    class itc_land_SPH01_base: B_MBT_01_arty_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
    };	
    class itc_land_b_SPH_Sholef2: itc_land_SPH01_base {
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_SPHammohandler {
                displayName = "Open Ammo Handling Interface";
                condition = "( gunner _target ) == ACE_Player";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };
        };
    };

	
	class MBT_02_base_F: Tank_F {
        class ACE_SelfActions: ACE_SelfActions {};
	};	
	class MBT_02_arty_base_F: MBT_02_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
	};
	class O_MBT_02_arty_base_F: MBT_02_arty_base_F {		
        class ACE_SelfActions: ACE_SelfActions {};
	};
	class itc_land_SPH02_base: O_MBT_02_arty_base_F {
        class ACE_SelfActions: ACE_SelfActions {};
	};
	class itc_land_o_sph_sochor2: itc_land_SPH02_base {	
        class ACE_SelfActions: ACE_SelfActions {
            class ITC_Land_SPHammohandler {
                displayName = "Open Ammo Handling Interface";
                condition = "( gunner _target ) == ACE_Player";
                statement = "createDialog 'ITC_Land_SPHammohandler'";
            };
        };
	};
};