class page_bcs_settings:itc_land_workspace
{
  idc = 13501;
  class Controls {
    class bcs_settings_alerttosplash_label: ITC_LAND_RscText
    {
    	idc = 3201;
    	text = "Alert To Splash: ";
    	x = (0.407187 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.313 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.061875 * safezoneW;
    	h = 0.022 * safezoneH;

    };
    class bcs_settings_voicewarning_label: ITC_LAND_RscText
    {
    	idc = 3202;
    	text = "Voice Warning: ";
    	x = (0.407187 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.346 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.0567187 * safezoneW;
    	h = 0.022 * safezoneH;

    };
    class bcs_settings_firemission_code_label: ITC_LAND_RscText
    {
    	idc = 3203;
    	text = "Firemission Code: ";
    	x = (0.407187 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.379 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.0670312 * safezoneW;
    	h = 0.022 * safezoneH;

    };
    class bcs_settings_firemission_start_label: ITC_LAND_RscText
    {
    	idc = 3204;
    	text = "Firemission Start: ";
    	x = (0.407187 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.412 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.0670312 * safezoneW;
    	h = 0.022 * safezoneH;

    };
    class bcs_settings_alerttosplash_text: ITC_LAND_RscEdit
    {
    	idc = 3205;
    	text = "10";
    	x = (0.479375 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.313 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.022 * safezoneH;

      key = "splashTime";
      setMethod = "ctrlSetText";

    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class bcs_settings_firemission_code_text: ITC_LAND_RscEdit
    {
    	idc = 3206;
    	text = "FM";
    	x = (0.479375 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.379 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.022 * safezoneH;

    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class bcs_settings_firemission_start_text: ITC_LAND_RscEdit
    {
    	idc = 3207;
    	text = "0001";
    	x = (0.479375 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.412 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.022 * safezoneH;

    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };
    class bcs_settings_voicewarning_combo: ITC_LAND_RscComboBox
    {
    	idc = 3208;
    	text = "Off";
    	x = (0.479375 + POSXADJUST) * safezoneW + safezoneX;
    	y = (0.346 + POSYADJUST) * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.022 * safezoneH;

    	colorBackground[] = {0,0,0,1};
    	colorActive[] = {0,0,0,1};
    };

    class bcs_settings_save_button: ITC_LAND_RscButton {
    	idc = 3209;

    	text = "Save";
    	x = 0.659844 * safezoneW + safezoneX;
    	y = 0.685 * safezoneH + safezoneY;
    	w = 0.061875 * safezoneW;
    	h = 0.022 * safezoneH;
    	colorBackground[] = {0,0,0,0.9};
    	colorActive[] = {0,0,0,0.9};

      action = "[""save""] call itc_land_tablet_fnc_pageInteract";
    };
  };
};
