#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0111[] = { 0 };

void ev0111_t_ecfools(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_eggmbl23);
		EV_CameraPos(0, 0, -537.96002f, 623.21997f, -1462.91f);
		EV_CameraAng(0, 0, 0xFD80, 0x882D, 0xF400);
		EV_CameraPos(0, 300, -123.0f, 1000.0f, -706.0f);
		EV_CameraAng(0, 300, 0xFD80, 0x882D, 0xFC00);
		EV_SerifPlay(1536);
		EV_MsgW(60, msgTbl_ev0111[TextLanguage][0]); //"\aDon't get any ideas, Sonic!"
		EV_SerifWait();
		EV_Wait(50);
		EV_SerifPlay(1537);
		EV_Msg(msgTbl_ev0111[TextLanguage][1]); //"\aYou have no idea what this vessel \nc"...
		EV_Wait(90);
		EV_CameraPos(0, 0, -64.620003f, 766.69f, -134.78999f);
		EV_CameraAng(0, 0, 0x480, 0x822D, 0xFC09);
		EV_CameraPos(0, 180, 68.620003f, 780.69f, -143.78999f);
		EV_CameraAng(0, 180, 0x480, 0x822D, 0);
		EV_Wait(90);
		EV_SerifPlay(1538);
		EV_MsgW(60, msgTbl_ev0111[TextLanguage][2]); //"\aHow about I give you \na little sampl"...
		EV_Wait(120);
		EV_MsgCls();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}