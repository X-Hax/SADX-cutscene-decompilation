#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0170[] = { 0 };

void ev0170_b_powerrod(int state)
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
		EV_SetPos(player, 1305.05f, 120.42f, -705.03003f);
		EV_SetAng(player, 0, 0xE9E1, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_item_s1, &BIG_TEXLIST, 0.2f, 0, 16);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_SetAction(player, &action_b_item_s0, &BIG_TEXLIST, 0.5f, 1, 8);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 10.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 200, player, 15.0f, 0, 0x31C7, 0, 25.0f, 0, -0x11554, 0, 25.0f);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1629);
		EV_MsgW(0, msgTbl_ev0170[TextLanguage][0]); //"\aIt's the Power Rod."
		tikal = CTikalLight_Create(
			player->twp->pos.x + 6.803f,
			player->twp->pos.y + 32.999699f,
			player->twp->pos.z + 30.68f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_SetPath(tikal, &epathtag_ev0170_tk, 4.0f, 2);
		EV_Wait(10);
		EV_MsgW(0, msgTbl_ev0170[TextLanguage][1]); //"\aYou now have longer casting distance."
		EV_Wait(45);
		EV_SerifWait();
		EventSe_Stop(0);
		EventSe_Play(0, 760, 1800);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(1, 100, 1296.67f, 135.81f, -690.51001f);
		EV_CameraAng(1, 100, 0xF7F6, 0xEAAC, 0);
		EV_SetAction(player, &action_b_item_s2, &BIG_TEXLIST, 0.30000001f, 0, 16);
		EV_Wait(40);
		EV_MsgClose();
		EventSe_Volume(0, -80, 80);
		EV_Wait(60);
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
		break;
	}
}