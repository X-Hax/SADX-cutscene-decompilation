#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00BD[] = {
	(char*)("PVME101FACTORY"), &PVME101FACTORY_TEXLIST,
	0
};

void ev00BD_e_e101factory(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		task_skywalk = 0;
		BLACK = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(107);
		EventSe_Init(2);
		BGM_Play(MusicIDs_evtbgm04);
		BLACK = COverlayCreate(-0.0099999998f, 1.0f, 0.0f, 0.0f, 0.0f);
		E101Factory_Create();
		task_skywalk = CSkyWalk_create2(player, 500.0f);
		EV_SetPos(player, -130.0f, 500.0f, 0.0f);
		EV_SetAng(player, 0, 0x3ED0, 0);
		EV_CameraPos(1, 0, -119.9f, 500.5f, 27.4f);
		EV_CameraAng(1, 0, 0x11C9, 0xE9D6, 0x500);
		EV_CameraPos(1, 110, -119.9f, 500.5f, 27.4f);
		EV_CameraAng(1, 110, 0x10C9, 0xE5D6, 0x500);
		EV_SetAction(player, E102_ACTIONS[3], &E102_TEXLIST, 0.60000002f, 1, 0);
		EventSe_Oneshot(1334, 128, 0, 0);
		EV_Wait(20);
		EV_MovePoint2(player, -87.0f, 500.0f, 0.0f, 0.44999999f, 0.1f);
		EV_Wait(110);
		EV_WaitMove(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.60000002f, 1, 8);
		EV_CameraPos(1, 0, -93.099998f, 502.19f, 46.57f);
		EV_CameraAng(1, 0, 0x3C9, 0xE7D6, 0x500);
		EV_CameraPos(1, 100, -89.0f, 504.76999f, 50.860001f);
		EV_CameraAng(1, 100, 0xFFC9, 0xF1D6, 0x500);
		EV_Wait(50);
		EV_SetAction(player, &action_e_e0006_e102, &E102_TEXLIST, 0.40000001f, 0, 16);
		EV_Wait(50);
		EV_CameraPos(0, 110, -80.82f, 518.29999f, 52.689999f);
		EV_CameraAng(0, 110, 0xEF5E, 0x143, 0x500);
		EV_WaitAction(player);
		EV_ClrAction(player);
		EV_SetAng(player, 0, 0xFED0, 0);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(105);
		EV_SetAction(player, &action_e_e0033_e102, &E102_TEXLIST, 0.80000001f, 0, 0);
		EV_CameraPos(1, 0, -79.900002f, 522.02002f, 1.09f);
		EV_CameraAng(1, 0, 0xDFF8, 0x58D6, 0);
		EV_CameraPos(1, 7, -79.330002f, 522.72998f, -1.49f);
		EV_Wait(40);
		EV_SetAng(player, 0, 0x3ED0, 0);
		EV_ClrAction(player);
		EV_CameraPos(1, 0, -96.18f, 501.39001f, -11.9f);
		EV_CameraAng(1, 0, 0x17C9, 0xAAD6, 0x1100);
		EV_CameraPos(0, 105, -101.57f, 510.28f, -12.92f);
		EV_CameraAng(0, 105, 0x17C9, 0xB7D6, 0x1100);
		EV_Wait(105);
		EV_CameraPos(0, 85, -97.470001f, 513.03003f, -12.087f);
		EV_Wait(85);
		EV_SetPos(player, -77.599998f, 501.0f, 0.0f);
		EV_SetAng(player, 0, 0x3ED0, 0);
		EV_SetAction(player, E102_ACTIONS[3], &E102_TEXLIST, 0.60000002f, 1, 8);
		EV_CameraPos(1, 0, -30.700001f, 564.79999f, -6.5f);
		EV_CameraAng(1, 0, 0x3C9, 0xA0D6, 0);
		EV_CameraPos(0, 90, -23.049999f, 559.15002f, -22.5f);
		EV_CameraAng(0, 87, 0x7C9, 0xA5D6, 0);
		EV_Wait(86);
		EV_CameraAng(1, 114, 0x12C9, 0xDBD6, 0x400);
		EV_Wait(4);
		EV_CameraPos(0, 130, -74.199997f, 514.20001f, 40.34f);
		EV_Wait(130);
		EV_CameraPos(0, 140, -103.95f, 500.20001f, 23.16f);
		EV_CameraAng(0, 140, 0x11C9, 0xD0D6, 0x400);
		EV_Wait(70);
		EV_SerifPlay(1240);
		EV_Msg(msgTbl_ev00BD[TextLanguage][0]);       // "\aBETA?"
		EV_SetPos(player, -77.599998f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -77.800003f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -78.0f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -78.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -78.400002f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -78.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -78.800003f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -79.0f, 500.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -79.199997f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -79.400002f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -79.599998f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -79.800003f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -80.0f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -80.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -80.400002f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -80.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -80.800003f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -81.0f, 500.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -81.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -81.400002f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -81.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -81.800003f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -82.0f, 500.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -82.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -82.400002f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -82.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -82.800003f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -83.0f, 500.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -83.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -83.400002f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -83.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -83.800003f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -84.0f, 500.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -84.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -84.400002f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -84.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -84.800003f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -85.0f, 500.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -85.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -85.400002f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -85.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -85.800003f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -86.0f, 500.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -86.199997f, 501.0f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -86.400002f, 501.0f, 0.0f);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.40000001f, 1, 12);
		EV_Wait(2);
		EV_SetPos(player, -86.599998f, 500.5f, 0.0f);
		EV_Wait(2);
		EV_SetPos(player, -86.800003f, 500.5f, 0.0f);
		EV_Wait(4);
		EV_CameraPos(0, 80, -102.3f, 501.04001f, 22.43f);
		EV_CameraAng(0, 80, 0x11C9, 0xD0D6, 0x400);
		EV_Wait(90);
		EV_SetAction(player, &action_e_e0016_e102, &E102_TEXLIST, 1.1f, 1, 12);
		EV_Wait(1);
		EV_CameraPos(0, 0, -76.900002f, 526.70001f, 0.0f);
		EV_CameraAng(0, 0, 0xDEC9, 0x3FD6, 0);
		EV_CameraPos(0, 140, -80.379997f, 523.09998f, 0.0f);
		EV_Wait(95);
		EV_MsgClose();
		EV_Wait(100);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		E101Factory_Delete();
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		EV_SetPos(player, 62.799999f, 0.0f, 194.0f);
		EV_SetAng(player, 0xEC98, 0x8B05, 0);
		if (task_skywalk)
		{
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		EventSe_Close();
		EV_Wait(1);
		break;
	}
}