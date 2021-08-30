#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00F2_l_eggman(int state)
{
	switch (state) {
	case 1:
		KURAYAMI = 0;
		EV_InitPlayer(0);
		SetBankDir(113);
		EventSe_Init(3);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		create_eggmoble(-923.40997f, 20.219999f, -157.89999f, 0xFBCF, 0xE89E, 0xFCBB);
		EV_Wait(2);
		ChgEggMobleSMod(1);
		createChaos0_EV00F2(0, -1130.89f, 34.360001f, -250.85001f);
		EV_Wait(2);
		BGM_Play(MusicIDs_eggman);
		EV_CameraPos(1, 0, -970.20001f, 50.549999f, -179.28f);
		EV_CameraAng(1, 0, 0xE600, 0xB000, 0);
		EV_Wait(2);
		EventSe_Play(0, 1336, 1800);
		eggmoble_move_rapid(-1025.64f, 18.34f, -223.17f, 210);
		EV_Wait(3);
		EV_CameraPos(0, 200, -1061.4301f, 48.330002f, -238.97f);
		EV_CameraAng(0, 200, 0xE500, 0xB000, 0);
		EV_Wait(100);
		EV_SerifPlay(1392);
		EV_Msg(msgTbl_ev00F2[TextLanguage][0]); //"\aOoooh... I hate that Sonic!"
		EV_Wait(40);
		EV_MsgCls();
		EV_Wait(52);
		eggmoble_move_rapid(-923.40997f, 20.219999f, -157.89999f, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, -927.34998f, 37.376999f, -160.703f);
		EV_CameraAng(1, 0, 0xE500, 0xB000, 0);
		eggmoble_move_rapid(-1025.64f, 20.34f, -223.17f, 300);
		EV_Wait(2);
		EV_CameraPos(0, 300, -1031.082f, 37.990002f, -227.32401f);
		EV_CameraAng(0, 300, 0xF100, 0xAD00, 0);
		EV_Wait(40);
		EV_SerifPlay(1393);
		EV_Msg(msgTbl_ev00F2[TextLanguage][1]); //"\aHe always seems to get in my way!"
		EV_Wait(80);
		EV_MsgCls();
		EV_Wait(20);
		EV_SerifPlay(1394);
		EV_Msg(msgTbl_ev00F2[TextLanguage][2]); //"\aBut I bet he can't foil my master pla"...
		EV_SerifWait();
		EV_MsgCls();
		EV_Wait(4);
		EventSe_Play(0, 1335, 1800);
		EV_CameraPos(1, 0, -1032.1801f, 38.299999f, -215.87f);
		EV_CameraAng(1, 0, 0xE500, 0x3200, 0);
		EV_CameraPos(1, 120, -1102.2f, 47.470001f, -240.92999f);
		EV_Wait(195);
		ChgEggMobleMod(5);
		EventSe_Stop(0);
		EventSe_Stop(1);
		EV_CameraPos(0, 0, -1037.21f, 38.02f, -228.94f);
		EV_CameraAng(0, 0, 0xEE00, 0xAF00, 0);
		EV_CameraPerspective(1, 30, 4551);
		EV_SerifPlay(1395);
		EV_Msg(msgTbl_ev00F2[TextLanguage][3]); //"\aChaos!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		EventSe_Oneshot(1334, 0, 0, 0);
		if (KURAYAMI)
		{
			COverlaySetSpeed(KURAYAMI, -1.0f);
		}
		EV_Wait(1);
		if (KURAYAMI)
		{
			COverlaySetSpeed(KURAYAMI, 1.0f);
		}
		EV_Wait(60);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_Wait(10);
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		break;
	case 2:
		EventSe_Close();
		ChgEggMobleSMod(0);
		EV_InitPlayer(0);
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		delete_eggmoble();
		deleteChaos0_EV00F2();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}