#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0056[] = { 0 };

void ev0056_t_casinowake(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, -526.0f, -2.0f, 941.0f);
		EV_SetAng(player, 0, 0xF200, 0);
		EV_InitPlayer(0);
		EV_CreatePlayer(2, SonicTheHedgehog, -535.40002f, -2.0f, 944.5f, 0, 0xFA26, 0);
		WHITE = COverlayCreate(1.0f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_Wait(1);
		EV_SetAction(player, &action_m_m0106_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVVV");
		sonic = EV_GetPlayer(2);
		EV_SetAction(sonic, &action_s_s0053_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 0);
		EV_SetFace(sonic, "VVVVVVVVVVVVVVVVVV");
		EV_Wait(30);
		EV_CameraPos(1, 0, -520.75299f, 6.1999998f, 951.51501f);
		EV_CameraAng(1, 0, 0xE8E6, 0x16B1, 0);
		COverlaySetSpeed(WHITE, -0.016666668f);
		EV_Wait(30);
		EV_CameraPos(0, 100, -520.58002f, 10.5f, 959.35699f);
		EV_CameraAng(0, 100, 0xE9E6, 0x13B1, 0);
		EV_Wait(100);
		EV_SetFace(sonic, "XW");
		EV_Wait(5);
		EV_SetFace(player, "XW");
		EV_Wait(27);
		EV_SetAction(sonic, &action_s_s0054_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(5);
		EV_SetAction(player, &action_m_m0108_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(player);
		EV_SetPos(player, -527.29999f, -2.0f, 944.70001f);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_CameraPos(1, 0, -519.90002f, 0.51770002f, 951.46997f);
		EV_CameraAng(1, 0, 0xCE6, 0x27B1, 0xFF00);
		EV_SetAction(player, &action_m_m0110_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_LookObject(player, sonic, 0.0f, 3.0f, 0.0f);
		EV_SetAction(player, &action_m_m0111_miles, &MILES_TEXLIST, 1.3f, 1, 0);
		EV_LookObject(sonic, player, 0.0f, 3.0f, 0.0f);
		EV_ClrFace(player);
		EV_SerifPlay(674);
		EV_SetFace(player, "CD");
		EV_Msg(msgTbl_ev0056[TextLanguage][0]); //"\aUgh... Sonic... What happened \nto th"...
		EV_Wait(60);
		EV_MsgClose();
		EV_CameraPos(0, 350, -524.76459f, 0.46340001f, 956.16998f);
		EV_CameraAng(0, 350, 0xCE6, 0x12B1, 0xFF00);
		EV_SetAction(sonic, &action_s_s0057_sonic, &SONIC_TEXLIST, 0.80000001f, 0, 8);
		EV_WaitAction(sonic);
		EV_SetAction(sonic, &action_s_s0004_sonic, &SONIC_TEXLIST, 0.30000001f, 1, 16);
		EV_SetFace(sonic, "CECD");
		EV_SerifPlay(675);
		EV_Msg(msgTbl_ev0056[TextLanguage][1]); //"\aArgh... Eggman got one of them,\nbut "...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_Wait(10);
		EV_SerifPlay(676);
		EV_SetFace(sonic, "EC");
		EV_Msg(msgTbl_ev0056[TextLanguage][2]); //"\aHe must be getting desperate."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_LookFree(player);
		EV_ClrFace(player);
		EV_SetFace(player, "ECDAACDF");
		EV_SerifPlay(677);
		EV_Msg(msgTbl_ev0056[TextLanguage][3]); //"\aNow the Emerald count is two \nto one"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(1, 0, -523.90002f, -2.0f, 959.0f);
		EV_CameraAng(1, 0, 0x10E6, 0xCB1, 0xFF00);
		EV_CameraPos(0, 90, -526.14349f, 0.67000002f, 952.03003f);
		EV_CameraAng(0, 90, 0x10E6, 0xCB1, 0xFF00);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_SerifPlay(678);
		EV_SetFace(player, "FED");
		EV_Msg(msgTbl_ev0056[TextLanguage][4]); //"\aLet's get a move on!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(10);
		break;
	case 2:
		EV_SetPos(player, -527.29999f, -2.0f, 944.70001f);
		EV_SetAng(player, 0, 0xF200, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if(WHITE){
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}