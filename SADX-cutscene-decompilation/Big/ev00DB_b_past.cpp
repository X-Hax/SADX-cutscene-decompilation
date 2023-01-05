#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00DB[] = { 0 };

void ev00DB_b_past(int state)
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
		EV_SetPos(player, 0.18000001f, -47.049999f, 1393.05f);
		EV_SetAng(player, 0, 0x8917, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(1, 0, -2.96f, -32.380001f, 1378.4399f);
		EV_CameraAng(1, 0, 0xFD00, 0x88DC, 0);
		EV_CameraPos(1, 100, -3.3900001f, -32.23f, 1376.49f);
		EV_CameraAng(1, 100, 0xFD00, 0x88DC, 0);
		efWhiteOn2(0, 30, 60);
		EV_Wait(10);
		EventSe_Volume(0, -120, 120);
		EV_Wait(80);
		EventSe_Stop(0);
		EV_SerifPlay(1350);
		EV_MsgW(0, msgTbl_ev00DB[TextLanguage][0]); // "\aWhere am I?"
		EV_Wait(30);
		EV_CameraPos(1, 0, 7.3499999f, -36.919998f, 1351.2f);
		EV_CameraAng(1, 0, 0x300, 0xFFDC, 0);
		EV_CameraPos(1, 60, 13.74f, -37.450001f, 1426.85f);
		EV_CameraAng(1, 60, 0x300, 0xFFDC, 0);
		EV_SerifPlay(1351);
		EV_MsgW(0, msgTbl_ev00DB[TextLanguage][1]); //"\aFroggy?"
		EV_Wait(70);
		EV_MsgClose();
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		EV_InitPlayer(0);
		efWhiteOff();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}