class CfgWeapons {

  class missiles_titan;
  class itc_land_spikeLR_atgm: missiles_titan {
    magazines[] = {"itc_land_spikeLR_2rnd","itc_land_spikeLR_1rnd"};
  };

	class launch_I_Titan_short_F;
	class PSZ_Spike_LR: launch_I_Titan_short_F {
    class EventHandlers
    {
        class itc_land_spike
        {
            fired = "_this call itc_land_spike_fnc_fired;";
        };
    };
    canLock = 0;
		weaponInfoType = "ITC_Land_SpikeOptics";
	  modelOptics="\A3\Weapons_F\empty.p3d";
		class OpticsModes {
			class StepScope {
				cameraDir = "look";
					discretefov[] = {0.08333,0.04167};
					discreteInitIndex = 0;
					distanceZoomMax = 300;
					distanceZoomMin = 300;
					memoryPointCamera = "eye";
					opticsDisablePeripherialVision = 1;
					opticsFlare = 0;
					opticsID = 1;
					opticsPPEffects[] = {"OpticsCHAbera1","OpticsBlur1"};
					opticsZoomInit = 0.08333;
					opticsZoomMax = 0.04167;
					opticsZoomMin = 0.08333;
					thermalMode[] = {0,1};
					useModelOptics = 1;
					visionMode[] = {"Normal","Ti"};
			};
		};
  };
};
