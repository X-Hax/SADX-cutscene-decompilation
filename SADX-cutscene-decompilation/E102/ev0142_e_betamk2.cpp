#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0142_e_betamk2(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		E101KAI = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(109);
		EventSe_Init(5);
		EV_SetPos(player, -2.2f, 733.5f, 1050.6f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.40000001f, 1, 8);
		EV_CreateObject(&E101KAI, -12.45f, 776.21997f, -368.57999f, 2560, 58144, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, -9.1359997f, 734.90997f, 1027.548f);
		EV_CameraAng(1, 0, 3141, 36133, 0);
		EV_CameraPos(1, 150, -9.1359997f, 743.0f, 1027.548f);
		EV_CameraAng(1, 150, 3141, 36133, 0);
		EV_SerifPlay(1311);
		EV_Msg(msgTbl_ev0142[TextLanguage][0]); //"\aE-105 Zeta rescue complete."
		EV_Wait(30);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 0.5f, 0, 8);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 0.30000001f, 1, 8);
		EV_Wait(32);
		EV_SerifWait();
		EV_CameraPos(1, 140, -7.566f, 746.33771f, 1040.9f);
		EV_CameraAng(1, 140, 5189, 39461, 0);
		EV_Wait(30);
		EV_SerifPlay(1312);
		EV_Msg(msgTbl_ev0142[TextLanguage][1]); //"\aUnits remaining;"
		EV_Wait(40);
		EV_SetAction(player, &action_e_e0036_e102, &E102_TEXLIST, 1.0f, 1, 32);
		EV_Wait(45);
		EV_MsgClose();
		task_ichimaie = CIchimaie2_Create(&texlist_icm0142, 1);
		CIchimaie2_SetPriority(task_ichimaie, -1.2f);
		CIchimaie2_SetDstAlpha(task_ichimaie, 1.0f, 16);
		EV_Wait(16);
		EventSe_Oneshot(1333, 0, 0, 0);
		createScanLine(0x80u, 0, 0x50u, 0x55u, 5);
		EV_Wait(60);
		CIchimaie2_SetDstAlpha(task_ichimaie, 0.0f, 16);
		deleteScanLine();
		EV_Wait(16);
		CIchimaie2_SetTextureId(task_ichimaie, 1);
		CIchimaie2_SetDstAlpha(task_ichimaie, 1.0f, 16);
		EV_Wait(16);
		createScanLine(0x80u, 0, 0x50u, 0x55u, 5);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_Wait(60);
		CIchimaie2_SetDstAlpha(task_ichimaie, 0.0f, 16);
		deleteScanLine();
		EV_Wait(16);
		EV_CameraPos(1, 0, -9.7480001f, 734.38f, 1043.6f);
		EV_CameraAng(1, 0, 2885, 36645, 256);
		EV_Wait(20);
		EV_SetAction(player, &action_e_e0026_e102, &E102_TEXLIST, 0.60000002f, 1, 72);
		EV_Wait(10);
		EV_CameraPos(1, 95, -11.06f, 743.5f, 1030.6281f);
		EV_CameraAng(1, 95, 2885, 39461, 512);
		EV_Wait(105);
		EV_CameraPos(0, 120, -12.677f, 743.59998f, 1034.8f);
		EV_CameraAng(0, 120, 2885, 40229, 512);
		EV_CameraPerspective(1, 120, 12925);
		EV_SerifPlay(1313);
		EV_Msg(msgTbl_ev0142[TextLanguage][2]); //"\aGamma..."
		EV_Wait(80);
		EV_SetMode(E101KAI, 0);
		EV_SetPos(E101KAI, -47.700001f, 758.59998f, 962.90002f);
		EV_SetAng(E101KAI, 63982, 12624, 0);
		EV_SetAction(E101KAI, &action_taiki_e101kai_null11, &texlist_ev_e101kai, 1.0f, 1, 8);
		BGM_Play(MusicIDs_bosse101);
		EV_SetAction(player, &action_e_e0027_e102, &E102_TEXLIST, 1.0f, 1, 8);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 35, -11.78f, 750.43298f, 1045.66f);
		EV_CameraAng(0, 35, 1861, 46885, 768);
		EventSe_Play(0, 1334, 1800);
		EventSe_Volume(0, -40, 1);
		EV_Wait(35);
		EV_SetPath(E101KAI, &epathtag_cube0142_10, 0.5f, 0);
		EV_Wait(1);
		EV_CameraPos(0, 30, -11.43f, 749.57703f, 1051.5f);
		EV_CameraTargetObj(1, 1, E101KAI, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(71);
		EV_CameraPos(1, 0, -133.06f, 855.0f, 797.57001f);
		EV_CameraChase(E101KAI);
		EventSe_Volume(0, -10, 1);
		EV_Wait(60);
		EV_CameraChaseFree();
		EventSe_Volume(0, -40, 1);
		EV_Wait(1);
		EventSe_Volume(0, -90, 70);
		EV_CameraPos(0, 0, -11.43f, 751.57703f, 1051.5f);
		EV_Wait(70);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -4.0640001f, 746.52002f, 1035.58f);
		EV_CameraAng(0, 0, 3397, 33829, 0);
		EV_SetAction(player, &action_e_e0036_e102, &E102_TEXLIST, 1.0f, 1, 32);
		EV_Wait(20);
		EV_SerifPlay(1314);
		EV_Msg(msgTbl_ev0142[TextLanguage][3]); //"\aBeta..."
		EV_Wait(40);
		EV_CameraPos(0, 130, -8.04f, 738.46997f, 996.59998f);
		EV_CameraAng(0, 130, 3230, 33829, 0);
		EV_Wait(20);
		EV_MsgClose();
		EV_Wait(80);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, -2.2f, 733.5f, 1050.6f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_InitPlayer(0);
		EV_FreeObject(&E101KAI);
		if (task_ichimaie)
		{
			FreeTask(task_ichimaie);
			task_ichimaie = 0;
		}
		EventSe_Close();
		deleteScanLine();
		break;
	}
}