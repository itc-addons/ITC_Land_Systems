/*
 * Author: Toadball
 * Fired event for ITC SAM systems with SAM35 fuzed munitions
 */
<<<<<<< HEAD
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_gunner"];
if (!local _gunner) exitWith {};

[
   itc_land_veh_weapons_fnc_fuzeProxFOV, 
   0,
   [_this]
] call CBA_fnc_addPerFrameHandler;
=======
//diag_log format ["LAUNCH: SAM35 Fuze START"];
params ["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile", "_launcher"];
if (!local _launcher) exitWith {};
//diag_log format ["LAUNCH: SAM35 Fuze Active"];
private _projAD = getNumber (configFile >> "CfgAmmo" >> _ammo >> "fuseDistance");	//How far from the launcher should the missile before before the sensor is active
private _proxHelper = getText (configFile >> "CfgMagazines" >> _magazine >> "itc_land_submunition"); //What ammunition class is to be used for the simulated detonation
private _fuzeType = getText (configFile >> "CfgMagazines" >> _magazine >> "itc_land_fuze");
private _fuzeConfig = configFile >> "ITC_Land_CfgFuzes" >> _fuzeType;
private _sensorFOV = getNumber (_fuzeConfig >> "proxFOV"); //What is the sensor's FOV in degrees
private _sensorRAN = getNumber (_fuzeConfig >> "proxRAN"); //What is the range of the sensor - how close does the missile have to get before the proximity fuze is tripped

//diag_log format ["PARAMS // %1 // %2 // %3 // %4 // %5 // %6 // %7 // %8 //",_launcher,_projectile,_projAD,_fuzeType,_fuzeConfig,_sensorFOV,_sensorRAN,_proxHelper];
[
	{
		private ["_projPos","_spawnedproj","_nearTargets","_vectorDirMissile","_vectorToTarget","_tgt","_targetAngle"];

		(_this select 0) params ["_launcher","_projectile","_projAD","_sensorFOV","_sensorRAN","_proxHelper"];

		//if the missile is alive do the fuse check, if not remove this PFH
		if (!isNull _projectile) then {
			//drop ["\a3\data_f\Cl_basic","","Billboard",0.25,60,position _projectile,[0,0,0],1,1.275,1.0,0.0,[2],[[0,1,0,1]],[0],0.0,2.0,"","",""];
			// proximity check: if there is an air object within sensor range of the projectile
			_nearTargets = nearestObjects [_projectile, ["Air"], _sensorRAN];
			if (_launcher distance _projectile > _projAD  &&  count (_nearTargets) > 0) then {
				_tgt = (_nearTargets) select 0; //get closest air object in sensor range
				//diag_log format ["SEARCHING: TARGET = %1 @ %2m",_tgt,(_projectile distance _tgt)];
				
				//check object is in sensor's FOV, if it is, projectile go boom
				_vectorDirMissile = vectorDir _projectile;
				_vectorToTarget = (getposASL _projectile) vectorFromTo (getposASL _tgt);
				_targetAngle = acos (_vectorDirMissile vectorCos _vectorToTarget);	
				
				//diag_log format ["Target angle: %3", _vectorDirMissile, _vectorToTarget, _targetAngle];
			    //diag_log format ["SENSOR // %1 // %2 // %3 // %4 //",_projectile,_sensorFOV,_sensorRAN,_proxHelper];
				
				
				if (_targetAngle > (0+_sensorFOV) && _targetAngle < (180-_sensorFOV)) then {
					_projPos = getPos _projectile;
					deleteVehicle _projectile;
					if (isServer) then {
						_spawnedproj = _proxHelper createVehicle _projPos;
						//drop ["\a3\data_f\Cl_basic","","Billboard",0.25,60,position _projectile,[0,0,0],1,1.275,1.0,0.0,[2],[[1,0,0,1]],[0],0.0,2.0,"","",""];
					};
					//diag_log format ["DET: %1 @ %2",_projectile,diag_ticktime];
				};
			} else {};

		} else {
			//diag_log format ["MISSILE LOST: SAM35 Fuze Terminating"];
			[_this select 1] call CBA_fnc_removePerFrameHandler; //removes prox fuse PFH
		};
	// PFH FNC End
	}, 0, [_launcher,_projectile,_projAD,_sensorFOV,_sensorRAN,_proxHelper]
] call CBA_fnc_addPerFrameHandler;

>>>>>>> master
