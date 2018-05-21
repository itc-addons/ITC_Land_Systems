["ITC_LAND_CIWS", "CHECKBOX", "Enable CIWS System", "ITC Land", [true]] call CBA_Settings_fnc_init; //ciws system enabling options
ITC_LAND_CIWS_INTERCEPTABLE = (configFile >> "itc_land_ciws" >> "interceptable") call BIS_fnc_getCfgData; //list of ciws munitions to allow people to add more in missions
