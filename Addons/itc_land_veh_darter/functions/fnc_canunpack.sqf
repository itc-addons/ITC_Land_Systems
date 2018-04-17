params ["_unit"];

private _items = items _unit;

if ((
	('TB_B_AR2i_Packed' in _items) ||
	('TB_O_AR2i_Packed' in _items) ||
	('TB_I_AR2i_Packed' in _items) ||

	('TB_B_UAV_Packed' in _items) ||
	('TB_O_UAV_Packed' in _items) ||
	('TB_I_UAV_Packed' in _items)
) && ((vehicle _unit) isKindOf 'Man')) exitWith {
	true
};

false
 