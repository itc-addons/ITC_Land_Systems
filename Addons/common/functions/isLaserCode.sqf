params ["_number"];

if(_number < 1111 || _number > 1788) exitWith{false};
if((str _number) find "0" >= 0 || (str _number) find "9" >= 0) exitWith {false};

true