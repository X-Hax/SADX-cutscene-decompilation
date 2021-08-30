#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00F9_l_snoozecruise(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		WHITE2 = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Init(1);
		EV_CameraPerspective(1, 1, 0x3111);
		WHITE = COverlayCreate(1.0f, 0.1f, 1.0f, 1.0f, 1.0f);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_SetPos(player, -47.2327f, -263.29999f, 2626.6599f);
		EV_SetAng(player, 0x800, 0xD00, 0);
		EV_InitPlayer(0);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_LookPoint(player, -45.220001f, -260.0f, 2632.0f);
		//tails = EV_GetPlayer(2);
		//EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f); //Why is this before Tails is spawned. Would make his head follow Sonic but there's no change in the cutscene because he's already facing him.
		EV_CreatePlayer(2, MilesTalesPrower, -45.228001f, -263.1676f, 2639.0667f, 0x884, 0x8600, 0x44);
		EV_InitPlayer(2);
		EV_Wait(1);
		tails = EV_GetPlayer(2);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 0.69999999f, 1, 0);
		EV_SerifPlay(1451);
		EV_Msg(msgTbl_ev00F9[TextLanguage][0]); //"\aSonic!   Wake up!"
		EV_Wait(10);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -0.0083333338f);
		}
		EV_CameraPos(1, 0, -47.595001f, -261.85699f, 2635.345f);
		EV_CameraAng(1, 0, 0x1B00, 0xFD00, 0x1600);
		EV_CameraPos(1, 100, -47.362999f, -259.39999f, 2632.2f);
		EV_CameraAng(0, 50, 0x1B00, 0xFD00, 0xF200);
		EV_Wait(50);
		EV_CameraAng(0, 30, 0x1B00, 0xFD00, 0xF00);
		EV_Wait(30);
		EV_CameraAng(0, 20, 0x1B00, 0xFD00, 0x800);
		EV_MsgClose();
		EV_LookFree(player);
		EV_SetFace(player, "BA");
		EV_SerifPlay(1452);
		EV_Msg(msgTbl_ev00F9[TextLanguage][1]); //"\aAhhh... \nI was on a snooze cruise, I"...
		EV_Wait(20);
		EV_SetFace(player, "AEAAD");
		EV_Wait(1);
		EV_SetFace(tails, "NNNNNNNN");
		EV_SerifWait();
		EV_CameraPerspective(1, 1, 0x6AAB);
		WHITE2 = COverlayCreate(0.5f, 0.0099999998f, 1.0f, 1.0f, 1.0f);
		EV_Wait(1);
		if (WHITE2)
		{
			COverlaySetSpeed(WHITE2, 0.0f);
		}
		EV_CameraPos(1, 0, -45.990002f, -259.466f, 2633.8799f);
		EV_CameraAng(1, 0, 0x300, 0x8600, 0x100);
		EV_CameraPerspective(0, 80, 0x3111);
		if (WHITE2)
		{
			COverlaySetSpeed(WHITE2, -0.011111111f);
		}
		EV_Wait(83);
		EV_SerifPlay(1453);
		EV_ClrFace(tails);
		EV_SetFace(tails, "PG");
		EV_Msg(msgTbl_ev00F9[TextLanguage][2]); //"\aGood thing you're okay."
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(20);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -50.599998f, -263.5f, 2648.3601f);
		EV_CameraAng(1, 0, 0x1100, 0xFA00, 0x300);
		EV_CameraPos(0, 180, -54.799999f, -250.10001f, 2649.6001f);
		EV_CameraAng(0, 180, 0xFB00, 0xE900, 0x300);
		EV_SerifPlay(1455);
		EV_SetFace(tails, "ECD");
		EV_Msg(msgTbl_ev00F9[TextLanguage][3]); //"\aYou just sort of conked out, there."
		EV_Wait(20);
		EV_LookPoint(player, -51.0f, -260.0f, 2641.0f);
		EV_Wait(5);
		EV_LookPoint(player, -37.0f, -260.0f, 2642.0f);
		EV_Wait(15);
		EV_LookPoint(player, -51.0f, -260.0f, 2641.0f);
		EV_Wait(10);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(player);
		EV_SerifWait();
		EV_Wait(20);
		EV_ClrFace(tails);
		EV_SetFace(tails, "ECD");
		EV_SerifPlay(1454);
		EV_Msg(msgTbl_ev00F9[TextLanguage][4]); //"\aKnuckles left already."
		EV_Wait(50);
		EV_ClrFace(tails);
		EV_CameraPos(1, 0, -55.57f, -260.39999f, 2623.6799f);
		EV_CameraAng(1, 0, 0x500, 0xA700, 0x300);
		EV_CameraPos(1, 250, -57.299999f, -260.17999f, 2626.1001f);
		EV_CameraAng(1, 250, 0x500, 0xAC00, 0x700);
		EV_SerifPlay(1456);
		EV_SetFace(tails, "CEF");
		EV_Msg(msgTbl_ev00F9[TextLanguage][5]); //"\aCome!  \nWe gotta go after the last E"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 12);
		EV_SerifPlay(1457);
		EV_Msg(msgTbl_ev00F9[TextLanguage][6]); //"\a?... Lead the way!"
		EV_Wait(1);
		EV_SerifWait();
		EV_SetFace(tails, "CDP");
		EV_SerifPlay(1458);
		EV_Msg(msgTbl_ev00F9[TextLanguage][7]); //"\aIt should still be on board \nthe Tor"...
		EV_Wait(20);
		EV_SetAction(tails, &action_m_m0130_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(tails, &action_m_m0131_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SerifWait();
		EV_MsgClose();
		EventSe_Stop(0);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, -47.2327f, -263.29999f, 2626.6599f);
		EV_SetAng(player, 0x800, 0xD00, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		if (WHITE2)
		{
			FreeTask(WHITE2);
			WHITE2 = 0;
		}
		EventSe_Close();
		break;
	}
}