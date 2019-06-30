    class ITC_LAND_RscText;
    class ITC_LAND_RscFrame;
    class ITC_LAND_RscListBox;
    class ITC_LAND_RscEdit;
    class ITC_LAND_RscComboBox;
    class ITC_LAND_RscButton;


    class ITC_Land_RscVLSlaunch {
   		onLoad = "[_this] spawn itc_land_VLS_fnc_onLoad";

		idd = 86002;
		controlsBackground[] = {};
		objects[] = {};
		class controls {

			class targetListBG_text: ITC_LAND_RscText {
				idc = 4101;

				x = 0.381406 * safezoneW + safezoneX;
				y = 0.643 * safezoneH + safezoneY;
				w = 0.226875 * safezoneW;
				h = 0.341 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0.1,0.1,0.1,1};
				colorActive[] = {0.1,0.1,0.1,1};
			};
            class targetListBG_frame: ITC_LAND_RscFrame {
				idc = -1;

				x = 0.381406 * safezoneW + safezoneX;
				y = 0.643 * safezoneH + safezoneY;
				w = 0.226875 * safezoneW;
				h = 0.341 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				//colorBackground[] = {0.1,0.1,0.1,1};
				//colorActive[] = {0.1,0.1,0.1,1};
			};
			class targetlist_header_text: ITC_LAND_RscText {
				idc = 4102;

				text = "TARGET LIST";
				x = 0.386562 * safezoneW + safezoneX;
				y = 0.654 * safezoneH + safezoneY;
				w = 0.0979687 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorActive[] = {0,0,0,0};
			};
			class targetList_listbox: ITC_LAND_RscListBox {
				idc = 4103;

				x = 0.386562 * safezoneW + safezoneX;
				y = 0.676 * safezoneH + safezoneY;
				w = 0.216563 * safezoneW;
				h = 0.143 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
				onLBSelChanged = "_this call itc_land_VLS_fnc_onSelectTarget";
			};
			class grid_text: ITC_LAND_RscText {
				idc = 4105;
				text = "GRID";
				x = 0.386562 * safezoneW + safezoneX;
				y = 0.83 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
			};
			class grid_edit: ITC_LAND_RscEdit {
				idc = 4106;
                onChar = "_this spawn itc_land_VLS_fnc_onChar";
				x = 0.412342 * safezoneW + safezoneX;
				y = 0.83 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
			};
			class alt_text: ITC_LAND_RscText {
				idc = 4107;
				text = "ELEV";
				x = 0.386562 * safezoneW + safezoneX;
				y = 0.863 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
			};
			class alt_edit: ITC_LAND_RscEdit {
				idc = 4108;
                onChar = "_this spawn itc_land_VLS_fnc_onChar";
				x = 0.412342 * safezoneW + safezoneX;
				y = 0.863 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
			};
			class angle_text: ITC_LAND_RscText {
				idc = 4109;
				text = "ANGL";
				x = 0.386562 * safezoneW + safezoneX;
				y = 0.896 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorActive[] = {0,0,0,1};
			};
			class angle_combo: ITC_LAND_RscComboBox {
				idc = 4110;

				x = 0.412342 * safezoneW + safezoneX;
				y = 0.896 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorActive[] = {0,0,0,1};
				onLBSelChanged = "_this call itc_land_VLS_fnc_onSelectAngle";
			};
			class name_text: ITC_LAND_RscText {
				idc = 4111;
				text = "NAME";
				x = 0.386562 * safezoneW + safezoneX;
				y = 0.929 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
			};
			class name_edit: ITC_LAND_RscEdit {
				idc = 4112;
                onChar = "_this spawn itc_land_VLS_fnc_onChar";
				x = 0.412342 * safezoneW + safezoneX;
				y = 0.929 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
			};
            class engageselected_button: ITC_LAND_RscButton {
				idc = 4104;

				text = "LAUNCH SELECTED";
                action =  "[_this] spawn itc_land_VLS_fnc_selectedLaunch";
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.83 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
			};
			class saveTgt_button: ITC_LAND_RscButton {
				idc = 4113;

				text = "SAVE TO LIST";
                action =  "[_this] spawn itc_land_VLS_fnc_saveTGT";
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.896 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
			};
			class removefromlist_button: ITC_LAND_RscButton
			{
				idc = 4114;

				text = "REMOVE FROM LIST";
                action =  "[_this] spawn itc_land_VLS_fnc_removeTGT";
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.929 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
			};
			class adhocLaunch_Button: ITC_LAND_RscButton
			{
				idc = 4115;

				text = "ADHOC LAUNCH";
                action =  "[_this] spawn itc_land_VLS_fnc_adHocLaunch";
				x = 0.510312 * safezoneW + safezoneX;
				y = 0.863 * safezoneH + safezoneY;
				w = 0.0928125 * safezoneW;
				h = 0.022 * safezoneH;
				colorText[] = {"172/255","255/255","153/255",1};
				colorBackground[] = {0,0,0,1};
				colorActive[] = {0,0,0,1};
			};
		};
	};
