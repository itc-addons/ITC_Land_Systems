	class CannonCore;
	class mortar_155mm_AMOS: CannonCore { class Single1; };
	class itc_land_howitzer_base: mortar_155mm_AMOS {
		scope = 0;
		displayName = "Howitzer 155 mm";
		autoReload = 0;
		modes[] = {"Single"};
		reloadTime = 1;
		magazineReloadTime = 5;
		magazines[] = {};
		class Single: Single1 {
			displayName = "";
			artilleryCharge = 1;
			reloadTime = 5;
		};
		class EventHandlers
		{
				class itc_land_veh_weapons
				{
						fired = "_this call itc_land_veh_weapons_fnc_fired;";
				};
		};
	};

	class itc_land_155mm_howitzer: itc_land_howitzer_base {
		scope = 1;
		#include "CfgWeapons_howitzers_magazines155mm.hpp"
		displayName = "H155 L/52";
	};
	class itc_land_152mm_howitzer: itc_land_howitzer_base {
		scope = 1;
		#include "CfgWeapons_howitzers_magazines152mm.hpp"
		displayName = "H152 L/52";
	};
	class itc_land_127mm_navalgunsystem: itc_land_howitzer_base {
		scope = 1;
		#include "CfgWeapons_howitzers_magazines127mm.hpp"
		displayName = "NG127 L/54";
		class Single: Single1 {
			displayName = "";
			artilleryCharge = 1;
			reloadTime = 3;			
		};
	};
