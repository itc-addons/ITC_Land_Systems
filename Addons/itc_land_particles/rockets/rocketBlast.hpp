class Default;
class MLRSFired1: Default
{
	interval = 0.0003;
	circleRadius = 0;
	circleVelocity[] = {0,0,0};
	particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
	particleFSNtieth = 16;
	particleFSIndex = 12;
	particleFSFrameCount = 13;
	particleFSLoop = 0;
	angleVar = 360;
	animationName = "";
	particleType = "Billboard";
	timerPeriod = 1;
	lifeTime = 5;
	moveVelocity[] = {"5*directionX","5*directionY","5*directionZ"};
	rotationVelocity = 1;
	weight = 1.22;
	volume = 1;
	rubbing = 0.4;
	size[] = {1,15,30};
	color[] = {{0.5,0.5,0.5,0.0.8},{0.5,0.5,0.5,0.6},{0.5,0.5,0.5,0.4},{0.5,0.5,0.5,0.2},{0.5,0.5,0.5,0.1}};
	animationSpeed[] = {1000};
	randomDirectionPeriod = 0.1;
	randomDirectionIntensity = 0.1;
	onTimerScript = "";
	beforeDestroyScript = "";
	animationSpeedCoef = 1;
	colorCoef[] = {1,1,1,1};
	sizeCoef = 1;
	position[] = {"positionX","positionY","positionZ"};
	lifeTimeVar = 1;
	positionVar[] = {0.5,0.5,0.5};
	MoveVelocityVar[] = {3.5,3.5,3.5};
	rotationVelocityVar = 10;
	sizeVar = 0;
	colorVar[] = {0,0,0,0};
	randomDirectionPeriodVar = 0;
	randomDirectionIntensityVar = 0;
};
class MLRSFired1M: MLRSFired1
{
	interval = 0.0006;
	lifeTime = 4;
	size[] = {1.2,9};
	lifeTimeVar = 0.6;
};
class MLRSFired1L: MLRSFired1
{
	interval = 0.0015;
	lifeTime = 2.5;
	size[] = {1.2,9};
	lifeTimeVar = 0.5;
};
