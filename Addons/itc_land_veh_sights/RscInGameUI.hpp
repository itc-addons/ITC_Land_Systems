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
    class ITC_Land_RscGunnerSightSPH {
		onLoad = "uiNamespace setVariable ['ITC_Land_RscGunnerSightSPH', _this select 0]; ['itc_land_onLoadSPHGunnerDisplay', []] call CBA_fnc_localEvent;";
		idd = 513;
		controls[] = {"ITC_Land_IGUI_elements_group"};
		class ITC_Land_IGUI_elements_group: RscControlsGroup {
			idc = 81001;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls {
				/*class CA_Heading: RscText
				{
					idc = 156;
					style = 0;
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "015";
					x = "25.3 * 		(0.01875 * SafezoneH)";
					y = "6.3 * 		(0.025 * SafezoneH)";
					w = "2.2 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};*/
				class CA_VisionMode: RscText {
					idc = 179;
					style = 1;
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "VIS";
					x = "11.5 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};			
				class CA_OpticsZoom: RscText {
					idc = 180;
					style = 1;
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					sizeEx = "0.028*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "4.5";
					x = "38 * 		(0.01875 * SafezoneH)";
					y = "19.46 * 		(0.025 * SafezoneH)";
					w = "3.5 * 		(0.01875 * SafezoneH)";
					h = "1.1 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_Azimuth_text: RscText {
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 81012;
					text = "AZIMUTH";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_CURAzimuth_text: RscText {
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 81013;
					text = "CUR";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_CURAzimuth_value: RscText {
					idc = 81014;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "0000";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_MISAzimuth_text: RscText {
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 81015;
					text = "MIS";
					x = "10.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_MISAzimuth_value: RscText {
					idc = 81016;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "----";
					x = "13.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_Quadrant_text: RscText {
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 81017;
					text = "QUADRANT";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "27.8 * 		(0.025 * SafezoneH)";
					w = "7.5 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_CURQuadrant_text: RscText {
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 81018;
					text = "CUR";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_CURQuadrant_value: RscText {
					idc = 81019;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "0000";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "29.3 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_MISQuadrant_text: RscText {
					style = 0;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					idc = 81020;
					text = "MIS";
					x = "33.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_MISQuadrant_value: RscText {
					idc = 81021;
					style = 1;
					sizeEx = "0.038*SafezoneH";
					colorText[] = {0.706, 0.0745, 0.0196, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "----";
					x = "36.8 * 		(0.01875 * SafezoneH)";
					y = "30.8 * 		(0.025 * SafezoneH)";
					w = "5.2 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AutoLoader: RscText {
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "AUTOLOADER";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};				
				class ITC_Land_AutoLoaderStatus_text: RscText {
					idc = 81022;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "STATUS:";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "33.4 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_CAutoLoaderAmmo_text: RscText {
					idc = 81023;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "LOAD:";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "34.2 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};	
				class ITC_Land_AutoLoaderFuze_text: RscText {
					idc = 81024;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FUZE:";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};					
				class ITC_Land_AutoLoaderGuidance_text: RscText {
					idc = 81025;
					style = 0;
					sizeEx = "0.028*SafezoneH";
					colorText[] = {0.95, 0.95, 0.95, 1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "GUIDANCE:";
					x = "10.5 * 		(0.01875 * SafezoneH)";
					y = "35.8 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};							
			};
		};
	};
};