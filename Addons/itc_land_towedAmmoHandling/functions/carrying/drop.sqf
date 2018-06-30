params ["_shell"];
itc_land_carrying = false;
/*
_position = getPos _shell;
_mortar = _position nearestObject "ITC_M252";
if(!isNil{_mortar}) then {
    _loadPos = _mortar modelToWorld (_mortar selectionPosition 'usti hlavne');
    if(_loadPos distance _shell < 0.5 && count magazines _mortar == 0) exitWith {
        _magazine = getText(configFile >> "CfgVehicles" >> (typeOf _shell) >> "artyMagazineType");
        deleteVehicle _shell;
        _charge = "0";
        if(!isNil{_shell getVariable "ITC_Charge"}) then {
            _charge = _shell getVariable "ITC_Charge";
        };
        _mortar setVariable ["itc_loaded_charge", _charge];
        _mortar addMagazine _magazine;
    };
};
*/
