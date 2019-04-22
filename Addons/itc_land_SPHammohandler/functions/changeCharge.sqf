params ["_increment"];
private _vehicle = vehicle ace_player;

//if charge has not been set for whatever reason then set to charge one and increment from there
private _curChargeIndex = _vehicle getVariable ["itc_land_currentChargeIndex",1];

//get the currently selected ammunitions maximum charge
private _selectedMagConfig = (_vehicle getVariable "itc_land_currentMagInfo") # 2;
private _maxChargeIndex = getNumber (_selectedMagConfig >> "itc_land_maxChargeIndex");

//generate new charge value ensuring it is not bellow 1 or above maximum charge
_curChargeIndex = ((_curChargeIndex + _increment) min _maxChargeIndex) max 1;

ctrlSetText [86003, format["CHARGE: %1 / %2", _curChargeIndex, _maxChargeIndex]];

_vehicle setVariable ["itc_land_currentChargeIndex",_curChargeIndex,true];

_curChargeIndex;