class page_bcs_setup:itc_land_workspace
{
  idc = 13502;
  class Controls {
    class btysetup_bty_callsign_label: ITC_ARTY_RscText {
    	idc = 4301;

    	text = "Battery Callsign: ";
    	x = 0.360781 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.061875 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class btysetup_gun_type_label: ITC_ARTY_RscText {
    	idc = 4302;

    	text = "Gun Type: ";
    	x = 0.381406 * safezoneW + safezoneX;
    	y = 0.269 * safezoneH + safezoneY;
    	w = 0.04125 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class btysetup_bty_callsign_text: ITC_ARTY_RscTextBox {
    	idc = 4303;

    	text = "ARCHER";
    	x = 0.438125 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.118594 * safezoneW;
    	h = 0.022 * safezoneH;
    	//colorText[] = {1,1,1,1};
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class btysetup_gun_type_combo: ITC_ARTY_RscComboBox {
    	idc = 4304;

    	text = "Mk. 6 Mortar";
    	x = 0.438125 * safezoneW + safezoneX;
    	y = 0.269 * safezoneH + safezoneY;
    	w = 0.118594 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class btysetup_gun_number_label: ITC_ARTY_RscText {
    	idc = 4305;

    	text = "Gun #";
    	x = 0.365937 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0257812 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class btysetup_gun_number_text: ITC_ARTY_RscTextBox {
    	idc = 4306;

    	text = "1";
    	x = 0.396875 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0257812 * safezoneW;
    	h = 0.022 * safezoneH;
    	//colorText[] = {1,1,1,1};
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class btysetup_position_label: ITC_ARTY_RscText {
    	idc = 4307;

    	text = "Position";
    	x = 0.427812 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0360937 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class btysetup_position_text: ITC_ARTY_RscTextBox {
    	idc = 4308;

    	text = "";
    	x = 0.469062 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0515625 * safezoneW;
    	h = 0.022 * safezoneH;
    	//colorText[] = {1,1,1,1};
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class btysetup_elevation_label: ITC_ARTY_RscText {
    	idc = 4309;

    	text = "Elevation";
    	x = 0.525781 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0360937 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class btysetup_elevation_text: ITC_ARTY_RscTextBox {
    	idc = 4310;

    	text = "";
    	x = 0.567031 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0309375 * safezoneW;
    	h = 0.022 * safezoneH;
    	//colorText[] = {1,1,1,1};
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class btysetup_direction_label: ITC_ARTY_RscText {
    	idc = 4311;

    	text = "Direction";
    	x = 0.603125 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0360937 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class btysetup_direction_text: ITC_ARTY_RscTextBox {
    	idc = 4312;

    	text = "";
    	x = 0.644375 * safezoneW + safezoneX;
    	y = 0.313 * safezoneH + safezoneY;
    	w = 0.0309375 * safezoneW;
    	h = 0.022 * safezoneH;
    	//colorText[] = {1,1,1,1};
    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class btysetup_addnew_button: ITC_ARTY_RscButton {
    	idc = 4313;

    	text = "ADD/UPDATE";
    	x = 0.5825 * safezoneW + safezoneX;
    	y = 0.533 * safezoneH + safezoneY;
    	w = 0.04125 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
      action = "[""addGun""] call itc_land_tablet_fnc_pageInteract";
    };
    class btysetup_remove_button: ITC_ARTY_RscButton {
    	idc = 4314;

    	text = "REMOVE";
    	x = 0.634062 * safezoneW + safezoneX;
    	y = 0.533 * safezoneH + safezoneY;
    	w = 0.04125 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
      action = "[""removeGun""] call itc_land_tablet_fnc_pageInteract";
    };
    class btysetup_gun_listbox: ITC_ARTY_RscListBox {
    	idc = 4315;

    	x = 0.365937 * safezoneW + safezoneX;
    	y = 0.346 * safezoneH + safezoneY;
    	w = 0.309375 * safezoneW;
    	h = 0.176 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
    };
    class btysetup_save_button: ITC_ARTY_RscButton {
    	idc = 4316;

    	text = "Save";
    	x = 0.659844 * safezoneW + safezoneX;
    	y = 0.685 * safezoneH + safezoneY;
    	w = 0.061875 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};
      action = "[""save""] call itc_land_tablet_fnc_pageInteract";

    };
    /*
    class btysetup_discard_button: ITC_ARTY_RscButton {
    	idc = 4317;

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
