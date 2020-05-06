/**
 * Initialisation datalink settings
 * This will be run on both clients and server
 */

//Load the list of characters allowed in IDs
itc_land_datalink_allowedIDCharacters = (configFile >> "itc_land_datalink" >> "allowedIDCharacters") call BIS_fnc_getCfgData;
//Load the list of characters allowed in IDs
itc_land_datalink_IDLength = getNumber (configFile >> "itc_land_datalink" >> "IDLength");
