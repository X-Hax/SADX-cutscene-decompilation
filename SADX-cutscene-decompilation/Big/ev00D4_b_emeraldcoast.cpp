#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00D4[] = { 0 };

void ev00D4_b_emeraldcoast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(101);
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_SetPos(player, 998.29999f, 78.0f, 777.29999f);
		EV_SetAng(player, 0x19F, 0x320, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_b0007_big, &BIG_TEXLIST, 0.80000001f, 1, 0);
		EV_CreateObject(&Frog,
			player->twp->pos.x - 6.0999999f,
			player->twp->pos.y + 9.5f,
			player->twp->pos.z + 3.0f,
			(int)player->twp->pos.x - 0x4000,
			(int)player->twp->pos.y - 0x4000,
			(int)player->twp->pos.z);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetPos(Frog,
			player->twp->pos.x - 5.0f,
			player->twp->pos.y + 7.8000002f,
			player->twp->pos.z + 6.6999998f);	
		EV_SetAng(Frog,
			(int)player->twp->pos.x - 0x1000,
			(int)player->twp->pos.y + 0x2800,
			(int)player->twp->pos.z);
		EV_SetAction(Frog, &action_f_f0003_frog, &big_kaeru_TEXLIST, 2.0f, 1, 0);
		moveObjectOn(Frog, -7.0f, 2.0f, 3.0f, 200, player);
		EV_CreatePlayer(2, E102, 1027.0f, 76.0f, 857.29999f, 0xF900, 0x9000, 0);
		EV_Wait(1);
		e102 = EV_GetPlayer(2);
		EV_SetPos(e102, 1027.0f, 73.0f, 857.29999f);
		EV_SetAng(e102, 0xF900, 0x9000, 0);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 0, 0);
		EV_CameraPos(1, 0, 1005.97f, 84.910004f, 840.5f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 7.0f, 0.0f, 0);
		EV_MovePoint2(player, 1012.7f, 79.5f, 809.90002f, 0.30000001f, 0.30000001f);
		EV_Wait(60);
		EV_PlayPad(2, &EV00D4_KAERU);
		EV_Wait(20);
		stopObject(Frog);
		EV_Wait(10);
		dsPlay_oneshot(1333, 0, 0, 0);
		EV_Wait(10);
		EV_CameraTargetFree();
		moveObjectOn(Frog, -13.0f, 3.2f, -15.0f, 600, e102);
		EV_Wait(30);
		dsStop_num(1325);
		EV_CameraPos(0, 90, 1005.13f, 83.199997f, 838.59998f);
		EV_CameraAng(0, 90, 0x342, 0xF2C0, 0);
		EV_SetAction(player, &action_b_b0006_big, &BIG_TEXLIST, 0.80000001f, 1, 16);
		EV_Wait(40);
		EV_SerifPlay(1335);
		EV_Msg(msgTbl_ev00D4[TextLanguage][0]); //"\aFroggy?"
		EV_Wait(50);
		EV_SetAng(e102, 0, 0x2300, 0);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 2.5f, 1, 0);
		stopObject(Frog);
		EV_SetPos(Frog,
			e102->twp->pos.x - 3.9000001f,
			e102->twp->pos.y + 2.8f,
			e102->twp->pos.z - 3.9000001f);
		EV_SetAng(Frog,
			(int)e102->twp->pos.x,
			(int)e102->twp->pos.y + 13056,
			(int)e102->twp->pos.z);
		EV_CameraPos(0, 100, 1012.7f, 79.099998f, 841.0f);
		EV_CameraAng(0, 100, 0xCBF, 0xBC4, 0);
		EV_SetAction(player, &action_b_b0012_big, &BIG_TEXLIST, 2.3f, 1, 2);
		EV_Wait(50);
		EV_SetAction(player, &action_b_b0012_big, &BIG_TEXLIST, 0.40000001f, 1, 12);
		EV_SetAng(player, 0x800, 0xA400, 0);
		EV_Wait(10);
		EV_SetAction(player, &action_b_b0012_big, &BIG_TEXLIST, 0.2f, 1, 8);
		EV_SerifPlay(1336);
		EV_Msg(msgTbl_ev00D4[TextLanguage][1]); //"\aUh oh!"
		EV_Wait(20);
		EV_SetAction(player, &action_b_b0012_big, &BIG_TEXLIST, 0.1f, 1, 8);
		EV_Wait(65);
		moveObjectOn(Frog, -15.0f, 6.8000002f, -16.5f, 600, e102);
		EV_PlayPad(2, &EV00D4_GAMMA);
		dsStop_num(1326);
		EV_Wait(20);
		stopObject(Frog);
		moveObjectOn(Frog, -7.0f, 4.1999998f, -10.5f, 600, e102);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_b0020_big, &BIG_TEXLIST, 2.0f, 1, 4);
		EV_ClrAction(e102);
		EV_CameraPerspective(1, 60, 0x2EEF);
		EV_Wait(1);
		EV_CameraTargetObj(1, 30, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(1, 80, 1032.0f, 85.300003f, 836.5f);
		EV_SerifPlay(1337);
		EV_Msg(msgTbl_ev00D4[TextLanguage][2]); //"\aNO, hold on there!\nCome back, please"...
		EV_PlayPad(0, &EV00D4_BIG);
		EV_SerifPlay(1338);
		EV_Msg(msgTbl_ev00D4[TextLanguage][3]); //"\aGive me my friend back!\nI'm beggin' "...
		EV_Wait(20);
		EV_CameraTargetFree();
		EV_CameraAng(1, 110, 0x1100, 0x20C1, 0);
		stopObjectAll();
		EV_SetAction(e102, E102_ACTIONS[3], &E102_TEXLIST, 2.0f, 1, 0);
		EV_Wait(121);
		break;
	case 2:
		stopObjectAll();
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&Frog);
		EV_SerifStop();
		break;
	}
}