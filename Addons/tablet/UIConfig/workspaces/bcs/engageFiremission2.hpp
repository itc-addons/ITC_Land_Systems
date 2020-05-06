class page_bcs_firemission_engage:itc_land_workspace
{
  idc = 13505;
  class Controls {
    class RscText_1004: ITC_LAND_RscText
    {
        idc = 7004;
        x = -0.251263;
        y = -0.242424;
        w = 0.1;
        h = 0.1;
    };
    class RscText_1006: ITC_LAND_RscText
    {
        idc = 7006;
        text = "ADJ"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscListbox_1500: ITC_LAND_RscListBox
    {
        idc = 7500;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.176 * safezoneH;
    };
    class RscText_1013: ITC_LAND_RscText
    {
        idc = 7013;
        text = "GNS"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscButton_1600: ITC_LAND_RscButton
    {
        idc = 7600;
        text = "ALL ON"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.599 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7500"", -1,""ON""] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1601: ITC_LAND_RscButton
    {
        idc = 7601;
        text = "ALL OFF"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.621 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7500"", -1,""OFF""] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1602: ITC_LAND_RscButton
    {
        idc = 7602;
        text = "SEL TGL"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.643 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7500"", lbCurSel 7500,""TGL""] call itc_land_tablet_fnc_pageInteract";
    };
    class RscListbox_1501: ITC_LAND_RscListBox
    {
        idc = 7501;
        x = 0.412344 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.176 * safezoneH;
    };
    class RscText_1014: ITC_LAND_RscText
    {
        idc = 7014;
        text = "SHELL"; //--- ToDo: Localize;
        x = 0.412344 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscEdit_1400: ITC_LAND_RscEdit
    {
        idc = 7400;
        text = "HE"; //--- ToDo: Localize;
        x = 0.412344 * safezoneW + safezoneX;
        y = 0.599 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscButton_1603: ITC_LAND_RscButton
    {
        idc = 7603;
        text = "ALL SET"; //--- ToDo: Localize;
        x = 0.412344 * safezoneW + safezoneX;
        y = 0.621 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7501"", -1, ctrlText 7400] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1604: ITC_LAND_RscButton
    {
        idc = 7604;
        text = "SEL SET"; //--- ToDo: Localize;
        x = 0.412344 * safezoneW + safezoneX;
        y = 0.643 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7501"", lbCurSel 7501, ctrlText 7400] call itc_land_tablet_fnc_pageInteract";
    };
    class RscText_1015: ITC_LAND_RscText
    {
        idc = 7015;
        text = "FFE"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.379 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscText_1016: ITC_LAND_RscText
    {
        idc = 7016;
        text = "GNS"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0464063 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscListbox_1502: ITC_LAND_RscListBox
    {
        idc = 7502;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.176 * safezoneH;
    };
    class RscButton_1605: ITC_LAND_RscButton
    {
        idc = 7605;
        text = "ALL ON"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.599 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7502"", -1, ""ON""] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1606: ITC_LAND_RscButton
    {
        idc = 7606;
        text = "ALL OFF"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.621 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7502"", -1, ""OFF""] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1607: ITC_LAND_RscButton
    {
        idc = 7607;
        text = "SEL TGL"; //--- ToDo: Localize;
        x = 0.45875 * safezoneW + safezoneX;
        y = 0.643 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7502"", lbCurSel 7502, ""TGL""] call itc_land_tablet_fnc_pageInteract";
    };
    class RscText_1017: ITC_LAND_RscText
    {
        idc = 7017;
        text = "SHELL"; //--- ToDo: Localize;
        x = 0.494844 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscText_1018: ITC_LAND_RscText
    {
        idc = 7018;
        text = "COUNT"; //--- ToDo: Localize;
        x = 0.530937 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscListbox_1503: ITC_LAND_RscListBox
    {
        idc = 7503;
        x = 0.494844 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.176 * safezoneH;
    };
    class RscListbox_1504: ITC_LAND_RscListBox
    {
        idc = 7504;
        x = 0.530937 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.176 * safezoneH;
    };
    class RscEdit_1401: ITC_LAND_RscEdit
    {
        idc = 7401;
        text = "HE"; //--- ToDo: Localize;
        x = 0.494844 * safezoneW + safezoneX;
        y = 0.599 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscButton_1608: ITC_LAND_RscButton
    {
        idc = 7608;
        text = "ALL SET"; //--- ToDo: Localize;
        x = 0.494844 * safezoneW + safezoneX;
        y = 0.621 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7503"", -1, ctrlText 7401] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1609: ITC_LAND_RscButton
    {
        idc = 7609;
        text = "SEL SET"; //--- ToDo: Localize;
        x = 0.494844 * safezoneW + safezoneX;
        y = 0.643 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7503"", lbCurSel 7503, ctrlText 7401] call itc_land_tablet_fnc_pageInteract";
    };
    class RscEdit_1402: ITC_LAND_RscEdit
    {
        idc = 7402;
        text = "3"; //--- ToDo: Localize;
        x = 0.530937 * safezoneW + safezoneX;
        y = 0.599 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscButton_1610: ITC_LAND_RscButton
    {
        idc = 7610;
        text = "ALL SET"; //--- ToDo: Localize;
        x = 0.530937 * safezoneW + safezoneX;
        y = 0.621 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7504"", -1, ctrlText 7402] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1611: ITC_LAND_RscButton
    {
        idc = 7611;
        text = "SEL SET"; //--- ToDo: Localize;
        x = 0.530937 * safezoneW + safezoneX;
        y = 0.643 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7504"", lbCurSel 7504, ctrlText 7402] call itc_land_tablet_fnc_pageInteract";
    };
    class RscListbox_1505: ITC_LAND_RscListBox
    {
        idc = 7505;
        x = 0.567031 * safezoneW + safezoneX;
        y = 0.423 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.176 * safezoneH;
    };
    class RscText_1019: ITC_LAND_RscText
    {
        idc = 7019;
        text = "FUZE"; //--- ToDo: Localize;
        x = 0.567031 * safezoneW + safezoneX;
        y = 0.401 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscEdit_1403: ITC_LAND_RscEdit
    {
        idc = 7403;
        text = "VT"; //--- ToDo: Localize;
        x = 0.567031 * safezoneW + safezoneX;
        y = 0.599 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscButton_1612: ITC_LAND_RscButton
    {
        idc = 7612;
        text = "ALL SET"; //--- ToDo: Localize;
        x = 0.567031 * safezoneW + safezoneX;
        y = 0.621 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7505"", -1, ctrlText 7403] call itc_land_tablet_fnc_pageInteract";
    };
    class RscButton_1613: ITC_LAND_RscButton
    {
        idc = 7613;
        text = "SEL SET"; //--- ToDo: Localize;
        x = 0.567031 * safezoneW + safezoneX;
        y = 0.643 * safezoneH + safezoneY;
        w = 0.0360937 * safezoneW;
        h = 0.022 * safezoneH;
        action = "[""list"",""7505"", lbCurSel 7505, ctrlText 7403] call itc_land_tablet_fnc_pageInteract";
    };
    class RscText_1020: ITC_LAND_RscText
    {
        idc = 7020;
        text = "MOC"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.247 * safezoneH + safezoneY;
        w = 0.0309375 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscCombo_2100: ITC_LAND_RscComboBox
    {
        idc = 2100;
        x = 0.407187 * safezoneW + safezoneX;
        y = 0.247 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscText_1021: ITC_LAND_RscText
    {
        idc = 7021;
        text = "SHEAF"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.269 * safezoneH + safezoneY;
        w = 0.0309375 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscCombo_2101: ITC_LAND_RscComboBox
    {
        idc = 2101;
        x = 0.407187 * safezoneW + safezoneX;
        y = 0.269 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscText_1022: ITC_LAND_RscText
    {
        idc = 7022;
        text = "QUICK"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.0309375 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscText_1023: ITC_LAND_RscText
    {
        idc = 7023;
        text = "DIR"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.313 * safezoneH + safezoneY;
        w = 0.0309375 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscText_1024: ITC_LAND_RscText
    {
        idc = 7024;
        text = "LENGTH"; //--- ToDo: Localize;
        x = 0.37625 * safezoneW + safezoneX;
        y = 0.335 * safezoneH + safezoneY;
        w = 0.0309375 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscCombo_2102: ITC_LAND_RscComboBox
    {
        idc = 2102;
        x = 0.407187 * safezoneW + safezoneX;
        y = 0.291 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscEdit_1404: ITC_LAND_RscEdit
    {
        idc = 7404;
        text = "0"; //--- ToDo: Localize;
        x = 0.407187 * safezoneW + safezoneX;
        y = 0.313 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class RscEdit_1405: ITC_LAND_RscEdit
    {
        idc = 7405;
        text = "0"; //--- ToDo: Localize;
        x = 0.407187 * safezoneW + safezoneX;
        y = 0.335 * safezoneH + safezoneY;
        w = 0.061875 * safezoneW;
        h = 0.022 * safezoneH;
    };
    class itc_land_firemission_next: ITC_LAND_RscButton
    {
        idc = 7650;
        text = "Next"; //--- ToDo: Localize;
        x = 0.561875 * safezoneW + safezoneX;
        y = 0.511 * safezoneH + safezoneY;
        w = 0.0515625 * safezoneW;
        h = 0.044 * safezoneH;
        action = "[""save""] call itc_land_tablet_fnc_pageInteract";
    };
  };
};
