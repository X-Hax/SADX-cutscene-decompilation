#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev008E[] = { 0 };

void ev008E_k_pastsecond(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_Wait(1);
		efWhiteOn2(0, 30, 60);
		EV_SetPos(player, 0.18000001f, -47.049999f, 1393.05f);
		EV_SetAng(player, 0, 0x8917, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(1, 0, -4.5100002f, -41.16f, 1384.88f);
		EV_CameraAng(1, 0, 0x400, 0x9CDC, 0);
		EV_CameraPos(1, 200, -6.1500001f, -41.16f, 1386.08f);
		EV_CameraAng(1, 200, 0x400, 0x9CDC, 0);
		EV_Wait(90);
		EV_ClrFace(player);
		EV_SetFace(player, "ELE");
		EV_Wait(7);
		EV_SerifPlay(1109);
		EV_Msg(msgTbl_ev008E[TextLanguage][0]); //"\aWhere am I?"
		EV_Wait(60);
		EV_CameraPos(1, 0, 7.3499999f, -36.919998f, 1351.2f);
		EV_CameraAng(1, 0, 0x300, 0xFFDC, 0);
		EV_CameraPos(1, 100, 7.1300001f, -41.630001f, 1415.03f);
		EV_CameraAng(1, 100, 0x300, 0xFFDC, 0);
		EV_SerifPlay(1110);
		EV_Msg(msgTbl_ev008E[TextLanguage][1]); //"\aThis is very strange."
		EV_Wait(100);
		EV_MsgClose();
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		efWhiteOff();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}