#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00E3[] = {
	(char*)("FROG"), &texlist_frog,
	0
};

void ev00E3_b_froggyhotel(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		KURAYAMI = 0;
		Frog = 0;
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_s_square);
		EV_CameraAng(1, 0, 0xFB00, 0x1216, 0);
		EV_CameraPos(1, 0, 78.169998f, 16.84f, 1492.26f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		EV_CameraPos(0, 60, 98.75f, 16.84f, 1477.13f);
		EV_CreateObjectFunc(&Frog, SetEventFrog, -36.790001f, 1.7f, 1665.08f, 0, 0x9F39, 0);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_Wait(1);
		EV_ClrAction(Frog);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_frog, 1.0f, 1, 0);
		EV_SetPos(player, 62.400002f, 0.0f, 1458.08f);
		EV_SetAng(player, 0, 0x12FB, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_Wait(50);
		seqVars[1] = 0;
		EV_CameraPos(0, 90, 87.949997f, 17.879999f, 1426.17f);
		EV_Wait(120);
		EV_CameraTargetFree();
		EV_ClrAction(player);
		EV_SetAction(Frog, &_action_f_f0002_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(40);
		EV_CameraTargetObj(1, 30, Frog, 0.0f, 1.0f, 0.0f, 0);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(30);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 47.73f, 2.78f, 1488.1899f);
		EV_CameraAng(1, 0, 0, 0x6E16, 0);
		EV_CameraPerspective(1, 30, 0x222);
		EV_SetAction(Frog, &_action_f_f0012_frog, &texlist_frog, 1.0f, 0, 8);
		EV_WaitAction(Frog);
		EV_SetAction(Frog, &_action_f_f0013_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(50);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraAng(1, 0, 0xFC00, 0x8D16, 0);
		EV_CameraPos(1, 0, -85.110001f, 35.540001f, 1563.83f);
		EV_CameraTargetObj(1, 0, Frog, 0.0f, 0.0f, 0.0f, 0);
		EV_SetAction(Frog, &_action_f_f0002_frog, &texlist_frog, 0.80000001f, 1, 0);
		EV_SetAng(Frog, 0, 0xBF39, 0);
		EV_Wait(1);
		moveObject(Frog, -36.790001f, 1.7f, 1665.08f, -298.69f, 0.0f, 1690.4399f, 380);
		EV_Wait(60);
		EV_CameraTargetFree();
		EV_Wait(160);
		stopObject(Frog);
		EV_FreeObject(&Frog);
		EV_MovePoint2(player, 44.540001f, 0.0f, 1492.41f, 0.0f, 3.0f);
		EV_CameraAng(1, 0, 0xF55C, 0x6067, 0);
		EV_CameraPos(1, 0, 71.230003f, 20.75f, 1466.9399f);
		EV_Wait(30);
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		stopObjectAll();
		EV_InitPlayer(0);
		EV_FreeObject(&Frog);
		seqVars[1] = 1;
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}