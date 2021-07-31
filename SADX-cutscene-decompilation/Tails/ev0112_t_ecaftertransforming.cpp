#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0112_t_ecaftertransforming(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CanselOn();
		EV_Wait(4);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CreatePlayer(2, SonicTheHedgehog, 6.5599999f, 659.16998f, 40.52f, 0, 0, 0);
		BGM_Play(MusicIDs_egcarer1);
		EV_SetPos(player, -3.1099999f, 659.20001f, 29.84f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_LookPoint(sonic, 6.5599999f, 700.16998f, 50.52f);
		EV_CameraPos(1, 0, -3.1700001f, 661.82001f, 37.330002f);
		EV_CameraAng(1, 0, 5079, 662, 47);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "ICDEE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "ICF");
		}
		EV_SerifPlay(1539);
		EV_Msg(msgTbl_ev0112[TextLanguage][0]); //"\aWhoah!   Hey, it transformed!   \nDid"...
		EV_Wait(60);
		EV_LookPoint(player, 6.5599999f, 659.16998f, 40.52f);
		EV_CameraPos(1, 90, 2.1800001f, 661.09003f, 59.299999f);
		EV_CameraAng(1, 90, 3799, 662, 47);
		EV_LookObject(sonic, player, 0.0f, 3.0f, 0.0f);
		EV_Wait(60);
		EV_SetFace(sonic, "T");
		EV_Wait(60);
		EV_LookPoint(sonic, 6.5599999f, 700.16998f, 50.52f);
		EV_SetFace(sonic, "FDDE");
		EV_SerifPlay(1540);
		EV_MsgW(60, msgTbl_ev0112[TextLanguage][1]); //"\aNow how are we gonna get to \nthe bri"...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_SetFace(player, "OCCC");
		EV_SerifPlay(1541);
		EV_MsgW(60, msgTbl_ev0112[TextLanguage][2]); //"\aI hate it when he doesn't listen to m"...
		EV_ClrFace(player);
		EV_CameraPos(1, 0, -287.82001f, 527.06f, -2888.0f);
		EV_CameraAng(1, 0, 65356, 35052, 3328);
		EV_CameraPos(1, 180, 318.10999f, 937.39001f, -887.25f);
		EV_CameraAng(1, 180, 65356, 35052, 3328);
		EV_SerifPlay(1542);
		EV_MsgW(60, msgTbl_ev0112[TextLanguage][3]); //"\aHe he he he he!   I guess you\nweren'"...
		EV_SerifPlay(1543);
		EV_MsgW(40, msgTbl_ev0112[TextLanguage][4]); //"\aThere's only one way to get to me,\nS"...
		EV_MsgW(30, msgTbl_ev0112[TextLanguage][5]); //"\aAnd that's through the Sky Deck!"
		EV_CameraPos(1, 0, 318.10999f, 937.39001f, -887.25f);
		EV_CameraAng(1, 0, 65356, 35052, 3328);
		EV_CameraPos(1, 240, -521.0f, 887.57001f, -554.83002f);
		EV_CameraAng(1, 240, 65356, 35052, 0);
		EV_SerifPlay(1544);
		EV_MsgW(60, msgTbl_ev0112[TextLanguage][6]); //"\aI doubt if you can make it!"
		EV_SerifPlay(1545);
		EV_MsgW(60, msgTbl_ev0112[TextLanguage][7]); //"\aHa haaaaaa!   I dare you!"
		EV_LookFree(player);
		EV_CameraPos(1, 0, 2.1800001f, 661.09003f, 59.299999f);
		EV_CameraAng(1, 0, 3799, 662, 47);
		EV_SetAction(player, &action_m_m0127_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 15);
		EV_SetFace(sonic, "FFPP");
		EV_SerifPlay(1546);
		EV_Msg(msgTbl_ev0112[TextLanguage][8]); //"\aJust watch me!   Bring it on, Eggman!"
		EV_LookFree(sonic);
		EV_SetAction(sonic, &action_s_s0065_sonic, &SONIC_TEXLIST, 0.5f, 0, 16);
		EV_SetAction(sonic, &action_s_s0067_sonic, &SONIC_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_LookObject(player, sonic, 0.0f, 3.0f, 0.0f);
		EV_SetFace(player, "J");
		EV_Wait(60);
		EV_LookFree(player);
		EV_SetFace(player, "N");
		EV_CameraPos(0, 70, -8.8999996f, 660.70001f, 20.77f);
		EV_CameraAng(0, 70, 3799, 34966, 47);
		EV_SerifWait();
		EV_ClrAction(sonic);
		EV_ClrFace(sonic);
		EV_LookPoint(sonic, 6.5599999f, 700.16998f, 50.52f);
		EV_MsgClose();
		EV_Wait(50);
		break;
	case 2:
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}