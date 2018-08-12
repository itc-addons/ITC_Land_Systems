//Proximity fuse for SAMs.
//by Toadball & VKing
//27-MAR-2015
//Updated: 27-MAR-2018 
//For: ITC-AIR-IMPROVEMENTS
//Toadball: This shit has been working fine for 3 sodding years, and now I have had to change shit because REASONS.YAX

private ["_launcher","_proj","_fuse","_projAD","_proxHelper","_sensorFOV","_sensorRAN"];

//player sideChat "LAUNCH";

if ((getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "itc_air_hasProx")) > 0) then {

	_launcher = _this select 0;
	_proj = _this select 6;
	_projAD = getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "fuseDistance");	//How far from the launcher should the missile before before the sensor is active
	_proxHelper = getText (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "itc_air_proxHelper");		//What ammunition class is to be used for the simulated detonation
	_sensorFOV = getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "itc_air_sensorFOV");	//What is the sensor's FOV in degrees
	_sensorRAN = getNumber (configFile >> "CfgAmmo" >> ( _this select 4 ) >> "itc_air_sensorRAN");	//What is the range of the sensor - how close does the missile have to get before the proximity fuze is tripped
	
	
	
	
	//player sideChat format ["%1 %2 %3 %4 %5 %6",_launcher,_proj,_projAD,_proxHelper,_sensorFOV,_sensorRAN];
	
	_fuse = [//PFH FNC Start
		{
			private ["_projPos","_spawnedproj","_nearTargets","_vectorDirMissile","_vectorToTarget","_tgt","_targetAngle"];

			(_this select 0) params ["_launcher","_proj","_projAD","_sensorFOV","_sensorRAN","_proxHelper"];

			//if the missile is alive do the fuse check, if not remove this PFH
			if (!isNull _proj) then {
				//drop ["\a3\data_f\Cl_basic","","Billboard",0.25,60,position _proj,[0,0,0],1,1.275,1.0,0.0,[2],[[0,1,0,1]],[0],0.0,2.0,"","",""];
				// proximity check: if there is an air object within sensor range of the projectile
				_nearTargets = nearestObjects [_proj, ["Air"], _sensorRAN];
				if (_launcher distance _proj > _projAD  &&  count (_nearTargets) > 0) then {
					_tgt = (_nearTargets) select 0; //get closest air object in sensor range

					//diag_log format ["Timer 1: %1",diag_ticktime];
					
					//check object is in sensor's FOV, if it is, projectile go boom
					_vectorDirMissile = vectorDir _proj;
					_vectorToTarget = (getposASL _proj) vectorFromTo (getposASL _tgt);
					_targetAngle = acos (_vectorDirMissile vectorCos _vectorToTarget);
					
					//diag_log format ["Timer 2: %1",diag_ticktime];
					
					//hintsilent format ["Target angle: %3", _vectorDirMissile, _vectorToTarget, _targetAngle];
					//diag_log format ["Target angle: %3", _vectorDirMissile, _vectorToTarget, _targetAngle];
				  
					//diag_log format ["Timer 3: %1",diag_ticktime];
					
					
					if (_targetAngle > 60 && _targetAngle < 120) then {
						_projPos = getPos _proj;
						deleteVehicle _proj;
						if (isServer) then {
							_spawnedproj = _proxHelper createVehicle _projPos;
							//drop ["\a3\data_f\Cl_basic","","Billboard",0.25,60,position _proj,[0,0,0],1,1.275,1.0,0.0,[2],[[1,0,0,1]],[0],0.0,2.0,"","",""];
						};
						//diag_log format ["Detonation: %1",diag_ticktime];
					};
				};

			} else {
				[_this select 1] call CBA_fnc_removePerFrameHandler; //removes prox fuse PFH
			};
		// PFH FNC End
		}, 0, [_launcher,_proj,_projAD,_sensorFOV,_sensorRAN,_proxHelper]
	] call CBA_fnc_addPerFrameHandler;
};