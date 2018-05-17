params ["_increment"];

//if charge has not been set for whatever reason then set to charge one and increment from there
if (isNil "itc_land_currentChargeIndex") then { itc_land_currentChargeIndex = 1; };

//get the currently selected ammunitions maximum charge
private _maxChargeIndex = getNumber (itc_land_selectedMagConfig >> "itc_land_maxChargeIndex");

//generate new charge value ensuring it is not bellow 1 or above maximum charge
itc_land_currentChargeIndex = ((itc_land_currentChargeIndex + _increment) min _maxChargeIndex) max 1;

ctrlSetText [86003, format["CHARGE: %1 / %2", itc_land_currentChargeIndex, _maxChargeIndex]];