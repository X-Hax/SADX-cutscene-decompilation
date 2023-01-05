#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0113[] = { 0 };

void ev0113_t_skydeck(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_LookPoint(player, 0.0f, 747.0f, 420.0f);
		EV_SetFace(player, "DDCE");
		EV_SerifPlay(1547);
		EV_MsgW(60, msgTbl_ev0113[TextLanguage][0]); //"\aSo this must be the Sky Deck, huh?"
		EV_SerifWait();
		EV_MsgCls();
		EV_LookFree(player);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}