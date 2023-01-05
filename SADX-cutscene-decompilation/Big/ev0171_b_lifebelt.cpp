#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0171[] = { 0 };

void ev0171_b_lifebelt(int state)
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
		EV_SetPos(player, -951.0f, 28.0f, 255.0f);
		EV_SetAng(player, 0, 0xBC31, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_item_u2, &BIG_TEXLIST, 0.2f, 0, 16);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 10.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 230, player, 15.0f, 0, 0xD555, 0, 30.0f, 0, -0x4E38, 0, 30.0f);
		EV_SetAction(player, &action_b_item_u0, &BIG_TEXLIST, 0.5f, 1, 8);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1628);
		EV_MsgW(0, msgTbl_ev0171[TextLanguage][0]); //"\aYou've discovered the Life Belt. It\n"...
		tikal = CTikalLight_Create(
			player->twp->pos.x + 6.803f,
			player->twp->pos.y + 35.999699f,
			player->twp->pos.z + 30.68f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_SetPath(tikal, &epathtag_ev0170_tk, 2.5f, 2);
		EV_Wait(40);
		EventSe_Stop(0);
		EV_Wait(50);
		EV_MsgW(0, msgTbl_ev0171[TextLanguage][1]); //"\aTo swim underwater, \npress the jump "...
		EV_Wait(25);
		EV_SerifWait();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(1, 120, -973.63f, 42.014f, 246.77f);
		EV_CameraAng(1, 120, 0xF946, 0xB1C8, 0);
		EventSe_Play(0, 760, 1800);
		EV_SetAction(player, &action_b_item_u1, &BIG_TEXLIST, 0.25f, 0, 8);
		EV_Wait(110);
		EventSe_Volume(0, -120, 120);
		EV_Wait(30);
		EV_SerifWait();
		EV_MsgClose();
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