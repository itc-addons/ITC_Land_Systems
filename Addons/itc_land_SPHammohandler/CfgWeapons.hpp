class CfgWeapons {
	class mortar_155mm_AMOS;
	class itc_land_howitzer_base: mortar_155mm_AMOS {
		class EventHandlers
		{
				class itc_land_sphammohandler
				{
						fired = "_this call itc_land_SPHammoHandler_fnc_firedEH;";
				};
		};
	};
};