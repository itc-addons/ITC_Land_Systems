params ["_display"];
#include "..\bcsDefines.hpp"
MISSION;MISSIONPARAMS;
if(_shotEnd > time) then {
  _text = format["TTI %1", round(_shotEnd - time)];
  SETTEXT(8021,_text);
} else {
  SETTEXT(8021,"");
};
