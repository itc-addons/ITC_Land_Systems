//if (!isServer) exitWith {};

params ["", "", "", "", "_ammo", "", "_projectile", "_gunner"];

if(_ammo isKindOf ["Sh_155mm_AMOS", configFile >> "cfgAmmo"] || _ammo isKindOf ["Sh_82mm_AMOS_guided", configFile >> "cfgAmmo"]) exitWith {
    //{
    //  (_x getVariable "shells") pushBack _projectile;
    //}forEach itc_land_cobras;
    itc_land_cobra_shells pushBack _projectile;
};
