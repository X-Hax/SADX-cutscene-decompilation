#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0168[] = { 0 };

void ev0168_t_jetanklet(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, 697.91998f, 47.990002f, 1255.25f);
		EV_SetAng(player, 0, 0xF3FC, 0);
		EV_Wait(1);
		EV_SerifPlay(1718);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 3.5f, 0.0f, 0);
		EV_CameraChaseRM(0, 250, player, 6.0f, 0, -63715, 0, 10.6f, 0, 0, 0, 10.6f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_item_s0, &MILES_TEXLIST, 0.1f, 0, 16);
		EV_Wait(35);
		EV_SerifWait();
		EV_SerifPlay(1866);
		EV_MsgW(0, msgTbl_ev0168[TextLanguage][0]); //"\aLook, it's your Jet Anklet!"
		tikal = CTikalLight_Create(
			player->twp->pos.x - 11.764f,
			player->twp->pos.y + 23.0f,
			player->twp->pos.z + 6.2540002f);
		EV_Wait(1);
		EV_SetMode(tikal, 0);
		EV_ClrPath(tikal);
		EV_SetPath(tikal, &epathtbl_ev0165_tk, 3.5f, 2);
		EV_SetAction(player, &action_m_item_s1, &MILES_TEXLIST, 1.0f, 1, 16);
		EV_Wait(25);
		EV_MsgW(0, msgTbl_ev0168[TextLanguage][1]); //"\aIts jet power makes you fly faster."
		EV_SerifWait();
		EventSe_Play(0, 760, 1800);
		EV_Wait(30);
		EV_SetAction(player, &action_m_item_s2, &MILES_TEXLIST, 0.60000002f, 0, 16);
		EV_Wait(30);
		EV_MsgClose();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(1, 70, 697.91998f, 53.07f, 1261.96f);
		EV_CameraAng(1, 70, 0x491, 0, 0);
		EV_Wait(1);
		EventSe_Volume(0, -80, 80);
		EV_Wait(70);
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
		if (tikal)
		if(tikal){
			FreeTask(tikal);
			tikal = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}