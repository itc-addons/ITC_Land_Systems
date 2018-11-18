<<<<<<< HEAD

=======
>>>>>>> master
//player sideChat "LAUNCH";
private _args = _this # 0;
private _launcher = _args # 0;
private _proj = _args # 6;
private _magazine = _args # 5;
private _projAD = getNumber (configFile >> "CfgAmmo" >> (_args select 4) >> "fuseDistance");	//How far from the launcher should the missile before before the sensor is active

private _proxHelper = getText (configFile >> "CfgMagazine" >> _magazine >> "itc_land_submunition"); //What ammunition class is to be used for the simulated detonation

private _fuzeType = getText (configFile >> "CfgMagazine" >> _magazine >> "itc_land_fuze");
private _fuzeConfig = configFile >> "ITC_Land_CfgFuzes" >> _fuzeType;
private _sensorFOV = getNumber (_fuzeConfig >> "itc_air_sensorFOV"); //What is the sensor's FOV in degrees
private _sensorRAN = getNumber (_fuzeConfig >> _magazine >> "itc_air_sensorRAN"); //What is the range of the sensor - how close does the missile have to get before the proximity fuze is tripped

//player sideChat format ["%1 %2 %3 %4 %5 %6",_launcher,_proj,_projAD,_proxHelper,_sensorFOV,_sensorRAN];
private ["_projPos","_spawnedproj","_nearTargets","_vectorDirMissile","_vectorToTarget","_tgt","_targetAngle"];

//if the missile is alive do the fuse check, if not remove this PFH
if (!isNull _proj) then {
    //drop ["\a3\data_f\Cl_basic","","Billboard",0.25,60,position _proj,[0,0,0],1,1.275,1.0,0.0,[2],[[0,1,0,1]],[0],0.0,2.0,"","",""];
	// proximity check: if there is an air object within sensor range of the projectile
	_nearTargets = nearestObjects [_proj, [], _sensorRAN];
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
<<<<<<< HEAD
};
=======
};
>>>>>>> master
