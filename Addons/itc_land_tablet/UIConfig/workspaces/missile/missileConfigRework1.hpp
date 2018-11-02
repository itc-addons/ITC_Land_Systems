class page_msl_config:itc_land_workspace {
  idc = 13701;
  class Controls {
	class fcs_mode_title: ITC_LAND_RscText {
		idc = 13710;
		text = "LFCS Solutions:";
		x = 0.37625 * safezoneW + safezoneX;
		y = 0.235 * safezoneH + safezoneY;
		w = 0.15 * safezoneW;
		h = 0.033 * safezoneH;
		sizeEx = 1.25 * GUI_GRID_H;
	};	
	class solutions_ListBox: ITC_LAND_RscListBox {
	  idc = 13711;
	  x = 0.37625 * safezoneW + safezoneX;
	  y = 0.285 * safezoneH + safezoneY;
      w = 0.30 * safezoneW;
      h = 0.15 * safezoneH;	
	  colorBackground[] = {0, 0, 0, 1};	  
	  colorInactive[] = {0, 0, 0, 1};	
	};	
    class msl_type: ITC_LAND_RscText {
      idc = 13712;
      text = "Munition:";
      x = 0.37625 * safezoneW + safezoneX;
	  y = 0.45 * safezoneH + safezoneY;	  
      w = 0.07 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class msl_type_combo: ITC_LAND_RscComboBox {
      idc = 13713;
      text = "";
      x = 0.417 * safezoneW + safezoneX;
	  y = 0.45 * safezoneH + safezoneY;	 
      w = 0.075 * safezoneW;
      h = 0.022 * safezoneH;	  
    };
    class fuse_type: ITC_LAND_RscText {
      idc = 13714;
      text = "Fuse:";
      x = 0.5 * safezoneW + safezoneX;
	  y = 0.45 * safezoneH + safezoneY;	  
      w = 0.07 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class fuse_type_combo: ITC_LAND_RscComboBox {
      idc = 13715;
      text = "";
      x = 0.54 * safezoneW + safezoneX;
	  y = 0.45 * safezoneH + safezoneY;	 
      w = 0.075 * safezoneW;
      h = 0.022 * safezoneH;	  
    };	
    class target_grid: ITC_LAND_RscText {
      idc = 13716;
      text = "TGT Grid:";
      x = 0.37625 * safezoneW + safezoneX;
	  y = 0.483 * safezoneH + safezoneY;	  
      w = 0.07 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class target_grid_edit: ITC_LAND_RscEdit {
      idc = 13717;
      text = "";
      x = 0.417 * safezoneW + safezoneX;
	  y = 0.483 * safezoneH + safezoneY;	 
      w = 0.075 * safezoneW;
      h = 0.022 * safezoneH;	  
    };
    class fuse_setting: ITC_LAND_RscText {
      idc = 13718;
      text = "Time:";
      x = 0.5 * safezoneW + safezoneX;
	  y = 0.483 * safezoneH + safezoneY;	  
      w = 0.07 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class fuse_setting_edit: ITC_LAND_RscEdit {
      idc = 13719;
      text = "";
      x = 0.54 * safezoneW + safezoneX;
	  y = 0.483 * safezoneH + safezoneY;	 
      w = 0.075 * safezoneW;
      h = 0.022 * safezoneH;	  
    };	
    class target_el: ITC_LAND_RscText {
      idc = 13720;
      text = "TGT Elev:";
      x = 0.37625 * safezoneW + safezoneX;
	  y = 0.516 * safezoneH + safezoneY;	  
      w = 0.07 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class target_el_edit: ITC_LAND_RscEdit {
      idc = 13721;
      text = "";
      x = 0.417 * safezoneW + safezoneX;
	  y = 0.516 * safezoneH + safezoneY;	 
      w = 0.075 * safezoneW;
      h = 0.022 * safezoneH;	  
    };
    class las_code: ITC_LAND_RscText {
      idc = 13722;
      text = "LAS Code:";
      x = 0.5 * safezoneW + safezoneX;
	  y = 0.516 * safezoneH + safezoneY;	  
      w = 0.07 * safezoneW;
      h = 0.022 * safezoneH;
    };
    class las_code_edit: ITC_LAND_RscEdit {
      idc = 13723;
      text = "";
      x = 0.54 * safezoneW + safezoneX;
	  y = 0.516 * safezoneH + safezoneY;	 
      w = 0.075 * safezoneW;
      h = 0.022 * safezoneH;	  
    };
	class fcs_calc: ITC_LAND_RscButton {
	  idc = 13730;
	  text = "CALC SLN";
	  x = 0.54 * safezoneW + safezoneX;
	  y = 0.549 * safezoneH + safezoneY;
	  w = 0.0515625 * safezoneW;
	  h = 0.033 * safezoneH;
	  action = "[""calc""] call itc_land_tablet_fnc_pageInteract";
	};	
	/*
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
	*/
  };
};
