#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0084[] = { 0 };

void ev0084_k_pastfirst(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EventSe_Init(1);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Play(0, 760, 90);
		WHITE = COverlayCreate(1.0f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_SetFace(player, "VVVVVVVV");
		EV_Wait(1);
		EV_SetPos(player, 2.46f, 100.5f, -723.84998f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetAction(player, &action_k_k0004_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 2.98f, 110.25f, -710.81403f);
		EV_CameraAng(1, 0, 0xF100, 0, 0);
		EV_Wait(29);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -0.016666668f);
		}
		EV_CameraPos(1, 120, 3.0f, 113.85f, -701.48499f);
		EV_CameraAng(1, 120, 0xF100, 0, 0);
		EV_Wait(80);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(8);
		EV_SetFace(player, "XBB");
		EV_Wait(80);
		EV_SetFace(player, "ED");
		EV_SerifPlay(1020);
		EV_Msg(msgTbl_ev0084[TextLanguage][0]); //"\aWhere in the world am I?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPos(1, 0, 0.74699998f, 110.212f, -716.745f);
		EV_CameraAng(1, 0, 0xFC00, 0x4700, 0);
		EV_CameraAng(1, 200, 0xFC00, 0xA800, 0);
		EV_Wait(160);
		EV_SetFace(player, "EEAE");
		EV_SerifPlay(1021);
		EV_Msg(msgTbl_ev0084[TextLanguage][1]); //"\aI don't remember being here \nbefore."
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(player);
		EV_CameraPos(1, 0, -3.579f, 107.016f, -709.53003f);
		EV_CameraAng(1, 0, 0xFC00, 0xEF00, 0);
		EV_CameraPos(1, 100, -0.72799999f, 106.526f, -715.896f);
		EV_CameraAng(1, 100, 0x100, 0xEF00, 0);
		EV_Wait(30);
		EV_SetFace(player, "CAAAAACD");
		EV_SerifPlay(1022);
		EV_Msg(msgTbl_ev0084[TextLanguage][2]); //"\aBut something about it is familiar."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(1, 0, 2.345f, 108.173f, -741.10901f);
		EV_CameraAng(1, 0, 0, 0x8000, 0);
		EV_CameraPos(1, 60, 2.345f, 108.173f, -757.10797f);
		EV_CameraAng(1, 60, 0x800, 0x8000, 0);
		EV_SetFace(player, "DAAAAD");
		EV_SerifPlay(1023);
		EV_Msg(msgTbl_ev0084[TextLanguage][3]); //"\aHmmmm...  \nThis is very strange."
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(30);
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}