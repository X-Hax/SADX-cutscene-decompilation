#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00DA[] = {
	(char*)("FROG"), &texlist_frog,
	0
};

void ev00DA_b_enterpast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		tikal = 0;
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, 710.12f, 40.0f, -648.96002f);
		EV_SetAng(player, 0, 0x9B2E, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 590.02002f, -59.919998f, -669.08002f);
		EV_CameraAng(1, 0, 0xFD9C, 0xBBB0, 0);
		EV_CameraPos(1, 200, 579.40002f, -10.05f, -670.21002f);
		EV_CameraAng(1, 200, 0x89C, 0xBBB0, 0);
		EV_SerifPlay(1346);
		EV_MsgW(0, msgTbl_ev00DA[TextLanguage][0]); //"\aYes!"
		EV_CreateObject(&Frog,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 0.5f,
			player->twp->pos.z);
		EV_SetAng(Frog,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAction(Frog, &action_f_f0018_frog, &texlist_frog, 2.0f, 1, 0);
		EV_SetAction(player, &action_b_b0036_big, &BIG_TEXLIST, 0.2f, 0, 32);
		EV_Wait(50);
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 0.5f,
			player->twp->pos.z);
		EV_Wait(50);
		EV_MsgClose();
		EV_Wait(100);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 10.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 150, player, 15.0f, 0, -5460, 0, 150.0f, 0, -27306, 0, 25.0f);
		EV_SetAction(player, &action_b_b0037_big, &BIG_TEXLIST, 0.60000002f, 1, 0);
		EV_Wait(20);
		EV_SerifPlay(1347);
		EV_MsgW(1, msgTbl_ev00DA[TextLanguage][1]); //"\aWe're together again at last, heh?"
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 0.5f,
			player->twp->pos.z);
		EV_Wait(130);
		EV_MsgClose();
		EventSe_Play(0, 760, 1800);
		EV_CameraTargetObj(1, 0, player, -5.0f, 12.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 150, player, 10.0f, 0, -18203, 0, 20.0f, 0, -18203, 0, 15.0f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_b0042_big, &BIG_TEXLIST, 0.2f, 1, 16);
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 0.5f,
			player->twp->pos.z);
		EV_ClrAction(Frog);
		EV_SetAction(Frog, &action_f_f0016_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(20);
		tikal = CTikalLight_Create(
			player->twp->pos.x + 6.803f,
			player->twp->pos.y + 35.999699f,
			player->twp->pos.z + 30.68f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtag_ev0170_tk, 4.0f, 2);
		EV_Wait(30);
		EV_SerifPlay(1348);
		EV_MsgW(0, msgTbl_ev00DA[TextLanguage][2]); //"\aHuh?"
		EV_Wait(30);
		EV_CameraTargetObj(1, 0, player, 0.0f, 15.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 100, player, 15.0f, 0, -27306, 0, 13.0f, 0, -27306, 0, 7.0f);
		EV_SerifPlay(1349);
		EV_MsgW(0, msgTbl_ev00DA[TextLanguage][3]); //"\aThat's strange!"
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		efWhiteOn2(60, 30, 0);
		EV_Wait(30);
		EV_MsgClose();
		EV_ClrPath(tikal);
		if (tikal)
		{
			FreeTask(tikal);
			tikal = 0;
		}
		EV_FreeObject(&Frog);
		EV_Wait(40);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		break;
	case 2:
		EV_ClrPath(tikal);
		EventSe_Stop(0);
		EventSe_Close();
		EV_InitPlayer(0);
		EV_MsgClose();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_SerifStop();
		EV_FreeObject(&Frog);
		if (tikal)
		{
			FreeTask(tikal);
			tikal = 0;
		}
		efWhiteOff();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}