class fcs_target_title: ITC_LAND_RscText {
	idc = 1012;
	text = "LOCAL FCS TARGETING";
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.285 * safezoneH + safezoneY;
	w = 0.15 * safezoneW;
	h = 0.033 * safezoneH;
	sizeEx = 1.25 * GUI_GRID_H;
};		
class fcs_target_pos: ITC_LAND_RscText {
  idc = 1010;
	text = "Target Position";
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.329 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class fcs_edit_target_pos: ITC_LAND_RscEdit {
	idc = 1400;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.329 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};	
class fcs_target_elev: ITC_LAND_RscText {
	idc = 1011;
	text = "Target Elevation";
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.362 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class fcs_edit_target_el: ITC_LAND_RscEdit {
	idc = 1401;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.362 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};	
class fcs_round_type: ITC_LAND_RscText {
	idc = 1012;
	text = "Round Type";
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.395 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class fcs_combo_round_type: ITC_LAND_RscComboBox {
	idc = 1402;
	x = 0.45875 * safezoneW + safezoneX;
	y = 0.395 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};
class fcs_results: ITC_LAND_RscStructuredText {
	idc = 1100;
	text = "CHARGE: single3<br/>DEFLECTION: 4515<br/>QUADRANT: 404<br/>TOF: 31<br/>MAXIMUM ORDINATE: 21043m AGL<br/>IMPACT ANGLE: -83<br/>TARGET DISTANCE: 10982m<br/>";
	x = 0.551562 * safezoneW + safezoneX;
	y = 0.285 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.18 * safezoneH;
	colorBackground[] = {0,0,0,1};
};
class fcs_results_frame: ITC_LAND_RscFrame {
	idc = 1101;
	text = "";
	x = 0.551562 * safezoneW + safezoneX;
	y = 0.285 * safezoneH + safezoneY;
	w = 0.139219 * safezoneW;
	h = 0.18 * safezoneH;
	colorBackground[] = {0,0,0,0};
};	
class fcs_next: ITC_LAND_RscButton {
	idc = 1601;
	text = "NXT SLN";
	x = 0.494844 * safezoneW + safezoneX;
	y = 0.432 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.033 * safezoneH;
	action = "[""next""] call itc_land_tablet_fnc_pageInteract";
};
class fcs_prev: ITC_LAND_RscButton {
	idc = 1602;
	text = "PRV SLN";
	x = 0.438125 * safezoneW + safezoneX;
	y = 0.432 * safezoneH + safezoneY;
	w = 0.0464063 * safezoneW;
	h = 0.033 * safezoneH;
	action = "[""prev""] call itc_land_tablet_fnc_pageInteract";
};
class fcs_calc: ITC_LAND_RscButton {
	idc = 1600;
	text = "CALC SLN";
	x = 0.37625 * safezoneW + safezoneX;
	y = 0.432 * safezoneH + safezoneY;
	w = 0.0515625 * safezoneW;
	h = 0.033 * safezoneH;
	action = "[""calc""] call itc_land_tablet_fnc_pageInteract";
};	