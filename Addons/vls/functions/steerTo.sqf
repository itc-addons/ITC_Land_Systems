params ["_projectile", "_steerPoint","_frameTime", "_angleX", "_angleY","_stage"];
//[ASLtoAGL _steerPoint, "ColorRed"] call test_fnc_mark;
(_projectile call BIS_fnc_getPitchBank) params ["_pitch", "_bank"];
private _speed = vectorMagnitude (velocity _projectile);
private _dElev = (_position select 2) - (_steerPoint select 2);
private _distance2D = _projectile distance2D _steerPoint;
private _ktsMul = 1.94384;

private _maxBank = 40;
private _yawRate = 5 * _frameTime;
private _bankRate = (abs _angleX min 1) * (180 * _frameTime);
private _diveRate = 50 * _frameTime;
private _desiredBank = (4 * _angleX) min _maxBank max -_maxBank;

private _pullUp = (
  ((getPos _projectile) # 2 < 200) ||
  ([_this,_bank,_bankRate,_pitch,_diveRate] call itc_land_vls_fnc_AGCAS)
);

//first do a regular direction change to simulate tailfin steering
_projectile setDir (getDir _projectile) + (_angleX min _yawRate max -_yawRate);
if(abs _pitch > 10 || abs _angleX < 2 || _stage == "DIVE" || _pullUp) then { // when pitched, kill the bank, tailfin steer only
  _desiredBank = 0;
  //player sideChat "NO BANK";
};
if(abs _angleX > 90 && _distance2D < 1000 && _stage != "DIVE") then { //go-around if it can't steer to
  //player sideChat "going around";
  _desiredBank = 0;
  _angleY = _angleY max 0;
};
_bank = _bank + (if(_desiredBank > _bank)then [{_bankRate},{-_bankRate}]);
_bank = _bank min _maxBank max -_maxBank;
private _turnRate = ((1091 * tan(_bank)) / (_speed * _ktsMul));
//player sideChat str [round _angleX, round _desiredBank, round _bank, round _pitch, _stage];
//player sideChat str [round _desiredBank,_bank,_angleY, _stage];
_projectile setDir (getDir _projectile) + (_turnRate * _frameTime);

if(_pullUp && _stage != "DIVE") exitWith {
  [_projectile, _pitch + _diveRate, _bank] call BIS_fnc_setPitchBank;
  _stage
};

if((abs _angleX < 2 && _stage == "GLIDE") || _stage == "DIVE") then {
  private _turnDistRequired = ((abs _angleY) / 30) * _speed;
  private _diveInitDist = (_dElev / tan(_angle)) + _turnDistRequired;
  if(_distance2D < _diveInitDist || _stage == "DIVE") then {
    _stage = "DIVE";
    _bank = 0;
    _pitch = _pitch + ((_diveRate * _angleY) min _diveRate max -_diveRate);
  } else {
    _pitch = (_pitch - _diveRate) max -30;
  };
} else {
  if(_pitch < -5) then {
    _pitch = _pitch + _diveRate;
  };
};
[_projectile, _pitch, _bank] call BIS_fnc_setPitchBank;
_stage
