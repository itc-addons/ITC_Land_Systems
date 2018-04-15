params["_atab", "_distance", "_heightDelta"];
_atab params ["_table", "_rangeMin", "_rangeMax", "_heightMin", "_heightMax", "_heightStep"];

_solution = [];

// Check if height difference is within table extremes
if (_heightDelta < _heightMin || _heightDelta > _heightMax) exitWith {
    []
};

// Find the over/under _solution columns
_heightIndexLower = floor ((_heightDelta - _heightMin) / _heightStep);
_heightIndexHigher = ceil ((_heightDelta - _heightMin) / _heightStep);

// If the _solution is on a column boundry
if (_heightIndexHigher == _heightIndexLower) then {
    _heightIndexHigher = _heightIndexHigher + 1;
};

// Interpolation factor
_heightFactor = ((_heightDelta - _heightMin) - _heightIndexLower * _heightStep) /
              (_heightIndexHigher * _heightStep - _heightIndexLower * _heightStep);

_distanceNearest = 99999999;
_elevNearestRow = -1;
_elevNextNearestRow = -1;
_sliceNextNearest = [];

// Find closest elevation _solution in the table
for "_i" from 1 to ((count _table) - 2) step 1 do {
    _prevSliceCount = count (_table # (_i-1) # 2);
    _slices = _table # _i # 2;
    _nextSliceCount = count (_table # (_i+1) # 2);

    if ((count _slices) > _heightIndexHigher && _prevSliceCount > _heightIndexHigher && _nextSliceCount > _heightIndexHigher) then {
        _sliceLow = _slices # _heightIndexLower;
        _sliceHigh = _slices # _heightIndexHigher;
        _testSlice = [_sliceLow, _sliceHigh, _heightFactor] call itc_land_ballistics_fnc_interpolate_slices;
        _testDist = _testSlice # 0;

        if (abs(_testDist - _distance) < _distanceNearest) then {
            _distanceNearest = abs(_testDist - _distance);
            _elevNearestRow = _i;
        };
    };
};
if (_elevNearestRow < 1) exitWith {
    []
};

// Find the nearest neighboring _solutions
_sliceNearestLowerBase = _table # (_elevNearestRow-1) # 2;
_sliceNearestLower = [_sliceNearestLowerBase # _heightIndexLower, _sliceNearestLowerBase # _heightIndexHigher, _heightFactor] call itc_land_ballistics_fnc_interpolate_slices;
_sliceNearestHigherBase = _table # (_elevNearestRow+1) # 2;
_sliceNearestHigher = [_sliceNearestHigherBase # _heightIndexLower, _sliceNearestHigherBase # _heightIndexHigher, _heightFactor] call itc_land_ballistics_fnc_interpolate_slices;

_distanceNearestLower = _sliceNearestLower # 0;
_distanceNearestHigher = _sliceNearestHigher # 0;
if (abs(_distanceNearestLower - _distance) < abs(_distanceNearestHigher - _distance)) then {
    _elevNextNearestRow = _elevNearestRow - 1;
    _sliceNextNearest = _sliceNearestLower;
} else {
    _elevNextNearestRow = _elevNearestRow + 1;
    _sliceNextNearest = _sliceNearestHigher;
};

// Check that _solution is within range
if ((_distance < _distanceNearestLower && _distance < _distanceNearestHigher) ||
   (_distance > _distanceNearestLower && _distance > _distanceNearestHigher)) exitWith {
    []
};

_sliceNearestBase = _table # _elevNearestRow # 2;
_sliceNearest = [_sliceNearestBase # _heightIndexLower, _sliceNearestBase # _heightIndexHigher, _heightFactor] call itc_land_ballistics_fnc_interpolate_slices;

_distanceFactor = (_distance - _sliceNearest # 0) / (_sliceNextNearest # 0 - _sliceNearest # 0);

// Find the actual elevations
_elevNearest = _table # _elevNearestRow # 0;
_elevNextNearest = _table # _elevNextNearestRow # 0;

// Find maximum ordnance
_maxOrdNearest = _table # _elevNearestRow # 1;
_maxOrdNextNearest = _table # _elevNextNearestRow # 1;


if (count (_table # 0) >= 7) exitWith {
    // Ignore rocket stuff
    []
};

// Interpolate _solution
_solution =  [
    [_elevNearest, _sliceNearest # 0, _sliceNearest # 2, _sliceNearest # 1, _sliceNearest # 3, _sliceNearest # 4, _maxOrdNearest
    ],
    [_elevNextNearest, _sliceNextNearest # 0, _sliceNextNearest # 2, _sliceNextNearest # 1, _sliceNextNearest # 3, _sliceNextNearest # 4, _maxOrdNextNearest
    ],
    _distanceFactor
] call itc_land_ballistics_fnc_interpolate_slices;

_rs = [round(_solution # 0 *17.77777778), _solution # 2, _solution # 4, _solution # 5, _solution # 6, _solution # 1, _solution # 3];
_rs
