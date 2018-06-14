class page_cbr_settings:itc_land_workspace
{
  idc = 13600;
  class Controls {
    class cbr_settings_id_text: ITC_LAND_RscText
    {
    	idc = 10006;
    	text = "COBRA Datalink ID"; //--- ToDo: Localize;
    	x = 0.360781 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0721875 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class cbr_settings_id_edit: ITC_LAND_RscEdit
    {
    	idc = 10400;
    	x = 0.438125 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.0309375 * safezoneW;
    	h = 0.022 * safezoneH;
    };
    class cbr_settings_id_button: ITC_LAND_RscButton
    {
    	idc = 10609;
    	text = "connect"; //--- ToDo: Localize;
    	x = 0.474219 * safezoneW + safezoneX;
    	y = 0.247 * safezoneH + safezoneY;
    	w = 0.04125 * safezoneW;
    	h = 0.022 * safezoneH;
      action = "[""cobraConnect""] call itc_land_tablet_fnc_pageInteract";
    };
  };
};
