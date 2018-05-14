class CfgPatches {
	class itc_land_tablet {
		author = "ITC Addons Team";
		authors[] = {"ToadBall","Yax","VKing"};
		requiredaddons[] = {"A3_Weapons_F","itc_land_common","itc_land_bcs","ace_interaction","ace_interact_menu","ace_common"};
		requiredversion = 1.8;
		units[] = {};
		weapons[] = {"itc_land_tablet_spg"};
		magazines[] = {};
	};
};


class ITC_LAND_RscFrame;
class ITC_LAND_RscText;
class ITC_LAND_RscEdit;
class ITC_LAND_RscStructuredText;
class ITC_LAND_RscPicture;
class ITC_LAND_Workspace;
class ITC_LAND_ScrollBar;
class ITC_LAND_RscListBox;
class ITC_LAND_RscComboBox;
class ITC_LAND_RscButton;


//#include "UIconfig\ControlBaseClasses.hpp"
#include "UIconfig\tablet.hpp"

#include "config\cfgVehicles.hpp"
#include "config\cfgWeapons.hpp"
#include "config\cfgFunctions.hpp"
#include "config\cfgMisc.hpp"
