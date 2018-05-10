private _vehicle = vehicle ace_player;
private _curMag = (currentMagazine _vehicle);

[_vehicle,_curMag] spawn {
	disableSerialization;

	private _ammoType = getText (itc_land_selectedMagConfig >> "displayNameShort");
	private _charge = str itc_land_currentChargeIndex;
	private _ammoText = format ["%1 CHG: %2", _ammoType,_charge];
	ctrlSetText[86019,_ammoText];

	//Get fuze settings based on type
	//Get fuze description from combobox

	//set rendered string empty. Use switch to generate new rendered string.
	private _fuzeText = "";
	if (isNil "itc_land_fuzeDesc") then { itc_land_fuzeDesc = lbText [86004,itc_land_selectedFuzeIndex]; };
	
	if (isNil "itc_land_fuzeValues") then { itc_land_fuzeValues = 0; };	
	
	switch (itc_land_fuzeMode) do {
		case "pd" : {
			_fuzeText = itc_land_fuzeDesc;
		};
		case "prox" : {
			itc_land_fuzeValues = 15;
			_fuzeText = Format ["%1: %2m",itc_land_fuzeDesc,itc_land_fuzeValues];
		};
		case "time" : {
			itc_land_fuzeTime = parseNumber(ctrlText 86006); 
			itc_land_fuzeValues = itc_land_fuzeTime;
			_fuzeText = Format ["%1: %2s",itc_land_fuzeDesc,itc_land_fuzeValues];		
		};
		case "delay" : {
			itc_land_fuzeValues = 0.005;
			_fuzeText = itc_land_fuzeDesc;	
		};
	};
	//Render string to output field.
	ctrlSetText [86018, _fuzeText];

	//Get guidance inputs
	itc_land_guidance = getArray (itc_land_selectedMagConfig >> "itc_land_guidance");
	private _guidanceText = "-- N/A --";
	if (count itc_land_guidance > 0) then {
		switch (itc_land_guidance # 0) do {
			case "gps_inertial" : {
				itc_land_guidance_targetGrid = ctrlText 86013;
				//player sidechat itc_land_guidance_targetGrid;
				private _targetPos = [itc_land_guidance_targetGrid,true] call CBA_fnc_mapGridToPos;
				//player sidechat str _targetPos;
				itc_land_guidance_targetAlt = parseNumber(ctrlText 86015);
				_targetPos set [2,itc_land_guidance_targetAlt];
				//player sidechat str _targetPos;	
				itc_land_guidance_targetPos = _targetPos;
				_guidanceText = format["%1 -- %2",itc_land_guidance_targetGrid,itc_land_guidance_targetAlt];
				
			};
			case "laser_coded" : {
				private _laserCode = parseNumber(ctrlText 86008);
				if ( [_laserCode] call itc_land_common_fnc_isLaserCode ) then {
					itc_land_guidance_laserCode = _laserCode;
					//player sidechat str itc_land_guidance_laserCode;
				} else {
					ctrlSetText [86008,"1111"];
					itc_land_guidance_laserCode = 1111;
					//player sidechat str itc_land_guidance_laserCode;
				};
				_guidanceText = format["CODE: %1",itc_land_guidance_laserCode];
			};
			default { 	
				//Set guidance output as none.
				_guidanceText = "-- N/A --";

			};
			
		};
	};
	ctrlSetText [86017, _guidanceText];



	//ctrlEnable [86009, false]; //disable loading/unloading
	//ctrlSetText [86009, "UNLOAD"];
	//ctrlEnable [86009, true];
	ctrlEnable [86010, true];

	_ctrl = ((findDisplay 86000) displayCtrl 86010);
	ctrlSetFocus _ctrl;
	itc_land_sphloadersettings = [
		[
			_ammoText,
			itc_land_selectedMagClass,
			itc_land_currentChargeIndex
			
		],
		[
			_fuzeText,
			itc_land_fuzeMode,
			itc_land_fuzeValues
		],
		[
			_guidanceText,
			itc_land_guidance # 0
		]
	];
};