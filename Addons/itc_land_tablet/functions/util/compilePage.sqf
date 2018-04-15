params ["_app", "_page"];
itc_land_tablet_fnc_page_init = compile preprocessfilelinenumbers format["itc_land_tablet\functions\apps\%1\%2\init.sqf", _app, _page];
itc_land_tablet_fnc_page_interact = compile preprocessfilelinenumbers format["itc_land_tablet\functions\apps\%1\%2\interact.sqf", _app, _page];
itc_land_tablet_fnc_page_render = compile preprocessfilelinenumbers format["itc_land_tablet\functions\apps\%1\%2\render.sqf", _app, _page];
