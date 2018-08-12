class page_spg_controls:itc_land_workspace {
  idc = 13410;
  
	class Controls {
		class fcs_mode_title: ITC_LAND_RscText {
			idc = 1500;
			text = "FCI MODE:";
			x = 0.363125 * safezoneW + safezoneX;
			y = 0.235 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 1.25 * GUI_GRID_H;
		};		
		class fcs_mode_combobox: ITC_LAND_RscComboBox {
			idc = 1501;
			h = 0.024 * safezoneH;
			w = 0.1125 * safezoneW;
			x = 0.422 * safezoneW + safezoneX;
			y = 0.24 * safezoneH + safezoneY;	
			onLBSelChanged = "_this call itc_land_tablet_fnc_fcimode_onlblselchanged";				
		};
		//Manual Mode Controls
		#include "fcs_manualmode.hpp"
		//Local FCS Controls
		#include "fcs_localFCSmode.hpp"
		
/*		//Datalink Direction Controls
		class fcs_gun_title: ITC_LAND_RscText {
			idc = 1013;
			text = "DATALINK TARGETING";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.411 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 1.25 * GUI_GRID_H;
		};
		class fcs_datalink_id: ITC_LAND_RscText {
			idc = 1014;
			text = "DATALINK ID";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.455 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class fcs_datalink_id_edit: ITC_LAND_RscEdit {
			idc = 1016;
			text = "";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.455 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class fcs_datalink_id_btn: ITC_LAND_RscButton {
			idc = 1603;
			text = "connect";
			x = 0.4807812 * safezoneW + safezoneX;
			y = 0.455 * safezoneH + safezoneY;
			w = 0.0457812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class fcs_fdc_datalink_id: ITC_LAND_RscText {
			idc = 1015;
			text = "REGISTER ON FDC BCS";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.488 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class fcs_fdc_datalink_id_edit: ITC_LAND_RscEdit {
			idc = 1017;
			text = "";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.488 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class fcs_fdc_datalink_id_btn: ITC_LAND_RscButton {
			idc = 1604;
			text = "connect";
			x = 0.4807812 * safezoneW + safezoneX;
			y = 0.488 * safezoneH + safezoneY;
			w = 0.0457812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class itc_land_solution_list: ITC_LAND_RscListbox {
			idc = 1500;
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.52 * safezoneH + safezoneY;
			w = 0.345469 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class push_datalink: ITC_LAND_RscButton {
			idc = 1606;
			text = "PUSH DATALINK SLN";
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.554 * safezoneH + safezoneY;
			w = 0.0815625 * safezoneW;
			h = 0.044 * safezoneH;
			action = "[""prev""] call itc_land_tablet_fnc_pageInteract";
		};
*/
	
		//Ammohandler Inputs
		#include "fcs_ahsettings.hpp"
	};
};
