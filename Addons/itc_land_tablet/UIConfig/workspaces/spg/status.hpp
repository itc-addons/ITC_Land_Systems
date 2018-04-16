class page_spg_status:itc_land_workspace
{
  idc = 13402;
  class Controls {
    class status_dam_title: ITC_ARTY_RscText
    {
        idc = 2010;
        text = "Systems"; //--- ToDo: Localize;
        x = 0.355625 * safezoneW + safezoneX;
        y = 0.236 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.033 * safezoneH;
        sizeEx = 1.5 * GUI_GRID_H;
    };
    class status_dam_list: ITC_ARTY_RscStructuredText
    {
        idc = 2100;
        x = 0.355625 * safezoneW + safezoneX;
        y = 0.269 * safezoneH + safezoneY;
        w = 0.170156 * safezoneW;
        h = 0.374 * safezoneH;
    };
    class status_info_title: ITC_ARTY_RscText
    {
        idc = 2011;
        text = "Information"; //--- ToDo: Localize;
        x = 0.536094 * safezoneW + safezoneX;
        y = 0.236 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.033 * safezoneH;
        sizeEx = 1.5 * GUI_GRID_H;
    };
    class status_info_fuel: ITC_ARTY_RscText
    {
        idc = 2012;
        text = "Fuel level"; //--- ToDo: Localize;
        x = 0.536094 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class status_info_fuel_disp: ITC_ARTY_RscText
    {
        idc = 2013;
        text = "98%"; //--- ToDo: Localize;
        x = 0.592812 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.022 * safezoneH;
    };
  };
};
