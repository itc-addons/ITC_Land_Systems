class page_cbr_data:itc_land_workspace
{
  idc = 13602;
  class Controls {
    class cbr_data_list: ITC_LAND_RscListBox {
      idc = 136001;

    	x = 0.365937 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.309375 * safezoneW;
    	h = 0.275 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
    };
    class cbr_data_saveOriginPos: ITC_LAND_RscButton {
    	idc = 136002;

    	text = "Save to BCS";
    	x = 0.624062 * safezoneW + safezoneX;
    	y = 0.533 * safezoneH + safezoneY;
    	w = 0.05125 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
      action = "[""savePos""] call itc_land_tablet_fnc_pageInteract";
    };
  };
};
