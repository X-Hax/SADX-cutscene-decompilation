#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0086_k_leavepastfirst(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		EV_CameraOn();
		EV_PadOff();
		EventSe_Init(1);
		EV_InitPlayer(0);
		EV_CanselOn();
		EventSe_Play(0, 760, 1800);
		WHITE = COverlayCreate(1.0f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(1);
		EV_SetPos(player, -564.26001f, -2.5f, 957.17999f);
		EV_SetAng(player, 0, 0x2000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 0.5f, 1, 0);
		EV_CameraPos(1, 0, -529.21002f, 5.5300002f, 991.09998f);
		EV_CameraAng(1, 0, 3072, 8448, 0);
		EV_Wait(30);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -0.016666668f);
		}
		EV_Wait(30);
		EventSe_Stop(0);
		EV_CameraAng(1, 60, 256, 8448, 0);
		EV_Wait(30);
		EV_Wait(30);
		EV_CameraPos(1, 300, -548.03998f, 6.1599998f, 973.17999f);
		EV_Wait(30);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_ClrFace(player);
		EV_SetFace(player, "H");
		EV_SerifPlay(1032);
		EV_Msg(msgTbl_ev0086[TextLanguage][0]); //"\aUhh!   Now where am I?"
		EV_Wait(30);
		EV_LookPoint(player, -507.69f, 16.52f, 951.59998f);
		EV_Wait(10);
		EV_LookPoint(player, -528.20001f, 16.52f, 1001.11f);
		EV_Wait(10);
		EV_LookPoint(player, -564.25f, 16.52f, 1014.02f);
		EV_Wait(10);
		EV_LookPoint(player, -528.20001f, 16.52f, 1001.11f);
		EV_Wait(10);
		EV_LookPoint(player, -507.69f, 16.52f, 951.59998f);
		EV_Wait(10);
		EV_LookPoint(player, -528.20001f, 16.52f, 1001.11f);
		EV_Wait(70);
		EV_ClrFace(player);
		EV_SetFace(player, "DC");
		EV_SerifPlay(1033);
		EV_Msg(msgTbl_ev0086[TextLanguage][1]); //"\aBack in Station Square, I see."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(60);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0019_knuckles, &KNUCKLES_TEXLIST, 0.5f, 1, 16);
		EV_ClrFace(player);
		EV_SetFace(player, "D");
		EV_SerifPlay(1034);
		EV_Msg(msgTbl_ev0086[TextLanguage][2]); //"\aWhat's going on here, anyway?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(60);
		break;
	case 2:
		EV_SetPos(player, -564.26001f, -2.5f, 957.17999f);
		EV_SetAng(player, 0, 0x2000, 0);
		EV_CameraPos(1, 0, -570.13f, 8.1540003f, 933.28699f);
		EV_CameraAng(1, 0, 64768, 34816, 0);
		EV_InitPlayer(0);
		EventSe_Close();
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}