#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0089[] = { 0 };

void ev0089_k_chasesonic(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_mstcln); //Played Tikal's theme in the 1998 JP version.
		EV_SetPos(player, 80.379997f, 10.52f, 770.85999f);
		EV_SetAng(player, 0, 0xF4D2, 0);
		EV_MovePoint2(player, 113.78f, 3.1400001f, 716.32001f, 0.43000001f, 0.059999999f);
		EV_Wait(1);
		EV_CameraPos(0, 0, 134.03f, 1.97f, 709.38f);
		EV_CameraAng(0, 0, 0xC19, 0x5EC5, 0);
		EV_Wait(10);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0017_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "CED");
		EV_SerifPlay(1061);
		EV_MsgW(0, msgTbl_ev0089[TextLanguage][0]); //"\aI wonder why Sonic is after \nthe Mas"...
		EV_Wait(50);
		EV_CameraPos(0, 50, 134.03f, 1.97f, 709.38f);
		EV_CameraAng(0, 50, 0xE19, 0x4CC5, 0);
		EV_Wait(50);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_Wait(1);
		EV_CameraPos(0, 0, 114.03f, 3.6300001f, 701.07001f);
		EV_CameraAng(0, 0, 0xB25, 0x84AC, 0);
		EV_Wait(60);
		EV_ClrFace(player);
		EV_SetFace(player, "EBC");
		EV_SerifPlay(1062);
		EV_MsgW(0, msgTbl_ev0089[TextLanguage][1]); //"\aI'd better work fast and \nget to the"...
		EV_Wait(140);
		EV_MsgClose();
		EV_Wait(10);
		break;
	case 2:
		EV_InitPlayer(0);
		EV_SetPos(player, 113.78f, 3.1400001f, 716.32001f);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}