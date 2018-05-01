class page_bcs_firemission_adjust:itc_land_workspace
{
  idc = 13507;
  class Controls {
    class itc_land_firemission_next: ITC_ARTY_RscButton
    {
        idc = 9600;
        text = "Next"; //--- ToDo: Localize;
        x = 0.561875 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""save""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_firemission_back: ITC_ARTY_RscButton
    {
        idc = 9604;
        text = "Back"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.555 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""back""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_target_field1_text: ITC_ARTY_RscText
    {
        idc = 9020;
        text = "OT"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field1_input: ITC_ARTY_RscTextBox
    {
        idc = 9401;
        text = "0"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field2_input: ITC_ARTY_RscTextBox
    {
        idc = 9402;
        text = "0"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field3_input: ITC_ARTY_RscTextBox
    {
        idc = 9403;
        text = "0"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field4_input: ITC_ARTY_RscTextBox
    {
        idc = 9404;
        text = "0"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.445 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field2_text: ITC_ARTY_RscText
    {
        idc = 9021;
        text = "AD"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field3_text: ITC_ARTY_RscText
    {
        idc = 9022;
        text = "LR"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field4_text: ITC_ARTY_RscText
    {
        idc = 9023;
        text = "UD"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.445 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
  };
};
