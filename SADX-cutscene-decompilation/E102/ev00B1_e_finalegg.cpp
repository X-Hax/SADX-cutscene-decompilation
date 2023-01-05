#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B1[] = { 0 };

void ev00B1_e_finalegg(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		B_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_thee102);
		EV_CameraPos(0, 0, 5.23f, 125.07f, -122.56f);
		EV_CameraAng(0, 0, 0x300, 0x41D, 0);
		EV_CameraPos(0, 30, 4.2800002f, 110.01f, -79.650002f);
		EV_CameraAng(0, 30, 0xC00, 0xFF1D, 0);
		EV_SetPos(player, -12.82f, 108.77f, -123.55f);
		EV_SetAng(player, 0, 0x5236, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(2, Eggman, -143.89f, 108.75f, 12.23f, 0, 42748, 0);
		EV_Wait(1);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, 34.34f, 108.73f, -140.86f);
		EV_SetAng(eggman, 0xFFE0, 0xCF82, 0);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_0015_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 8);
		EV_Wait(30);
		EV_SerifPlay(1177);
		EV_MsgW(0, msgTbl_ev00B1[TextLanguage][0]); //"\aThe shooting range is \nthrough this "...
		EV_SetAction(eggman, &action_g_0014_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(30);
		EV_SetAction(eggman, &action_g_0015_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_CameraPos(0, 0, -20.040001f, 149.33f, -63.240002f);
		EV_CameraAng(0, 0, 0xEC00, 0xF0F2, 0);
		EV_CameraPos(0, 90, -53.080002f, 144.03999f, -140.09f);
		EV_CameraAng(0, 90, 0xEC00, 0xB7F2, 0);
		EV_SerifPlay(1178);
		EV_MsgW(0, msgTbl_ev00B1[TextLanguage][1]); //"\aYour big brother, E-101 Beta,\nis the"...
		EV_Wait(80);
		EV_CameraPos(0, 0, 59.009998f, 129.03999f, -134.3f);
		EV_CameraAng(0, 0, 0xF200, 0x3C31, 0);
		EV_CameraPos(0, 90, 43.91f, 129.03999f, -162.32001f);
		EV_CameraAng(0, 90, 0xF200, 0x61FD, 0);
		EV_Wait(100);
		EV_MsgClose();
		EV_SetAction(eggman, &action_g_g0009_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(20);
		EV_SerifPlay(1179);
		EV_MsgW(0, msgTbl_ev00B1[TextLanguage][2]); //"\aEnter, Gamma!"
		EV_CameraPos(0, 0, 16.139999f, 122.15f, -129.85001f);
		EV_CameraAng(0, 0, 0xF700, 0xD58D, 0);
		EV_SerifPlay(1180);
		EV_MsgW(0, msgTbl_ev00B1[TextLanguage][3]); // "\aYou're not as advanced as Beta is,\nb"...
		EV_Wait(30);
		EV_SetPos(player, 0.99000001f, 108.78f, -115.14f);
		EV_SetAng(player, 0, 0x8307, 0);
		EV_CameraPos(0, 0, 1.0700001f, 112.12f, -100.36f);
		EV_CameraAng(0, 0, 0x600, 0x8D, 0);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(5);
		EV_MovePoint2(player, -0.74000001f, 108.74f, -155.60001f, 0.5f, 0.059999999f);
		EV_Wait(50);
		EV_CameraPos(0, 0, 16.139999f, 122.15f, -129.85001f);
		EV_CameraAng(0, 0, 0xF700, 0xD58D, 0);
		EV_SetAction(eggman, &action_g_g0022_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(eggman);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_SetPos(player, 0.99000001f, 108.78f, -130.14f);
		EV_SetAng(player, 0, 0x8307, 0);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -0.74000001f, 108.74f, -155.60001f, 0.5f, 0.059999999f);
		EV_Wait(1);
		EV_SetPos(eggman, 28.790001f, 108.73f, -151.59f);
		EV_SetAng(eggman, 0, 0x5005, 0);
		EV_SetAction(eggman, &action_g_0011_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_MovePoint2(eggman, 55.400002f, 108.69f, -160.85001f, 0.2f, 0.059999999f);
		EV_CameraPos(0, 0, -1.04f, 139.10001f, -199.49001f);
		EV_CameraAng(0, 0, 0xE900, 0x808D, 0);
		EV_MsgClose();
		EV_Wait(90);
		break;
	case 2:
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		EV_InitPlayer(2);
		EV_RemovePlayer(2);
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}