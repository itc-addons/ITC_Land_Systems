class CfgFunctions {
	class itc_land_veh_darter {
		class functions {
			class packUAV {
				file = "itc_land_veh_darter\functions\fnc_pack.sqf";
			};
			class unpackUAV {
				file = "itc_land_veh_darter\functions\fnc_unpack.sqf";
			};
			class canunpack {
				file = "itc_land_veh_darter\functions\fnc_canunpack.sqf";
			};
			class drawCompass {
				file = "itc_land_veh_darter\functions\fnc_drawCompass.sqf";
			};			
			class init {	
				postInit = 1;		
				file = "itc_land_veh_darter\functions\init.sqf";
			};				
		};
	};
};