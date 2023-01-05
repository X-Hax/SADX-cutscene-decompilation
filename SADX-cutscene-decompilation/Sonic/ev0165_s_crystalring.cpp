#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0165[] = { 0 };

void ev0165_s_crystalring(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, -305.0f, 45.0f, 1541.0f);
		EV_SetAng(player, 0xF55B, 0xFDC5, 0);
		EV_Wait(1);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 250, player, 8.0f, 0, 0x5C72, 0, 11.0f, 0, -0xFFFF, 0, 11.0f);
		EV_SetAction(player, &action_s_item_r0, &SONIC_TEXLIST, 0.18000001f, 0, 16);
		EV_Wait(50);
		tikal = CTikalLight_Create(
			player->twp->pos.x - 11.764f,
			player->twp->pos.y + 23.0f,
			player->twp->pos.z + 6.2540002f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0165_tk, 2.5f, 2);
		EV_SerifWait();
		EV_SerifPlay(1867);
		EV_MsgW(0, (msgTbl_ev0165[TextLanguage])[0]); //"\aThis is the Crystal Ring."
		EV_SetAction(player, &action_s_item_r1, &SONIC_TEXLIST, 0.30000001f, 1, 16);
		EV_Wait(20);
		EV_MsgW(0, (msgTbl_ev0165[TextLanguage])[1]); //"\aThis reduces the time needed to store"...
		EV_Wait(50);
		EV_SetAction(player, &action_s_item_r2, &SONIC_TEXLIST, 0.30000001f, 0, 16);
		EV_Wait(30);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -80, 80);
		EV_CameraPos(1, 50, -305.0f, 51.790001f, 1550.1f);
		EV_CameraAng(1, 50, 0xF8AD, 0x1, 0);
		EV_Wait(50);
		EV_SerifWait();
		EV_MsgClose();
		break;
	case 2:
		EventSe_Close();
		EV_ClrPath(tikal);
		EV_InitPlayer(0);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_SerifStop();
		EV_MsgClose();
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}