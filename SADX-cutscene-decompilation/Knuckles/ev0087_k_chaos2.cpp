#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0087_k_chaos2(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		W_EME = 0;
		FLASH = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(100);
		BGM_Play(MusicIDs_evtbgm04);
		EV_SetPos(player, 0.0f, 0.0f, -26.0f);
		EV_SetAng(player, 0, 31488, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 0.5f, 2.5f, -4.9000001f);
		EV_CameraAng(1, 0, 3313, 57306, 0);
		EV_CreatePlayer(2, Eggman_Main, 6.1599998f, 0.0f, -49.700001f, 0, 33024, 0);
		EV_Wait(1);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, 6.1599998f, 0.0f, -49.700001f);
		EV_SetAng(eggman, 0, 33024, 0);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(player, eggman, 0.0f, 9.0f, 0.0f);
		EV_CreateObject(&W_EME, 28.0f, -15.0f, -50.0f, 0, 64256, 0);
		EV_Wait(1);
		EV_SetMode(W_EME, 0);
		EV_Wait(1);
		EV_SetPos(W_EME,
			eggman->Data1->Position.x + 2.5f,
			eggman->Data1->Position.y - 15.5f,
			eggman->Data1->Position.z + 2.5f);
		EV_SetAng(W_EME, 0, 64256, 0);
		EV_SetAction(W_EME, &action_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 1, 0);
		moveObjectRightHand(W_EME, 2, -15.0f, -6.6999998f, 0.0f, 700);
		StgChaos2CtrlOn(-7.6999998f, -50.0f, 55.0f, 2048, 17197, 64000, 8);
		StgChaos2SetPos(-7.6999998f, -50.0f, 55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -25.0f, 55.0f);
		EV_Wait(1);
		StgChaos2SetAng(2048, 17197, 64000);
		EV_Wait(1);
		StgChaos2Human2Water();
		CreateChaos1(-7.6999998f, -20.0f, -55.0f, 0, 17197, 0, 80);
		EV_Wait(1);
		SetWaterChaos1();
		EV_Wait(1);
		ChangeMotionSpeedChaos1(0.30000001f);
		EV_CameraPos(1, 100, -12.2f, 2.5f, -17.700001f);
		EV_CameraAng(1, 100, 2545, 57306, 0);
		EV_Wait(110);
		EV_CameraPos(1, 0, 3.0f, 11.6f, -66.300003f);
		EV_CameraAng(1, 0, 64339, 31771, 0);
		EV_SetPos(eggman, 11.7f, 0.0f, -53.700001f);
		EV_SetAng(eggman, 0, 33024, 0);
		EV_SetAction(player, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.4f, 0, 0);
		EV_SetAction(player, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 1.5f, 1, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "EEECDFFFFDDCCCDDDDDA0");
		EV_SerifPlay(1035);
		EV_Msg(msgTbl_ev0087[TextLanguage][0]); //"\aEggman!   Give me back\nthe Master Em"...
		EV_CameraPos(1, 80, 7.0f, 11.6f, -65.699997f);
		EV_CameraAng(1, 80, 64851, 34331, 0);
		EV_Wait(40);
		EV_SetAction(player, &action_k_k0006_knuckles, &KNUCKLES_TEXLIST, 0.89999998f, 1, 16);
		EV_Wait(20);
		EV_ClrFace(player);
		EV_SetAction(eggman, &action_g_g0022_eggman, &EGGMAN_TEXLIST, 0.55000001f, 0, 0);
		EV_SerifPlay(1036);
		EV_Msg(msgTbl_ev0087[TextLanguage][1]); //"\aKnu... Knuckles!"
		EV_Wait(50);
		EV_CameraPos(1, 0, 6.3000002f, 12.1f, -39.0f);
		EV_CameraAng(1, 0, 1065, 61428, 65280);
		EV_CameraPos(1, 20, 6.9000001f, 12.5f, -44.400002f);
		EV_CameraAng(1, 20, 1107, 60699, 65280);
		EV_SetAng(eggman, 0, 61440, 0);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0029_eggman, &EGGMAN_TEXLIST, 0.1f, 1, 0);
		EV_SetPos(W_EME, 5.1999998f, 14.0f, -56.700001f);
		EV_SetAng(W_EME, 4096, 64256, 0);
		stopObjectAll();
		EV_SetAng(player, 0, 28672, 0);
		EV_SerifPlay(1037);
		EV_Msg(msgTbl_ev0087[TextLanguage][2]); //"\aUhhh, this isn't \nwhat you're after!"
		moveObjectAngle2(W_EME, 5.1999998f, 14.0f, -56.700001f, 4.9000001f, 14.0f, -58.5f, 4096, 0, 0, -4096, 0, 0, 18);
		EV_Wait(18);
		EV_CameraPos(1, 60, 5.6999998f, 11.68f, -45.0f);
		EV_CameraAng(1, 60, 3104, 65533, 0);
		moveObjectAngle2(W_EME, 4.9000001f, 14.0f, -58.5f, 4.9000001f, 14.5f, -57.5f, 4096, 0, 0, -4096, 0, 0, 40);
		EV_Wait(45);
		moveObjectAngle2(W_EME, 4.9000001f, 14.5f, -57.5f, 6.5f, 14.3f, -55.700001f, -4096, 0, 0, 4096, 0, 0, 75);
		EV_Wait(25);
		EV_CameraPos(0, 55, 5.6999998f, 12.6f, -47.860001f);
		EV_Wait(60);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -3.9000001f, 2.8f, -37.400002f);
		EV_CameraAng(1, 0, 2387, 36891, 0);
		EV_CameraPos(1, 50, -2.4000001f, 3.8f, -33.799999f);
		EV_CameraAng(1, 50, 2387, 36891, 0);
		EV_SetPos(W_EME, 8.6000004f, -14.3f, -70.0f);
		EV_SetAng(W_EME, 0, 64256, 0);
		EV_ClrFace(player);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "CCCDCDC0");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "C");
		}
		EV_SerifPlay(1038);
		EV_Msg(msgTbl_ev0087[TextLanguage][3]); //"\aHuh, you're right!"
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 0.69999999f, 1, 8);
		EV_Wait(40);
		EV_ClrFace(player);
		EV_SetPos(W_EME, 7.0f, -18.0f, -57.599998f);
		EV_SetAng(W_EME, 0, 64256, 0);
		EV_Wait(40);
		EV_LookObject(player, eggman, 0.0f, 12.0f, 0.0f);
		EV_CameraPos(0, 120, -17.700001f, 1.8f, -25.0f);
		EV_CameraAng(0, 120, 3155, 53275, 64256);
		EV_SerifPlay(1039);
		EV_Msg(msgTbl_ev0087[TextLanguage][4]); //"\aThat's okay, though.  I can use you\n"...
		EV_SerifWait();
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0007_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_CameraPos(0, 90, -11.7f, 1.0f, -26.5f);
		EV_CameraAng(0, 90, 3057, 59354, 64486);
		EV_Msg(msgTbl_ev0087[TextLanguage][5]); //"\aChaos!   Chaos!"
		EV_Wait(15);
		EV_SerifPlay(1040);
		EV_Wait(15);
		EV_CameraPos(1, 70, -4.9000001f, 1.27f, -14.7f);
		EV_CameraAng(1, 70, 3057, 63194, 742);
		EV_SetAction(player, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.3f, 0, 16);
		EV_SetAction(player, &action_k_k0006_knuckles, &KNUCKLES_TEXLIST, 1.3f, 1, 16);
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		dsPlay_timer(1336, 1, 1, 0, 128);
		SetPositionChaos1(-7.6999998f, -8.0f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -7.5f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -7.0f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -6.5f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -6.0f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -5.5f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -5.0f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -4.5f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -4.0f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -3.5f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -3.0f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -2.5f, -55.0f);
		EV_Wait(1);
		SetPositionChaos1(-7.6999998f, -2.0f, -55.0f);
		EV_Wait(18);
		SetPositionChaos1(-7.6999998f, -2.0f, -55.0f);
		dsStop_num(1336);
		ToHumanChaos1();
		ChangeMotionSpeedChaos1(0.30000001f);
		EV_Wait(35);
		dsPlay_timer_v(1333, 2, 1, 400, 128, -7.6999998f, 1.22f, -55.0f);
		EV_ClrFace(player);
		EV_SetFace(player, "ECDDA0");
		EV_SerifPlay(1041);
		EV_Msg(msgTbl_ev0087[TextLanguage][6]); //"\tChaos?"
		EV_Wait(30);
		EV_ClrFace(player);
		EV_Wait(10);
		EV_LookPoint(player, -18.0f, 12.0f, -63.0f);
		EV_CameraPos(1, 0, -11.05f, 0.30000001f, -66.199997f);
		EV_CameraAng(1, 0, 2033, 35546, 64998);
		SetPositionChaos1(-7.6999998f, -1.0f, -55.0f);
		EV_SetAng(player, 0, 37376, 0);
		EV_SetAng(eggman, 0, 49152, 0);
		EV_CameraPos(1, 290, -10.6f, 17.6f, -64.599998f);
		EV_CameraAng(1, 290, 63905, 35034, 64998);
		EV_ClrFace(player);
		EV_SetFace(player, "ECEDAC0");
		EV_SerifPlay(1042);
		EV_Msg(msgTbl_ev0087[TextLanguage][7]); // "\aIt's that creature again!"
		EV_Wait(40);
		EV_ClrFace(player);
		EV_ClrFace(player);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "ECEDDDEECCDECADDEECCAC0");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "ECE0");
		}
		EV_SerifPlay(1043);
		EV_Msg(msgTbl_ev0087[TextLanguage][8]); //"\aThe same one I saw on \nmy island."
		EV_Wait(140);
		EV_ClrFace(player);
		dsStop_id(2);
		PlaySound(1333, 0, 0, 0);
		EV_ClrFace(player);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "ECEDDECCDECADDEECCAC0");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "DDED");
		}
		EV_SerifPlay(1044);
		EV_Msg(msgTbl_ev0087[TextLanguage][9]); //"\aHe was there when \nthe Master Emeral"...
		EV_Wait(80);
		EV_Msg(msgTbl_ev0087[TextLanguage][10]); //"\aI'm sure of it."
		EV_Wait(30);
		EV_ClrFace(player);
		dsPlay_timer_v(1334, 3, 1, 10, 300, -7.6999998f, 1.22f, -55.0f);
		EV_SetAction(player, &action_k_k0006_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_Wait(10);
		EV_CameraPos(1, 0, -9.3000002f, 5.0f, -30.700001f);
		EV_CameraAng(1, 0, 241, 43738, 230);
		dsStop_id(3);
		dsPlay_timer_v(1333, 9, 1, 0, 300, -7.6999998f, 1.22f, -55.0f);
		dsStop_num(1334);
		EV_SerifPlay(1045);
		EV_ClrFace(player);
		EV_SetFace(player, "ECEDDECCDECADDEECCACCACCA0");
		EV_Msg(msgTbl_ev0087[TextLanguage][11]); //"\aHe saved me the trouble of \nlooking "...
		EV_CameraPos(1, 70, -8.5f, 5.0999999f, -30.200001f);
		EV_CameraAng(1, 70, 241, 43738, 230);
		EV_Wait(45);
		EV_Msg(msgTbl_ev0087[TextLanguage][12]); //"\aNow I'll get him good!"
		EV_Wait(65);
		EV_ClrFace(player);
		EV_Wait(10);
		EV_MsgClose();
		stopObjectAll();
		EV_SetPos(W_EME, 8.0f, 12.8f, -56.900002f);
		EV_SetAng(W_EME, 0, 53248, 0);
		EV_SetPos(eggman, 13.37f, 0.0f, -52.400002f);
		EV_SetAng(eggman, 0, 56064, 0);
		EV_SetAction(eggman, &action_g_g0030_eggman, &EGGMAN_TEXLIST, 0.80000001f, 0, 0);
		EV_Wait(10);
		EV_CameraPos(1, 0, -1.4f, 3.1199999f, -29.9f);
		EV_CameraAng(1, 0, 3548, 63706, 0);
		EV_CameraTargetObj(1, 30, W_EME, 0.0f, 0.0f, 0.0f, 0);
		moveObject(W_EME, 8.0f, 12.8f, -56.900002f, 5.8000002f, 12.4f, -53.799999f, 10);
		EV_Wait(10);
		moveObject(W_EME, 5.8000002f, 12.4f, -53.799999f, -3.0f, 39.0f, -52.599998f, 20);
		EV_Wait(25);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(W_EME, &action_ce_0001_m_em_white, &M_EM_WHITE_TEXLIST, 0.69999999f, 0, 0);
		EV_SetAction(W_EME, &action_ce_0002_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 1, 0);
		moveObject(W_EME, -3.0f, 41.0f, -52.599998f, -9.0f, 5.0f, -52.599998f, 55);
		EV_Wait(45);
		EV_CameraTargetFree();
		EV_Wait(10);
		dsPlay_timer_v(1336, 8, 1, 90, 128, -7.6999998f, 1.22f, -55.0f);
		EV_CameraPos(1, 0, -28.4f, 14.12f, -62.200001f);
		EV_CameraAng(1, 0, 182, 43928, 0);
		EV_CameraPos(1, 80, -25.4f, 4.1199999f, -63.799999f);
		EV_CameraAng(1, 80, 182, 40856, 0);
		ToWaterChaos1();
		EV_Wait(10);
		crushLightOn(
			W_EME->Data1->Position.x,
			W_EME->Data1->Position.y,
			W_EME->Data1->Position.z,
			3, 10, 0.40000001f, 2.0f, 0xFFFFFFFF, 0x96969696);
		FLASH = COverlayCreate(0.039999999f, 0.1f, 1.0f, 1.0f, 1.0f);
		BGM_Stop();
		BGM_Play(MusicIDs_evtbgm01);
		EV_Wait(50);
		crushLightOff();
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.02f);
		}
		EV_FreeObject(&W_EME);
		StgChaos2SetPos(-7.6999998f, -8.0f, -55.0f);
		StgChaos2SetAng(2048, 17197, 64000);
		EV_Wait(1);
		DeleteChaos1();
		StgChaos2Water2Human();
		StgChaos2SetPos(-7.6999998f, -7.5f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -7.0f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -6.5f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -6.0f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -5.5f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -5.0f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -4.5f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -4.0f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -3.5f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -3.0f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -2.5f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -2.0f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -1.5f, -55.0f);
		EV_Wait(1);
		StgChaos2SetPos(-7.6999998f, -1.0f, -55.0f);
		EV_Wait(1);
		StgChaos2BubbleAdd(3.0f);
		EV_CameraPos(1, 0, -2.9000001f, 2.8f, -40.200001f);
		EV_CameraAng(1, 0, 65265, 6113, 256);
		EV_SetPos(eggman, 7.54f, 0.0f, -49.200001f);
		EV_SetAng(eggman, 0, 57344, 0);
		EV_CameraPos(1, 120, 12.2f, 1.5f, -25.700001f);
		EV_CameraAng(1, 120, 3848, 5850, 256);
		EV_Wait(40);
		EV_SerifPlay(1046);
		EV_Msg(msgTbl_ev0087[TextLanguage][13]); // "\aHa ha ha ha ha!   \nWay to go, Chaos!"
		EV_SetAction(eggman, &action_g_g0007_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_LookPoint(eggman, -18.0f, 19.0f, 63.0f);
		dsStop_num(1335);
		EV_CameraPos(1, 0, -7.1999998f, 5.6999998f, -28.299999f);
		EV_CameraAng(1, 0, 1009, 42970, 0);
		EV_CameraPos(0, 90, -5.5f, 5.6999998f, -30.85f);
		EV_SerifPlay(1047);
		EV_ClrFace(player);
		EV_SetFace(player, "AAAADDEAAECCAC0");
		EV_Msg(msgTbl_ev0087[TextLanguage][14]); //"\aHah! Changing shape won't\nscare me!"
		EV_Wait(100);
		EV_ClrFace(player);
		EV_Wait(20);
		dsPlay_timer_v(1333, 6, 1, 20, 140, -7.6999998f, 1.22f, -55.0f);
		EV_Wait(70);
		EV_CameraPos(1, 0, -15.1f, 1.9f, -16.6f);
		EV_CameraAng(1, 0, 2545, 62938, 0);
		StgChaos2Action(1.0f);
		dsPlay_oneshot_v(1335, 0, 0, 128, -7.6999998f, -50.0f, 55.0f);
		EV_SetPos(eggman, 9.6999998f, 0.0f, -69.169998f);
		EV_SetAng(eggman, 0, 57344, 0);
		EV_CameraPos(1, 100, -6.4000001f, 1.9f, -13.8f);
		EV_CameraAng(1, 100, 2545, 63704, 0);
		EV_SetAction(player, &action_k_k0002_knuckles, &KNUCKLES_TEXLIST, 1.4f, 1, 20);
		EV_ClrFace(player);
		EV_SetFace(player, "ECEDDECCDECADDEECCAC0");
		EV_SerifPlay(1048);
		EV_Msg(msgTbl_ev0087[TextLanguage][15]); //"\aFine!   \nGive it your best shot!"
		EV_Wait(130);
		EV_ClrFace(player);
		dsStop_num(1333);
		dsStop_num(1334);
		dsStop_num(1335);
		dsStop_num(1336);
		EV_Wait(1);
		break;
	case 2:
		EV_CameraOff();
		stopObjectAll();
		dsStop_num(1333);
		dsStop_num(1334);
		dsStop_num(1335);
		dsStop_num(1336);
		dsStop_id(1);
		dsStop_id(2);
		dsStop_id(3);
		dsStop_id(6);
		dsStop_id(8);
		dsStop_id(9);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&W_EME);
		DeleteChaos1();
		StgChaos2CtrlOff();
		EV_SerifStop();
		crushLightOff();
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		break;
	}
}