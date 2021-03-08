class RscTitles {
  class ITC_Land_SpikeSeeker {
      idd = 86005;
      movingEnable = 1;
      duration = 9999999;
      fadein = 0;
      fadeout = 0;
      onLoad = "uiNamespace setVariable [""itc_land_spike_ui"",(_this select 0)];"; // ((_this select 0) displayCtrl -1) progressSetPosition 0.5

      class controls {
          class Sidebar_Left: RscText {
              idc = 1009;
              x = "0 * 	(safezoneW / 64) + 	(0)";
              y = "0 * 	(safezoneH / 40) + 	(0)";
              w = "12 * 	(safezoneW / 64)";
              h = "(safezoneH)";
              colorBackground[] = {0,0,0,1};
              colorText[] = {"172/255","255/255","153/255",1};
          };
          class Sidebar_Right: RscText {
              idc = 1010;
              x = "52 * 	(safezoneW / 64) + 	(0)";
              y = "0 * 	(safezoneH / 40) + 	(0)";
              w = "12 * 	(safezoneW / 64)";
              h = "(safezoneH)";
              shadow = 0;
              colorBackground[] = {0,0,0,1};
              colorText[] = {"172/255","255/255","153/255",1};
          };

          class VisionMode: Sidebar_Right {
              idc = 1011;
              style = 0;
              x = "14.5 * 	(safezoneW / 64) + 	(0)";
              y = "1 * 	(safezoneH / 40) + 	(0)";
              w = "6 * 	(safezoneW / 64)";
              h = "1.5 * 	(safezoneH / 40)";
              text = "HOT";
              font = "LCD14";
              colorText[] = {1,1,1,1};
              colorBackground[] = {0,0,0,0};
              SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
          };

          class HotBox: RscPicture {
            idc = 1018;
            x = "13.5 * 	(safezoneW / 64) + 	(0)";
            y = "1 * 	(safezoneH / 40) + 	(0)";
            w = "1.12 * 	(safezoneW / 64)";
            h = "1.12 * 	(safezoneH / 40)";
            text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
          };

          class TimerProgress: RscProgress {
            idc = -1;
            x = "14.5 * 	(safezoneW / 64) + 	(0)";
            y = "2.75 * 	(safezoneH / 40) + 	(0)";
            w = "4 * 	(safezoneW / 64)";
            h = "1* 	(safezoneH / 40)";
            colorFrame[] = {2,2,2,1};
          	colorBar[] = {1,1,1,1};
          	texture = "#(argb,8,8,3)color(1,1,1,1)";
          };
          class TimerText: Sidebar_Right {
              idc = 1013;
              style = 0;
              x = "14.5 * 	(safezoneW / 64) + 	(0)";
              y = "4 * 	(safezoneH / 40) + 	(0)";
              w = "6 * 	(safezoneW / 64)";
              h = "1.5 * 	(safezoneH / 40)";
              text = "0234";
              font = "LCD14";
              colorText[] = {1,1,1,1};
              colorBackground[] = {0,0,0,0};
              SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
          };
          //Centre elements
          class ManualText: Sidebar_Right {
              idc = 1016;
              style = 2;
              x = "27 * 	(safezoneW / 64) + 	(0)";
              y = "10 * 	(safezoneH / 40) + 	(0)";
              w = "10 * 	(safezoneW / 64)";
              h = "3 * 	(safezoneH / 40)";
              text = "MANUAL";
              font = "EtelkaMonospacePro";
              fixedWidth = 1;
              colorText[] = {1,1,1,1};
              colorBackground[] = {0,0,0,0};
              SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2.5)";
          };
          /*class SeekerFrame: RscFrame {
            x = "25 * 	(safezoneW / 64) + 	(0)";
            y = "13 * 	(safezoneH / 40) + 	(0)";
            w = "14 * 	(safezoneW / 64)";
            h = "14 * 	(safezoneH / 40)";
          };*/
          class SeekerBox: RscPicture {
            idc = 1020;
            x = "25 * 	(safezoneW / 64) + 	(0)";
            y = "13 * 	(safezoneH / 40) + 	(0)";
            w = "14 * 	(safezoneW / 64)";
            h = "14 * 	(safezoneH / 40)";
            text = "itc_land_spike\data\seekerBox.paa";
          };
          class SeekerT: RscPicture {
            idc = 1021;
            x = "22 * 	(safezoneW / 64) + 	(0)";
            y = "10 * 	(safezoneH / 40) + 	(0)";
            w = "20 * 	(safezoneW / 64)";
            h = "20 * 	(safezoneH / 40)";
            text = "itc_land_spike\data\seekerT.paa";
          };
          class ModeText: Sidebar_Right {
              idc = 1014;
              style = 0;
              x = "14.5 * 	(safezoneW / 64) + 	(0)";
              y = "37.5 * 	(safezoneH / 40) + 	(0)";
              w = "6 * 	(safezoneW / 64)";
              h = "1.5 * 	(safezoneH / 40)";
              text = "00 LOW";
              font = "LCD14";
              colorText[] = {1,1,1,1};
              colorBackground[] = {0,0,0,0};
              SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
          };
          class DateTimeText: Sidebar_Right {
              idc = 1015;
              style = 1;
              x = "39 * 	(safezoneW / 64) + 	(0)";
              y = "37.5 * 	(safezoneH / 40) + 	(0)";
              w = "12 * 	(safezoneW / 64)";
              h = "1.5 * 	(safezoneH / 40)";
              text = "11/01/20 14:50";
              font = "LCD14";
              colorText[] = {1,1,1,1};
              colorBackground[] = {0,0,0,0};
              SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
          };
      };
  };
};
class ITC_Land_SpikeSeeker {
    idd = 86005;
    movingEnable = 1;
    duration = 9999999;
    fadein = 0;
    fadeout = 0;
    hideCursor = 1;
    onLoad = "uiNamespace setVariable [""itc_land_spike_ui"",(_this select 0)];"; // ((_this select 0) displayCtrl -1) progressSetPosition 0.5

    class controls {
        class VisionMode: RscText {
            idc = 1011;
            style = 0;
            x = "14.5 * 	(safezoneW / 64) + 	(safeZoneX)";
            y = "1 * 	(safezoneH / 40) + 	(safeZoneY)";
            w = "6 * 	(safezoneW / 64)";
            h = "1.5 * 	(safezoneH / 40)";
            text = "HOT";
            font = "LCD14";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };

        class HotBox: RscPicture {
          idc = 1018;
          x = "13.5 * 	(safezoneW / 64) + 	(safeZoneX)";
          y = "1 * 	(safezoneH / 40) + 	(safeZoneY)";
          w = "1.12 * 	(safezoneW / 64)";
          h = "1.12 * 	(safezoneH / 40)";
          text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
        };

        class TimerProgress: RscProgress {
          idc = -1;
          x = "14.5 * 	(safezoneW / 64) + 	(safeZoneX)";
          y = "2.75 * 	(safezoneH / 40) + 	(safeZoneY)";
          w = "4 * 	(safezoneW / 64)";
          h = "1* 	(safezoneH / 40)";
          colorFrame[] = {2,2,2,1};
          colorBar[] = {1,1,1,1};
          texture = "#(argb,8,8,3)color(1,1,1,1)";
        };
        class TimerText: VisionMode {
            idc = 1013;
            style = 0;
            x = "14.5 * 	(safezoneW / 64) + 	(safeZoneX)";
            y = "4 * 	(safezoneH / 40) + 	(safeZoneY)";
            w = "6 * 	(safezoneW / 64)";
            h = "1.5 * 	(safezoneH / 40)";
            text = "0234";
            font = "LCD14";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };
        //Centre elements
        class ManualText: VisionMode {
            idc = 1016;
            style = 2;
            x = "27 * 	(safezoneW / 64) + 	(safeZoneX)";
            y = "10 * 	(safezoneH / 40) + 	(safeZoneY)";
            w = "10 * 	(safezoneW / 64)";
            h = "3 * 	(safezoneH / 40)";
            text = "MANUAL";
            font = "EtelkaMonospacePro";
            fixedWidth = 1;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 2.5)";
        };
        /*class SeekerFrame: RscFrame {
          x = "25 * 	(safezoneW / 64) + 	(0)";
          y = "13 * 	(safezoneH / 40) + 	(0)";
          w = "14 * 	(safezoneW / 64)";
          h = "14 * 	(safezoneH / 40)";
        };*/
        class SeekerBox: RscPicture {
          idc = 1020;
          x = "25 * 	(safezoneW / 64) + 	(safeZoneX)";
          y = "13 * 	(safezoneH / 40) + 	(safeZoneY)";
          w = "14 * 	(safezoneW / 64)";
          h = "14 * 	(safezoneH / 40)";
          text = "itc_land_spike\data\seekerBox.paa";
        };
        class SeekerT: RscPicture {
          idc = 1021;
          x = "22 * 	(safezoneW / 64) + 	(safeZoneX)";
          y = "10 * 	(safezoneH / 40) + 	(safeZoneY)";
          w = "20 * 	(safezoneW / 64)";
          h = "20 * 	(safezoneH / 40)";
          text = "itc_land_spike\data\seekerT.paa";
        };
        class SeekerTL: RscPicture {
          idc = 1022;
          x = "22 * 	(safezoneW / 64) + 	(safeZoneX)";
          y = "10 * 	(safezoneH / 40) + 	(safeZoneY)";
          w = "20 * 	(safezoneW / 64)";
          h = "20 * 	(safezoneH / 40)";
          text = "itc_land_spike\data\seekerTL.paa";
        };
        class ModeText: VisionMode {
            idc = 1014;
            style = 0;
            x = "14.5 * 	(safezoneW / 64) + 	(safeZoneX)";
            y = "37.5 * 	(safezoneH / 40) + 	(safeZoneY)";
            w = "6 * 	(safezoneW / 64)";
            h = "1.5 * 	(safezoneH / 40)";
            text = "21 HIGH";
            font = "LCD14";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };
        class DateTimeText: VisionMode {
            idc = 1015;
            style = 1;
            x = "39 * 	(safezoneW / 64) + 	(safeZoneX)";
            y = "37.5 * 	(safezoneH / 40) + 	(safeZoneY)";
            w = "12 * 	(safezoneW / 64)";
            h = "1.5 * 	(safezoneH / 40)";
            text = "11/01/20 14:50";
            font = "LCD14";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };
        class Sidebar_Left: RscText {
            idc = 1009;
            x = "0 * 	(safezoneW / 64) + 	(safeZoneX)";
            y = "0 * 	(safezoneH / 40) + 	(safeZoneY)";
            w = "12 * 	(safezoneW / 64)";
            h = "(safezoneH)";
            colorBackground[] = {0,0,0,1};
            colorText[] = {"172/255","255/255","153/255",1};
        };
        class Sidebar_Right: RscText {
            idc = 1010;
            x = "52 * 	(safezoneW / 64) + 	(safeZoneX)";
            y = "0 * 	(safezoneH / 40) + 	(safeZoneY)";
            w = "12 * 	(safezoneW / 64)";
            h = "(safezoneH)";
            shadow = 0;
            colorBackground[] = {0,0,0,1};
            colorText[] = {"172/255","255/255","153/255",1};
        };
    };
};

class RscIngameUI {
  class RscOptics_LaserDesignator_02;
  class ITC_Land_SpikeOptics: RscOptics_LaserDesignator_02 {
    idd = 300;
    controls[] = {"CA_IGUI_elements_group"};
    onLoad = "_this call itc_land_spike_fnc_selectSpike";
    class CA_IGUI_elements_group: RscControlsGroup
    {
      idc = 170;
      class VScrollbar: VScrollbar
      {
        width = 0;
      };
      class HScrollbar: HScrollbar
      {
        height = 0;
      };
      x = "safeZoneX";
      y = "safeZoneY";
      w = "safeZoneW";
      h = "safeZoneH";
      class controls
      {
        class Sidebar_Left: RscText {
          idc = 1009;
          x = "0 * 	(safezoneW / 64) + 	(0)";
          y = "0 * 	(safezoneH / 40) + 	(0)";
          w = "12 * 	(safezoneW / 64)";
          h = "(safezoneH)";
          colorBackground[] = {0,0,0,1};
          colorText[] = {"172/255","255/255","153/255",1};
        };
        class Sidebar_Right: RscText {
          idc = 1010;
          x = "52 * 	(safezoneW / 64) + 	(0)";
          y = "0 * 	(safezoneH / 40) + 	(0)";
          w = "12 * 	(safezoneW / 64)";
          h = "(safezoneH)";
          shadow = 0;
          colorBackground[] = {0,0,0,1};
          colorText[] = {"172/255","255/255","153/255",1};
        };
        class HotBox: RscPicture {
          idc = 1018;
          x = "13.5 * 	(safezoneW / 64) + 	(safeZoneX)";
          y = "1 * 	(safezoneH / 40) + 	(safeZoneY)";
          w = "1.12 * 	(safezoneW / 64)";
          h = "1.12 * 	(safezoneH / 40)";
          text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
        };

        class TimerProgress: RscProgress {
          idc = -1;
          x = "14.5 * 	(safezoneW / 64) + 	(safeZoneX)";
          y = "2.75 * 	(safezoneH / 40) + 	(safeZoneY)";
          w = "4 * 	(safezoneW / 64)";
          h = "1* 	(safezoneH / 40)";
          colorFrame[] = {2,2,2,1};
          colorBar[] = {1,1,1,1};
          texture = "#(argb,8,8,3)color(1,1,1,1)";
        };
        class SeekerBox: RscPicture {
          idc = 1020;
          x = "22 * 	(safezoneW / 64) + 	(0)";
          y = "10 * 	(safezoneH / 40) + 	(0)";
          w = "20 * 	(safezoneW / 64)";
          h = "20 * 	(safezoneH / 40)";
          text = "itc_land_spike\data\seekerBox.paa";
        };
        class SeekerT: RscPicture {
          idc = 1021;
          x = "22 * 	(safezoneW / 64) + 	(0)";
          y = "10 * 	(safezoneH / 40) + 	(0)";
          w = "20 * 	(safezoneW / 64)";
          h = "20 * 	(safezoneH / 40)";
          text = "itc_land_spike\data\seekerT.paa";
        };
        class SeekerTL: RscPicture {
          idc = 1022;
          x = "22 * 	(safezoneW / 64) + 	(0)";
          y = "10 * 	(safezoneH / 40) + 	(0)";
          w = "20 * 	(safezoneW / 64)";
          h = "20 * 	(safezoneH / 40)";
          text = "itc_land_spike\data\seekerTL.paa";
        };
        class VisionMode: Sidebar_Right {
          idc = 1011;
          style = 0;
          x = "14.5 * 	(safezoneW / 64) + 	(0)";
          y = "1 * 	(safezoneH / 40) + 	(0)";
          w = "6 * 	(safezoneW / 64)";
          h = "1.5 * 	(safezoneH / 40)";
          text = "DTV";
          font = "LCD14";
          colorText[] = {1,1,1,1};
          colorBackground[] = {0,0,0,0};
          SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };
        class ModeText: VisionMode {
            idc = 1014;
            style = 0;
            x = "14.5 * 	(safezoneW / 64) + 	(0)";
            y = "37.5 * 	(safezoneH / 40) + 	(0)";
            w = "6 * 	(safezoneW / 64)";
            h = "1.5 * 	(safezoneH / 40)";
            text = "21 HIGH";
            font = "LCD14";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };
      }; // controls
    }; // CA_IGUI_elements_group
  }; // ITC_Land_SpikeOptics
}; // RscIngameUI
