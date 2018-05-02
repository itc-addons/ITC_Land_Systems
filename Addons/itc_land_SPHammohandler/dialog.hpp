class ITC_Land_SPHAmmoHandling {
	idd = 86000;
	
	controlsBackground[] = {};
	objects[] = {};
	onLoad = "[_this] spawn itc_land_SPHammoHandler_fnc_onLoad";
	onUnload = "itc_land_SPHammoHandler_open = false";
	
	class Controls {
		class background: ITC_LAND_RscText {
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.283594 * safezoneW;
			h = 0.198 * safezoneH;
			colorBackground[] = {0.1,0.1,0.1,1};
			colorActive[] = {0.1,0.1,0.1,1};
		};
		class available_ammo_list: ITC_LAND_RscListBox {
			idc = 86001;
			text = ""; 
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.198 * safezoneH;
			onLBSelChanged = "_this call itc_land_SPHammoHandler_fnc_onSelectAmmo";				
		};			
		class round_name: ITC_LAND_RscText {
			idc = 86002;
			text = "PREPARE: "; 
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;	
		};
		class charge_number: ITC_LAND_RscText {
			idc = 86003;
			text = "CHARGE: "; 
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.022 * safezoneH;							
		};
		
		class chargebutton_label: ITC_LAND_RscText {
			text = "CHARGE"; 
			x = 0.649531 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ammoChargeDown: ITC_LAND_RscButton {
			text = "-"; 
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[-1] call itc_land_SPHammoHandler_fnc_changeCharge";	
		};
		class ammoChargeUp: ITC_LAND_RscButton {
			text = "+"; 
			x = 0.685625 * safezoneW + safezoneX;
			y = 0.599 * safezoneH + safezoneY;
			w = 0.0103125 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[1]  call itc_land_SPHammoHandler_fnc_changeCharge";	
		};
		class fuze_type: ITC_LAND_RscText {
			text = "Fuze: "; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ammoFuzeSelect: ITC_LAND_RscComboBox {
			idc = 86004;
			text = "POINT DETONATE"; 
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
			onLBSelChanged = "_this call itc_land_SPHammoHandler_fnc_onSelectFuze";		
		};
		class fuzeTime: ITC_LAND_RscText {
			idc = 86005;
			text = "Time: "; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class fuzeTimeBox: ITC_LAND_RscTextBox {
			idc = 86006;
			text = "0"; 			
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.676 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class laserCode: ITC_LAND_RscText {
			idc = 86007;
			text = "Code:  "; 
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class laserCodeBox: ITC_LAND_RscTextBox {
			idc = 86008;
			text = "1111"; 			
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class gridText: ITC_LAND_RscText {
			idc = 86012;
			text = "Grid:  ";
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class gridTextBox: ITC_LAND_RscTextBox {
			idc = 86013;
			x = 0.45875 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};		
		class altText: ITC_LAND_RscText {
			idc = 86014;
			text = "Alt: ";
			x = 0.525781 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class altTextBox: ITC_LAND_RscTextBox {
			idc = 86015;
			x = 0.546406 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
			colorBackground[] = {0,0,0,1};
		};		

		
		class loadButton: ITC_LAND_RscButton {
			idc = 86009;
			text = "LOAD"; 
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			action = "[] call itc_land_SPHammoHandler_fnc_loadGun";				
		};
		class fireButton: ITC_LAND_RscButton {
			idc = 86010;
			text = "FIRE"; 
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.022 * safezoneH;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0.7,0.1,0.1,1};
			colorBackgroundActive[] = {0.7,0.1,0.1,1};

			action = "[] call  itc_land_SPHammoHandler_fnc_fireGun";				
		};
		class status: ITC_LAND_RscText {
			text = "STATUS: "; 
			x = 0.587656 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class statusText: ITC_LAND_RscText {
			idc = 86011;
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.709 * safezoneH + safezoneY;
			w = 0.079 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
	
};
