class CfgWeapons {
	class itc_land_howitzer_base;
	class itc_land_howitzer: itc_land_howitzer_base {
		class EventHandlers {
				class itc_land_sphammohandler {
						fired = "_this call itc_land_sphammohandler_fnc_firedEH;";
				};
		};
	};
};