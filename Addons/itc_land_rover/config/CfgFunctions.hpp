class CfgFunctions {
	class itc_land_rover {
		class functions {
			#define FUNC(NAME) \
			class NAME { \
				file = itc_land_rover\functions\##NAME##.sqf; \
			};
			FUNC(getLaserTurret)
			FUNC(createFeed)
			FUNC(killFeed)
			FUNC(ui_init)
			FUNC(ui_draw)
			FUNC(ui_update)
			FUNC(ui_curPlane)
			FUNC(ui_vismode)
			FUNC(ui_populateListBox)
			class init {
				postInit = 1;
				file = "itc_land_rover\functions\init.sqf";
			};
		};
	};
};
