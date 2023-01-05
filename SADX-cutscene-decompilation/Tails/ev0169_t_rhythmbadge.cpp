#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0169[] = { 0 };

void ev0169_t_rhythmbadge(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_SetPos(player, -789.0f, 100.25f, 904.0f);
		EV_SetAng(player, 0, 0xF89A, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_item_b0, &MILES_TEXLIST, 0.1f, 0, 16);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 3.5f, 0.0f, 0);
		EV_CameraChaseRM(0, 230, player, 6.0f, 0, 0x4000, 0, 20.6f, 0, -0x1071B, 0, 20.6f);
		EV_Wait(10);
		EV_SerifWait();
		EV_SerifPlay(1624);
		EV_MsgW(0, msgTbl_ev0169[TextLanguage][0]); //"\aYou've found the Rhythm Badge."
		EV_SetAction(player, &action_m_item_b1, &MILES_TEXLIST, 0.2f, 1, 8);
		tikal = CTikalLight_Create(
			player->twp->pos.x - 11.764f,
			player->twp->pos.y + 23.0f,
			player->twp->pos.z + 6.2540002f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0165_tk, 3.0f, 2);
		EV_Wait(35);
		EV_MsgW(0, msgTbl_ev0169[TextLanguage][1]); //"\aTo do continuous tail attacks, \nhold"...
		EV_Wait(40);
		EV_SetAction(player, &action_m_item_b2, &MILES_TEXLIST, 0.60000002f, 0, 8);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EventSe_Play(0, 760, 1800);
		EV_CameraPos(1, 80, -791.02002f, 105.97f, 915.48999f);
		EV_CameraAng(1, 80, 0xFB15, 0xF8E5, 0);
		EV_Wait(30);
		EventSe_Volume(0, -80, 80);
		EV_Wait(40);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrPath(tikal);
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		EV_Wait(10);
		break;
	case 2:
		EventSe_Close();
		EV_ClrPath(tikal);
		EV_InitPlayer(0);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}