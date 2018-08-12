class fci_AHinputs: ITC_LAND_RscText {
	idc = 1900;
	text = "AMMOHANDLER SETTINGS";
	sizeEx = 1.25 * GUI_GRID_H;
	x = 0.363125 * safezoneW + safezoneX;
	y = 0.490 * safezoneH + safezoneY;
	w = 0.2 * safezoneW;
	h = 0.033 * safezoneH;
};	
class fci_AHinputs_availableammo_text: ITC_LAND_RscText {
	idc = 1901;
	text = "Available Ammo:";
	x = 0.363125 * safezoneW + safezoneX;
	y = 0.523 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_availableammo_list: ITC_LAND_RscListbox {
	idc = 1902;
	//text = "AMMOHANDLER SETTINGS";
	x = 0.363125 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.08 * safezoneW;
	h = 0.145 * safezoneH;
	colorBackground[] = {0,0,0,1};	
	onLBSelChanged = "_this call itc_land_tablet_fnc_fci_onSelectAmmo";				
	
};

class fci_AHinputs_charge_text: ITC_LAND_RscText {
	idc = 1903;
	text = "Charge:";
	x = 0.45 * safezoneW + safezoneX;
	y = 0.523 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_charge_downbutton: ITC_LAND_RscButton {
	text = "-"; 
	x = 0.5 * safezoneW + safezoneX;
	y = 0.523 * safezoneH + safezoneY;
	w = 0.01 * safezoneW;
	h = 0.022 * safezoneH;
	//action = "[-1] call itc_land_SPHammoHandler_fnc_changeCharge";	
};
class fci_AHinputs_charge_text2: ITC_LAND_RscText {
	idc = 1904;
	text = "X / Y";
	x = 0.5125 * safezoneW + safezoneX;
	y = 0.523 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_charge_upbutton: ITC_LAND_RscButton {
	text = "+"; 
	x = 0.54 * safezoneW + safezoneX;
	y = 0.523 * safezoneH + safezoneY;
	w = 0.01 * safezoneW;
	h = 0.022 * safezoneH;
	//action = "[1]  call itc_land_SPHammoHandler_fnc_changeCharge";	
};


class fci_AHinputs_fuze_text: ITC_LAND_RscText {
	idc = 1905;
	text = "Fuze:";
	x = 0.45 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_fuze_combo: ITC_LAND_RscCombobox {
	idc = 1906;
	x = 0.48 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
	onLBSelChanged = "_this call itc_land_tablet_fnc_fci_onSelectFuze";					
};	

class fci_AHinputs_time_text: ITC_LAND_RscText {
	idc = 1907;
	text = "Time:";
	x = 0.45 * safezoneW + safezoneX;
	y = 0.589 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_time_edit: ITC_LAND_RscEdit {
	idc = 1908;
	x = 0.48 * safezoneW + safezoneX;
	y = 0.589 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};	
	
class fci_AHinputs_code_text: ITC_LAND_RscText {
	idc = 1909;
	text = "Code:";
	x = 0.45 * safezoneW + safezoneX;
	y = 0.619 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_code_edit: ITC_LAND_RscEdit {
	idc = 1910;
	x = 0.48 * safezoneW + safezoneX;
	y = 0.619 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};

class fci_AHinputs_tgtgrid_text: ITC_LAND_RscText {
	idc = 1911;
	text = "Grid:";
	x = 0.45 * safezoneW + safezoneX;
	y = 0.649 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_tgtgrid_edit: ITC_LAND_RscEdit {
	idc = 1912;
	x = 0.48 * safezoneW + safezoneX;
	y = 0.649 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};	
class fci_AHinputs_tgtelev_text: ITC_LAND_RscText {
	idc = 1913;
	text = "Elev:";
	x = 0.51 * safezoneW + safezoneX;
	y = 0.679 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_tgtelev_edit: ITC_LAND_RscEdit {
	idc = 1914;
	x = 0.535 * safezoneW + safezoneX;
	y = 0.679 * safezoneH + safezoneY;
	w = 0.0275 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_count_text: ITC_LAND_RscText {
	idc = 1915;
	text = "Count:";
	x = 0.45 * safezoneW + safezoneX;
	y = 0.679 * safezoneH + safezoneY;
	w = 0.0735 * safezoneW;
	h = 0.022 * safezoneH;
};
class fci_AHinputs_count_edit: ITC_LAND_RscEdit {
	idc = 1916;
	x = 0.48 * safezoneW + safezoneX;
	y = 0.679 * safezoneH + safezoneY;
	w = 0.0275 * safezoneW;
	h = 0.022 * safezoneH;
};	
class fci_AHinputs_apply_btn: ITC_LAND_RscButton {
	idc = 1917;
	text = "APPLY TO IGS";
	x = 0.58 * safezoneW + safezoneX;
	y = 0.679 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};	
/*class fci_AHinputs_button1: ITC_LAND_RscButton {
	idc = 1918;
	text = "BUTTON 1";
	x = 0.58 * safezoneW + safezoneX;
	y = 0.649 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};*/	
			