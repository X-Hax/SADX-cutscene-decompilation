#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0096[] = { 0 };

void ev0096_k_pastthird(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EventSe_Init(1);
		WHITE = COverlayCreate(1.0f, 0.1f, 1.0f, 1.0f, 1.0f);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_Wait(1);
		EV_CameraOn();
		EV_Wait(1);
		EV_CameraOn();
		EV_CameraPos(0, 0, -6.8000002f, -69.949997f, 1256.0f);
		EV_CameraAng(0, 0, 0xD00, 0x8E00, 0);
		EV_SetPos(player, -3.0f, -71.0f, 1265.5f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_InitPlayer(0);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 0.2f, 0, 0);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVVV");
		EV_Wait(40);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -0.016666668f);
		}
		EV_CameraPos(1, 150, -4.9565001f, -69.669998f, 1258.172f);
		EV_CameraAng(1, 150, 0x1600, 0x8E00, 0);
		EV_Wait(30);
		EV_SetFace(player, "XBB");
		EV_Wait(50);
		EV_SetFace(player, "EAAD");
		EV_SerifPlay(1135);
		EV_Msg(msgTbl_ev0096[TextLanguage][0]); //"\aOh no!   Not again."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_LookPoint(player, -9.6999998f, -66.0f, 1256.0f);
		EV_Wait(5);
		EV_LookPoint(player, 2.4000001f, -66.0f, 1252.0f);
		EV_Wait(20);
		EV_SetFace(player, "FE");
		EV_SerifPlay(1136);
		EV_Msg(msgTbl_ev0096[TextLanguage][1]); //"\aWhat is the meaning of this?"
		EV_SetAction(player, &action_k_k0001_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, &action_k_k0002_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(50);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(0, 0, 7.0f, -68.599998f, 1273.72f);
		EV_CameraAng(0, 0, 0xA00, 0x800, 0);
		EV_CameraPos(0, 80, 3.0f, -68.599998f, 1274.5f);
		EV_CameraAng(0, 80, 0xA00, 0x800, 0);
		EV_Wait(60);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EV_SetPos(player, -3.0f, -71.0f, 1265.5f);
		EV_SetAng(player, 0, 0x8000, 0);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EventSe_Close();
		break;
	}
}