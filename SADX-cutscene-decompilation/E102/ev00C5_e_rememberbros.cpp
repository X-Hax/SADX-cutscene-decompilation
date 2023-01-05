#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00C5[] = {
	(char*)("ICM00C5"), &texlist_icm00C5,
	0
};

void ev00C5_e_rememberbros(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		task_icm = 0;
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_thee102);
		EV_SetPos(player, -1938.34f, -352.37f, 1656.72f);
		EV_SetAng(player, 0, 0x382F, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 0, -1865.67f, -296.14999f, 1611.39f);
		EV_CameraAng(0, 0, 0xEC16, 0x5E8C, 0);
		EV_SerifPlay(1304);
		EV_MsgW(0, msgTbl_ev00C5[TextLanguage][0]); //"\aE-103 Delta... E-104 Epsilon...\nResc"...
		EV_Wait(50);
		EV_CameraPos(0, 0, -1905.3199f, -337.39999f, 1686.67f);
		EV_CameraAng(0, 0, 0xFD16, 0x398C, 0);
		EV_CameraPos(0, 280, -1898.54f, -337.39999f, 1644.2f);
		EV_CameraAng(0, 280, 0xFD16, 0x398C, 0);
		EV_Wait(130);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 1.0f, 0, 8);
		EV_Wait(1);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 8);
		EV_Wait(80);
		EV_SerifPlay(1305);
		EV_MsgW(0, msgTbl_ev00C5[TextLanguage][1]); //"\aE-105 Zeta... E-101 Beta...\nLocation"...
		EV_CameraPos(0, 0, -1923.25f, -334.98001f, 1667.65f);
		EV_CameraAng(0, 0, 0xFD16, 0x418C, 0);
		EV_CameraPos(0, 200, -1923.66f, -334.98001f, 1656.95f);
		EV_CameraAng(0, 200, 0xFD16, 0x418C, 0);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 24);
		EV_Wait(100);
		EV_SetAction(player, &action_e_e0019_e102, &E102_TEXLIST, 1.0f, 0, 16);
		EV_Wait(1);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 8);
		EV_Wait(120);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(20);
		EventSe_Play(1, 1333, 1800);
		task_icm = CIchimaie2_Create(&texlist_icm00C5, 0);
		createScanLine(0xC0u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(task_icm, 1.0f, 16);
		EV_Wait(46);
		CIchimaie2_SetDstAlpha(task_icm, 0.0f, 16);
		deleteScanLine();
		EV_Wait(16);
		EV_Wait(40);
		EV_CameraPos(0, 10, -1910.84f, -353.59f, 1653.88f);
		EV_CameraAng(0, 10, 0x1216, 0x418C, 0);
		EV_SetAction(player, &action_e_e0033_e102, &E102_TEXLIST, 0.2f, 0, 8);
		EV_SerifPlay(1306);
		EV_MsgW(0, msgTbl_ev00C5[TextLanguage][2]); //"\aPerhaps...  aboard the Egg Carrier."
		EV_Wait(50);
		EV_CameraPos(0, 0, -1950.78f, -335.73999f, 1680.91f);
		EV_CameraAng(0, 0, 0xFF4A, 0xE1D8, 0);
		EV_CameraPos(0, 100, -1948.08f, -335.81f, 1677.95f);
		EV_CameraAng(0, 100, 0xFF4A, 0xE1D8, 0);
		EV_SetPos(player, -1924.08f, -353.19f, 1647.25f);
		EV_SetAng(player, 0, 0x587D, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(90);
		EV_MsgClose();
		break;
	case 2:
		EV_InitPlayer(0);
		EV_SetPos(player, -1924.08f, -353.19f, 1647.25f);
		EV_SetAng(player, 0, 0x587D, 0);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		if (task_icm)
		{
			FreeTask(task_icm);
			task_icm = 0;
		}
		EventSe_Close();
		break;
	}
}