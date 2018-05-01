class page_bcs_firemission_new:itc_land_workspace
{
  idc = 13504;
  class Controls {
    class itc_land_target_firemission_name_input: ITC_ARTY_RscTextBox
    {
        idc = 6400;
        text = "FM0001"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.247 * safezoneH + safezoneY;
        w = 0.0773437 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_targettype_input: ITC_ARTY_RscComboBox
    {
        idc = 6100;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
        onLBSelChanged = "[""targetType""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_firemission_next: ITC_ARTY_RscButton
    {
        idc = 6600;
        text = "Next"; //--- ToDo: Localize;
        x = 0.561875 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""save""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_target_knownpoint_input: ITC_ARTY_RscComboBox
    {
        idc = 6101;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.357 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field1_text: ITC_ARTY_RscText
    {
        idc = 6020;
        text = "Field1"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field1_input: ITC_ARTY_RscTextBox
    {
        idc = 6401;
        text = "12341234"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field2_input: ITC_ARTY_RscTextBox
    {
        idc = 6402;
        text = "12"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_knownpoint_load: ITC_ARTY_RscButton
    {
        idc = 6601;
        text = "Load"; //--- ToDo: Localize;
        x = 0.510312 * safezoneW + safezoneX;
        y = 0.357 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""load""] call itc_land_tablet_fnc_pageInteract";
    };
    class itc_land_target_field3_input: ITC_ARTY_RscTextBox
    {
        idc = 6403;
        text = "12"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field4_input: ITC_ARTY_RscTextBox
    {
        idc = 6404;
        text = "12"; //--- ToDo: Localize;
        x = 0.427812 * safezoneW + safezoneX;
        y = 0.445 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field2_text: ITC_ARTY_RscText
    {
        idc = 6021;
        text = "Field2"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field3_text: ITC_ARTY_RscText
    {
        idc = 6022;
        text = "Field3"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_field4_text: ITC_ARTY_RscText
    {
        idc = 6023;
        text = "Field4"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.445 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_knownpoint_text: ITC_ARTY_RscText
    {
        idc = 6019;
        text = "Known Point"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.357 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_target_targetType_text: ITC_ARTY_RscText
    {
        idc = 6018;
        text = "Target Type"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_firemission_name_text: ITC_ARTY_RscText
    {
        idc = 6017;
        text = "Firemission Name"; //--- ToDo: Localize;
        x = 0.350468 * safezoneW + safezoneX;
        y = 0.247 * safezoneH + safezoneY;
        w = 0.0670312 * safezoneW;
        h = 0.022 * safezoneH;
    };
  };
};
