#define AIFMSGRN {172/255,255/255,153/255,1}
class RscFrame;	
class ITC_LAND_RscFrame: RscFrame {
	style = 0xA0;
	colorBackground[] = {0,0,0,0};
	colorText[] = AIFMSGRN;		
};	
class RscText;
class ITC_LAND_RscText: RscText {
	colorText[] = AIFMSGRN;
};

class RscEdit;
class ITC_LAND_RscEdit: RscEdit {
	colorText[] = AIFMSGRN;
	colorSelection[] = {0.1,0.1,0.1,0.85};
};
class RscStructuredText;
class ITC_LAND_RscStructuredText: RscStructuredText {
	colorText[] = AIFMSGRN;
    class Attributes {
        font = "RobotoCondensed";
        color = "#acff99";
        colorLink = "#acff99";
        align = "left";
        shadow = 1;
    };
};
class RscPicture;
class ITC_LAND_RscPicture: RscPicture {
	colorText[] = AIFMSGRN;
	tooltipColorText[] = AIFMSGRN;
	tooltipColorBox[] = AIFMSGRN;
	style = 48;	
};
class RscControlsGroup;
class ITC_LAND_Workspace: RscControlsGroup {
	onLoad = "(_this # 0) ctrlShow false";
	x = (0.344062+ POSXADJUST) * safezoneW + safezoneX;
	y = 0.225 * safezoneH + safezoneY;
	w = 0.622812 * safezoneW;
	h = 0.506 * safezoneH;
};
class ScrollBar;
class ITC_LAND_ScrollBar: ScrollBar {
		color[] = AIFMSGRN;
		colorActive[] = AIFMSGRN;
};

class RscListBox;
class ITC_LAND_RscListBox: RscListBox {
	colorText[] = AIFMSGRN;
	colorScrollbar[] = AIFMSGRN;
	colorSelect[] = {0, 0, 0, 1};
	colorSelect2[] = {0, 0, 0, 1};
	colorSelectBackground[] = AIFMSGRN;
	colorSelectBackground2[] = AIFMSGRN;
	//arrowEmpty = "#(argb,8,8,3)color(172/255,255/255,153/255,1)";
	//arrowFull = "#(argb,8,8,3)color(172/255,255/255,153/255,1)";
	tooltipColorText[] = AIFMSGRN;
	tooltipColorBox[] = AIFMSGRN;
	tooltipColorShade[] = {0, 0, 0, 0.65};
	class ListScrollBar: ITC_LAND_ScrollBar	{
		color[] = AIFMSGRN;
		autoScrollEnabled = 1;
	};
};
class RscCombo;
class ITC_LAND_RscComboBox: RscCombo {
	colorText[] = AIFMSGRN;
	colorSelectBackground[] = AIFMSGRN;
	colorScrollbar[] = AIFMSGRN;
	colorPictureSelected[] = AIFMSGRN;
	colorTextRight[] = AIFMSGRN;
	colorSelectRight[] = {0,0,0,1};
	colorSelect2Right[] = {0,0,0,1};
	tooltipColorText[] = AIFMSGRN;
	tooltipColorBox[] = AIFMSGRN;
	arrowEmpty = "itc_land_common\data\arrow_combo_ca.paa";
	arrowFull = "itc_land_common\data\arrow_combo_active_ca.paa";
	colorActive[] = AIFMSGRN;
};

class RscButton;
class ITC_LAND_RscButton: RscButton {
	colorText[] = AIFMSGRN;
	colorDisabled[] = {1,1,1,0.25};
	colorBackground[] = {0,0,0,0.5};
	colorBackgroundDisabled[] = {0,0,0,0.5};
	colorBackgroundActive[] = {0.2,0.2,0.2,1};
	colorBorder[] = AIFMSGRN;
};


