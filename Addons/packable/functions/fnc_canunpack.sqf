params ["_unit"];
if (!((vehicle _unit) isKindOf 'Man')) exitWith { false };

private _items = [_unit] call CBA_fnc_uniqueUnitItems;
private _check = _items findIf { "itc_land_packableItem" in ([(configFile >> "CfgWeapons" >> _x), true] call BIS_fnc_returnParents) };
if (_check < 0) exitWith { false };

true;
