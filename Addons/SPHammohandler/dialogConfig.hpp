	#define AIFMSGRN {172/255,255/255,153/255,1}
	class ITC_LAND_RscText;
	class ITC_LAND_RscButton;
	class ITC_LAND_RscFrame;
	class ITC_LAND_RscListBox;
	class ITC_LAND_RscComboBox;
	class ITC_Land_RscEdit;

	class ITC_Land_SPHAmmoHandler {
		idd = 86000;

		controlsBackground[] = {};
		objects[] = {};
		onLoad = "[_this] spawn itc_land_SPHammoHandler_fnc_onLoad";
		onUnload = "itc_land_SPHammoHandler_open = false";

		class Controls {
			class background: ITC_LAND_RscText {
				x = 0.422656 * safezoneW + safezoneX;
				y = 0.5771 * safezoneH + safezoneY;
				w = 0.283594 * safezoneW;
				h = 0.228 * safezoneH;
				colorBackground[] = {0.125,0.125,0.125,1};
				colorActive[] = {0.125,0.125,0.125,1};
			};
			class headertext: ITC_LAND_RscText {
				text = "G15X: AMMO HANDLER & AUTOLOADER";
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.555 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0.1,0.1,0.1,1};
				colorActive[] = {0.1,0.1,0.1,1};
			};
			class exitbutton: ITC_LAND_RscButton {
				idc = 86016;
				text = "X";
				x = 0.690781 * safezoneW + safezoneX;
				y = 0.555 * safezoneH + safezoneY;
				w = 0.0154688 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = AIFMSGRN;
				colorBackground[] = {0,0,0,0};
				colorBackgroundActive[] = {0,0,0,0};
				colorActive[] = {0,0,0,0};
				action = "closeDialog 0;";
			};
			class backgroundHeaderFrame: ITC_LAND_RscFrame {
				x = 0.29375 * safezoneW + safezoneX;
				//x = 0.29475 * safezoneW + safezoneX;
				y = 0.5551 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.022 * safezoneH;
			};

			class available_ammo_list: ITC_LAND_RscListBox {
				idc = 86001;
				text = "";
				x = 0.29475 * safezoneW + safezoneX;
				y = 0.578 * safezoneH + safezoneY;
				w = 0.128906 * safezoneW;
				h = 0.225 * safezoneH;
				colorBackground[] = {0,0,0,1};
				colorSelectBackground[] = AIFMSGRN;
				colorSelectBackground2[] = AIFMSGRN;
				onLBSelChanged = "_this call itc_land_SPHammoHandler_fnc_onSelectAmmo";
			};
			class ammoframe: ITC_LAND_RscFrame {
				x = 0.29475 * safezoneW + safezoneX;
				y = 0.578 * safezoneH + safezoneY;
				w = 0.129906 * safezoneW;
				h = 0.225 * safezoneH;
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
			class fuzeTimeBox: ITC_LAND_RscEdit {
				idc = 86006;
				text = "0";
				x = 0.45875 * safezoneW + safezoneX;
				y = 0.676 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.022 * safezoneH;
				colorBackground[] = {0,0,0,1};
			};
			class laserCode: ITC_LAND_RscText {
				idc = 86007;
				text = "Code:  ";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.70 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class laserCodeBox: ITC_LAND_RscEdit {
				idc = 86008;
				text = "1111";
				x = 0.45875 * safezoneW + safezoneX;
				y = 0.70 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.022 * safezoneH;
				colorBackground[] = {0,0,0,1};
			};
			class laserCode2: ITC_LAND_RscText {
				idc = 86023;
				text = "Code:  ";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.720 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class laserCodeBox2: ITC_LAND_RscEdit {
				idc = 86024;
				text = "1112";
				x = 0.45875 * safezoneW + safezoneX;
				y = 0.720 * safezoneH + safezoneY;
				w = 0.0825 * safezoneW;
				h = 0.022 * safezoneH;
				colorBackground[] = {0,0,0,1};
			};
			class gridText: ITC_LAND_RscText {
				idc = 86012;
				text = "Grid:  ";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.020625 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class gridTextBox: ITC_LAND_RscEdit {
				idc = 86013;
				x = 0.45875 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.0670312 * safezoneW;
				h = 0.022 * safezoneH;
				colorBackground[] = {0,0,0,1};
			};
			class altText: ITC_LAND_RscText {
				idc = 86014;
				text = "Elev: ";
				x = 0.525781 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.020625 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class altTextBox: ITC_LAND_RscEdit {
				idc = 86015;
				x = 0.546406 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
				colorBackground[] = {0,0,0,1};
			};
			class countText: ITC_LAND_RscText {
				idc = 86021;
				text = "Count: ";
				x = 0.427812 * safezoneW + safezoneX;
				y = 0.742 * safezoneH + safezoneY;
				w = 0.0257812 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class countTextBox: ITC_LAND_RscEdit {
				idc = 86022;
				text = "0";
				x = 0.45875 * safezoneW + safezoneX;
				y = 0.742 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
				colorBackground[] = {0,0,0,1};
			};

			//main buttons
			class applyButton: ITC_LAND_RscButton {
				idc = 86009;
				text = "APPLY SETTINGS";
				x = 0.469062 * safezoneW + safezoneX;
				y = 0.772 * safezoneH + safezoneY;
				w = 0.113437 * safezoneW;
				h = 0.022 * safezoneH;
				action = "[] call itc_land_SPHammoHandler_fnc_applySettings";
			};
			class loadButton: ITC_LAND_RscButton {
				idc = 86010;
				text = "LOAD";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.772 * safezoneH + safezoneY;
				w = 0.113437 * safezoneW;
				h = 0.022 * safezoneH;
				action = "[] call itc_land_SPHammoHandler_fnc_loadGun";
			};
			//Autoloader Settings displays
			class AL_Header: ITC_LAND_RscText {
				text = "AUTOLOADER SETTINGS";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.638 * safezoneH + safezoneY;
				w = 0.095 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_Round: ITC_LAND_RscText {
				text = "SHELL: ";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.658 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_RoundText: ITC_LAND_RscText {
				idc = 86019;
				x = 0.618594 * safezoneW + safezoneX;
				y = 0.658 * safezoneH + safezoneY;
				w = 0.079 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_Fuze: ITC_LAND_RscText {
				text = "FUZE: ";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.674 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_FuzeText: ITC_LAND_RscText {
				idc = 86018;
				x = 0.618594 * safezoneW + safezoneX;
				y = 0.674 * safezoneH + safezoneY;
				w = 0.079 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_GUIDED: ITC_LAND_RscText {
				text = "GUIDED: ";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.69 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_GUIDEDText: ITC_LAND_RscText {
				idc = 86017;
				x = 0.618594 * safezoneW + safezoneX;
				y = 0.69 * safezoneH + safezoneY;
				w = 0.079 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_COUNT: ITC_LAND_RscText {
				text = "COUNT: ";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class AL_COUNTText: ITC_LAND_RscText {
				idc = 86020;
				x = 0.618594 * safezoneW + safezoneX;
				y = 0.709 * safezoneH + safezoneY;
				w = 0.079 * safezoneW;
				h = 0.022 * safezoneH;
			};
			//Status stuff
			class status: ITC_LAND_RscText {
				text = "STATUS: ";
				x = 0.587656 * safezoneW + safezoneX;
				y = 0.739 * safezoneH + safezoneY;
				w = 0.0360937 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class statusText: ITC_LAND_RscText {
				idc = 86011;
				x = 0.618594 * safezoneW + safezoneX;
				y = 0.739 * safezoneH + safezoneY;
				w = 0.085 * safezoneW;
				h = 0.022 * safezoneH;
			};
			class frame: ITC_LAND_RscFrame {
				x = 0.29375 * safezoneW + safezoneX;
				y = 0.577 * safezoneH + safezoneY;
				w = 0.4125 * safezoneW;
				h = 0.228 * safezoneH;
			};
		};

	};
