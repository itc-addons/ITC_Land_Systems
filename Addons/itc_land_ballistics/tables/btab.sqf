/**
 * Find quadrant from ACE-style BTAB (ATAB) for a certain charge
 * (depending on which ballistics table is given)
 *
 * Parameters
 * 0: Ballistics table
 * 1: Target distance
 * 2: Target elevation difference
 * 3: Minimum gun elevation row (not sure why this is used instead of angle. ~4 degrees higher than gun angle)
 * 4: Maximum ditto
 *
 *
 * Returns: Array
 * 0:  Gun elevation (deg)
 * 1:  Distance
 * 2:  TOF
 * 3:  Elevation difference
 * 4:  Impact velocity
 * 5:  Impact angle
 *
 **/

InterpolateSlices = {
    params ["_sliceLow", "_sliceHigh", "_factor"];
     _ret = [];
     for "_i" from 0 to ((count _sliceLow) - 1) step 1 do {
         _x1 = _sliceLow # _i;
         _x2 = _sliceHigh # _i;
         _ret = _ret + [(_x1 + (_x2 - _x1) * _factor)];
     };
     _ret
 };


itc_land_fcs_fnc_atab = {
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
          _testSlice = [_sliceLow, _sliceHigh, _heightFactor] call InterpolateSlices;
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
  _sliceNearestLower = [_sliceNearestLowerBase # _heightIndexLower, _sliceNearestLowerBase # _heightIndexHigher, _heightFactor] call InterpolateSlices;
  _sliceNearestHigherBase = _table # (_elevNearestRow+1) # 2;
  _sliceNearestHigher = [_sliceNearestHigherBase # _heightIndexLower, _sliceNearestHigherBase # _heightIndexHigher, _heightFactor] call InterpolateSlices;

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
  _sliceNearest = [_sliceNearestBase # _heightIndexLower, _sliceNearestBase # _heightIndexHigher, _heightFactor] call InterpolateSlices;

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
  ] call InterpolateSlices;

  _rs = [round(_solution # 0 *17.77777778), _solution # 2, _solution # 4, _solution # 5, _solution # 6, _solution # 1, _solution # 3];
  _rs
};
