#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00C3[] = {
	(char*)("ICM00C3"), &texlist_icm00C3,
	0
};

void ev00C3_e_objectivechanged(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		hoge1 = 0;
		hoge2 = 0;
		hoge3 = 0;
		hoge4 = 0;
		hoge5 = 0;
		RED = 0;
		BLACK = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		CreateBootSleep();
		BLACK = COverlayCreate(1.0f, 0.1f, 0.0f, 0.0f, 0.0f);
		SetBankDir(104);
		EventSe_Init(5);
		EV_SetPos(player, 222.82001f, 1853.0f, -661.414f);
		EV_SetAng(player, 0, 0xD97, 0);
		EV_CameraPos(1, 0, 253.94f, 1841.0f, -608.45001f);
		EV_CameraAng(1, 0, 0x800, 0x3597, 0x700);
		hoge1 = CIchimaie2_Create(&texlist_icm00C3, 0);
		CIchimaie2_SetTextureId(hoge1, 0);
		CIchimaie2_SetPriority(hoge1, -2.1400001f);
		hoge2 = CIchimaie2_Create(&texlist_icm00C3, 0);
		CIchimaie2_SetTextureId(hoge2, 1);
		CIchimaie2_SetPriority(hoge2, -2.1300001f);
		hoge3 = CIchimaie2_Create(&texlist_icm00C3, 0);
		CIchimaie2_SetTextureId(hoge3, 2);
		CIchimaie2_SetPriority(hoge3, -2.1199999f);
		hoge4 = CIchimaie2_Create(&texlist_icm00C3, 0);
		CIchimaie2_SetTextureId(hoge4, 3);
		CIchimaie2_SetPriority(hoge4, -2.1099999f);
		hoge5 = CIchimaie2_Create(&texlist_icm00C3, 0);
		CIchimaie2_SetTextureId(hoge5, 1);
		CIchimaie2_SetPriority(hoge5, -2.0999999f);
		EV_ClrAction(player);
		EV_PlayPad(0, &E00C3);
		EV_Wait(7);
		if (BLACK)
		{
			COverlaySetSpeed(BLACK, -0.016666668f);
		}
		EV_Wait(40);
		EV_CameraChase(player);
		EV_Wait(90);
		EventSe_Oneshot(1334, 0, 0, 0);
		createScanLine(0xC0u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 40);
		EV_Wait(70);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 30);
		deleteScanLine();
		EV_Wait(20);
		EventSe_Oneshot(1334, 0, 0, 0);
		createScanLine(0xC0u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 40);
		EV_Wait(70);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 30);
		deleteScanLine();
		EV_Wait(20);
		EventSe_Oneshot(1334, 0, 0, 0);
		createScanLine(0xC0u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 40);
		EV_Wait(70);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 30);
		deleteScanLine();
		EV_Wait(20);
		EventSe_Oneshot(1334, 0, 0, 0);
		createScanLine(0xC0u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 40);
		EV_Wait(70);
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 30);
		deleteScanLine();
		EV_Wait(30);
		EventSe_Oneshot(1334, 0, 0, 0);
		createScanLine(0xC0u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 15);
		EV_Wait(22);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 15);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 15);
		EV_Wait(22);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 15);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 15);
		EV_Wait(22);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 15);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 15);
		EV_Wait(22);
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 15);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 1);
		EV_Wait(12);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 1);
		EV_Wait(12);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 1);
		EV_Wait(12);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 1);
		EV_Wait(12);
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 1);
		EV_Wait(7);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 1);
		EV_Wait(7);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 1);
		EV_Wait(7);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 1);
		EV_Wait(7);
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 1);
		EV_Wait(5);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 1);
		EV_Wait(5);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 1);
		EV_Wait(5);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 1);
		EV_Wait(5);
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge1, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge3, 0.89999998f, 1);
		EV_Wait(2);
		CIchimaie2_SetDstAlpha(hoge3, 0.0f, 1);
		EventSe_Oneshot(1334, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge4, 0.89999998f, 1);
		RED = COverlayCreate(0.083333336f, 0.1f, 1.0f, 0.0f, 0.0f);
		if (RED)
		{
			COverlaySetPriority(RED, -1.3f);
		}
		EV_Wait(3);
		EventSe_Oneshot(1335, 60, 0, 0);
		if (RED)
		{
			COverlaySetSpeed(RED, 0.0f);
		}
		sandStorm(56, 150);
		EV_Wait(57);
		deleteScanLine();
		BGM_Play(MusicIDs_thee102);
		EV_SetMode(player, 0);
		EV_CameraChaseFree();
		EV_Wait(1);
		EV_SetPath(player, &epathtag_cube00C3, 0.495f, 1);
		EV_SetAction(player, E102_ACTIONS[49], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 414.56f, 671.02502f, 523.90002f);
		EV_CameraAng(1, 0, 0x1700, 0xF400, 0);
		EV_CameraPos(0, 100, 287.85001f, 520.33801f, 647.14001f);
		if (RED)
		{
			COverlaySetSpeed(RED, -1.0f);
		}
		CIchimaie2_SetDstAlpha(hoge4, 0.0f, 1);
		EV_SerifPlay(1301);
		EV_Msg(msgTbl_ev00C3[TextLanguage][0]); //"\aDr. Robotnik... Enemy... \nMaster reg"...
		EV_Wait(60);
		EV_CameraPos(0, 42, 282.57001f, 508.95599f, 656.40002f);
		EV_CameraAng(0, 30, 0xE100, 0x4800, 0xFF00);
		EV_Wait(30);
		EV_CameraPos(0, 225, -0.56f, 200.5658f, 852.66998f);
		EV_Wait(20);
		EV_Wait(23);
		EV_MsgClose();
		EV_SerifPlay(1302);
		EV_Msg(msgTbl_ev00C3[TextLanguage][1]); //"\aE-Series... Friends..."
		EV_Wait(33);
		EventSe_Oneshot(1334, 0, 0, 0);
		createScanLine(0x80u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(hoge5, 1.0f, 40);
		EV_Wait(40);
		CIchimaie2_SetDstAlpha(hoge5, 0.0f, 40);
		deleteScanLine();
		EV_CameraPos(0, 0, -148.39999f, 70.0f, 894.5f);
		EV_CameraAng(0, 0, 0xE00, 0x9A00, 0);
		EV_CameraPos(0, 110, -154.89999f, 66.800003f, 889.96002f);
		EV_ClrPath(player);
		EV_ClrAction(player);
		EV_SetPos(player, -132.44f, 125.68f, 919.79999f);
		EV_SetAng(player, 0, 0xA100, 0);
		EV_Wait(35);
		EV_SerifPlay(1303);
		EV_Msg(msgTbl_ev00C3[TextLanguage][2]); //"\aMust save..."
		EV_Wait(85);
		EV_MsgClose();
		EV_SerifWait();
		EV_Wait(5);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_InitPlayer(0);
		if (hoge1)
		{
			FreeTask(hoge1);
			hoge1 = 0;
		}
		if (hoge2)
		{
			FreeTask(hoge2);
			hoge2 = 0;
		}
		if (hoge3)
		{
			FreeTask(hoge3);
			hoge3 = 0;
		}
		if (hoge4)
		{
			FreeTask(hoge4);
			hoge4 = 0;
		}
		if (hoge5)
		{
			FreeTask(hoge5);
			hoge5 = 0;
		}
		if (RED)
		{
			FreeTask(RED);
			RED = 0;
		}
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		deleteScanLine();
		deleteBoot();
		EventSe_Close();
		EV_SetPos(player, -88.0f, 60.0f, 894.79999f);
		EV_SetAng(player, 0, 0xA100, 0);
		EV_Wait(1);
		break;
	}
}