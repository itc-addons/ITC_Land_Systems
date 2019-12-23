//UI Stuff:
class RscText;
class RscFrame;
class RscListbox;
class RscListNBox;
class RscPicture;
class ScrollBar;
class RscControlsGroup;
class RscControlsGroupNoScrollbars;


class RscActiveText;
class RscStructuredText;

class RscInGameUI {
  class RscUnitInfo;

	#include "ui\ITC_Land_RscGunnerSightSPH.hpp"
	#include "ui\ITC_Land_RscGunnerSightBasic.hpp"
	#include "ui\ITC_Land_RscAltGunnerSightSPH.hpp"
	#include "ui\ITC_Land_RscGunnerSightMLRS.hpp"
	#include "ui\ITC_Land_RscGunnerSightZamakMRLi.hpp"
	#include "ui\ITC_Land_RscIGS_SPH.hpp"

  class RscOptics_strider_commander {
    class CA_IGUI_elements_group;
  };
  #include "ui\ITC_Land_RscOptics_strider_commander.hpp"

  class RscOptics_UAV_gunner: RscUnitInfo {
		class CA_IGUI_elements_group;
	};
  #include "ui\ITC_Land_RscOptics_UAV_gunner.hpp"
};
