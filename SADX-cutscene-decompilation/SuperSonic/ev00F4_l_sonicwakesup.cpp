#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00F4_l_sonicwakesup(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		//BLACK = 0; // Unused
		task_skywalk = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_mstcln);
		EV_SetPos(player, -53.799999f, 36.400002f, 545.83002f);
		EV_SetAng(player, 0x98C, 0x44CF, 0xF9A5);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0059_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		task_skywalk = CSkyWalk_create2(player, 36.400002f);
		EV_CameraPos(1, 0, -100.0f, 212.55499f, 500.78f);
		EV_CameraAng(1, 0, 0, 0x9000, 0);
		EV_CreatePlayer(2, MilesTalesPrower, -51.240002f, 73.767601f, 431.10001f, 2195, 3820, 65054);
		EV_CameraPos(0, 200, -100.0f, 57.555f, 500.78f);
		EV_Wait(200);
		EV_SetFace(player, "WWWWWWWWWWW");
		tails = EV_GetPlayer(2);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 1.5f, 1, 0);
		EV_CameraPos(0, 90, -95.0f, 57.458f, 498.92999f);
		EV_Wait(70);
		EV_CameraPos(0, 0, -52.43f, 40.779999f, 534.56659f);
		EV_CameraAng(0, 0, 0x100, 0x7C00, 0);
		EV_Wait(10);
		EV_CameraPos(0, 200, -52.599998f, 40.830002f, 536.58002f);
		EV_SetAction(player, &action_s_s0060_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_SerifPlay(1406);
		EV_Msg(msgTbl_ev00F4[TextLanguage][0]); //"\aYawn."
		EV_SetFace(player, "VXWWWWWWWWWWWWW");
		EV_Wait(50);
		EV_SetAction(player, &action_s_s0059_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_SerifWait();
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CEAAAEWDCW");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DEEBEBDCW");
		}
		EV_SerifPlay(1407);
		EV_Msg(msgTbl_ev00F4[TextLanguage][1]); //"\aGuess Eggman's learned \nhis lesson.."...
		EV_Wait(50);
		EV_Wait(33);
		EV_Msg(msgTbl_ev00F4[TextLanguage][2]); //"\aAnd maybe I'll take \nanother vacatio"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetFace(player, "WW");
		EV_SerifPlay(1408);
		EV_Msg(msgTbl_ev00F4[TextLanguage][3]); //"\aSon-ic!"
		EV_SetAction(player, &action_s_s0061_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookObject(player, tails, 0.0f, 0.0f, 0.0f);
		EV_Wait(60);
		EV_MovePoint2(tails, -55.950001f, 43.125f, 522.79999f, 0.40000001f, 0.60000002f);
		EV_CameraPos(0, 0, -42.630001f, 34.0f, 556.60999f);
		EV_CameraAng(0, 0, 0x1500, 0x2B00, 0);
		EV_CameraPos(0, 140, -42.66f, 34.0f, 556.57001f);
		EV_CameraAng(0, 140, 0x1500, 0x1600, 0);
		EV_Wait(70);
		EV_SerifPlay(1409);
		EV_SetFace(tails, "CDE");
		EV_Msg(msgTbl_ev00F4[TextLanguage][4]); //"\aHey there, Tails!  Did you find \nthe"...
		EV_Wait(30);
		EV_CameraPos(0, 250, -41.0f, 34.0f, 555.34003f);
		EV_CameraAng(0, 250, 0x1500, 0x1C00, 0);
		EV_Wait(16);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0127_miles, &MILES_TEXLIST, 2.0f, 1, 4);
		EV_MsgClose();
		EV_SerifPlay(1410);
		EV_SetFace(tails, "FD");
		EV_Msg(msgTbl_ev00F4[TextLanguage][5]); //"\aNever mind that.  \nGet up and follow"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgClose();
		EV_CameraPos(0, 0, -50.299999f, 56.8657f, 518.67999f);
		EV_CameraAng(0, 0, 0xDE75, 0x70B7, 0xF757);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(0, 100, -48.0f, 52.672501f, 515.38f);
		EV_CameraAng(0, 100, 0xEB75, 0x69B7, 0xFC00);
		EV_Wait(5);
		EV_SerifPlay(1411);
		EV_SetFace(tails, "DCE");
		EV_Msg(msgTbl_ev00F4[TextLanguage][6]); //"\aAngel Island is falling again!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_SetAction(player, &action_s_s0062_sonic, &SONIC_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, &action_s_s0054_sonic, &SONIC_TEXLIST, 0.80000001f, 0, 4);
		EV_SetAction(player, &action_s_s0004_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_SerifPlay(1412);
		EV_SetFace(player, "HE");
		EV_Msg(msgTbl_ev00F4[TextLanguage][7]); //"\aHey, no way!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SerifPlay(1413);
		EV_SetFace(player, "FEDC");
		EV_Msg(msgTbl_ev00F4[TextLanguage][8]); //"\aWho blew it this time?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(0, 0, -43.299999f, 38.799999f, 549.79999f);
		EV_CameraAng(0, 0, 0xF00, 0x2600, 0xFA00);
		EV_CameraPos(0, 100, -44.779999f, 39.535f, 548.67499f);
		EV_SerifPlay(1414);
		EV_SetFace(tails, "DCE");
		EV_Msg(msgTbl_ev00F4[TextLanguage][9]); //"\aI don't know, \nbut we'd better hurry"...
		EV_Wait(60);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_Wait(30);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if (task_skywalk)
		{
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		break;
	}
}