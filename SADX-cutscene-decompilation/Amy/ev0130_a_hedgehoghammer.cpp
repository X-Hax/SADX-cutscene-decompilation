#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0130[] = { 0 };

void ev0130_a_hedgehoghammer(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CameraPos(1, 0, -69.0f, 20.0f, 31.0f);
		EV_CameraAng(1, 0, 0x900, 0xE600, 0);
		EV_CameraPos(0, 180, -6.8000002f, 20.0f, 78.0f);
		BGM_Play(MusicIDs_egcarer1);
		EV_SerifPlay(1708);
		EV_Msg(msgTbl_ev0130[TextLanguage][0]); //"\aHa ha ha ha!   \nYou're not going to "...
		EV_Wait(5);
		EV_SerifWait();
		EV_CameraPos(1, 0, 27.6f, 31.6f, 21.0f);
		EV_CameraAng(1, 0, 0xF700, 0x1A00, 0);
		EV_CameraPos(0, 140, -23.0f, 31.6f, 58.700001f);
		EV_SerifPlay(1709);
		EV_Msg(msgTbl_ev0130[TextLanguage][1]); //"\aLet's see if you can clear\n this awe"...
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(10);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}