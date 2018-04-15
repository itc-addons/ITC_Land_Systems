params ["_tabletClass"];
createDialog "itc_land_tablet";

_vehicle = vehicle player;
_display = findDisplay 32562;
if(!(_vehicle isKindOf "Man")) then {
  //_tabletClass = (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "itc_land" >> "tablet")  call BIS_fnc_getCfgData;
};
_vehicle setVariable ["apps", (configFile >> "CfgWeapons" >> _tabletClass >> "apps")  call BIS_fnc_getCfgData];
_vehicle setVariable ["app", (_vehicle getVariable "apps") # 0];

[{
  _this select 0 params ["_display","_vehicle", "_app", "_page"];
  if(!dialog || !alive player) then { //ensure player is alive and dialog is open
    [_this select 1] call CBA_fnc_removePerFrameHandler;
  };

  //[_display] call itc_land_tablet_fnc_render;

  if(_vehicle getVariable "app" != _app) then { //check if app switched
    _app = _vehicle getVariable "app"; //switch the app variable
    [_app] call itc_land_tablet_fnc_compileApp;
    _newPage = [_display] call itc_land_tablet_fnc_appInit; //initialize the new app
    _vehicle setVariable ["page", _newPage];
  };
  [_display] call itc_land_tablet_fnc_app_render; //render the app

  if(!isNil{_vehicle getVariable "page"}) then { //if there's a page, render it
    if(_vehicle getVariable "page" != _page) then { //check if page switched
      _page = _vehicle getVariable "page"; //switch the app variable
      [_app,_page] call itc_land_tablet_fnc_compilePage;
      [_display] call itc_land_tablet_fnc_appClear; //clear app pages
      [_display] call itc_land_tablet_fnc_pageInit; //initialise the new page
    };
    [_display] call itc_land_tablet_fnc_pageRender; //render the page
  };
  (_this select 0) set [2, _app];
  (_this select 0) set [3, _page];
}, 0, [_display, _vehicle, "", ""]] call CBA_fnc_addPerFrameHandler;
