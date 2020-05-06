class CfgWeapons {

  //class missiles_titan;
  //class itc_land_spikeLR_atgm: missiles_titan {
  //  magazines[] = {"itc_land_spikeLR_2rnd","itc_land_spikeLR_1rnd"};
  //};

	//class launch_I_Titan_short_F;
	//class PSZ_Spike_LR: launch_I_Titan_short_F {
  class launch_B_Titan_F;
  class itc_land_spikeLR: launch_B_Titan_F {
    displayName = "Spike LR";
    displayNameShort = "Spike LR";
    //hiddenSelectionsTextures[] = {"A3\Weapons_F_Beta\Launchers\Titan\Data\Launcher_CO.paa","A3\Weapons_F_Beta\Launchers\Titan\Data\TubeL_CO.paa"};
    picture = "\A3\Weapons_F_Enoch\Launchers\Titan\Data\UI\icon_launch_B_Titan_olive_F_ca.paa";
    hiddenSelectionsTextures[] = {"\a3\weapons_f_beta\launchers\titan\data\launcher_indp_co.paa","\A3\Weapons_F_Enoch\Launchers\Titan\Data\launch_B_Titan_olive_F_02_co.paa"};    
    magazines[] = {"itc_land_spikeLR_1rnd"};
    class EventHandlers {
        class itc_land_spike {
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
