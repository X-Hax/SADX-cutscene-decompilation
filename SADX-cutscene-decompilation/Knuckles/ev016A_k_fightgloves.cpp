#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev016A[] = { 0 };

void ev016A_k_fightgloves(int state)
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
		EV_SetPos(player, 1367.87f, 417.0f, -40.0f);
		EV_SetAng(player, 0x54, 0x9F8A, 0);
		EV_Wait(1);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[32], &KNUCKLES_TEXLIST, 0.1f, 0, 16);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 390, player, 8.0f, 0, 69177, 0, 16.0f, 0, -25485, 0, 16.0f);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1929);
		EV_MsgW(0, msgTbl_ev016A[TextLanguage][0]); //"\aNow, you've got Fighting Gloves."
		tikal = CTikalLight_Create(
			player->twp->pos.x + 7.5349998f,
			player->twp->pos.y + 27.0f,
			player->twp->pos.z + 13.89f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0167_tk, 1.5f, 2);
		EV_Wait(35);
		EV_SetAction(player, KNUCKLES_ACTIONS[33], &KNUCKLES_TEXLIST, 0.2f, 1, 16);
		EventSe_Stop(0);
		EV_SerifPlay(1930);
		EV_MsgW(0, msgTbl_ev016A[TextLanguage][1]); //"\aTo store up power, \nhold down the ac"...
		EV_Wait(70);
		EV_SetAction(player, KNUCKLES_ACTIONS[34], &KNUCKLES_TEXLIST, 0.30000001f, 0, 16);
		EV_SerifPlay(1931);
		EV_MsgW(0, msgTbl_ev016A[TextLanguage][2]); //"\aNow, you can do"
		EventSe_Play(0, 760, 1800);
		EV_SerifPlay(1932);
		EV_MsgW(0, msgTbl_ev016A[TextLanguage][3]); //"\athe Maximum Heat Knuckles Attack."
		EV_Wait(40);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(0, 70, 1360.77f, 424.38f, -48.490002f);
		EV_CameraAng(0, 70, 0xFAF2, 0x9C5F, 0);
		EV_Wait(30);
		EV_SerifWait();
		EventSe_Volume(0, -120, 120);
		EV_Wait(70);
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
		break;
	}
}