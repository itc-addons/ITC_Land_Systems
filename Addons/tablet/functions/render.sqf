params ["_display"];

_illumination = ([] call ace_common_fnc_ambientBrightness);
(_display displayCtrl (15117)) ctrlSetFade _illumination;
(_display displayCtrl (15117)) ctrlCommit 0;
