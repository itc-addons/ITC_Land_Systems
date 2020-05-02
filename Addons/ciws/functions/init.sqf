["ITC_LAND_CIWS", "CHECKBOX", "Enable CIWS System", "ITC Land", [true]] call CBA_Settings_fnc_init; //ciws system enabling options
ITC_LAND_CIWS_INTERCEPTABLE = (configFile >> "itc_land_ciws" >> "interceptable") call BIS_fnc_getCfgData; //list of ciws munitions to allow people to add more in missions

//Add EHs to wake up objects placed by a zeus which have radars which would otherwise not have them on.
{
  private _groupEH = _x addEventHandler ["CuratorGroupPlaced", {
    params ["_curator", "_group"];
    {
      (vehicle _x) setVehicleRadar 1;
    } forEach units _group
  }];
  private _objectEH = _x addEventHandler ["CuratorObjectPlaced", {
  	params ["_curator", "_entity"];
    _entity setVehicleRadar 1;
  }];

  _x setVariable ["ITC_Land_RadarOnEH",[_groupEH,_objectEH],true];
} forEach allCurators;
