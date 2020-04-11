	class itc_land_g105hex: itc_land_g155hex {
		author = "Toadball";
		displayName = "G105 HE";
		displayNameShort = "G105 HE";
    ammo = "itc_land_105mm";
    itc_land_submunition = "itc_land_105mm_helper";
		itc_land_charge_format = "itc_land_g105hex_chg%1";
		itc_land_btabListFile = "itc_land_ballistics\tables\g_105\list.sqf";
	};
	class itc_land_g105hex_chg1: itc_land_g105hex { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g105hex_chg2: itc_land_g105hex { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g105hex_chg3: itc_land_g105hex { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g105hex_chg4: itc_land_g105hex { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g105hex_chg5: itc_land_g105hex { initSpeed = 320; itc_land_CountInAH = 0;  };

	class itc_land_g105smo: itc_land_g155smo {
		author = "Toadball";
		displayName = "G105 SMOKE";
		displayNameShort = "G105 SMOKE";
    ammo = "itc_land_127mm_smoke";
		itc_land_charge_format = "itc_land_g105smo_chg%1";
		itc_land_btabListFile = "itc_land_ballistics\tables\g_105\list.sqf";
	};
	class itc_land_g105smo_chg1: itc_land_g105smo { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g105smo_chg2: itc_land_g105smo { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g105smo_chg3: itc_land_g105smo { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g105smo_chg4: itc_land_g105smo { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g105smo_chg5: itc_land_g105smo { initSpeed = 320; itc_land_CountInAH = 0;  };

	class itc_land_g105ill: itc_land_g155ill {
		author = "Toadball";
		displayName = "G105 ILLUM";
		displayNameShort = "G105 ILLUM";
    ammo = "itc_land_105mm_illum";
		itc_land_charge_format = "itc_land_g105ill_chg%1";
		itc_land_btabListFile = "itc_land_ballistics\tables\g_105\list.sqf";
	};
	class itc_land_g105ill_chg1: itc_land_g105ill { initSpeed = 86; itc_land_CountInAH = 0;  };
	class itc_land_g105ill_chg2: itc_land_g105ill { initSpeed = 160; itc_land_CountInAH = 0;  };
	class itc_land_g105ill_chg3: itc_land_g105ill { initSpeed = 240; itc_land_CountInAH = 0;  };
	class itc_land_g105ill_chg4: itc_land_g105ill { initSpeed = 320; itc_land_CountInAH = 0;  };
	class itc_land_g105ill_chg5: itc_land_g105ill { initSpeed = 320; itc_land_CountInAH = 0;  };

  class : itc_land_how_mag {
    author = "Toadball";
    displayName = "G105 ICM";
    ammo = "itc_land_105mm_inert";
    itc_land_submunition = "itc_land_105mm_dpicm_helper";
    muzzleImpulseFactor[] = {15, 30};
    displayNameShort = "G105 ICM";
    itc_land_fuze = "mof35_mod1";
    itc_land_charge_format = "itc_land_g105icm_chg%1";
    itc_land_CountInAH = 1;
    itc_land_maxChargeIndex = 5;
    itc_land_timeModifier = -2;
    itc_land_btabListFile = "itc_land_ballistics\tables\g_105\list.sqf";
  };
  class itc_land_g105icm_chg1: itc_land_g105icm { initSpeed = 86; itc_land_CountInAH = 0;  };
  class itc_land_g105icm_chg2: itc_land_g105icm { initSpeed = 160; itc_land_CountInAH = 0;  };
  class itc_land_g105icm_chg3: itc_land_g105icm { initSpeed = 240; itc_land_CountInAH = 0;  };
  class itc_land_g105icm_chg4: itc_land_g105icm { initSpeed = 320; itc_land_CountInAH = 0;  };
  class itc_land_g105icm_chg5: itc_land_g105icm { initSpeed = 400; itc_land_CountInAH = 0;  };
