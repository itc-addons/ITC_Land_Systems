class RocketPods;
class rockets_230mm_GAT : RocketPods {
  class Mode_16;
};
class itc_land_230mm_mlrs : rockets_230mm_GAT {
  modes[] = {"Mode_16"};
  magazines[] = {"itc_land_m230hex_12rnd","itc_land_m230hex_6rnd"};
  class Mode_16 : Mode_16 {
    displayName = "MLRS";
    artilleryCharge = 1;
		reloadTime = 0.2;
  };
	class GunParticles
	{
		class FirstEffect
		{
			effectName = "itc_land_particles_rockets_firedBlast";
			positionName = "Konec hlavne";
			directionName = "Usti hlavne";
		};
	};
};
