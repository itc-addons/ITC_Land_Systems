class ITC_Land_SpikeSeeker {
    idd = 86005;
    onLoad = "((_this select 0) displayCtrl -1) progressSetPosition 0.5";

    class controls {
        class Sidebar_Left: RscText {
            idc = 1009;
            x = "0 * 	(safezoneW / 64) + 	(safezoneX)";
            y = "0 * 	(safezoneH / 40) + 	(safezoneY)";
            w = "12 * 	(safezoneW / 64)";
            h = "(safezoneH)";
            colorBackground[] = {0,0,0,1};
            colorText[] = {"172/255","255/255","153/255",1};
        };
        class Sidebar_Right: RscText {
            idc = 1010;
            x = "52 * 	(safezoneW / 64) + 	(safezoneX)";
            y = "0 * 	(safezoneH / 40) + 	(safezoneY)";
            w = "12 * 	(safezoneW / 64)";
            h = "(safezoneH)";
            colorBackground[] = {0,0,0,1};
            colorText[] = {"172/255","255/255","153/255",1};
        };

        class VisionMode: RscText {
            idc = 1011;
            style = 0;
            x = "14.5 * 	(safezoneW / 64) + 	(safezoneX)";
            y = "1 * 	(safezoneH / 40) + 	(safezoneY)";
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
          x = "13.5 * 	(safezoneW / 64) + 	(safezoneX)";
          y = "1 * 	(safezoneH / 40) + 	(safezoneY)";
          w = "1.12 * 	(safezoneW / 64)";
          h = "1.12 * 	(safezoneH / 40)";
          text = "\A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\square.paa";
        };

        class TimerProgress: RscProgress {
          idc = -1;
          x = "14.5 * 	(safezoneW / 64) + 	(safezoneX)";
          y = "2.75 * 	(safezoneH / 40) + 	(safezoneY)";
          w = "4 * 	(safezoneW / 64)";
          h = "1* 	(safezoneH / 40)";
          colorFrame[] = {2,2,2,1};
        	colorBar[] = {1,1,1,1};
        	texture = "#(argb,8,8,3)color(1,1,1,1)";
        };
        class TimerText: RscText {
            idc = 1013;
            style = 0;
            x = "14.5 * 	(safezoneW / 64) + 	(safezoneX)";
            y = "4 * 	(safezoneH / 40) + 	(safezoneY)";
            w = "6 * 	(safezoneW / 64)";
            h = "1.5 * 	(safezoneH / 40)";
            text = "0234";
            font = "LCD14";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };
        //Centre elements
        class ManualText: RscText {
            idc = 1016;
            style = 2;
            x = "27 * 	(safezoneW / 64) + 	(safezoneX)";
            y = "10 * 	(safezoneH / 40) + 	(safezoneY)";
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
          x = "25 * 	(safezoneW / 64) + 	(safezoneX)";
          y = "13 * 	(safezoneH / 40) + 	(safezoneY)";
          w = "14 * 	(safezoneW / 64)";
          h = "14 * 	(safezoneH / 40)";
        };*/
        class SeekerBox: RscPicture {
          idc = 1020;
          x = "25 * 	(safezoneW / 64) + 	(safezoneX)";
          y = "13 * 	(safezoneH / 40) + 	(safezoneY)";
          w = "14 * 	(safezoneW / 64)";
          h = "14 * 	(safezoneH / 40)";
          text = "seekerBox.paa";
        };
        class SeekerT: RscPicture {
          idc = 1021;
          x = "22 * 	(safezoneW / 64) + 	(safezoneX)";
          y = "10 * 	(safezoneH / 40) + 	(safezoneY)";
          w = "20 * 	(safezoneW / 64)";
          h = "20 * 	(safezoneH / 40)";
          text = "seekerTL.paa";
        };
        class ModeText: RscText {
            idc = 1014;
            style = 0;
            x = "14.5 * 	(safezoneW / 64) + 	(safezoneX)";
            y = "37.5 * 	(safezoneH / 40) + 	(safezoneY)";
            w = "6 * 	(safezoneW / 64)";
            h = "1.5 * 	(safezoneH / 40)";
            text = "00 HIGH";
            font = "LCD14";
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0};
            SizeEx = "( ( ( ((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.5)";
        };
        class DateTimeText: RscText {
            idc = 1015;
            style = 1;
            x = "39 * 	(safezoneW / 64) + 	(safezoneX)";
            y = "37.5 * 	(safezoneH / 40) + 	(safezoneY)";
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
