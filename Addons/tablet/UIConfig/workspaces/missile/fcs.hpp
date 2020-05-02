class page_msl_controls:itc_land_workspace {
  idc = 13701;
	//REDO ALL IDCS
	class Controls {
		class fcs_mode_title: ITC_LAND_RscText {
			idc = 1511;
			text = "FCI MODE:";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.235 * safezoneH + safezoneY;
			w = 0.15 * safezoneW;
			h = 0.033 * safezoneH;
			sizeEx = 1.25 * GUI_GRID_H;
		};		
		class fcs_mode_combobox: ITC_LAND_RscComboBox {
			idc = 1512;
			h = 0.024 * safezoneH;
			w = 0.1125 * safezoneW;
			x = 0.435 * safezoneW + safezoneX;
			y = 0.24 * safezoneH + safezoneY;	
			//onLBSelChanged = "_this call itc_land_tablet_fnc_fcimode_onlblselchanged";				
		};
		//Manual Mode Controls
		//#include "fcs_manualmode.hpp"
		//Local FCS Controls
		#include "fcs_localFCSmode.hpp"
		#include "fcs_fuzeandguidance.hpp"

	};
};
