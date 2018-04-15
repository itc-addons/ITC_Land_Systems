params ["_app"];
itc_land_tablet_fnc_app_init = compile preprocessfilelinenumbers format["itc_land_tablet\functions\apps\%1\init.sqf", _app];
itc_land_tablet_fnc_app_clear = compile preprocessfilelinenumbers format["itc_land_tablet\functions\apps\%1\clear.sqf", _app];
itc_land_tablet_fnc_app_interact = compile preprocessfilelinenumbers format["itc_land_tablet\functions\apps\%1\interact.sqf", _app];
itc_land_tablet_fnc_app_render = compile preprocessfilelinenumbers format["itc_land_tablet\functions\apps\%1\render.sqf", _app];
