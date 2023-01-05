#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0103[] = { 0 };

void ev0103_s_skydeck(int state)
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
		EV_SerifPlay(1527);
		EV_Msg(msgTbl_ev0103[TextLanguage][0]); //"\aThis must be the way to the Sky Deck!"
		EV_SerifWait();
		EV_MsgCls();
		EV_LookFree(player);
		// Add "EV_ClrFace(player);" here to fix Sonic's head not resetting after this scene.
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}