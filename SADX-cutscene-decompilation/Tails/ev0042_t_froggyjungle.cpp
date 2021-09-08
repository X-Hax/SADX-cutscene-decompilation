#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0042[] = {
	(char*)("M_EM_RED"), &M_EM_RED_TEXLIST,
	(char*)("FROG"), &texlist_frog
};

void ev0042_t_froggyjungle(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(87);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_mstcln);
		EV_SetPos(player, -1128.37f, 29.299999f, -255.28f);
		EV_SetAng(player, 0, 0xD4BA, 0);
		EV_Wait(1);
		EV_LookPoint(player, -1200.55f, 84.82f, -191.3f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CreateObject(&R_EME, -1193.45f, 49.84f, -194.97f, 0, 25796, 0);
		EV_Wait(1);
		EV_SetMode(R_EME, 0);
		EV_SetPos(R_EME, -1193.45f, 49.84f, -194.97f);
		EV_SetAng(R_EME, 0xFC6F, 0xCA03, 0xF767);
		EV_Wait(1);
		EV_SetAction(R_EME, &action_m_em_red, &texlist_m_em_red, 1.0f, 1, 0);
		EV_CameraPos(0, 0, -1195.63f, 52.48f, -190.56f);
		EV_CameraAng(0, 0, 0xF000, 0xE7C4, 0);
		EV_Wait(10);
		EventSe_Stop(0);
		EV_CreateObject(&Frog, -1156.71f, 40.209999f, -200.71001f, 64623, 49673, 63335);
		EV_Wait(1);
		EV_SetPos(Frog, -1156.71f, 42.209999f, -200.71001f);
		EV_SetAng(Frog, 0xFC6F, 0xC209, 0xF767);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_ClrAction(Frog);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(10);
		EV_CameraPos(0, 30, -1136.0699f, 42.439999f, -247.78999f);
		EV_CameraAng(0, 30, 0xE300, 0xDFC4, 0);
		EV_Wait(30);
		EV_ClrFace(player);
		EV_SetFace(player, "GE");
		EV_SerifPlay(726);
		EV_MsgW(0, msgTbl_ev0042[TextLanguage][0]); //"\aWow! \nThere's a Chaos Emerald!"
		EV_Wait(50);
		EV_MsgClose();
		EV_CameraPos(0, 0, -1120.08f, 38.43f, -285.94f);
		EV_CameraAng(0, 0, 0x400, 0x64C4, 0xF900);
		EV_CameraPos(0, 150, -1168.37f, 47.0f, -229.3f);
		EV_CameraAng(0, 150, 0x400, 0x64C4, 0xF900);
		EV_LookPoint(player, -1200.55f, 54.82f, -191.3f);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 20);
		EV_Wait(1);
		EV_MovePoint2(player, -1180.8f, 45.610001f, -209.11f, 0.55000001f, 0.059999999f);
		EV_Wait(10);
		EventSe_Oneshot(1335, 0, 0, 0);
		EV_SetAction(Frog, &_action_f_f0002_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(30);
		EventSe_Oneshot(1334, 0, 0, 0);
		moveObject(Frog, -1156.71f, 42.209999f, -200.71001f, -1208.55f, 56.110001f, -194.17f, 90);
		EV_Wait(30);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(10);
		EV_CameraPos(0, 0, -1196.1899f, 53.849998f, -184.19f);
		EV_CameraAng(0, 0, 0xF600, 0xE9C4, 0);
		EV_Wait(20);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_FreeObject(&R_EME);
		EV_Wait(30);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_LookPoint(player, -1263.15f, 114.87f, -137.09f);
		EV_Wait(15);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "I");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "II");
		}
		EV_SerifPlay(727);
		EV_MsgW(0, msgTbl_ev0042[TextLanguage][1]); //"\aHey, wait up!"
		EV_Wait(40);
		EV_CameraPos(0, 0, -1170.3f, 44.470001f, -207.73f);
		EV_CameraAng(0, 0, 0x1499, 0x5AC4, 0);
		EV_CameraPos(0, 60, -1179.08f, 47.169998f, -200.96001f);
		EV_CameraAng(0, 60, 0x1499, 0x5AC4, 0);
		EV_SetPos(Frog, -1250.16f, 75.0f, -158.41f);
		EV_SetAng(Frog, 0xEFC1, 0xDD1A, 0xEB8C);
		EV_Wait(1);
		moveObject(Frog, -1250.16f, 75.0f, -158.41f, -1262.08f, 80.949997f, -140.28999f, 28);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 20);
		EV_Wait(1);
		EV_MovePoint2(player, -1197.47f, 50.990002f, -193.91f, 0.5f, 0.059999999f);
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, "EZZZZ");
		EV_SerifPlay(728);
		EV_MsgW(0, msgTbl_ev0042[TextLanguage][2]); //"\aSto----------p!"
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(17);
		EventSe_Oneshot(1334, 0, 0, 0);
		moveObject(Frog, -1262.08f, 80.949997f, -140.28999f, -1288.67f, 83.0f, -124.28f, 28);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(10);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(10);
		stopObjectAll();
		break;
	case 2:
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_FreeObject(&Frog);
		EV_FreeObject(&R_EME);
		EV_SetPos(player, -1197.47f, 50.990002f, -193.91f);
		EV_SetAng(player, 0, 0xD4BA, 0);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}