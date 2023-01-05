#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B9[] = { 0 };

void ev00B9_e_past(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		W_OUT = 0;
		EV_CanselOn();
		W_OUT = COverlayCreate(-0.0012000001f, 1.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(1);
		EV_PadOff();
		EV_SetPos(player, 6.6999998f, -40.5f, 607.90002f);
		EV_Wait(1);
		EV_CameraOn();
		EV_SetPos(player, 0.0f, -46.0f, 1396.5f);
		EV_SetAng(player, 0, 0x8000, 0);
		SetBankDir(106);
		EventSe_Init(3);
		EventSe_Play(1, 760, 90);
		EV_Wait(30);
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, -0.016000001f);
		}
		EV_SetPos(player, 0.0f, -46.0f, 1396.5f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(1, 0, 21.799999f, -44.0f, 1375.7f);
		EV_CameraAng(1, 0, 0xF00, 0x6300, 0x300);
		EV_CameraPos(1, 140, 3.4000001f, -42.200001f, 1358.97f);
		EV_CameraAng(1, 140, 0xF00, 0x7E00, 0xFD00);
		EV_Wait(140);
		EV_CameraPos(1, 0, -8.25f, -45.799999f, 1383.4f);
		EV_CameraAng(1, 0, 0x1300, 0x9A82, 0xFF00);
		EV_CameraPos(1, 130, -8.46f, -34.700001f, 1383.4f);
		EV_CameraAng(1, 130, 0x900, 0x9D82, 0xFF00);
		EV_Wait(130);
		EV_CameraPos(1, 0, -23.780001f, -31.110001f, 1400.89f);
		EV_CameraAng(1, 0, 0x100, 0xC382, 0xFF00);
		EV_CameraPos(0, 35, -23.399f, -34.16f, 1402.8101f);
		EV_CameraAng(0, 35, 0x100, 0xCD82, 0xFF00);
		EV_Wait(35);
		EV_CameraPos(0, 130, -19.120001f, -34.82f, 1424.0f);
		EV_CameraAng(0, 130, 0x100, 0xF482, 0xFF00);
		EV_SerifPlay(1209);
		EV_Msg(msgTbl_ev00B9[TextLanguage][0]); //"\aMust determine location."
		EV_Wait(120);
		EV_CameraPos(0, 120, -5.3200002f, -30.360001f, 1433.4f);
		EV_CameraAng(0, 120, 0x100, 0xFA82, 0xFF00);
		EV_Wait(150);
		EV_MsgClose();
		EV_CameraPos(1, 0, 5.1399999f, -27.0f, 1386.5f);
		EV_CameraAng(1, 0, 0xF900, 0x6A80, 0xFF00);
		EV_Wait(20);
		EV_CameraPos(0, 3, 4.1500001f, -27.33f, 1388.23f);
		EV_SerifPlay(1210);
		EV_Msg(msgTbl_ev00B9[TextLanguage][1]); //"\aAccessing data."
		EventSe_Oneshot(13, 90, 0, 0);
		EV_Wait(8);
		EventSe_Oneshot(21, 120, 0, 0);
		EV_Wait(20);
		EV_MsgClose();
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, 1.0e-12f);
			COverlaySetAlpha(W_OUT, 0.30000001f);
			COverlaySetColor(W_OUT, 0.1f, 0.69999999f, 0.2f);
		}
		EventSe_Oneshot(14, 128, 0, 0);
		createScanLine(0xC0u, 0, 0x50u, 0x55u, 5);
		EV_CameraPos(1, 0, 35.299999f, -47.860001f, 1318.37f);
		EV_CameraAng(1, 0, 0, 0xE680, 0x700);
		EV_CameraPos(0, 9, 39.993f, -47.863998f, 1311.89f);
		EV_CameraAng(0, 9, 0, 0xE680, 0xFF00);
		EV_Wait(30);
		EventSe_Oneshot(14, 128, 0, 0);
		EV_CameraPos(1, 0, -36.900002f, -5.3000002f, 1343.0f);
		EV_CameraAng(1, 0, 0xE00, 0x2080, 0);
		EV_CameraPos(1, 8, -141.89999f, 47.299999f, 1241.0f);
		EV_Wait(34);
		EV_CameraPos(1, 0, 0.0f, -27.299999f, 1389.0f);
		EV_CameraAng(1, 0, 0x500, 0, 0);
		EventSe_Oneshot(14, 128, 0, 0);
		EV_CameraPerspective(0, 7, 0x2FA5);
		EV_Wait(7);
		EV_CameraPerspective(0, 6, 0x3111);
		EV_Wait(7);
		EV_CameraPerspective(0, 13, 0x2B61);
		EV_Wait(15);
		EV_CameraPerspective(0, 60, 0x1C72);
		EV_Wait(60);
		EV_CameraPerspective(0, 30, 6918);
		EV_Wait(40);
		EventSe_Oneshot(22, 128, 0, 0);
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, -0.0080000004f);
		}
		deleteScanLine();
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_Wait(1);
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_CameraPos(1, 0, -141.89999f, 47.299999f, 1241.0f);
		EV_CameraAng(1, 0, 0xE00, 0x2080, 0);
		EV_CameraPos(1, 0, -8.25f, -45.799999f, 1383.4f);
		EV_CameraAng(1, 0, 0x1300, 0x9A82, 0xFF00);
		EV_CameraPos(1, 100, -8.46f, -34.700001f, 1383.4f);
		EV_CameraAng(1, 100, 0x900, 0x9D82, 0xFF00);
		EV_Wait(15);
		EV_SerifPlay(1211);
		EV_Msg(msgTbl_ev00B9[TextLanguage][2]); //"\aNo data found.   Location unknown."
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(20);
		EV_CameraPos(1, 0, 28.700001f, -32.599998f, 1361.9f);
		EV_CameraAng(1, 0, 0xB00, 0x60F0, 0x500);
		EV_CameraPos(1, 160, 60.849998f, -47.299999f, 1330.8f);
		EV_CameraAng(1, 160, 0xB00, 0x5FF3, 0x500);
		EV_Wait(18);
		EV_SerifPlay(1212);
		EV_Msg(msgTbl_ev00B9[TextLanguage][3]); //"\aThis presents a problem."
		EV_Wait(170);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_SerifStop();
		EventSe_Close();
		break;
	}
}