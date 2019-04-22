private _vehicle = vehicle ace_player;
private _curMag = (currentMagazine _vehicle);

_vehicle setVariable ["itc_land_ammoHandler_status",[1,0,"WAITING"],true]; 
[] call itc_land_SPHammoHandler_fnc_updateStatus;

[_vehicle,_curMag] spawn {
	params["_vehicle","_curMag"];
	
	disableSerialization;
	
	private _curMagInfo = _vehicle getVariable "itc_land_currentMagInfo";
	private _selectedMagClass = _curMagInfo # 1;
	private _selectedMagConfig = _curMagInfo # 2;
	
	private _ammoType = getText (_selectedMagConfig >> "displayNameShort");
	private _charge = str (_vehicle getVariable ["itc_land_currentChargeIndex",1]);
	private _ammoText = format ["%1 CHG: %2", _ammoType,_charge];
	ctrlSetText[86019,_ammoText];

	//Get fuze settings based on type
	//Get fuze description from combobox
	private _fuze  = getText (configFile >> "CfgMagazines" >> _selectedMagClass >> "itc_land_fuze");
	//set rendered string empty. Use switch to generate new rendered string and setValues.
	private _fuzeText = "";
	
	private _selectedFuzeIndex = _vehicle getVariable ["itc_land_selectedFuzeIndex",0];
	private _fuzeDesc = _vehicle getVariable ["itc_land_selectedFuzeDesc",(lbText [86004,_selectedFuzeIndex])];
	private _fuzeValues = _vehicle getVariable ["itc_land_fuzeValues",0];
	private _fuzeMode = _vehicle getVariable ["itc_land_selectedFuzeMode","pd"];
	
	switch (_fuzeMode) do {
		case "pd" : {
			_fuzeText = _fuzeDesc;
		};
		case "prox" : {
			private _proxHOB = getNumber (configFile >> "ITC_Land_CfgFuzes" >> _fuze >> "proxHOB");
			_vehicle setVariable ["itc_land_fuzeValues",_proxHOB,true];
			_fuzeText = Format ["%1: %2m",_fuzeDesc,_proxHOB];
		};
		case "time" : {
			private _fuzeTime = parseNumber(ctrlText 86006); 
			_vehicle setVariable ["itc_land_fuzeTime", _fuzeTime, true]; //this is used for UI stuff
			_vehicle setVariable ["itc_land_fuzeValues", _fuzeTime, true]; //this is for fuze stuff
			_fuzeText = Format ["%1: %2s",_fuzeDesc,_fuzeTime];		
		};
		case "delay" : {
			_vehicle setVariable ["itc_land_fuzeValues",0.005, true];
			_fuzeText = _fuzeDesc;	
		};
	};
	_fuzeValues = _vehicle getVariable ["itc_land_fuzeValues",0]; 
	//Render string to output field.
	ctrlSetText [86018, _fuzeText];

	//Get guidance inputs
	//itc_land_guidance = getArray (_selectedMagConfig >> "itc_land_guidance");
	private _guidance = getArray (_selectedMagConfig >> "itc_land_guidance");
	
	private _guidanceText = "-- N/A --";
	if (count _guidance > 0) then {
		switch (_guidance # 0) do {
			case "gps_inertial" : {
				private _targetGrid = ctrlText 86013;
				_vehicle setVariable ["itc_land_guidance_targetGrid", _targetGrid, true];

				private _targetPos = [_targetGrid,true] call CBA_fnc_mapGridToPos;
				
				private _targetAlt = parseNumber(ctrlText 86015);
				_vehicle setVariable ["itc_land_guidance_targetAlt", _targetAlt, true];
				_targetPos set [2,(_targetAlt  - ace_common_mapAltitude)];

				_vehicle setVariable ["itc_land_guidance_targetPos", _targetPos, true];
				_guidanceText = format["%1 -- %2",_targetGrid,_targetAlt];
				
			};
			case "laser_coded" : {
				private _laserCode = parseNumber(ctrlText 86008);
				if ( !([_laserCode] call itc_land_common_fnc_isLaserCode) ) then {
					_laserCode = 1111; 
					ctrlSetText [86008,"1111"];
				};
				_vehicle setVariable ["itc_land_guidance_laserCode", _laserCode, true];
				_guidanceText = format["CODE: %1",_laserCode];
			};
			default { 	
				//Set guidance output as none.
				_guidanceText = "-- N/A --";

			};
			
		};
	};
	ctrlSetText [86017, _guidanceText];

	//round count
	private _roundCount = parseNumber(ctrlText 86022);
	//set limit of rounds to load:
	_vehicle setVariable ["itc_land_roundCount", _roundCount, true];
	//reset count of fired rounds
	_vehicle setVariable ["itc_land_roundsFired", 0, true];
	if (_roundCount >= 1) then {
		ctrlSetText [86020, str _roundCount];	
	} else {
		ctrlSetText [86020,"-- N/A --"];	
	};
	
	//ctrlEnable [86009, false]; //disable loading/unloading
	//ctrlSetText [86009, "UNLOAD"];
	//ctrlEnable [86009, true];
	ctrlEnable [86010, true];

	_ctrl = ((findDisplay 86000) displayCtrl 86010);
	ctrlSetFocus _ctrl;
	private _settings = [
		[
			_ammoText,
			_selectedMagClass,
			_vehicle getVariable ["itc_land_currentChargeIndex",1],
			_roundCount
		],
		[
			_fuzeText,
			_fuzeMode,
			_fuzeValues
		],
		[
			_guidanceText,
			_guidance # 0
		]
	];
	_vehicle setVariable ["itc_land_sphloadersettings", _settings, true];
};