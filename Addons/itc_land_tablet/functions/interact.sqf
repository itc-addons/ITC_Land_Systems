params ["_action", "_value"];
_vehicle = (vehicle player);

if(_action == "app" && !isNil{_value}) exitWith {
  if(count (_vehicle getVariable "apps") > _value) then {
    _newApp = (_vehicle getVariable "apps") # _value;
    if(!isNil{_newApp}) then {
      _vehicle setVariable ["app", _newApp];
    };
  };
};

_display = findDisplay 32562;
_app = _vehicle getVariable "app";
_page = [_action, _display] call itc_land_tablet_fnc_appInteract;
