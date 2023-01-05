#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev016D[] = { 0 };

void ev016D_a_warriorfeather(int state)
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
		EV_SetPos(player, 0.55000001f, 12.79f, 0.15000001f);
		EV_SetAng(player, 0, 0xF47A, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_item_ha1, &AMY_TEXLIST, 0.2f, 0, 8);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 4.5f, 0.0f, 0);
		EV_CameraChaseRM(0, 310, player, 8.0f, 0, 0x14000, 0, 16.0f, 0, -0x71B, 0, 16.0f);
		EV_SetAction(player, &action_a_item_ha0, &AMY_TEXLIST, 0.2f, 1, 16);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1627);
		EV_MsgW(60, msgTbl_ev016D[TextLanguage][0]); //"\aBehold the Warrior Feather. Now you "...
		tikal = CTikalLight_Create(
			player->twp->pos.x + 9.5349998f,
			player->twp->pos.y + 27.0f,
			player->twp->pos.z + 13.89f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0167_tk, 2.5f, 2);
		EV_Wait(105);
		EV_MsgW(60, msgTbl_ev016D[TextLanguage][1]); //"\aPress and hold the action button, and"...
		EV_MsgW(30, msgTbl_ev016D[TextLanguage][2]); //"\aa circle."
		EV_SetAction(player, &action_a_item_ha2, &AMY_TEXLIST, 0.40000001f, 0, 16);
		EV_Wait(35);
		EV_SerifWait();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_CameraPos(1, 100, -0.81999999f, 19.969999f, 7.7199998f);
		EV_CameraAng(1, 100, 0xF79E, 0xF899, 0);
		EV_Wait(80);
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