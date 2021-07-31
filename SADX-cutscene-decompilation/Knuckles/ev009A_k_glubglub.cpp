#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev009A_k_glubglub(int state)
{
	int dif = 121;
	int amb = -69;
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(76);
		EventSe_Init(5);
		BGM_Play(MusicIDs_egcarer1);
		EV_SetPos(player, -1.76f, 734.59998f, 1044.35f);
		EV_SetAng(player, 0, 36608, 0);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(1, 0, -1.137f, 737.84998f, 1039.165f);
		EV_CameraAng(1, 0, 4352, 35624, 0);
		EV_CameraPos(1, 120, -2.1329999f, 737.7876f, 1039.233f);
		EV_CameraAng(1, 120, 5888, 33064, 64768);
		EV_ClrFace(player);
		EV_SetFace(player, "EAAACD");
		EV_SerifPlay(1156);
		EV_Msg(msgTbl_ev009A[TextLanguage][0]); //"\aI've finally found all \nthe missing "...
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(player);
		EV_CameraPos(1, 50, -11.55f, 738.27002f, 1034.1f);
		EV_CameraAng(1, 50, 1280, 39720, 0);
		EV_Wait(10);
		EV_ClrAction(player);
		if (enableUnusedCode) {
			EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 1.4f, 1, 0); //Mouth-compatible animation to show the SetFace below.
		}
		else {
			EV_SetAction(player, KNUCKLES_ACTIONS[57], &KNUCKLES_TEXLIST, 1.4f, 1, 0);
		}
		EV_MovePoint2(player, -84.269997f, 733.53998f, 983.21997f, 1.4f, 0.0f);
		EV_Wait(10);
		EV_CameraChase(player);
		EV_ClrFace(player);
		EV_SetFace(player, "EDC");
		EV_SerifPlay(1157);
		EV_Msg(msgTbl_ev009A[TextLanguage][1]); //"\aI still can't figure out\nthat creepy"...
		EV_Wait(1);
		EV_WaitMove(player);
		efWhiteOn(1, 1);
		EV_Wait(5);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[64], &KNUCKLES_TEXLIST, 1.0f, 0, 8);
		destroy_task_light_EV009A();
		EV_WaitAction(player);
		EV_LookPoint(player, -90.474998f, 740.284f, 971.88879f);
		EV_SetAction(player, &action_k_k0001_knuckles, &KNUCKLES_TEXLIST, 1.5f, 0, 8);
		EV_SetAction(player, &action_k_k0002_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_MoveRotation(player, 0, 1064, 0);
		efWhiteOn(1, 1);
		EV_SetFace(player, "B");
		EV_Wait(8);
		destroy_task_light_EV009A();
		EV_SerifPlay(1158);
		EV_Msg(msgTbl_ev009A[TextLanguage][2]); //"\aHuh!   What's that?  "
		EV_CameraPos(1, 80, -87.459999f, 736.0f, 994.34003f);
		EV_CameraAng(1, 80, 2304, 808, 256);
		EV_Wait(100);
		EV_CameraPos(0, 95, -90.160004f, 740.58801f, 971.09601f);
		EV_CameraPerspective(0, 95, 5461);
		EV_CameraAng(1, 95, 1024, 808, 256);
		EV_Wait(90);
		efWhiteOn(80, 80);
		crushLightOn(-125.0655f, 805.31f, 285.23099f, 4, 20, 3.0f, 1.0f, 0x88FFFFFF, 0x88FFFFFF);
		EventSe_Play(0, 1338, 1800);
		create_p_ShadowTask_EV009A(
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			80, 80, 8.0f);
		EV_SetAction(player, &action_k_k0003_knuckles, &KNUCKLES_TEXLIST, 1.5f, 0, 1);
		create_task_light_EV009A();
		EV_CameraPerspective(1, 20, 12743);
		EV_CameraPos(1, 20, -90.752998f, 740.66199f, 1004.09f);
		EV_CameraAng(1, 20, 63744, 62760, -256);
		EV_Wait(20);
		EV_SerifPlay(1797);
		EV_Msg(msgTbl_ev009A[TextLanguage][3]); //"\aWhoa.........."
		EV_SetAction(player, &action_k_k0004_knuckles, &KNUCKLES_TEXLIST, 1.5f, 1, 16);
		EV_MsgClose();
		EV_Wait(30);
		EventSe_Stop(0);
		crushLightOff();
		EV_Wait(60);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 12);
		EV_Wait(50);
		destroy_p_ShadowTask_EV009A();
		destroy_task_light_EV009A();
		EV_Wait(10);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, -84.300003f, 733.53998f, 983.18597f);
		EV_SetAng(player, 0, 40505, 0);
		EV_InitPlayer(0);
		destroy_p_ShadowTask_EV009A();
		crushLightOff();
		EV_FreeFadeToWhite();
		destroy_task_light_EV009A();
		EventSe_Stop(0);
		EventSe_Close();
		break;
	}
}