class ITC_Land_RscOptics_strider_commander: RscOptics_strider_commander {
  onLoad = "uiNamespace setVariable ['ITC_Land_RscOptics_strider_commander', _this select 0]; ['itc_land_onLoad_RscOptics_strider_commander', []] call CBA_fnc_localEvent;";
  idd = 512;
  controls[] = {"ITC_Land_Strider_IGUI_elements_group"};
  class ITC_Land_Strider_IGUI_elements_group: CA_IGUI_elements_group {
    idc = 75001;
    x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
    y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
    w = "53.5 * 		(0.01875 * SafezoneH)";
    h = "40 * 		(0.025 * SafezoneH)";
    class controls {
      class CA_OpticsZoom: RscText {
        idc = 180;
        style = 1;
        colorText[] = {0.706,0.0745,0.0196,1};
        sizeEx = "0.038*SafezoneH";
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "4.5";
        x = "43.85 * 		(0.01875 * SafezoneH)";
        y = "19.55 * 		(0.025 * SafezoneH)";
        w = "4.5 * 		(0.01875 * SafezoneH)";
        h = "1.1 * 		(0.025 * SafezoneH)";
      };
      class CA_Distance: RscText {
        idc = 198;
        style = 2;
        sizeEx = "0.038*SafezoneH";
        colorText[] = {0.706,0.0745,0.0196,1};
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "2456";
        x = "24.5 * 		(0.01875 * SafezoneH)";
        y = "3 * 		(0.025 * SafezoneH)";
        w = "4 * 		(0.01875 * SafezoneH)";
        h = "1.5 * 		(0.025 * SafezoneH)";
      };
      class CA_Elev: RscText {
        idc = 175;
        style = 2;
        sizeEx = "0.038*SafezoneH";
        colorText[] = {0.706,0.0745,0.0196,1};
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "80.5";
        x = "32.6 * 		(0.01875 * SafezoneH)";
        y = "3 * 		(0.025 * SafezoneH)";
        w = "5 * 		(0.01875 * SafezoneH)";
        h = "1.5 * 		(0.025 * SafezoneH)";
      };
      class CA_VisionMode: RscText {
        idc = 179;
        style = 0;
        sizeEx = "0.038*SafezoneH";
        colorText[] = {0.706,0.0745,0.0196,1};
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "VIS";
        x = "6.5 * 		(0.01875 * SafezoneH)";
        y = "19.55 * 		(0.025 * SafezoneH)";
        w = "4 * 		(0.01875 * SafezoneH)";
        h = "1.1 * 		(0.025 * SafezoneH)";
      };
      class CA_Laser: RscText {
        idc = 158;
        style = "0x30 + 0x800";
        sizeEx = "0.038*SafezoneH";
        colorText[] = {0.706,0.0745,0.0196,1};
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
        x = "29.2 * 		(0.01875 * SafezoneH)";
        y = "3 * 		(0.025 * SafezoneH)";
        w = "3.5 * 		(0.01875 * SafezoneH)";
        h = "1.5 * 		(0.025 * SafezoneH)";
      };
      class ITC_Land_OGrid: RscText {
        idc = 75017;
        style = 2;
        sizeEx = "0.038*SafezoneH";
        //colorText[] = {0.706,0.0745,0.0196,1};
        colorText[] = {0,0,0,1};
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "OWN";
        x = "10.5 * 		(0.01875 * SafezoneH)";
        y = "34.5 * 		(0.025 * SafezoneH)";
        w = "14 * 		(0.01875 * SafezoneH)";
        h = "1.1 * 		(0.025 * SafezoneH)";
      };
      class ITC_Land_OGrid_text: RscText {
        idc = 75018;
        style = 2;
        sizeEx = "0.038*SafezoneH";
        colorText[] = {0.706,0.0745,0.0196,1};
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "0123401234";
        x = "10.5 * 		(0.01875 * SafezoneH)";
        y = "35.6 * 		(0.025 * SafezoneH)";
        w = "14 * 		(0.01875 * SafezoneH)";
        h = "1.1 * 		(0.025 * SafezoneH)";
      };
      class ITC_Land_TGrid: ITC_Land_OGrid {
        idc = 75016;
        text = "TGT";
        x = "28.5 * 		(0.01875 * SafezoneH)";
      };
      class ITC_Land_TGrid_text: ITC_Land_OGrid_text {
        idc = 75015;
        x = "28.5 * 		(0.01875 * SafezoneH)";
      };
      class ITC_Land_Heading_text: RscText {
        idc = 75013;
        style = 2;
        sizeEx = "0.038*SafezoneH";
        colorText[] = {0.706,0.0745,0.0196,1};
        shadow = 0;
        font = "EtelkaMonospacePro";
        text = "0360 / 6400";
        x = "13.5 * 		(0.01875 * SafezoneH)";
        y = "3 * 		(0.025 * SafezoneH)";
        w = "8 * 		(0.01875 * SafezoneH)";
        h = "1.6 * 		(0.025 * SafezoneH)";
      };
      class ITC_Land_NArr_txt: RscPicture {
        idc = 75019;
        text = "\itc_land_veh_sights\ui\data\n_r_txt.paa";
        x = 0.659844 * safezoneW;
        y = 0.159 * safezoneH;
        w = 0.075;
        h = 0.1;
      };
      class ITC_Land_NArr_img: RscPicture {
        idc = 75020;
        text = "\itc_land_veh_sights\ui\data\n_r_arr.paa";
        x = 0.659844 * safezoneW;
        y = 0.159 * safezoneH;
        w = 0.075;
        h = 0.1;
      };
    };
  };

};
