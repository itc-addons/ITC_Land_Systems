params ["_idc", "_entries", "_selected", "_data"];
lbClear _idc;
{
  lbAdd [_idc, _x];
}forEach _entries;
lbSetCurSel [_idc, _selected];

if(!isNil{_data}) then {
  {
    lbSetData [_idc, _x];
  }forEach _data;
};
