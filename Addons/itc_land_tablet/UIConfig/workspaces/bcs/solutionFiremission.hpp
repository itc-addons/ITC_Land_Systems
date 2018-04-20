class page_bcs_firemission_engage:itc_land_workspace
{
  idc = 13506;
  class Controls {
    class itc_land_solution_list: RscListbox
    {
        idc = 8500;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.269 * safezoneH + safezoneY;
        w = 0.345469 * safezoneW;
        h = 0.176 * safezoneH;
    };
    class itc_land_solution_ordinate_label: RscText
    {
        idc = 8004;
        text = "MAXIMUM ORDINATE"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.467 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_solution_angle_label: RscText
    {
        idc = 8006;
        text = "IMPACT ANGLE"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.489 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_solution_distance_label: RscText
    {
        idc = 8017;
        text = "TARGET DISTANCE"; //--- ToDo: Localize;
        x = 0.365937 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_solution_shot: RscButton
    {
        idc = 8600;
        text = "SHOT"; //--- ToDo: Localize;
        x = 0.386562 * safezoneW + safezoneX;
        y = 0.555 * safezoneH + safezoneY;
        w = 0.0567187 * safezoneW;
        h = 0.044 * safezoneH;
    };
    class itc_land_solution_adj: RscButton
    {
        idc = 8601;
        text = "ADJUST/FFE"; //--- ToDo: Localize;
        x = 0.484531 * safezoneW + safezoneX;
        y = 0.555 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.044 * safezoneH;
    };
    class itc_land_solution_eom: RscButton
    {
        idc = 8602;
        text = "END MISSION"; //--- ToDo: Localize;
        x = 0.5825 * safezoneW + safezoneX;
        y = 0.555 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.044 * safezoneH;
    };
    class itc_land_solution_datalink: RscButton
    {
        idc = 8603;
        text = "SEND ORDERS"; //--- ToDo: Localize;
        x = 0.628906 * safezoneW + safezoneX;
        y = 0.467 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.044 * safezoneH;
    };
    class itc_land_solution_ordinate_text: RscText
    {
        idc = 8018;
        text = "1234m AGL"; //--- ToDo: Localize;
        x = 0.448438 * safezoneW + safezoneX;
        y = 0.467 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_solution_angle_text: RscText
    {
        idc = 8019;
        text = "360 noscope"; //--- ToDo: Localize;
        x = 0.448438 * safezoneW + safezoneX;
        y = 0.489 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_solution_distance_text: RscText
    {
        idc = 8020;
        text = "1337"; //--- ToDo: Localize;
        x = 0.448438 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.022 * safezoneH;
    };
  };
};
