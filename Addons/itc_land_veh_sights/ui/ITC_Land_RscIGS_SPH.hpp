	#define IGSGRN {0.709,0.972,0.384,1}
	
	class ITC_Land_RscIGS_SPH {
		onLoad = "uiNamespace setVariable ['ITC_Land_RscIGS_SPH', _this select 0]; ['itc_land_onLoad_RscIGS_SPH', []] call CBA_fnc_localEvent;";
		//onLoad = "uiNamespace setVariable ['ITC_Land_RscIGS_SPH', _this select 0];";
		idd = 513;
		controls[] = {"CA_IGUI_elements_group"};
		class CA_IGUI_elements_group: RscControlsGroup {
			idc = 81001;
			x = "0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y = "0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w = "53.5 * 		(0.01875 * SafezoneH)";
			h = "40 * 		(0.025 * SafezoneH)";
			class controls {
				class CA_HorizontalCompass: RscPicture {
					IDC = 207;
					type = 105;
					font = "EtelkaMonospacePro";
					textSize = "0.02*SafezoneH";
					style = 1;
					color[] = {0.709,0.972,0.384,1};
					x = "13.04 * 		(0.01875 * SafezoneH)";
					y = "3.5 * 		(0.025 * SafezoneH)";
					w = "27.18 * 		(0.01875 * SafezoneH)";
					h = "1 * 		(0.025 * SafezoneH)";
					imageHull = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassHull.paa";
					imageTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassTurret.paa";
					imageObsTurret = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\horizontalCompassObsTurret.paa";
					imageGun = "#(rgb,8,8,3)color(0,0,0,0)";
				};
				class AzimuthMark: RscPicture {
					IDC = 1012;
					text = "A3\Ui_f\data\IGUI\RscIngameUI\RscOptics\AzimuthMark.paa";
					x = "26.35 * 		(0.01875 * SafezoneH)";
					y = "3.0 * 		(0.025 * SafezoneH)";
					w = "0.5 * 		(0.01875 * SafezoneH)";
					h = "0.5 * 		(0.025 * SafezoneH)";
					colorText[] = {0.709,0.972,0.384,1};
				};
				class CA_Heading: RscText {
					idc = 156;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "015";
					x = "25.15 * 		(0.01875 * SafezoneH)";
					y = "1.75 * 		(0.025 * SafezoneH)";
					w = "3 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class CurrentAzimuth_text: RscText {
					idc = 1101;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "CA:";
					x = "14 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CurrentAzimuth_value: RscText {
					idc = 1102;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};					
					text = "0000";
					x = "15 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";					
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";					
				};
				class MissionAzimuth_text: RscText {
					idc = 1103;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "MA:";
					x = "14 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class MissionAzimuth_value: RscText {
					idc = 1104;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "----";
					x = "15 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";					
				};
				class CurrentQuadrant_text: RscText {
					idc = 1105;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "CQ:";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class CurrentQuadrant_value: RscText {
					idc = 1106;
					sizeEx = "0.032*SafezoneH";
					style = 1;
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};					
					text = "0000";
					x = "35.2 * 		(0.01875 * SafezoneH)";
					y = "19 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";					
				};
				class MissionQuadrant_text: RscText {
					idc = 1107;
					sizeEx = "0.032*SafezoneH";
					style = 0;
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "MQ:";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class MissionQuadrant_value: MissionQuadrant_text {
					idc = 1108;
					style = 1;
					sizeEx = "0.032*SafezoneH";
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "----";
					x = "35.2 * 		(0.01875 * SafezoneH)";
					y = "20 * 		(0.025 * SafezoneH)";
					w = "4 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";					
				};	
				class CA_LasedRange: RscText {
					idc = 198;
					style = 2;
					sizeEx = "0.032*SafezoneH";
					shadow = 0;
					font = "EtelkaMonospacePro";
					colorText[] = {0.709,0.972,0.384,1};
					text = "2456";
					x = "21.15 * 		(0.01875 * SafezoneH)";
					y = "26 * 		(0.025 * SafezoneH)";
					w = "11 * 		(0.01875 * SafezoneH)";
					h = "2 * 		(0.025 * SafezoneH)";
				};	
				
				class ITC_Land_AutoLoader: RscText {
					style = 0;
					idc = 1700;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "AUTOLOADER";
					x = "14 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};				
				class ITC_Land_AutoLoaderStatus_text: RscText {
					idc = 1701;
					style = 0;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "STATUS:";
					x = "14 * 		(0.01875 * SafezoneH)";
					y = "33.4 * 		(0.025 * SafezoneH)";
					w = "30 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_AutoLoaderAmmo_text: RscText {
					idc = 1702;
					style = 0;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "LOAD:";
					x = "14 * 		(0.01875 * SafezoneH)";
					y = "34.2 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};	
				class ITC_Land_AutoLoaderFuze_text: RscText {
					idc = 1703;
					style = 0;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FUZE:";
					x = "14 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};					
				class ITC_Land_AutoLoaderGuidance_text: RscText {
					idc = 1704;
					style = 0;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "GUIDANCE:";
					x = "14 * 		(0.01875 * SafezoneH)";
					y = "35.8 * 		(0.025 * SafezoneH)";
					w = "20 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};

				class ITC_Land_Orders: RscText {
					style = 0;
					idc = 1600;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FCI ORDERS";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					//x = "26 * 		(0.01875 * SafezoneH)";
					y = "32.6 * 		(0.025 * SafezoneH)";
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_Ordersmof: RscText {
					style = 0;
					idc = 1601;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "COUNT: 5 ROUNDS ";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					//x = "26 * 		(0.01875 * SafezoneH)";
					y = "33.4 * 		(0.025 * SafezoneH)";					
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_OrdersLoad: RscText {
					style = 0;
					idc = 1602;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "LOAD: G155 HE CHG 3";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					//x = "26 * 		(0.01875 * SafezoneH)";
					y = "34.2 * 		(0.025 * SafezoneH)";					
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_OrdersFuze: RscText {
					style = 0;
					idc = 1603;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "FUZE: POINT DETONATE";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					//x = "26 * 		(0.01875 * SafezoneH)";
					y = "35 * 		(0.025 * SafezoneH)";					
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				class ITC_Land_OrdersGuided: RscText {
					style = 0;
					idc = 1604;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "GUIDED: -- N/A --";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					//x = "26 * 		(0.01875 * SafezoneH)";
					y = "35.8 * 		(0.025 * SafezoneH)";					
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};				
				class ITC_Land_FCIalign: RscText {
					style = 0;
					idc = 1605;
					colorText[] = {0.709,0.972,0.384,1};
					shadow = 0;
					font = "EtelkaMonospacePro";
					text = "AZ/QD: 2460 / 1026";
					x = "34.2 * 		(0.01875 * SafezoneH)";
					//x = "26 * 		(0.01875 * SafezoneH)";
					y = "36.6 * 		(0.025 * SafezoneH)";					
					w = "15 * 		(0.01875 * SafezoneH)";
					h = "1.2 * 		(0.025 * SafezoneH)";
				};
				
				class crosshair_image: RscPicture {
					idc = 1800;
					text = "\itc_land_veh_sights\ui\data\crosshair_ca.paa";
					style = 2096;
					shadow = 0;					
					x = "20.375 * 		(0.01875 * SafezoneH)";
					y = "14 * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";					
				};				
				class horizontalmark_image: RscPicture {
					idc = 1801;
					text = "\itc_land_veh_sights\ui\data\mark.paa";
					style = 2096;
					shadow = 0;					
					x = "20.4 * 		(0.01875 * SafezoneH)";
					y = "(14) * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";						
				};				
				class verticalmark_image: RscPicture {
					idc = 1802;
					text = "\itc_land_veh_sights\ui\data\mark.paa";
					style = 2096;
					shadow = 0;					
					x = "20.4 * 		(0.01875 * SafezoneH)";
					y = "(14) * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";						
				};
				class arrowLeft_image: RscPicture {
					idc = 1803;
					text = "\itc_land_veh_sights\ui\data\arrowmark_l.paa";
					style = 2096;
					shadow = 0;					
					x = "26 * 		(0.01875 * SafezoneH)";
					y = "(14) * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";						
				};
				class arrowRight_image: RscPicture {
					idc = 1804;
					text = "\itc_land_veh_sights\ui\data\arrowmark_r.paa";
					style = 2096;
					shadow = 0;					
					x = "14.75 * 		(0.01875 * SafezoneH)";
					y = "(14) * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";						
				};
				class arrowUp_image: RscPicture {
					idc = 1805;
					text = "\itc_land_veh_sights\ui\data\arrowmark_u.paa";
					style = 2096;
					shadow = 0;					
					x = "20.4 * 		(0.01875 * SafezoneH)";
					y = "(19.8) * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";						
				};
				class arrowDown_image: RscPicture {
					idc = 1806;
					text = "\itc_land_veh_sights\ui\data\arrowmark_d.paa";
					style = 2096;
					shadow = 0;					
					x = "20.4 * 		(0.01875 * SafezoneH)";
					y = "(8.2) * 		(0.025 * SafezoneH)";
					w = "12.5 * 		(0.01875 * SafezoneH)";
					h = "12 * 		(0.025 * SafezoneH)";						
				};					
			};
		};
	};