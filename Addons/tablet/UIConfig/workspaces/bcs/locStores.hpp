class page_bcs_locations:itc_land_workspace
{
  idc = 13503;
  class Controls {
    class locstores_referenceID_label: ITC_LAND_RscText {
    	idc = 5401;

    	text = "Reference ID";
    	x = 0.365937 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0515625 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class locstores_referenceID_text: ITC_LAND_RscEdit {
    	idc = 5402;

    	text = "AB0001";
    	x = 0.4175 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0464063 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class locstores_position_label: ITC_LAND_RscText {
    	idc = 5403;

    	text = "Position";
    	x = 0.463906 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0360937 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class locstores_position_text: ITC_LAND_RscEdit {
    	idc = 5404;

    	text = "";
    	x = 0.5 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0515625 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class locstores_elevation_label: ITC_LAND_RscText {
    	idc = 5405;

    	text = "Elevation";
    	x = 0.551562 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0360937 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class locstores_elevation_text: ITC_LAND_RscEdit {
    	idc = 5406;

    	text = "";
    	x = 0.592812 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0309375 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class locstores_isFriendly_label: ITC_LAND_RscText {
    	idc = 5407;

    	text = "Friendly";
    	x = 0.62375 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0360937 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class locstores_isFriendly_combobox: ITC_LAND_RscComboBox {
    	idc = 5408;

    	text = "No";
    	x = 0.659844 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0309375 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class locstores_addnew_button: ITC_LAND_RscButton {
    	idc = 5409;

    	text = "ADD NEW";
    	x = 0.603125 * safezoneW + safezoneX;
    	y = 0.566 * safezoneH + safezoneY;
    	w = 0.04125 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
      action = "[""addLocation""] call itc_land_tablet_fnc_pageInteract";
    };
    class locstores_remove_button: ITC_LAND_RscButton {
    	idc = 5410;

    	text = "REMOVE";
    	x = 0.649531 * safezoneW + safezoneX;
    	y = 0.566 * safezoneH + safezoneY;
    	w = 0.04125 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
      action = "[""removeLocation""] call itc_land_tablet_fnc_pageInteract";
    };
    class locstores_listbox: ITC_LAND_RscListBox {
    	idc = 5411;

    	x = 0.365937 * safezoneW + safezoneX;
    	y = 0.28 * safezoneH + safezoneY;
    	w = 0.324844 * safezoneW;
    	h = 0.275 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
    };
    /*
    class locstores_save_button: ITC_LAND_RscButton {
    	idc = 5412;

    	text = "Save";
    	x = 0.659844 * safezoneW + safezoneX;
    	y = 0.685 * safezoneH + safezoneY;
    	w = 0.061875 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
    };
    class locstores_discard_button: ITC_LAND_RscButton {
    	idc = 5413;

    	text = "Discard";
    	x = 0.587656 * safezoneW + safezoneX;
    	y = 0.685 * safezoneH + safezoneY;
    	w = 0.061875 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
    };
    */
  };
};
