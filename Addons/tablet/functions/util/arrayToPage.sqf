/*
 * Fills out a tablet page based on input key value array
 *
 */
params ["_page", "_input"];
_controls = (configFile >> "itc_land_tablet" >> _page >> "Controls") call BIS_fnc_getCfgSubClasses;
{
  _x params ["_key", "_value"];
  {
    _controlKey = getText (configFile >> "itc_land_tablet" >> "page_bcs_firemission_engage" >> "Controls" >> _x >> "key");
    _setMethod = getText (configFile >> "itc_land_tablet" >> "page_bcs_firemission_engage" >> "Controls" >> _x >> "setMethod");
    if(_controlKey == _key) then {
      _value call _setMethod;
    };
  }forEach _controls;
}forEach _input;
