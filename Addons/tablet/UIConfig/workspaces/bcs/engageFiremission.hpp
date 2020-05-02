class page_bcs_firemission_engage:itc_land_workspace
{
  idc = 13505;
  class Controls {
    class itc_land_engage_ammoType_text: ITC_LAND_RscText
    {
        idc = 7018;
        text = "Ammo Type"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_engage_ammoType_input: ITC_LAND_RscComboBox
    {
        idc = 7100;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
        onLBSelChanged = "[""ammoType""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_engagement_sheaf_text: ITC_LAND_RscText
    {
        idc = 7019;
        text = "Sheaf Type"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.357 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_engagement_sheaf_input: ITC_LAND_RscComboBox
    {
        idc = 7101;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.357 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
        onLBSelChanged = "[""sheafType""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_engagement_quick_text: ITC_LAND_RscText
    {
        idc = 7020;
        text = "Quick Sheaf"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_engagement_quick_input: ITC_LAND_RscComboBox
    {
        idc = 7401;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_engagement_direction_text: ITC_LAND_RscText
    {
        idc = 7021;
        text = "Direction"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_engagement_direction_input: ITC_LAND_RscEdit
    {
        idc = 7402;
        text = "0"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_engagement_length_text: ITC_LAND_RscText
    {
        idc = 7022;
        text = "Length"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_engagement_length_input: ITC_LAND_RscEdit
    {
        idc = 7403;
        text = "0"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_firemission_back: ITC_LAND_RscButton
    {
        idc = 6601;
        text = "Back"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""back""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_firemission_next: ITC_LAND_RscButton
    {
        idc = 6600;
        text = "Next"; //--- ToDo: Localize;
        x = 0.561875 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""save""] call itc_land_tablet_fnc_pageInteract";
    };
  };
};
