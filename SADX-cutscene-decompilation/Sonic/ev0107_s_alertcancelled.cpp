#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0107[] = { 0 };

void ev0107_s_alertcancelled(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_SerifPlay(1703);
		EV_MsgW(70, msgTbl_ev0107[TextLanguage][0]); //"\aEmergency alert has been cancelled.\n"...
		EV_SerifWait();
		EV_MsgCls();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}