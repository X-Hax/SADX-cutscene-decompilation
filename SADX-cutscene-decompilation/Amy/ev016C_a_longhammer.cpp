#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev016C[] = { 0 };

void ev016C_a_longhammer(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		tikal = 0;
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_SetPos(player, 0.55000001f, 12.79f, 0.15000001f);
		EV_SetAng(player, 0, 0xF47A, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_item_hm0, &AMY_TEXLIST, 0.2f, 0, 16);
		AmyForEventHammerScaleIm(0, 1.26f);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 4.5f, 0.0f, 0);
		EV_CameraChaseRM(0, 200, player, 8.0f, 0, 0xF8E4, 0, 16.0f, 0, 0x1555, 0, 16.0f);
		EV_SetAction(player, &action_a_item_hm1, &AMY_TEXLIST, 0.2f, 1, 8);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1556);
		EV_MsgW(0, msgTbl_ev016C[TextLanguage][0]); //"\aHere's the Long Hammer."
		tikal = CTikalLight_Create(
			player->twp->pos.x + 7.5349998f,
			player->twp->pos.y + 27.0f,
			player->twp->pos.z + 13.89f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0167_tk, 2.5f, 2);
		EV_Wait(35);
		EventSe_Stop(0);
		EV_MsgW(50, msgTbl_ev016C[TextLanguage][1]); //"\aYour attack radius is now increased. "...
		EV_Wait(80);
		EV_SetAction(player, &action_a_item_hm2, &AMY_TEXLIST, 0.40000001f, 0, 8);
		EV_Wait(5);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -80, 80);
		EV_CameraPos(1, 100, -1.21f, 19.51f, 10.13f);
		EV_CameraAng(1, 100, 0xF73A, 0xF8E5, 0);
		EV_Wait(50);
		AmyForEventHammerScaleIm(0, 0.0f);
		EV_Wait(60);
		EV_MsgClose();
		EV_Wait(10);
		EV_ClrPath(tikal);
		if (tikal)
		{
			FreeTask(tikal);
			tikal = 0;
		}
		EV_Wait(1);
		EV_SerifWait();
		break;
	case 2:
		EventSe_Close();
		AmyForEventHammerScaleIm(0, 0.0f);
		EV_ClrPath(tikal);
		EV_InitPlayer(0);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
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