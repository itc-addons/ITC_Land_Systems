#define POSXADJUST -0.04675
#define POSYADJUST -0.065
#define WSHADJUST 0.04
#define WSWADJUST 0.125

class itc_land_tablet {
	idd = 32562;
  controlsBackground[] = {
      workspace_background,
      workspace_header_bar,
      sidebar_background,
			screen_home_lines,
      screen_image,

			page_home_list,

			page_spg_controls,
			page_spg_status,
			page_bcs_settings,
			page_bcs_setup,
			page_bcs_locations,
			page_bcs_firemission_new,
			page_bcs_firemission_engage,
			page_bcs_firemission_solution,
			page_bcs_firemission_adjust
  };
  objects[] = { };
  controls[]=
  {
    header1,
    header2,
		workspace_header,

    sidebar_button1,
    sidebar_button2,
    sidebar_button3,
    sidebar_button4,
    sidebar_button5,
		fire_mission_list,

    app1,
    app2,
    app3,
    app4
  };
  class workspace_header_bar: ITC_ARTY_RscText {
    idc = 15103;
    x = (0.396875 + POSXADJUST) * safezoneW + safezoneX;
    y = (0.247 + POSYADJUST) * safezoneH + safezoneY;
    w = (0.299062 + WSWADJUST) * safezoneW;
    h = 0.044 * safezoneH;
    colorBackground[] = {0.1,0.1,0.1,1};
    colorActive[] = {0.1,0.1,0.1,1};

  };
	class workspace_header: ITC_ARTY_RscText {
		idc = 15104;
		text = "Workspace Header";
		x = (0.402031 + POSXADJUST) * safezoneW + safezoneX;
		y = 0.1825 * safezoneH + safezoneY;
		w = (0.299062 + WSWADJUST) * safezoneW;
		h = 0.044 * safezoneH;

		sizeEx = 1.5 * GUI_GRID_H;
	};
  class header1: ITC_ARTY_RscText {
    idc = 15106;
    text = "FDC SUITE";
    x = (0.31+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.26+ POSYADJUST) * safezoneH + safezoneY;
    w = 0.0928125 * safezoneW;
    h = 0.022 * safezoneH;

    sizeEx = 1.75 * GUI_GRID_H;
  };
  class header2: ITC_ARTY_RscText {
    idc = 15105;
    text = "ILS - AIFMS";
    x = (0.31+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.285+ POSYADJUST) * safezoneH + safezoneY;
    w = 0.0928125 * safezoneW;
    h = 0.022 * safezoneH;

    sizeEx = 1.25 * GUI_GRID_H;
  };
  class screen_image: ITC_ARTY_RscPicture
  {
      idc = 15107;
      text = "\itc_land_tablet\UI\screen.paa";
			h = 0.86*SafeZoneW;
			w = 0.64*SafeZoneW;
			x = 0.5-((0.64*SafeZoneW)/2);
			y = 0.5-((1.03*SafeZoneW)/2);
			style = ST_PICTURE;
  };
  class screen_home_lines: ITC_ARTY_RscPicture
  {
      idc = 15208;
      text = "\itc_land_tablet\UI\home-lines.paa";
			h = 0.86*SafeZoneW;
			w = 0.64*SafeZoneW;
			x = 0.5-((0.64*SafeZoneW)/2);
			y = 0.5-((1.03*SafeZoneW)/2);
			style = ST_PICTURE;
  };
  class sidebar_background: ITC_ARTY_RscText {
    idc = 15101;
    x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.247+ POSYADJUST) * safezoneH + safezoneY;
    w = 0.0928125 * safezoneW;
    h = (0.506 + WSHADJUST) * safezoneH;
    colorBackground[] = {0.1,0.1,0.1,1};
    colorActive[] = {0.1,0.1,0.1,1};

  };
  class workspace_background: ITC_ARTY_RscText {
    idc = 15102;
    x = (0.396875+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.247+ POSYADJUST) * safezoneH + safezoneY;
    w = (0.299062 + WSWADJUST) * safezoneW;
    h = (0.506 + WSHADJUST) * safezoneH;
    colorBackground[] = {0.125,0.125,0.125,1};
    colorActive[] = {0.125,0.125,0.125,1};
  };
  class sidebar_button1: ITC_ARTY_RscButton {
    idc = 15108;
    text = "Page 1";
    x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.313+ POSYADJUST) * safezoneH + safezoneY;
    w = 0.0928125 * safezoneW;
    h = 0.022 * safezoneH;
    colorBackground[] = {0,0,0,0.9};
    colorActive[] = {0.1,0.1,0.1,0.9};
		action = "[""side1""] call itc_land_tablet_fnc_interact";
  };
  class sidebar_button2: ITC_ARTY_RscButton {
    idc = 15109;
    text = "Page 2";
    x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.335+ POSYADJUST) * safezoneH + safezoneY;
    w = 0.0928125 * safezoneW;
    h = 0.022 * safezoneH;
    colorBackground[] = {0,0,0,0.9};
    colorActive[] = {0.1,0.1,0.1,0.9};
		action = "[""side2""] call itc_land_tablet_fnc_interact";
  };
  class sidebar_button3: ITC_ARTY_RscButton {
    idc = 15110;
    text = "Page 3";
    x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.357+ POSYADJUST) * safezoneH + safezoneY;
    w = 0.0928125 * safezoneW;
    h = 0.022 * safezoneH;
    colorBackground[] = {0,0,0,0.9};
    colorActive[] = {0.1,0.1,0.1,0.9};
		action = "[""side3""] call itc_land_tablet_fnc_interact";
  };
  class sidebar_button4: ITC_ARTY_RscButton {
    idc = 15111;
    text = "Page 4";
    x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
    y = (0.379+ POSYADJUST) * safezoneH + safezoneY;
    w = 0.0928125 * safezoneW;
    h = 0.022 * safezoneH;
    colorBackground[] = {0,0,0,0.9};
    colorActive[] = {0.1,0.1,0.1,0.9};
		action = "[""side4""] call itc_land_tablet_fnc_interact";
  };
  class sidebar_button5: ITC_ARTY_RscButton {
    idc = 15112;
    text = "Page 5";
		x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
		y = (0.445+ POSYADJUST) * safezoneH + safezoneY;
		w = 0.0928125 * safezoneW;
		h = 0.044 * safezoneH;
    colorBackground[] = {0,0,0,0.9};
    colorActive[] = {0.1,0.1,0.1,0.9};
		action = "[""side5""] call itc_land_tablet_fnc_interact";
  };
	class fire_mission_list: ITC_ARTY_RscListbox {
		idc = 15114;
		x = (0.304062+ POSXADJUST) * safezoneW + safezoneX;
		y = (0.5+ POSYADJUST) * safezoneH + safezoneY;
		w = 0.0928125 * safezoneW;
		h = 0.154 * safezoneH;
		colorBackground[] = {0,0,0,0.9};
		colorActive[] = {0,0,0,0.9};
		onLBSelChanged = "[""sideList""] call itc_land_tablet_fnc_appInteract";
	};
	class app1: ITC_ARTY_RscButton
	{
	  idc = 15600;
	  x = 0.200937 * safezoneW + safezoneX;
	  y = 0.39 * safezoneH + safezoneY;
	  w = 0.0257812 * safezoneW;
	  h = 0.044 * safezoneH;
	  colorBackground[] = {-1,-1,-1,0};
    colorActive[] = {-1,-1,-1,-1};
		colorBackgroundActive[] = {-1,-1,-1,-1};
		colorFocused[] = {-1,-1,-1,-1};
		action = "[""app"", 0] call itc_land_tablet_fnc_interact";
	};
	class app2: ITC_ARTY_RscButton
	{
    idc = 15601;
    x = 0.200937 * safezoneW + safezoneX;
    y = 0.434 * safezoneH + safezoneY;
    w = 0.0257812 * safezoneW;
    h = 0.055 * safezoneH;
    colorBackground[] = {-1,-1,-1,0};
    colorActive[] = {-1,-1,-1,-1};
		colorBackgroundActive[] = {-1,-1,-1,-1};
		colorFocused[] = {-1,-1,-1,-1};
		action = "[""app"", 1] call itc_land_tablet_fnc_interact";
	};
	class app3: ITC_ARTY_RscButton
	{
    idc = 15602;
    x = 0.200937 * safezoneW + safezoneX;
    y = 0.489 * safezoneH + safezoneY;
    w = 0.0257812 * safezoneW;
    h = 0.044 * safezoneH;
    colorBackground[] = {-1,-1,-1,0};
    colorActive[] = {-1,-1,-1,-1};
		colorBackgroundActive[] = {-1,-1,-1,-1};
		colorFocused[] = {-1,-1,-1,-1};
		action = "[""app"", 2] call itc_land_tablet_fnc_interact";
	};
	class app4: ITC_ARTY_RscButton
	{
    idc = 15603;
    x = 0.200937 * safezoneW + safezoneX;
    y = 0.533 * safezoneH + safezoneY;
    w = 0.0257812 * safezoneW;
    h = 0.055 * safezoneH;
    colorBackground[] = {-1,-1,-1,0};
    colorActive[] = {-1,-1,-1,0};
		colorBackgroundActive[] = {-1,-1,-1,-1};
		colorFocused[] = {-1,-1,-1,0};
		action = "[""app"", 3] call itc_land_tablet_fnc_interact";
	};

  #include "workspaces\home\appList.hpp"

  #include "workspaces\spg\fcs.hpp"
  #include "workspaces\spg\status.hpp"

  #include "workspaces\bcs\settings.hpp"
  #include "workspaces\bcs\setup.hpp"
  #include "workspaces\bcs\locStores.hpp"
  #include "workspaces\bcs\newFiremission.hpp"
  #include "workspaces\bcs\engageFiremission.hpp"
  #include "workspaces\bcs\solutionFiremission.hpp"
  #include "workspaces\bcs\adjustFiremission.hpp"
};
