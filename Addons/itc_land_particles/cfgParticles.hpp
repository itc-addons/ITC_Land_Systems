class CfgCloudlets {
  #include "rockets\smokeTrail.hpp"
  #include "rockets\rocketBlast.hpp"
};

class itc_land_particles_rockets_smokeTrail
{
	class Light1
	{
		simulation = "light";
		type = "FiredLightMed";
		position[] = {0,0,0};
		intensity = 2;
		interval = 0.5;
		lifeTime = -1;
	};
	class MissileEffects1
	{
		simulation = "particles";
		type = "itc_land_particles_rockets_smokeTrail";
		position[] = {0,0,0};
		intensity = 1;
    interval =  0.05;
		lifeTime = 3;
	};
};

class itc_land_particles_rockets_firedBlast
{
	class MLRSFired1
	{
		simulation = "particles";
		type = "MLRSFired1";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 2;
	};
	class MLRSFired1M
	{
		simulation = "particles";
		type = "MLRSFired1M";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 1;
	};
	class MLRSFired1L
	{
		simulation = "particles";
		type = "MLRSFired1L";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.1;
		qualityLevel = 0;
	};
	class CannonFiredDust
	{
		simulation = "particles";
		type = "CircleDustTank";
		position[] = {0,0,0};
		qualityLevel = 2;
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class CannonFiredDustM
	{
		simulation = "particles";
		type = "CircleDustTank";
		position[] = {0,0,0};
		qualityLevel = 1;
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
	class CannonFiredDustL
	{
		simulation = "particles";
		type = "CircleDustTankL";
		position[] = {0,0,0};
		qualityLevel = 0;
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};
};
