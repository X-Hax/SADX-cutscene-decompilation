#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

void ev0020_s_mural(int state)
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
		BGM_Play(MusicIDs_evtbgm04);
		tikal = CTikalLight_Create(-23.139999f, 25.0f, -1.6f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_SetPos(player, 0.41f, 10.0f, 2.6700001f);
		EV_SetAng(player, 0, 48561, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -100, 200);
		EV_LookPoint(player, -23.139999f, 25.0f, -1.6f);
		EV_CameraPos(1, 0, 6.5300002f, 11.85f, 20.959999f);
		EV_CameraAng(1, 0, 2816, 5734, 0);
		EV_CameraPos(1, 100, 9.0f, 11.85f, 19.27f);
		EV_CameraAng(1, 100, 2816, 6502, 0);
		EV_Wait(80);
		moveObject(tikal, -23.139999f, 25.0f, -1.6f, -445.76001f, 25.0f, -11.85f, 300);
		EV_Wait(20);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5f, 1, 16);
		EV_MovePoint2(player, -385.39001f, 30.02f, 4.6500001f, 1.72f, 0.059999999f);
		EV_Wait(10);
		EV_LookFree(player);
		EV_Wait(20);
		EV_CameraPos(1, 0, -109.36f, 24.08f, 46.09f);
		EV_CameraAng(1, 0, 1024, 55398, 0);
		EV_Wait(50);
		EventSe_Stop(0);
		EV_CameraPos(0, 0, -257.51999f, 222.07001f, -125.52f);
		EV_CameraAng(0, 0, 56832, 41062, 0);
		EV_CameraPos(0, 150, -260.42001f, 211.64999f, -128.35001f);
		EV_CameraAng(0, 150, 56832, 41062, 0);
		EV_Wait(60);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EventSe_Oneshot(768, 0, 0, 0);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 80, player, 2.0f, 0, -18203, 0, 11.0f, 0, -27306, 0, 30.0f);
		EV_Wait(65);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CreateWaterRipple(-183.74001f, 5.8400002f, 56.889999f, 0.40000001f, 1.0f, 3, 10, 1);
		EV_CameraPos(0, 0, -197.12f, 28.84f, 29.299999f);
		EV_CameraAng(0, 0, 59104, 39701, 0);
		EventSe_Oneshot(1335, 100, 0, 0);
		EV_Wait(30);
		EV_CreateWaterRipple(-183.74001f, 5.8400002f, 56.889999f, 0.40000001f, 1.0f, 3, 10, 1);
		EV_Wait(40);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.0f, 1, 0);
		EV_FreeWaterRipple(1);
		EV_FreeObject(&tikal);
		stopObjectAll();
		EV_Wait(10);
		EV_SetPos(player, -365.35001f, 30.02f, 7.0900002f);
		EV_SetAng(player, 0, 48172, 0);
		EV_Wait(1);
		EV_MovePoint2(player, -385.39001f, 30.02f, 4.6500001f, 0.5f, 0.059999999f);
		EV_Wait(20);
		EV_CameraPos(0, 0, -402.53f, 35.209999f, 13.82f);
		EV_CameraAng(0, 0, 256, 54630, 0);
		EV_Wait(20);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_SetAction(player, (NJS_ACTION*)0x3C84C98, &SONIC_TEXLIST, 0.2f, 1, 16);
		EV_Wait(60);
		EV_CameraPos(0, 0, -476.79999f, 159.23f, -30.030001f);
		EV_CameraAng(0, 0, 55264, 42773, 0);
		EV_CameraPos(0, 200, -465.89001f, 159.23f, -45.59f);
		EV_CameraAng(0, 200, 55264, 42773, 0);
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, "I");
		EV_SerifPlay(587);
		EV_Msg((msgTbl_ev0020[TextLanguage])[0]); // "\aWhoa!  What's this?"
		EV_Wait(70);
		EV_CameraPos(1, 0, -400.47f, 33.889999f, -6.3499999f);
		EV_CameraAng(1, 0, 474, 42342, 0);
		EV_CameraPos(1, 60, -368.01001f, 33.59f, -0.49000001f);
		EV_CameraAng(1, 60, 1689, 15568, 0);
		EV_Wait(30);
		EV_SerifPlay(588);
		EV_ClrFace(player);
		EV_SetFace(player, "E");
		EV_MsgW(0, (msgTbl_ev0020[TextLanguage])[1]); // "\aA mural."
		EV_Wait(30);
		EV_MsgClose();
		EV_MsgClose();
		EV_CameraPos(1, 60, -370.10001f, 31.0f, -2.55f);
		EV_CameraAng(1, 60, 7898, 16230, 0);
		EV_Wait(60);
		EV_CameraPos(1, 500, -470.37f, 152.22f, -43.990002f);
		EV_CameraAng(1, 500, 8666, 16486, 0);
		EV_Wait(250);
		EventSe_Play(1, 110, 1800);
		EV_FadeToWhite(60, 30, 0);
		EV_Wait(90);
		break;
	case 2:
		EV_FreeObject(&tikal);
		stopObjectAll();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EventSe_Close();
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		EV_FreeFadeToWhite();
		break;
	}
}