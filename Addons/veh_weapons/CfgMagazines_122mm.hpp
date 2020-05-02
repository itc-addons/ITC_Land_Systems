	class itc_land_g122hex: itc_land_g155hex {
		author = "Toadball";
		displayName = "g122 HE";
		displayNameShort = "G122 HE";
    ammo = "itc_land_122mm";
    itc_land_submunition = "itc_land_122mm_helper";
		itc_land_charge_format = "itc_land_g122hex_chg%1";
		itc_land_btabListFile = "itc_land_ballistics\tables\g_122\list.sqf";
	};
	class itc_land_g122hex_chg1: itc_land_g122hex { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g122hex_chg2: itc_land_g122hex { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g122hex_chg3: itc_land_g122hex { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g122hex_chg4: itc_land_g122hex { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g122hex_chg5: itc_land_g122hex { initSpeed = 400; itc_land_CountInAH = 0;  };

	class itc_land_g122smo: itc_land_g155smo {
		author = "Toadball";
		displayName = "g122 SMOKE";
		displayNameShort = "g122 SMOKE";
    itc_land_submunition = "itc_land_122mm_smoke";
    ammo = "itc_land_122mm_inert";
		itc_land_charge_format = "itc_land_g122smo_chg%1";
		itc_land_btabListFile = "itc_land_ballistics\tables\g_122\list.sqf";
	};
	class itc_land_g122smo_chg1: itc_land_g122smo { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g122smo_chg2: itc_land_g122smo { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g122smo_chg3: itc_land_g122smo { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g122smo_chg4: itc_land_g122smo { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g122smo_chg5: itc_land_g122smo { initSpeed = 400; itc_land_CountInAH = 0;  };

	class itc_land_g122lgm: itc_land_g155lgm {
		author = "Toadball";
		displayName = "G122 LASER GUIDED";
		displayNameShort = "G122 LGM";
    ammo = "itc_land_122mm";
		itc_land_charge_format = "itc_land_g122lgm_chg%1";
		itc_land_btabListFile = "itc_land_ballistics\tables\g_122\list.sqf";
	};
	class itc_land_g122lgm_chg1: itc_land_g122lgm { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g122lgm_chg2: itc_land_g122lgm { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g122lgm_chg3: itc_land_g122lgm { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g122lgm_chg4: itc_land_g122lgm { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g122lgm_chg5: itc_land_g122lgm { initSpeed = 400; itc_land_CountInAH = 0;  };

	class itc_land_g122ill: itc_land_g155ill {
		author = "Toadball";
		displayName = "G122 ILLUM";
		displayNameShort = "G122 ILLUM";
    itc_land_submunition = "itc_land_122mm_illum";
    ammo = "itc_land_122mm_inert";
		itc_land_charge_format = "itc_land_g122ill_chg%1";
		itc_land_btabListFile = "itc_land_ballistics\tables\g_122\list.sqf";
	};
	class itc_land_g122ill_chg1: itc_land_g122ill { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g122ill_chg2: itc_land_g122ill { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g122ill_chg3: itc_land_g122ill { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g122ill_chg4: itc_land_g122ill { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g122ill_chg5: itc_land_g122ill { initSpeed = 400; itc_land_CountInAH = 0;  };


  class itc_land_g122icm: itc_land_how_mag {
		author = "Toadball";
		displayName = "G122 ICM";
		ammo = "itc_land_122mm_inert";
		itc_land_submunition = "itc_land_122mm_dpicm_helper";
		muzzleImpulseFactor[] = {15, 30};
		displayNameShort = "G122 ICM";
		itc_land_fuze = "mof35_mod1";
		itc_land_charge_format = "itc_land_g122icm_chg%1";
		itc_land_CountInAH = 1;
		itc_land_maxChargeIndex = 5;
		itc_land_timeModifier = -2;
		itc_land_btabListFile = "itc_land_ballistics\tables\g_122\list.sqf";
	};
	class itc_land_g122icm_chg1: itc_land_g122icm { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g122icm_chg2: itc_land_g122icm { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g122icm_chg3: itc_land_g122icm { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g122icm_chg4: itc_land_g122icm { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g122icm_chg5: itc_land_g122icm { initSpeed = 400; itc_land_CountInAH = 0;  };
