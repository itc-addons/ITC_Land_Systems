class CfgVehicles {
    class ACE_Explosives_Place;
    class ITC_Land_remoteFrag_Place : ACE_Explosives_Place {
        displayName = "Remote Frag Grenade";  // Name of the item
        model = "\A3\Weapons_f\ammo\Handgrenade_throw";
        ACE_offset[] = {0, 0, 0};  // Offset of the interaction point from the model in meters on the X,Y,Z axis. Try setting this to the place where it makes most sense (e.g. to buttons/switches/pins)
    };
};
