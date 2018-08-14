class page_msl_config:itc_land_workspace {
  idc = 13701;
  class Controls {
    class msl_target_grid: ITC_LAND_RscText {
      idc = 13714;
      text = "Target grid";
      x = 0.37625 * safezoneW + safezoneX;
    	y = (0.313 + POSYADJUST) * safezoneH + safezoneY;
      w = 0.0721875 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class msl_target_grid_edit: ITC_LAND_RscEdit {
      idc = 13716;
      text = "";
      x = 0.443281 * safezoneW + safezoneX;
    	y = (0.313 + POSYADJUST) * safezoneH + safezoneY;
      w = 0.0457812 * safezoneW;
      h = 0.022 * safezoneH;
    };
		class msl_target_el: ITC_LAND_RscText {
			idc = 13715;
			text = "Target elevation";
			x = 0.37625 * safezoneW + safezoneX;
    	y = (0.346 + POSYADJUST) * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class msl_target_el_edit: ITC_LAND_RscEdit {
			idc = 13717;
			text = "";
			x = 0.443281 * safezoneW + safezoneX;
    	y = (0.346 + POSYADJUST) * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class msl_target_el_btn: ITC_LAND_RscButton {
			idc = 13704;
			text = "prepare";
			x = 0.4807812 * safezoneW + safezoneX;
    	y = (0.346 + POSYADJUST) * safezoneH + safezoneY;
			w = 0.0457812 * safezoneW;
			h = 0.022 * safezoneH;
      action = "[""calc""] call itc_land_tablet_fnc_pageInteract";
		};
    class fcs_results: ITC_LAND_RscStructuredText {
    	idc = 137100;
    	text = "";
    	x = 0.551562 * safezoneW + safezoneX;
    	y = (0.313 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.139219 * safezoneW;
    	h = 0.18 * safezoneH;
    	colorBackground[] = {0,0,0,1};
    };
  };
};
