class itc_land_rover_tablet {
  idd = 20001;
  movingEnable = true;
  onLoad="_this call itc_land_rover_fnc_ui_init";
  onDestroy="call itc_land_rover_fnc_killFeed";
  class Controls {
    class ITC_Land_UAVi_IGUI_elements_group: RscControlsGroup {
      idc = 75001;
      x = "safeZoneX";
      y = "safeZoneY";
      w = "safeZoneW";
      h = "safezoneH";
      class controls {
        #define COL_1 0.22
        #define COL_1_VAL (COL_1 + 0.07)
        #define COL_2 0.42
        #define COL_2_VAL (COL_2 + 0.09)
        #define ROW_1 0.25
        #define ROW_2 0.75
        #define ROW_H 0.030
        class RangeText: RscText {
          style = 0;
          sizeEx = "0.02*SafezoneH";
          shadow = 0;
          font = "EtelkaMonospacePro";
          idc = 1000;
          text = "RANGE:";
          x = COL_2 * safeZoneW;
          y = ROW_1 * safeZoneH + (ROW_H*2);
        	w = 0.221719 * safezoneW;
        	h = 0.022 * safezoneH;
        };
        class CA_Distance: RangeText {
          idc = 19438;
          text = "2456";
          x = COL_2 * safeZoneW + 0.1;
          y = ROW_1 * safeZoneH + (ROW_H*2);
        };
        /*
        class ModeText: RangeText {
          idc = 1002;
          text = "MODE:";
          x = 0.52 * safeZoneW;
          y = 0.35 * safeZoneH;
        };
        class CA_VisionMode: RangeText {
          idc = 179;
          style = 0;
          text = "VIS";
          x = 0.55 * safeZoneW;
          y = 0.65 * safeZoneH;
        };
        */
        class TextSpd: RangeText
        {
          idc = 1009;
          text = "SPD [KM/H]:";
          x = COL_1 * safeZoneW;
          y = ROW_1 * safeZoneH + ROW_H;
        };
        class CA_Speed: RangeText
        {
          idc = 188;
          text = "120";
          x = COL_1_VAL * safeZoneW;
          y = ROW_1 * safeZoneH + ROW_H;
        };
        class TextAlt: RangeText
        {
          idc = 1007;
          text = "ALT [AGL]:";
          x = COL_1 * safeZoneW;
          y = ROW_1 * safeZoneH + (ROW_H*2);
        };
        class CA_Alt: RangeText
        {
          idc = 189;
          text = "3825";
          x = COL_1_VAL * safeZoneW;
          y = ROW_1 * safeZoneH + (ROW_H*2);
        };
        class ITC_Land_UAVi_Alt_text: RangeText
        {
          idc = 75010;
          text = "ALT [ASL]:";
          x = COL_1 * safeZoneW;
          y = ROW_1 * safeZoneH + (ROW_H*3);
        };
        class ITC_Land_UAVi_Alt_value: RangeText
        {
          idc = 75011;
          text = "3825";
          x = COL_1_VAL * safeZoneW;
          y = ROW_1 * safeZoneH + (ROW_H*3);
        };
        class ITC_Land_UAVi_DIR_text: RangeText {
          idc = 75012;
          text = "DIR [DEG/MIL]:";
          x = COL_2 * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*1);
        };
        class ITC_Land_UAVi_DIR_value: RangeText {
          idc = 75013;
          text = "120 / 1200";
          x = COL_2_VAL * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*1);
        };
        class ITC_Land_UAVi_TGT_text: RangeText {
          idc = 75014;
          text = "TGT GRID:";
          x = COL_2 * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*0);
        };
        class ITC_Land_UAVi_TGT_value: RangeText {
          idc = 75015;
          text = "01234 01234";
          x = COL_2_VAL * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*0);
        };
        class ITC_Land_UAVi_TGTalt_text: RangeText {
          idc = 75016;
          text = "TGT ALT [ASL]:";
          x = COL_2 * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*2);
        };
        class ITC_Land_UAVi_TGTalt_value: RangeText {
          idc = 75017;
          text = "3825";
          x = COL_2_VAL * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*2);
        };
        class TextGrid: RangeText {
          idc = 19005;
          text = "OWN GRID:";
          x = COL_1 * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*0);
        };
        class ITC_Land_UAVi_ValueGrid: RangeText {
          idc = 75018;
          text = "01234 01234";
          x = COL_1_VAL * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*0);
        };
        class TextTime: RangeText {
          idc = 1010;
          text = "TIME [UTC]:";
          x = COL_1 * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*1);
        };
        class ValueTime: RangeText {
          idc = 19357;
          text = "20:28:35";
          x = COL_1_VAL * safeZoneW;
          y = ROW_2 * safeZoneH + (ROW_H*1);
        };
        /*
        class TextMag: RangeText {
          idc = 1011;
          text = "CAM MAG:";
          x = 0.35 * safeZoneW;
          y = 0.35 * safeZoneH;
        };
        class CA_OpticsZoom: RangeText {
          idc = 180;
          text = "28x";
          x = 0.35 * safeZoneW;
          y = 0.35 * safeZoneH;
        };
        */
        class CA_Laser: RscText {
          idc = 158;
          style = "0x30 + 0x800";
          sizeEx = "0.038*SafezoneH";
          //colorText[] = {0.706, 0.0745, 0.0196, 1};
          colorText[] = {1, 1, 1, 1};
          shadow = 0;
          font = "EtelkaMonospacePro";
          //text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
          text = "\itc_land_rover\data\iconLaserOn_w.paa";
          x = 0.55 * safeZoneW;
          y = ROW_1 * safeZoneH;
        };
        class ITC_Land_UAVi_NArr_txt: RscPicture {
          idc = 75019;
          text = "\itc_land_rover\data\n_txt.paa";
          x = 0.65 * safezoneW;
          y = 0.2 * safezoneH;
          w = 0.075;
          h = 0.1;
        };
        class ITC_Land_UAVi_NArr_img: RscPicture {
          idc = 75020;
          text = "\itc_land_rover\data\n_arr.paa";
          x = 0.65 * safezoneW;
          y = 0.2 * safezoneH;
          w = 0.075;
          h = 0.1;
          onLoad = "uiNamespace setVariable [""itc_land_rover_ui_nArrow"",(_this # 0)]";
        };
      };
    };
    class Background_base: IGUIBack
    {
    	idc = 2201;
    	x = -0.000156299 * safezoneW + safezoneX;
    	y = -0.00599999 * safezoneH + safezoneY;
    	w = 0.12375 * safezoneW;
    	h = 1.012 * safezoneH;
      colorBackground[] = {0,0,0,1};
    };
    class IGUIBack_2202: Background_base
    {
    	idc = 2202;
    	x = 0.876406 * safezoneW + safezoneX;
    	y = -0.00599999 * safezoneH + safezoneY;
    	w = 0.12375 * safezoneW;
    	h = 1.012 * safezoneH;
    };
    class IGUIBack_2203: Background_base
    {
    	idc = 2203;
    	x = 0.108125 * safezoneW + safezoneX;
    	y = -0.00599999 * safezoneH + safezoneY;
    	w = 0.778594 * safezoneW;
    	h = 0.075 * safezoneH;
    };
    class IGUIBack_2204: Background_base
    {
    	idc = 2204;
    	x = 0.113281 * safezoneW + safezoneX;
    	y = 0.902 * safezoneH + safezoneY;
    	w = 0.778594 * safezoneW;
    	h = 0.1 * safezoneH;
    };
    class RscPicture_1202: RscPicture
    {
    	idc = 1202;
    	text = "\itc_land_rover\data\crosshair.paa";
    	x = safeZoneX + (safeZoneW / 2) - (safeZoneH / 6);
    	y = safeZoneY + (safeZoneH / 2) - (safeZoneH / 6);
    	w = safeZoneH / 3;
    	h = safeZoneH / 3;
    };
    #define RGBA255(R,G,B,A) {R/255,G/255,B/255,A}
    class IGUIBack_2205: Background_base
    {
    	idc = 2205;
    	x = 0.175156 * safezoneW + safezoneX;
    	y = 0.104 * safezoneH + safezoneY;
    	w = 0.66 * safezoneW;
    	h = 0.80 * safezoneH;
      colorBackground[] = RGBA255(51,58,117,1);
    };
    #define TOP_BAR_Y 0.160
    class Top_Bar: IGUIBack
    {
    	idc = 2200;
    	x = 0.195781 * safezoneW + safezoneX;
    	y = (TOP_BAR_Y - 0.011) * safezoneH + safezoneY;
    	w = 0.634219 * safezoneW;
    	h = 0.043 * safezoneH;
      colorBackground[] = RGBA255(170,170,170,1);
    };
    class Text_base: RscText
    {
    	idc = 1000;
    	text = "Transmitter:"; //--- ToDo: Localize;
    	x = 0.21125 * safezoneW + safezoneX;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = 0.0515625 * safezoneW;
    	h = 0.022 * safezoneH;
      shadow = 0;
      colorText[] = RGBA255(50,50,50,1);
    };
    class RscPicture_1200: RscPicture
    {
    	idc = 1200;
    	text = "\itc_land_rover\data\screen2.paa";
    	x = 0.0978125 * safezoneW + safezoneX;
    	y = -0.1 * safezoneH + safezoneY;
    	w = 0.814687 * safezoneW;
    	h = 1.2 * safezoneH;
    };
    class RscPicture_1201: RscPicture_1200
    {
    	idc = 1201;
    	text = "\itc_land_rover\data\screen-night2.paa";
    	x = 0.0978125 * safezoneW + safezoneX;
    	y = -0.1 * safezoneH + safezoneY;
    	w = 0.814687 * safezoneW;
    	h = 1.2 * safezoneH;
    };
    class RscCombo_2100: RscCombo
    {
    	idc = 2100;
    	x = 0.262812 * safezoneW + safezoneX;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = 0.113437 * safezoneW;
    	h = 0.022 * safezoneH;
      onLBSelChanged="call itc_land_rover_fnc_ui_update";
    };
    /*
    class RscButton_1600: RscButton
    {
    	idc = 1600;
    	text = "-"; //--- ToDo: Localize;
    	x = 0.489687 * safezoneW + safezoneX;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = 0.0103125 * safezoneW;
    	h = 0.022 * safezoneH;
      onMouseButtonClick="[""fovup""] call itc_land_rover_fnc_ui_vismode;";
    };
    class RscButton_1601: RscButton
    {
    	idc = 1601;
    	text = "+"; //--- ToDo: Localize;
    	x = 0.520625 * safezoneW + safezoneX;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = 0.0103125 * safezoneW;
    	h = 0.022 * safezoneH;
      onMouseButtonClick="[""fovdn""] call itc_land_rover_fnc_ui_vismode;";
    };
    */
    class RscText_1006: Text_base
    {
    	idc = 1006;
    	text = "ZOOM"; //--- ToDo: Localize;
    	x = 0.38 * safezoneW + safezoneX;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = 0.025625 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class fovSlider: RscXSliderH {
    	idc = 1600;
    	x = 0.42 * safezoneW + safezoneX;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = 0.12625 * safezoneW;
    	h = 0.022 * safezoneH;
      onSliderPosChanged="[""fov""] call itc_land_rover_fnc_ui_vismode;";
    };
    #define VISMODE_BTN_W (0.028*safeZoneW)
    class RscText_999: RscButton
    {
    	idc = 999;
    	text = "DTV"; //--- ToDo: Localize;
    	x = 0.557 * safezoneW + safezoneX;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = VISMODE_BTN_W;
    	h = 0.022 * safezoneH;
      onMouseButtonClick="[""dtv""] call itc_land_rover_fnc_ui_vismode;";
    };
    class RscText_1001: RscButton
    {
    	idc = 1001;
    	text = "NVG"; //--- ToDo: Localize;
    	x = 0.557 * safezoneW + safezoneX + VISMODE_BTN_W;
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = VISMODE_BTN_W;
    	h = 0.022 * safezoneH;
      onMouseButtonClick="[""nvg""] call itc_land_rover_fnc_ui_vismode;";
    };
    class RscText_1002: RscButton
    {
    	idc = 1002;
    	text = "WHOT"; //--- ToDo: Localize;
    	x = 0.557 * safezoneW + safezoneX + (VISMODE_BTN_W*2);
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = VISMODE_BTN_W;
    	h = 0.022 * safezoneH;
      onMouseButtonClick="[""whot""] call itc_land_rover_fnc_ui_vismode;";
    };
    class RscText_1003: RscButton
    {
    	idc = 1003;
    	text = "BHOT"; //--- ToDo: Localize;
    	x = 0.557 * safezoneW + safezoneX + (VISMODE_BTN_W*3);
    	y = TOP_BAR_Y * safezoneH + safezoneY;
    	w = VISMODE_BTN_W;
    	h = 0.022 * safezoneH;
      onMouseButtonClick="[""bhot""] call itc_land_rover_fnc_ui_vismode;";
    };
    class RscText_1004: Text_base
    {
    	idc = 1004;
    	text = "NO CONNECTION"; //--- ToDo: Localize;
    	x = 0.469062 * safezoneW + safezoneX;
    	y = 0.478 * safezoneH + safezoneY;
    	w = 0.0670312 * safezoneW;
    	h = 0.022 * safezoneH;
      colorText[] = RGBA255(255,255,255,1);
    };
    class RscText_1005: Text_base
    {
    	idc = 1005;
    	text = "Aircraft must have laser designator enabled to broadcast rover."; //--- ToDo: Localize;
    	x = 0.386562 * safezoneW + safezoneX;
    	y = 0.5 * safezoneH + safezoneY;
    	w = 0.221719 * safezoneW;
    	h = 0.022 * safezoneH;
      colorText[] = RGBA255(255,255,255,1);
    };
  };
};
