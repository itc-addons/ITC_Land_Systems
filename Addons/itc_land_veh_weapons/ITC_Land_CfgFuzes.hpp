class ITC_Land_CfgFuzes {

	class ph_fuze {
		modes[] = {"prox","pd","time","delay"};
		modeDesc[] = {"Proximity","Point Detonate","Time","Delay"};
		firedEvent = "ph_fuzeFunc";
	};
	//Modular Fuse 35: Mod 0 All modes, subsequent numbers are more specific
	class mof35_mod0 {
		modes[] = {"pd","prox","time","delay"};
		modeDesc[] = {"Point Detonate","Proximity","Time","Delay"};
		firedEvent = "itc_land_veh_weapons_fnc_firedMof35";
		proxHOB = 10;		
	};
	class mof35_mod1: mof35_mod0 {
		modes[] = {"time"};
		modeDesc[] = {"Time"};
		firedEvent = "itc_land_veh_weapons_fnc_firedMof35";
	};
	class mof35_mod2: mof35_mod0 {
		modes[] = {"pd","prox","delay"};
		modeDesc[] = {"Point Detonate","Proximity","Delay"};
		firedEvent = "itc_land_veh_weapons_fnc_firedMof35";
	};
	class mof35_mod3: mof35_mod0 { //FOR CARGO SHELLS LIKE EXTRA
		modes[] = {"time"};
		modeDesc[] = {"Time"};
		firedEvent = "itc_land_veh_weapons_fnc_firedMof35Mod3";
	};
};
