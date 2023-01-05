#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00E0[] = {
	(char*)("FROG"), &texlist_frog,
	0
};

void ev00E0_b_tornado2(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		B_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_thebig);
		EV_SetPos(player, -21.209999f, 699.25f, -1071.66f);
		EV_SetAng(player, 0, 0x65F4, 0);
		EV_Wait(1);
		EV_CreateObject(&Frog,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_Wait(1);
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 1.5f,
			player->twp->pos.z);
		EV_SetAng(Frog,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_b0022_big, &BIG_TEXLIST, 1.0f, 1, 8);
		EV_ClrAction(Frog);
		EV_SetAction(Frog, &action_f_f0007_frog, &texlist_frog, 1.0f, 1, 8);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 12.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 160, player, 12.0f, 0, 0x9C72, 0, 60.0f, 0, 0x4E39, 0, 90.0f);
		EV_Wait(5);
		EV_SerifPlay(1388);
		EV_Wait(1);
		EV_SerifPlay(1389);
		EV_MsgW(60, msgTbl_ev00E0[TextLanguage][0]); //"\aHuh... er... what?\nHey, maybe we cou"...
		EV_MsgClose();
		EV_Wait(30);
		EV_SerifPlay(1390);
		EV_MsgW(60, msgTbl_ev00E0[TextLanguage][1]); //"\aBut I don't know the first thing \nab"...
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -14.22f, 713.75f, -1081.76f);
		EV_CameraAng(0, 0, 0, 0x6700, 0);
		EV_Wait(10);
		EV_SerifPlay(1391);
		EV_MsgW(0, msgTbl_ev00E0[TextLanguage][2]); // "\aOh well,\nI'll give it a try, anyway."
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, 27.99f, 791.21002f, -1167.11f);
		EV_CameraAng(0, 0, 56949, 0x7000, 0);
		EV_CameraPos(0, 120, 50.619999f, 855.01001f, -1221.75f);
		EV_Wait(60);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_b0007_big, &BIG_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -15.0f, 699.22998f, -1080.8101f, 0.5f, 0.059999999f);
		moveObjectOn(Frog, 0.0f, 0.0f, 0.0f, 30, player);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		stopObjectAll();
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		EV_InitPlayer(0);
		EV_FreeObject(&Frog);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}