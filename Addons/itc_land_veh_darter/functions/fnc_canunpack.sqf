params ["_unit"];

private _items = items _unit;

if ((
	('ITC_Land_B_AR2i_Packed' in _items) ||
	('ITC_Land_O_AR2i_Packed' in _items) ||
	('ITC_Land_I_AR2i_Packed' in _items) ||

	('ITC_Land_B_UAV_Packed' in _items) ||
	('ITC_Land_O_UAV_Packed' in _items) ||
	('ITC_Land_I_UAV_Packed' in _items)
) && ((vehicle _unit) isKindOf 'Man')) exitWith {
	true
};

false
 