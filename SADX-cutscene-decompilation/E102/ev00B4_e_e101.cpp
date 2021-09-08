#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B4[] = {
	(char*)("EV_E101_BODY"), &texlist_ev_e101_body,
	(char*)("EV_E101_FUN"), &EV_E101_FUN_TEXLIST
};

void ev00B4_e_e101(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SMOKE = 0;
		e101 = 0;
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, -15.54f, 0.44999999f, -10.36f);
		EV_SetAng(player, 0, 0x25C6, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(2, Eggman, -162.8f, 0.20999999f, 22.26f, 0, 0x5982, 0);
		EV_Wait(1);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, 6.7399998f, 0.95999998f, 5.1999998f);
		EV_SetAng(eggman, 0, 0xC3F7, 0);
		EV_InitPlayer(2);
		BGM_Play(MusicIDs_thee102);
		EV_CameraPos(0, 0, -52.580002f, 15.46f, -0.99000001f);
		EV_CameraAng(0, 0, 0xFAA5, 0xC150, 0);
		EV_SerifPlay(1186);
		EV_MsgW(0, msgTbl_ev00B4[TextLanguage][0]); //"\aOkay then, Gamma... \nHere's your tes"...
		EV_Wait(31);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0002_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(eggman, -36.970001f, 0.5f, 0.66000003f, 0.15000001f, 0.059999999f);
		EV_SerifPlay(1187);
		EV_MsgW(130, msgTbl_ev00B4[TextLanguage][1]); //"\aIf you want to stay on board, \nyou m"...
		EV_MsgW(90, msgTbl_ev00B4[TextLanguage][2]); //"\aSo pay attention to what I say."
		EV_Wait(1);
		EV_SetAction(player, &action_e_e0006_e102, &E102_TEXLIST, 0.5f, 0, 16);
		EV_Wait(20);
		EV_WaitAction(player);
		EV_SetPos(player, -15.54f, 0.44999999f, -10.36f);
		EV_SetAng(player, 0, 0xC8D1, 0);
		EV_CameraPos(0, 0, -2.1700001f, 20.440001f, 2.1900001f);
		EV_CameraAng(0, 0, 0xF1A5, 0x3D50, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SetAction(eggman, &action_g_g0022_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(1);
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetPos(eggman, -36.970001f, 0.5f, 0.66000003f);
		EV_SetAng(eggman, 0, 0x4AB2, 0);
		EV_CameraPos(0, 0, -48.040001f, 15.28f, -3.1099999f);
		EV_CameraAng(0, 0, 0xFEA5, 0xBD50, 0);
		EV_SerifPlay(1188);
		EV_MsgW(0, msgTbl_ev00B4[TextLanguage][3]); //"\aThe almighty Egg Carrier is a flying "...
		EV_Wait(30);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 16);
		EV_Wait(120);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_0019_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_CameraPos(0, 0, -24.09f, 4.8299999f, -3.27f);
		EV_CameraAng(0, 0, 0x15A5, 0x4B50, 0);
		EV_Wait(10);
		EV_SerifPlay(1189);
		EV_MsgW(0, msgTbl_ev00B4[TextLanguage][4]); //"\tCome forth, Beta!"
		EV_Wait(10);
		EV_CameraPos(0, 0, -38.529999f, 10.35f, 12.96f);
		EV_CameraAng(0, 0, 0x1A5, 0xDB50, 0);
		EV_CreateObjectFunc(&e101, ev_e101, -30.0f, -46.700001f, -30.0f, 0, 0xC000, 0);
		EV_Wait(1);
		EV_SetShadow(e101, 1.3f);
		EV_SetMode(e101, 0);
		EV_SetPos(e101, 9.9799995f, 135.42999f, -4.1500001f);
		EV_SetAng(e101, 0, 0x46D5, 0);
		EV_ClrAction(e101);
		EV_SetAction(e101, &action_e_hwait0_e101, &texlist_ev_e101_body, 1.0f, 1, 0);
		moveObject(e101, 9.9799995f, 135.42999f, -4.1500001f, 9.9799995f, 14.5f, -4.1500001f, 50);
		EV_Wait(20);
		EV_CameraPos(0, 5, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 5, 0x6A5, 0xDB50, 0);
		EV_Wait(20);
		EV_SetAction(player, &action_e_e0007_e102, &E102_TEXLIST, 1.0f, 0, 0);
		EV_Wait(11);
		SMOKE = CObjSmoke_Create();
		if (SMOKE)
		{
			*(float*)(SMOKE->twp->value.l + 44) = 150.0f;
			*(float*)(SMOKE->twp->value.l + 48) = 50.0f;
			*(float*)(SMOKE->twp->value.l + 52) = 50.0f;
			*(float*)(SMOKE->twp->value.l + 56) = 50.0f;
			SMOKE->twp->ang.y = 1;
			SMOKE->twp->ang.x = 1;
		}
		moveObject(SMOKE, 9.9799995f, 2.5f, -4.1500001f, 9.9799995f, 2.5f, -4.1500001f, 1);
		EventSe_Oneshot(830, 0, 0, 0);
		RumbleA(0, 1);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x7A5, 0xDB50, 0);
		EV_Wait(1);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x6A5, 0xDB50, 0);
		EV_Wait(1);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x7A5, 0xDB50, 0);
		EV_Wait(2);
		EventSe_Oneshot(830, 0, 0, 0);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x5A5, 0xDB50, 0);
		EV_Wait(1);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x6A5, 0xDB50, 0);
		EV_Wait(2);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x5A5, 0xDB50, 0);
		EV_Wait(1);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x7A5, 0xDB50, 0);
		EventSe_Oneshot(830, 0, 0, 0);
		EV_Wait(1);
		EV_CameraPos(0, 0, -49.369999f, 8.3199997f, 21.559999f);
		EV_CameraAng(0, 0, 0x6A5, 0xDB50, 0);
		stopObject(SMOKE);
		if (SMOKE)
		{
			SMOKE->twp->ang.y = 0;
			SMOKE->twp->ang.x = 0;
		}
		EV_Wait(33);
		EV_CameraPos(0, 0, 1.73f, 17.280001f, -5.0799999f);
		EV_CameraAng(0, 0, 0x9A5, 0xBB50, 0);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1190);
		EV_MsgW(0, msgTbl_ev00B4[TextLanguage][5]); //"\aI'd like you to meet your older broth"...
		EV_Wait(20);
		EV_CameraPos(0, 0, 1.98f, 13.37f, -10.44f);
		EV_CameraAng(0, 0, 0x5A5, 0xA450, 0);
		EV_Wait(30);
		EV_CameraPos(0, 0, -3.8800001f, 1.86f, -1.41f);
		EV_CameraAng(0, 0, 0xBA5, 0xCD50, 0);
		EV_CameraPos(0, 140, -6.5500002f, 11.46f, -0.5f);
		EV_CameraAng(0, 140, 0xBA5, 0xCD50, 0);
		EV_SetAction(e101, &action_e_hwait0_e101, &texlist_ev_e101_body, 1.0f, 0, 8);
		EV_Wait(8);
		EV_SetAction(e101, &action_e_wait1_e101, &texlist_ev_e101_body, 1.0f, 0, 8);
		EV_Wait(8);
		EV_SetAction(e101, &action_e_wait2_e101, &texlist_ev_e101_body, 1.0f, 1, 8);
		EV_SetPos(player, -32.400002f, 0.50999999f, -23.219999f);
		EV_SetAng(player, 0, 0x2177, 0);
		EV_SerifPlay(1191);
		EV_MsgW(90, msgTbl_ev00B4[TextLanguage][6]); //"\aI am pitting the two of you\nagainst "...
		EV_MsgW(0, msgTbl_ev00B4[TextLanguage][7]); //"\aand the winner serves on my ship."
		EV_SerifWait();
		EV_Wait(1);
		EV_SetPos(eggman, -164.7f, 0.20999999f, -23.030001f);
		EV_SetAng(eggman, 0, 0xBA38, 0);
		EV_CameraPos(0, 100, -59.709999f, 7.0900002f, 24.040001f);
		EV_CameraAng(0, 100, 0x2A5, 0xDE50, 0);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 1.0f, 0, 8);
		EV_SerifPlay(1192);
		EV_MsgW(0, msgTbl_ev00B4[TextLanguage][8]); //"\aI put my bets on Beta, but I owe you"...
		EV_CameraPos(0, 100, -51.610001f, 27.040001f, -28.780001f);
		EV_CameraAng(0, 100, 0xF1A5, 0xB350, 0);
		EV_Wait(60);
		moveObject(e101, 9.9799995f, 14.5f, -4.1500001f, 77.610001f, 14.5f, 14.89f, 30);
		EventSe_Play(0, 831, 1800);
		EventSe_Volume(0, 200, 1);
		SMOKE = CObjSmoke_Create();
		if (SMOKE)
		{
			*(float*)(SMOKE->twp->value.l + 44) = 250.0f;
			*(float*)(SMOKE->twp->value.l + 48) = 250.0f;
			*(float*)(SMOKE->twp->value.l + 52) = 250.0f;
			*(float*)(SMOKE->twp->value.l + 56) = 250.0f;
			SMOKE->twp->ang.y = 2;
			SMOKE->twp->ang.x = 2;
		}
		moveObject(SMOKE, 9.9799995f, 2.5f, -4.1500001f, 77.610001f, 2.5f, 14.89f, 30);
		EV_Wait(20);
		EventSe_Stop(0);
		stopObject(SMOKE);
		if (SMOKE)
		{
			SMOKE->twp->ang.y = 0;
			SMOKE->twp->ang.x = 0;
		}
		EV_Wait(60);
		EV_MsgClose();
		stopObject(e101);
		break;
	case 2:
		EV_InitPlayer(2);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		stopObjectAll();
		EV_FreeObject(&e101);
		if (SMOKE)
		{
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		EventSe_Close();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}