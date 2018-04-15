params ["_display", "_ctrl", "_fade"];

(_display displayCtrl _ctrl) ctrlSetFade _fade;
(_display displayCtrl _ctrl) ctrlCommit 0;
