class page_spg_controls:itc_land_workspace
{
  idc = 13401;
  class Controls {
    class fcs_target_pos: ITC_LAND_RscText
    {
      idc = 1010;
        text = "Target Position"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.279 * safezoneH + safezoneY;
        w = 0.103125 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_target_elev: ITC_LAND_RscText
    {
        idc = 1011;
        text = "Target Elevation"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.312 * safezoneH + safezoneY;
        w = 0.103125 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_calc: ITC_LAND_RscButton
    {
        idc = 1600;
        text = "CALC SLN"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.345 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""calc""] call itc_land_tablet_fnc_pageInteract";
    };
    class fcs_results: ITC_LAND_RscStructuredText
    {
        idc = 1100;
        text = "CHARGE: single3<br/>DEFLECTION: 4515<br/>QUADRANT: 404<br/>TOF: 31<br/>MAXIMUM ORDINATE: 21043m AGL<br/>IMPACT ANGLE: -83<br/>TARGET DISTANCE: 10982m<br/>"; //--- ToDo: Localize;
        x = 0.551562 * safezoneW + safezoneX;
        y = 0.235 * safezoneH + safezoneY;
        w = 0.139219 * safezoneW;
        h = 0.154 * safezoneH;
        colorBackground[] = {0,0,0,0.5};
    };
    class fcs_edit_target_pos: ITC_LAND_RscEdit
    {
        idc = 1400;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.279 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_edit_target_el: ITC_LAND_RscEdit
    {
        idc = 1401;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.312 * safezoneH + safezoneY;
        w = 0.0825 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_target_title: ITC_LAND_RscText
    {
        idc = 1012;
        text = "Local Targeting"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.235 * safezoneH + safezoneY;
        w = 0.0876563 * safezoneW;
        h = 0.033 * safezoneH;
        sizeEx = 1.25 * GUI_GRID_H;
    };
    class fcs_gun_title: ITC_LAND_RscText
    {
        idc = 1013;
        text = "Datalink Targeting"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.411 * safezoneH + safezoneY;
        w = 0.0876563 * safezoneW;
        h = 0.033 * safezoneH;
        sizeEx = 1.25 * GUI_GRID_H;
    };
    class fcs_datalink_id: ITC_LAND_RscText
    {
        idc = 1014;
        text = "Datalink ID"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.455 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_datalink_id_edit: ITC_LAND_RscEdit
    {
        idc = 1016;
        text = ""; //--- ToDo: Localize;
        x = 0.443281 * safezoneW + safezoneX;
        y = 0.455 * safezoneH + safezoneY;
        w = 0.0257812 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_datalink_id_btn: ITC_LAND_RscButton
    {
        idc = 1603;
        text = "connect"; //--- ToDo: Localize;
        x = 0.4807812 * safezoneW + safezoneX;
        y = 0.455 * safezoneH + safezoneY;
        w = 0.0457812 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_fdc_datalink_id: ITC_LAND_RscText
    {
        idc = 1015;
        text = "FDC Datalink ID"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.488 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_fdc_datalink_id_edit: ITC_LAND_RscEdit
    {
        idc = 1017;
        text = ""; //--- ToDo: Localize;
        x = 0.443281 * safezoneW + safezoneX;
        y = 0.488 * safezoneH + safezoneY;
        w = 0.0257812 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_fdc_datalink_id_btn: ITC_LAND_RscButton
    {
        idc = 1604;
        text = "connect"; //--- ToDo: Localize;
        x = 0.4807812 * safezoneW + safezoneX;
        y = 0.488 * safezoneH + safezoneY;
        w = 0.0457812 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_solution_list: ITC_LAND_RscListbox
    {
        idc = 1500;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.52 * safezoneH + safezoneY;
        w = 0.345469 * safezoneW;
        h = 0.022 * safezoneH;
    };
    /*
    class fcs_gun_df: ITC_LAND_RscText
    {
        idc = 1015;
        text = "Gun Deflection"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.478 * safezoneH + safezoneY;
        w = 0.103125 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_el: ITC_LAND_RscText
    {
        idc = 1016;
        text = "Gun Elevation"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.103125 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_df_disp: ITC_LAND_RscText
    {
        idc = 1018;
        text = "1234"; //--- ToDo: Localize;
        x = 0.443281 * safezoneW + safezoneX;
        y = 0.478 * safezoneH + safezoneY;
        w = 0.0257812 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_el_disp: ITC_LAND_RscText
    {
        idc = 1019;
        text = "1234"; //--- ToDo: Localize;
        x = 0.443281 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0257812 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_sh: ITC_LAND_RscText
    {
        idc = 1020;
        text = "Shell"; //--- ToDo: Localize;
        x = 0.5 * safezoneW + safezoneX;
        y = 0.445 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_sh_disp: ITC_LAND_RscText
    {
        idc = 1021;
        text = "HE"; //--- ToDo: Localize;
        x = 0.546406 * safezoneW + safezoneX;
        y = 0.445 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_stat: ITC_LAND_RscText
    {
        idc = 1022;
        text = "Status"; //--- ToDo: Localize;
        x = 0.5 * safezoneW + safezoneX;
        y = 0.478 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_stat_disp: ITC_LAND_RscText
    {
        idc = 1023;
        text = ""; //--- ToDo: Localize;
        x = 0.546406 * safezoneW + safezoneX;
        y = 0.478 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_rem: ITC_LAND_RscText
    {
        idc = 1024;
        text = "Remaining"; //--- ToDo: Localize;
        x = 0.5 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0721875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class fcs_gun_rem_disp: ITC_LAND_RscText
    {
        idc = 1025;
        text = "14"; //--- ToDo: Localize;
        x = 0.546406 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    */
    class fcs_next: ITC_LAND_RscButton
    {
        idc = 1601;
        text = "NXT SLN"; //--- ToDo: Localize;
        x = 0.494844 * safezoneW + safezoneX;
        y = 0.345 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""next""] call itc_land_tablet_fnc_pageInteract";
    };
    class fcs_prev: ITC_LAND_RscButton
    {
        idc = 1602;
        text = "PRV SLN"; //--- ToDo: Localize;
        x = 0.438125 * safezoneW + safezoneX;
        y = 0.345 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""prev""] call itc_land_tablet_fnc_pageInteract";
    };
    class push_local: ITC_LAND_RscButton
    {
        idc = 1605;
        text = "PUSH LOCAL SLN"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.554 * safezoneH + safezoneY;
        w = 0.0815625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""next""] call itc_land_tablet_fnc_pageInteract";
    };
    class push_datalink: ITC_LAND_RscButton
    {
        idc = 1606;
        text = "PUSH DATALINK SLN"; //--- ToDo: Localize;
        x = 0.494844 * safezoneW + safezoneX;
        y = 0.554 * safezoneH + safezoneY;
        w = 0.0815625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""prev""] call itc_land_tablet_fnc_pageInteract";
    };
  };
};
