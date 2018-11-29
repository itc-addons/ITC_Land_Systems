//UI Stuff:
class RscText;
class RscListbox;
class RscListNBox;
class RscPicture;
class RscControlsGroup;
class ScrollBar;
class RscActiveText;
class RscStructuredText;

class RscInGameUI {
	class RscUnitInfo;
	class RscOptics_UAV_gunner: RscUnitInfo {
		class CA_IGUI_elements_group;
		//class Controls;
	};
    class ITC_Land_AR2I_RscOptics_UAV_gunner: RscOptics_UAV_gunner {
		onLoad = "uiNamespace setVariable ['ITC_Land_AR2I_RscOptics_UAV_gunner', _this select 0]; ['ITC_Land_ar2i_onLoadTurretDisplay', []] call CBA_fnc_localEvent;";		
		controls[] = {"ITC_Land_AR2i_IGUI_elements_group"};
		idd = 512;
		class ITC_Land_AR2i_IGUI_elements_group: CA_IGUI_elements_group {
			idc = 75001;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls {
				class RangeText: RscText {
					style = 0;
					sizeEx = "0.02*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 1000;
					text = "RANGE:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: RangeText {
					idc = 198;
					text = "2456";
					x = "21.3 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class ModeText: RangeText {
					idc = 1002;
					text = "MODE:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: RangeText {
					idc = 179;
					style = 0;
					text = "VIS";
					x = "22.2 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: RangeText {
					idc = 153;
					style = 0;
					text = "BHOT";
					x = "23.4 * 		(0.01875 * SafezoneH)";
					y = "26.8 * 		(0.025 * SafezoneH)";
					w = "4.5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: RangeText
				{
					idc = 1009;
					text = "SPD [KM/H]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: RangeText
				{
					idc = 188;
					text = "120";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "12.4 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: RangeText
				{
					idc = 1007;
					text = "ALT [AGL]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: RangeText
				{
					idc = 189;
					text = "3825";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "13.2 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_Alt_text: RangeText
				{
					idc = 75010;
					text = "ALT [ASL]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_Alt_value: RangeText
				{
					idc = 75011;
					text = "3825";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_DIR_text: RangeText {
					idc = 75012;
					text = "DIR [DEG/MIL]:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "12 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_DIR_value: RangeText {
					idc = 75013;
					text = "120 / 1200";
					x = "24.2 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "10 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_TGT_text: RangeText {
					idc = 75014;
					text = "TGT GRID:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "8 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_TGT_value: RangeText {
					idc = 75015;
					text = "01234 01234";
					x = "24.2 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_TGTalt_text: RangeText {
					idc = 75016;
					text = "TGT ALT [ASL]:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "33.4 * 		(0.025 * SafezoneH)";
					w = "8 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_TGTalt_value: RangeText {
					idc = 75017;
					text = "3825";
					x = "24.2 * 		(0.01875 * SafezoneH)";
					y = "33.4 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: RangeText {
					idc = 1005;
					text = "UAS GRID:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_ValueGrid: RangeText {
					idc = 75018;
					text = "01234 01234";
					x = "10.3 * 		(0.01875 * SafezoneH)";
					y = "31.8 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextTime: RangeText {
					idc = 1010;
					text = "TIME [UTC]:";
					x = "5.8 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: RangeText {
					idc = 190;
					text = "20:28:35";
					x = "10 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class TextMag: RangeText {
					idc = 1011;
					text = "CAM MAG:";
					x = "18.5 * 		(0.01875 * SafezoneH)";
					y = "26 * 		(0.025 * SafezoneH)";
					w = "5 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: RangeText {
					idc = 180;
					text = "28x";
					x = "22.2 * 		(0.01875 * SafezoneH)";
					y = "26 * 		(0.025 * SafezoneH)";
					w = "6 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText {
					idc = 158;
					style = "0x30 + 0x800";
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x = "31.1 * 		(0.01875 * SafezoneH)";
					y = "12.85 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.5 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AR2i_NArr_txt: RscPicture { 
				  idc = 75019;
				  text = "itc_land_veh_darter\data\n_txt.paa";
					x = 0.659844 * safezoneW;
					y = 0.159 * safezoneH;
					w = 0.075;
					h = 0.1;
				};
				class ITC_Land_AR2i_NArr_img: RscPicture {
				  idc = 75020;
				  text = "itc_land_veh_darter\data\n_arr.paa";
					x = 0.659844 * safezoneW;
					y = 0.159 * safezoneH;
					w = 0.075;
					h = 0.1;
				};				
			};
		};
	};
};
