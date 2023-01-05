#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B5[] = {
	(char*)("EV_E101_BODY"), &texlist_ev_e101_body,
	(char*)("EV_E101_FUN"), &EV_E101_FUN_TEXLIST,
	0
};

void ev00B5_e_betadefeated(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		e101 = 0;
		B_OUT = 0;
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_thee102);
		EV_SetPos(player, -15.54f, 0.44999999f, -10.36f);
		EV_SetAng(player, 0, 0x25C6, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(2, Eggman, -162.8f, 0.20999999f, 22.26f, 0, 0x5982, 0);
		EV_Wait(1);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, 6.7399998f, 0.95999998f, 5.1999998f);
		EV_SetAng(eggman, 0, 0xA795, 0);
		EV_InitPlayer(2);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_CreateObjectFunc(&e101, ev_e101, -30.0f, -46.700001f, -30.0f, 0, 0xC000, 0);
		EV_Wait(1);
		EV_SetShadow(e101, 1.3f);
		EV_SetMode(e101, 0);
		EV_SetPos(e101, 48.360001f, 14.5f, 3.0599999f);
		EV_SetAng(e101, 0, 0x42EF, 0);
		EV_ClrAction(e101);
		EV_SetAction(e101, &action_e_run0_e101, &texlist_ev_e101_body, 0.5f, 1, 0);
		moveObject(e101, 48.360001f, 14.5f, 3.0599999f, 16.52f, 14.5f, -4.6900001f, 200);
		EV_CameraPos(0, 0, -67.440002f, 19.950001f, 7.77f);
		EV_CameraAng(0, 0, 0xF6A5, 0xC350, 0);
		EV_CameraPos(0, 100, -6.5f, 16.030001f, 2.72f);
		EV_CameraAng(0, 100, 0xF8A5, 0xBB50, 0);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_SerifPlay(1193);
		EV_MsgW(0, msgTbl_ev00B5[TextLanguage][0]); //"\aHo Ho ho!   \nYou surprised me, Gamma"...
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(30);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(30);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(30);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(10);
		EV_CameraPos(0, 0, 8.6599998f, 13.14f, 32.549999f);
		EV_CameraAng(0, 0, 0xFBA5, 0xD50, 0);
		EV_CameraPos(0, 300, -34.720001f, 19.17f, -3.8199999f);
		EV_CameraAng(0, 300, 0xF8A5, 0xC350, 0);
		EV_Wait(20);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_SerifPlay(1194);
		EV_MsgW(0, msgTbl_ev00B5[TextLanguage][1]); //"\aI had a funny feeling there was \nmor"...
		EV_Wait(20);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_SetAction(e101, &action_e_wait0_e101, &texlist_ev_e101_body, 1.0f, 1, 8);
		EV_Wait(25);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_SerifPlay(1195);
		EV_MsgW(0, msgTbl_ev00B5[TextLanguage][2]); //"\aI hereby grant Gamma permission to \n"...
		EV_Wait(80);
		EV_SetAction(eggman, &action_g_g0009_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 8);
		EV_WaitAction(eggman);
		EV_SetPos(e101, 16.42f, 14.5f, -0.47999999f);
		EV_SetAng(e101, 0, 0x2188, 0);
		moveObject(e101, 16.42f, 14.5f, -0.47999999f, 9.8900003f, 14.5f, -6.77f, 20);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_CameraPos(0, 0, -1.48f, 14.91f, 11.59f);
		EV_CameraAng(0, 0, 0x5A5, 0xE350, 0);
		EV_Wait(2);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_SetAction(eggman, &action_g_0018_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_SerifPlay(1196);
		EV_MsgW(0, msgTbl_ev00B5[TextLanguage][3]); //"\aWhat? So you want \nto come along wit"...
		EV_Wait(150);
		EV_CameraPos(0, 0, 11.8f, 16.32f, 6.8499999f);
		EV_CameraAng(0, 0, 0x2A5, 0x2550, 0);
		EV_SetPos(e101, 7.6300001f, 14.5f, -19.110001f);
		EV_SetAng(e101, 0, 0xD9EB, 0);
		moveObject(e101, 7.6300001f, 14.5f, -19.110001f, 1.0599999f, 14.5f, -1.1f, 20);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(40);
		EV_SerifPlay(1197);
		EV_MsgW(0, msgTbl_ev00B5[TextLanguage][4]); //"\aOkay, okay..."
		EV_CameraPos(0, 0, 1.13f, 16.379999f, 6.1799998f);
		EV_CameraAng(0, 0, 0xF2A5, 0xC650, 0);
		EV_SerifPlay(1198);
		EV_MsgW(0, msgTbl_ev00B5[TextLanguage][5]); //"\aWe could always use a spare set \nof "...
		EV_SerifPlay(1199);
		EV_MsgW(0, msgTbl_ev00B5[TextLanguage][6]); //"\aYou have special permission."
		EV_Wait(20);
		moveObject(e101, 1.0599999f, 12.5f, -1.1f, 1.0599999f, 14.5f, -1.1f, 5);
		EV_CameraPos(0, 0, 18.129999f, 15.8f, 11.71f);
		EV_CameraAng(0, 0, 0x2A5, 0x2550, 0);
		EV_Wait(30);
		EV_SetAction(eggman, &action_g_g0005_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(1);
		EV_WaitAction(eggman);
		EV_SetPos(player, -25.780001f, 0.47f, 7.2800002f);
		EV_SetAng(player, 0, 0x332F, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -9.4799995f, 0.44999999f, 11.14f, 0.5f, 0.059999999f);
		EV_CameraPos(0, 0, 51.43f, 6.0799999f, 29.129999f);
		EV_CameraAng(0, 0, 0xFFA5, 0x2550, 0);
		EV_MovePoint2(eggman, 55.169998f, 0.54000002f, 11.45f, 0.30000001f, 0.059999999f);
		EV_SetPos(eggman, 6.7399998f, 0.95999998f, 5.1999998f);
		EV_SetAng(eggman, 0, 0x3CAD, 0);
		EV_SetAction(eggman, &action_g_g0002_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_MsgClose();
		EV_Wait(20);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(e101, &action_e_wait0_e101, &texlist_ev_e101_body, 1.0f, 0, 8);
		EV_Wait(8);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(e101, &action_e_wait1_e101, &texlist_ev_e101_body, 1.0f, 0, 8);
		EV_Wait(8);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(e101, &action_e_wait2_e101, &texlist_ev_e101_body, 1.0f, 1, 8);
		EV_Wait(10);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		stopObject(e101);
		break;
	case 2:
		EventSe_Close();
		stopObject(e101);
		EV_InitPlayer(0);
		EV_FreeObject(&e101);
		EV_RemovePlayer(2);
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}