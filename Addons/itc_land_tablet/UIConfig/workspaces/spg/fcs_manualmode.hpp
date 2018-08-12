//Manual Mode Controls
class manual_title: ITC_LAND_RscText {
	idc = 1800;
	text = "MANUAL TARGETING";
	x = 0.363125 * safezoneW + safezoneX; 
	y = 0.285 * safezoneH + safezoneY;
	w = 0.15 * safezoneW;
	h = 0.033 * safezoneH;
	sizeEx = 1.25 * GUI_GRID_H;
};
class manual_azimuth: ITC_LAND_RscText {
  idc = 1801;
	text = "Mission Azimuth";
	x = 0.363125 * safezoneW + safezoneX;
	y = 0.329 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class manual_azimuth_edit: ITC_LAND_RscEdit {
	idc = 1802;
	x = 0.433125 * safezoneW + safezoneX;
	y = 0.329 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};		
class manual_quadrant: ITC_LAND_RscText {
	idc = 1803;
	text = "Mission Quadrant";
	x = 0.363125 * safezoneW + safezoneX;
	y = 0.362 * safezoneH + safezoneY;
	w = 0.103125 * safezoneW;
	h = 0.022 * safezoneH;
};
class manual_quadrant_edit: ITC_LAND_RscEdit {
	idc = 1804;
	x = 0.433125 * safezoneW + safezoneX;
	y = 0.362 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
};	
class manual_apply_button: ITC_LAND_RscButton {
	idc = 1805;
	text = "APPLY SETTINGS";
	x = 0.433125 * safezoneW + safezoneX;
	y = 0.395 * safezoneH + safezoneY;
	w = 0.0825 * safezoneW;
	h = 0.022 * safezoneH;
	action = "";
};