#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00DC_b_tikal(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(97);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_tical);
		EV_CreatePlayer(2, Tikal, -2.74f, 7.5100002f, 254.64999f, 0, 29118, 0);
		EV_Wait(1);
		EV_InitPlayer(2);
		tikal = EV_GetPlayer(2);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0040_tikal, &TIKAL_TEXLIST, 0.1f, 0, 8);
		EV_SetPos(player, 2.9000001f, 0.0099999998f, 329.10001f);
		EV_SetAng(player, 0, 32856, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 2.0799999f, 12.97f, 312.72f);
		EV_CameraAng(1, 0, 611, 33244, 0);
		EV_SerifPlay(1352);
		EV_Wait(30);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][0]); //"\aWow!"
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "I");
		EV_CameraPos(1, 20, 0.33000001f, 14.86f, 242.48f);
		EV_CameraAng(1, 20, 611, 32732, 0);
		EV_Wait(50);
		EV_CameraPos(1, 0, 5.4099998f, 9.3199997f, 285.07999f);
		EV_CameraAng(1, 0, 3427, 476, 0);
		EV_CameraPos(1, 200, 5.1100001f, 11.58f, 278.45999f);
		EV_CameraAng(1, 200, 3427, 476, 0);
		EV_SerifPlay(1353);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][1]); //"\aIs it alright for me to be here?"
		EV_Wait(60);
		EV_CameraPos(0, 0, -69.160004f, 21.98f, 202.53999f);
		EV_CameraAng(0, 0, 57856, 38876, 0);
		EventSe_Oneshot(1335, 128, -100, 0);
		createWaveCtrl(-46.84f, -3.0f, 245.56f, 0.25f, 1.0f, 6, 18, 1);
		EV_Wait(30);
		createWaveCtrl(-46.84f, -3.0f, 245.56f, 0.2f, 1.0f, 7, 22, 1);
		EventSe_Oneshot(1335, 110, -70, 0);
		createWaveCtrl(-56.369999f, -3.0f, 225.74001f, 0.30000001f, 1.0f, 6, 19, 3);
		EV_Wait(40);
		createWaveCtrl(-56.369999f, -3.0f, 225.74001f, 0.30000001f, 1.0f, 6, 19, 3);
		EV_MsgClose();
		EV_Wait(100);
		stopWaveCtrl(1);
		stopWaveCtrl(3);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0017_tikal, &TIKAL_TEXLIST, 0.1f, 1, 32);
		EV_CameraPos(1, 0, 6.5300002f, 9.1400003f, 244.72f);
		EV_CameraAng(1, 0, 3840, 24540, 0);
		EV_CameraPos(1, 200, 3.74f, 9.9700003f, 248.25999f);
		EV_CameraAng(1, 200, 3840, 24540, 0);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "EAAAALD");
		EV_SerifPlay(1354);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][2]); //"\aSo do you... Trust me?"
		EV_Wait(100);
		EV_CameraPos(1, 0, -2.24f, 8.1599998f, 289.48001f);
		EV_CameraAng(1, 0, 3939, 7716, 0);
		EV_CameraPos(1, 200, -2.24f, 8.1599998f, 289.48001f);
		EV_CameraAng(1, 200, 3939, 56356, 0);
		EV_SerifPlay(1355);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][3]); //"\aSo these are the 7 Emeralds…"
		EV_Wait(200);
		EV_MsgClose();
		EV_Wait(10);
		EV_CameraPos(1, 0, 7.9899998f, 14.16f, 230.02f);
		EV_CameraAng(1, 0, 611, 31452, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_ti_walk, &TIKAL_TEXLIST, 1.3f, 1, 8);
		EV_MovePoint2(tikal, 0.67000002f, 7.5f, 231.75f, 0.5f, 0.059999999f);
		EV_Wait(60);
		EV_SetAction(player, BIG_ACTIONS[16], &BIG_TEXLIST, 0.60000002f, 1, 8);
		EV_Wait(10);
		EV_MovePoint2(player, -3.1700001f, -0.0099999998f, 295.20001f, 0.40000001f, 0.059999999f);
		EV_Wait(90);
		EV_CameraPos(1, 0, 66.440002f, 120.12f, 247.92f);
		EV_CameraAng(1, 0, 64512, 2780, 0);
		EV_CameraPos(1, 100, 23.299999f, 103.95f, 89.510002f);
		EV_CameraAng(1, 100, 64512, 2780, 0);
		EV_SetPos(tikal, 3.55f, 90.0f, 89.660004f);
		EV_SetAng(tikal, 0, 32856, 0);
		EV_Wait(1);
		EV_ClrAction(tikal);
		EV_ClrAction(player);
		EV_SetAction(tikal, &action_ti_walk, &TIKAL_TEXLIST, 1.6f, 1, 4);
		EV_Wait(1);
		EV_MovePoint2(tikal, -0.1f, 90.0f, 65.160004f, 0.5f, 0.059999999f);
		EV_Wait(50);
		EV_SetAction(tikal, &action_ti_wait, &TIKAL_TEXLIST, 0.30000001f, 1, 4);
		EV_WaitMove(tikal);
		EV_SerifPlay(1356);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][4]); //"\a！？"
		EV_SetAction(tikal, &action_ti_walk, &TIKAL_TEXLIST, 1.4f, 1, 4);
		EV_Wait(70);
		EV_MsgClose();
		EV_MovePoint2(tikal, 0.11f, 90.0f, 43.119999f, 0.30000001f, 0.059999999f);
		EV_Wait(40);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(player, 10.49f, 90.0f, 91.110001f);
		EV_SetAng(player, 0, 35459, 0);
		EV_Wait(30);
		EV_SetAction(tikal, &action_j_j0040_tikal, &TIKAL_TEXLIST, 0.1f, 1, 8);
		EV_Wait(20);
		EV_SerifPlay(1357);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][5]); //"\aCould it be?"
		EV_Wait(30);
		EV_MoveFree(tikal);
		EV_CameraPos(1, 0, 1.12f, 99.309998f, 32.529999f);
		EV_CameraAng(1, 0, 62464, 27868, 0);
		EV_CameraPos(1, 40, 2.9000001f, 99.309998f, 33.43f);
		EV_CameraAng(1, 40, 62464, 27868, 0);
		EV_Wait(10);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "DALC");
		EV_SerifPlay(1358);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][6]); //"\aThe servers are... \nthe 7 Chaos Emer"...
		EV_Wait(30);
		EV_CameraPos(1, 300, 4.6799998f, 99.309998f, 34.34f);
		EV_CameraAng(1, 300, 62464, 27868, 0);
		EV_Wait(50);
		EV_ClrFace(tikal);
		if (!VoiceLanguage)
		{
			EV_SetFace(tikal, "CLLCE");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(tikal, "CCE");
		}
		EV_SerifPlay(1359);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][7]); //"\aUnified by one that is\nthe controlle"...
		EV_Wait(150);
		EV_CameraPos(1, 0, -248.85001f, 474.97f, 176.23f);
		EV_CameraAng(1, 0, 55296, 56540, 0);
		EV_CameraPos(1, 150, -231.94f, 474.97f, 195.97f);
		EV_CameraAng(1, 150, 55296, 56540, 0);
		EV_SerifPlay(1360);
		EV_SetFace(tikal, "C");
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][8]); //"\aThe 7 Chaos…"
		EV_SetAction(tikal, &action_j_j0040_tikal, &TIKAL_TEXLIST, 0.1f, 0, 8);
		EV_Wait(80);
		EV_CameraPos(1, 0, -105.83f, 148.95f, 27.75f);
		EV_CameraAng(1, 0, 60673, 51420, 0);
		EV_CameraPos(1, 100, -108.46f, 143.59f, 28.33f);
		EV_CameraAng(1, 100, 60673, 51420, 0);
		EV_Wait(1);
		EV_SerifPlay(1361);
		EV_MsgW(1, msgTbl_ev00DC[TextLanguage][9]); //"\aThe controller itself..."
		EV_SetAction(tikal, &action_j_j0041_tikal, &TIKAL_TEXLIST, 0.1f, 0, 8);
		EV_Wait(70);
		EV_CameraPos(1, 0, 2.77f, 102.2f, 30.459999f);
		EV_CameraAng(1, 0, 61440, 31196, 0);
		EV_CameraPos(1, 10, 2.0799999f, 100.28f, 35.029999f);
		EV_CameraAng(1, 10, 61440, 31196, 0);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "AI");
		EV_Wait(10);
		EV_CameraPos(1, 200, 1.9400001f, 99.900002f, 35.939999f);
		EV_CameraAng(1, 200, 61440, 31196, 0);
		EV_Wait(10);
		EV_CameraPos(1, 0, 10.09f, 94.949997f, 69.260002f);
		EV_CameraAng(1, 0, 2313, 1216, 0);
		EV_CameraPos(1, 200, 8.5f, 98.029999f, 55.700001f);
		EV_CameraAng(1, 200, 2313, 1216, 0);
		EV_SerifPlay(1362);
		EV_MsgW(0, msgTbl_ev00DC[TextLanguage][10]); //"\aCould this be the Emerald \nthat cont"...
		EV_Wait(120);
		EV_MsgClose();
		EV_Wait(10);
		EV_SetFace(tikal, "ZZZKVV");
		EV_Wait(20);
		EV_CameraPos(1, 0, 2.9300001f, 96.970001f, 30.040001f);
		EV_CameraAng(1, 0, 256, 32732, 0);
		EV_Wait(30);
		EV_CameraPos(1, 30, 5.8299999f, 104.03f, 77.300003f);
		EV_CameraAng(1, 30, 65024, 35292, 0);
		EventSe_Play(0, 760, 1800);
		EV_Wait(40);
		EventSe_Volume(0, -120, 120);
		efWhiteOn2(60, 30, 0);
		EV_Wait(90);
		EventSe_Stop(0);
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		efWhiteOff();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}