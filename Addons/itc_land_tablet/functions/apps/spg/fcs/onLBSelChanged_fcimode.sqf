params ["_control","_index"];

//Generate global
itc_land_fcimode = [_index,lbText [1501,_index]];
itc_land_fcimode_manualidcarray = [1800,1801,1802,1803,1804,1805,1603];
itc_land_fcimode_lfcsidcarray = [1012,1010,1400,1011,1401,1012,1402,1100,1101,1601,1602,1600];

switch (itc_land_fcimode # 0) do {
	case 0: {
		{ ctrlShow [_x,true]; } forEach itc_land_fcimode_manualidcarray;	//Show Manual Mode Elements
		{ ctrlShow [_x,false]; } forEach itc_land_fcimode_lfcsidcarray;	//Hide LFCS Mode Elements
	};
	case 1: {
		//LFCS
		{ ctrlShow [_x,false]; } forEach itc_land_fcimode_manualidcarray;	//Hide Manual Mode Elements
		{ ctrlShow [_x,true]; } forEach itc_land_fcimode_lfcsidcarray;	//Show LFCS Mode Elements		
	};
};