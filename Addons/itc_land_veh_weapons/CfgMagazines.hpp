class CfgMagazines {
	class VehicleMagazine;
    class itc_land_how_mag : VehicleMagazine {
        scope = 2;
        count = 1;
        nameSound = "cannon";
				dispersionEvent = "itc_land_veh_weapons_fnc_adjustMuzzleVelG15x";
				itc_land_heightModifier = 0;
				itc_land_timeModifier = 0;
    };
	#include "CfgMagazines_155mm.hpp"
	#include "CfgMagazines_152mm.hpp"
	#include "CfgMagazines_127mm.hpp"	
	#include "CfgMagazines_230mm.hpp"
};
