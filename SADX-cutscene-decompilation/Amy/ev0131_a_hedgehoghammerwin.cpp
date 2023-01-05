#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0131[] = { 0 };

void ev0131_a_hedgehoghammerwin(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_egcarer1);
		EV_SerifPlay(1710);
		EV_Msg(msgTbl_ev0131[TextLanguage][0]); //"\aWhat?   \nI can't believe this is hap"...
		EV_SerifWait();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}