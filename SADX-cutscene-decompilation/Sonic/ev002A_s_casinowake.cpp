#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev002A_s_casinowake(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		WHITE = COverlayCreate(1.0f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_CameraPerspective(1, 1, 10923);
		EV_Wait(1);
		EV_SetPos(player, -535.40002f, -2.4000001f, 946.5f);
		EV_SetAng(player, 0, 64038, 0);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0053_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVVV");
		EV_CreatePlayer(2, Tails_Main, -526.0f, -2.4000001f, 941.0f, 0, 61952, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(2);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0106_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(tails, "VVVVVVVVVVVVVVVVVV");
		EV_CameraPos(1, 0, -544.96448f, 23.58f, 969.0f);
		EV_CameraAng(1, 0, 58641, 60672, 65280);
		EV_Wait(20);
		COverlaySetSpeed(WHITE, -0.016666668f);
		EV_CameraPos(0, 120, -540.5f, 15.4f, 960.29999f);
		EV_CameraPerspective(0, 120, 9102);
		EV_Wait(50);
		EV_SetFace(player, "XW");
		EV_Wait(5);
		EV_SetFace(tails, "XWB");
		EV_Wait(27);
		EV_SetAction(player, &action_s_s0054_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(15);
		EV_SetAction(tails, &action_m_m0108_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(tails);
		EV_SetPos(tails, -527.29999f, -2.0f, 944.70001f);
		EV_SetAction(tails, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetAction(tails, &action_m_m0110_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_LookObject(tails, player, 0.0f, 3.0f, 0.0f);
		EV_SetAction(tails, &action_m_m0111_miles, &MILES_TEXLIST, 1.3f, 1, 0);
		EV_CameraPos(1, 0, -524.78003f, 1.8466001f, 956.56f);
		EV_CameraAng(1, 0, 2339, 5632, 65280);
		EV_CameraPos(0, 180, -539.94f, 2.23f, 955.5f);
		EV_CameraAng(0, 180, 2339, 59392, 65280);
		EV_LookObject(player, tails, 0.0f, 3.0f, 15.0f);
		EV_ClrFace(player);
		EV_ClrFace(tails);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(tails, "WCBD");
			break;
		case 1:
			EV_SetFace(tails, "CCBD");
			break;
		}
		EV_SerifPlay(467);
		EV_Msg(msgTbl_ev002A[TextLanguage][0]); //"\aOh man, what happened to \nthat Emera"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_SetFace(tails, "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
		EV_SetAction(player, &action_s_s0057_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 8);
		EV_MsgClose();
		EV_WaitAction(player);
		EV_SetAction(player, &action_s_s0004_sonic, &SONIC_TEXLIST, 0.15000001f, 1, 16);
		EV_CameraPos(0, 240, -544.79999f, 0.23f, 962.79999f);
		EV_CameraAng(0, 240, 2339, 59392, 65280);
		EV_ClrFace(player);
		EV_SetFace(player, "EAAADEDC");
		EV_SerifPlay(468);
		EV_MsgW(1, msgTbl_ev002A[TextLanguage][1]); //"\aAahh... I guess Eggman's got one \nof"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "EC");
		EV_SerifPlay(469);
		EV_Msg(msgTbl_ev002A[TextLanguage][2]); //"\aThat guy must be desperate."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(0, 90, -516.5f, -0.53500003f, 959.16998f);
		EV_CameraAng(0, 90, 2339, 9216, 65280);
		EV_LookFree(player);
		EV_ClrFace(tails);
		EV_SetFace(tails, "ECDACF");
		EV_SerifPlay(470);
		EV_Msg(msgTbl_ev002A[TextLanguage][3]); //"\aThat means his two to \nour one, and "...
		EV_Wait(70);
		EV_CameraPos(0, 120, -514.59998f, -0.60000002f, 956.84003f);
		EV_CameraAng(0, 120, 2339, 10496, 65280);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_SerifPlay(471);
		EV_SetFace(tails, "FD");
		EV_Msg(msgTbl_ev002A[TextLanguage][4]); //"\aCome on Sonic, \nwe need to get busy!"
		EV_SetAction(tails, &action_m_m0130_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(tails, &action_m_m0131_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.60000002f, 1, 12); //English dialogue is too short for this to play.
		EV_Wait(10);
		EV_CameraPos(1, 50, -527.04999f, 1.226f, 953.13f);
		EV_CameraAng(1, 50, 3107, 9216, 65280);
		EV_Wait(30);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_SetFace(tails, "AAAAAAAAAAAAAAAAA");
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, -535.40002f, -2.4000001f, 946.5f);
		EV_SetAng(player, 0, 64038, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if(WHITE){
			FreeTask(WHITE);
			WHITE = 0;
		}
		break;
	}
}