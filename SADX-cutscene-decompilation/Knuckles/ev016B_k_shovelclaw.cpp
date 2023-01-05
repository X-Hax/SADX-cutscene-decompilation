#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev016B[] = { 0 };

void ev016B_k_shovelclaw(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		tikal = 0;
		SetBankDir(78);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_SetPos(player, 1300.0f, -1.5599999f, -290.0f);
		EV_SetAng(player, 0, 0x38F8, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[29], &KNUCKLES_TEXLIST, 0.1f, 0, 8);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 4.5f, 0.0f, 0);
		EV_CameraChaseRM(0, 250, player, 8.0f, 0, 21845, 0, 16.0f, 0, -50971, 0, 16.0f);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1625);
		EV_MsgW(0, msgTbl_ev016B[TextLanguage][0]); //"\aYou've got the Shovel Claw. Now,\nyou"...
		tikal = CTikalLight_Create(
			player->twp->pos.x + 7.5349998f,
			player->twp->pos.y + 27.0f,
			player->twp->pos.z + 13.89f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0167_tk, 2.0f, 2);
		EV_SetAction(player, KNUCKLES_ACTIONS[30], &KNUCKLES_TEXLIST, 0.2f, 1, 8);
		EV_Wait(35);
		EV_Wait(80);
		EV_SetAction(player, KNUCKLES_ACTIONS[31], &KNUCKLES_TEXLIST, 0.40000001f, 0, 8);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(1, 150, 1308.79f, 8.46f, -288.44f);
		EV_CameraAng(1, 150, 0xFA3A, 0x38E4, 0);
		EV_Wait(30);
		EV_MsgW(0, msgTbl_ev016B[TextLanguage][1]); // "\aPress the jump and action buttons \ns"...
		EV_SerifWait();
		EV_Wait(5);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -80, 80);
		EV_Wait(100);
		EV_MsgClose();
		EV_Wait(10);
		EV_ClrPath(tikal);
		if (tikal)
		{
			FreeTask(tikal);
			tikal = 0;
		}
		EV_Wait(1);
		break;
	case 2:
		EventSe_Close();
		EV_ClrPath(tikal);
		EV_InitPlayer(0);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_SerifStop();
		EV_MsgClose();
		if (tikal)
		{
			FreeTask(tikal);
			tikal = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}