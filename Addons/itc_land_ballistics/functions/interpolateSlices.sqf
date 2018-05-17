params ["_sliceLow", "_sliceHigh", "_factor"];
_ret = [];
for "_i" from 0 to ((count _sliceLow) - 1) step 1 do {
 _x1 = _sliceLow # _i;
 _x2 = _sliceHigh # _i;
 _ret = _ret + [(_x1 + (_x2 - _x1) * _factor)];
};
_ret
