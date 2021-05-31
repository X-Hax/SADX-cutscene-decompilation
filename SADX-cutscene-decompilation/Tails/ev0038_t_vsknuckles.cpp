#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0038_t_vsknuckles(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
			EV_CameraOn();
			EV_PadOff();
			EV_CanselOn();
			EV_Wait(1);
			EV_InitPlayer(0);
			EV_SetPos(player, 34.939999f, 60.889999f, 427.09f);
			EV_SetAng(player, 3801, 31182, 64503);
			EV_CreatePlayer(2, Knuckles_Main, 87.870003f, 72.709999f, 252.82001f, 65430, 57079, 18);
			EV_CreatePlayer(3, Sonic_Main, 39.389999f, 51.380001f, 450.67999f, 3801, 34081, 64503);
			EV_Wait(1);
			EV_SetPos(player, 34.939999f, 60.889999f, 427.09f);
			EV_SetAng(player, 3801, 31182, 64503);
			knuckles = EV_GetPlayer(2);
			EV_SetPos(knuckles, 87.870003f, 72.709999f, 252.82001f);
			EV_SetAng(knuckles, 65430, 57079, 18);
			EV_ClrAction(player);
			EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 2.5f, 1, 0);
			EV_ClrAction(knuckles);
			EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
			sonic = EV_GetPlayer(3);
			EV_ClrAction(sonic);
			EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5f, 1, 0);
			EV_Wait(1);
			BGM_Play(MusicIDs_theknkls);
			EV_CameraPerspective(0, 1, 9102);
			EV_CameraPos(0, 0, 112.26f, 76.190002f, 252.8f);
			EV_CameraAng(0, 0, 140, 28298, 0);
			EV_MovePoint2(player, 57.169998f, 73.099998f, 286.54001f, 1.75f, 0.059999999f);
			EV_MovePoint2(sonic, 56.669998f, 73.099998f, 315.29999f, 1.75f, 0.059999999f);
			EV_CameraPos(0, 110, 88.669998f, 76.190002f, 242.28999f);
			EV_Wait(110);
			EV_CameraPos(0, 120, 86.849998f, 76.190002f, 241.46001f);
			EV_Wait(15);
			EV_ClrAction(player);
			EV_ClrAction(sonic);
			EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
			EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
			EV_SetAng(player, 65390, 25302, 65442);
			EV_SetAng(sonic, 65390, 26112, 65442);
			EV_Wait(20);
			throughplayer_on(player);
			throughplayer_on(knuckles);
			EV_CameraPos(0, 0, 83.580002f, 73.739998f, 264.0f);
			EV_CameraAng(0, 0, 630, 63792, 0);
			EV_CameraPos(0, 45, 83.529999f, 78.730003f, 264.29001f);
			EV_SerifPlay(679);
			EV_MsgW(45, msgTbl_ev0038[TextLanguage][0]); //"\aHey, Knuckles.   What's up?"
			EV_MsgClose();
			EV_CameraPos(0, 120, 83.519997f, 79.730003f, 264.35001f);
			EV_Wait(20);
			EV_CameraTargetFree();
			EV_CameraPos(0, 0, 57.369999f, 77.57f, 284.06f);
			EV_CameraTargetFree();
			EV_CameraTargetObj(0, 0, knuckles, 0.0f, 6.0f, 0.0f, 0);
			EV_CameraPerspective(0, 1, 9102);
			EV_SetAng(sonic, 145, 39354, 65384);
			EV_ClrAction(sonic);
			EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
			EV_ClrAction(knuckles);
			EV_PlayPad(2, &_EV0028_KN_PUNCH);
			EV_Wait(20);
			EV_CameraPerspective(0, 1, 1820);
			EV_Wait(15);
			EV_CameraPerspective(0, 1, 9102);
			EV_CameraPos(0, 0, 48.73f, 76.139999f, 269.72f);
			EV_CameraTargetObj(0, 0, knuckles, 0.0f, 6.0f, 0.0f, 63488);
			EV_ClrAction(player);
			EV_SetAction(player, &action_m_m0103_miles, &MILES_TEXLIST, 2.0f, 0, 4);
			EV_Wait(5);
			moveObject(player,
				player->Data1->Position.x,
				player->Data1->Position.y + 0.80000001f,
				player->Data1->Position.z,
				player->Data1->Position.x - 30.0f,
				player->Data1->Position.y + 0.80000001f,
				player->Data1->Position.z + 30.0f,
				15);
			EV_Wait(15);
			EV_SetAng(player, 65390, 25302, 65442);
			EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
			EV_Wait(30);
			EV_SetPos(player, 57.110001f, 73.099998f, 286.95999f);
			EV_SetPos(knuckles, 87.870003f, 72.709999f, 252.82001f);
			EV_ClrAction(player);
			EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
			EV_ClrAction(knuckles);
			EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
			EV_Wait(1);
			EV_SetPos(sonic, 86.489998f, 72.120003f, 369.01001f);
			EV_SetAng(sonic, 145, 35292, 65384);
			EV_CameraPos(0, 0, 43.509998f, 76.07f, 310.44f);
			EV_CameraTargetFree();
			EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 64256);
			EV_CameraPos(0, 60, 49.619999f, 76.800003f, 300.13f);
			EV_ClrAction(knuckles);
			EV_PlayPad(2, &_EV0028_KN_PUNCH);
			EV_Wait(35);
			EV_ClrAction(player);
			EV_SetAction(player, &action_m_m0103_miles, &MILES_TEXLIST, 2.0f, 0, 4);
			EV_Wait(5);
			moveObject(player,
				player->Data1->Position.x,
				player->Data1->Position.y + 0.80000001f,
				player->Data1->Position.z,
				player->Data1->Position.x - 30.0f,
				player->Data1->Position.y + 0.80000001f,
				player->Data1->Position.z + 30.0f,
				15);
			EV_Wait(15);
			EV_SetAng(player, 65390, 23040, 65442);
			EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
			EV_Wait(15);
			EV_SetAng(knuckles, 0, 54528, 0);
			EV_SetAction(knuckles, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
			EV_CameraTargetFree();
			EV_CameraPos(1, 45, 60.82f, 75.910004f, 286.23999f);
			EV_CameraAng(1, 45, 1560, 26026, 65203);
			if (!VoiceLanguage)
			{
				EV_SetFace(player, "FFF");
			}
			if (VoiceLanguage == 1)
			{
				EV_SetFace(player, "DE");
			}
			EV_SerifPlay(680);
			EV_MsgW(45, msgTbl_ev0038[TextLanguage][1]); //"\aWhat are you doin', \nKnuckles?"
			EV_MsgClose();
			EV_ClrFace(player);
			EV_CameraPos(0, 0, 24.1f, 80.57f, 345.95001f);
			EV_CameraAng(0, 0, 65304, 61749, 65203);
			EV_CameraPos(0, 200, 17.719999f, 80.790001f, 343.07999f);
			EV_CameraAng(0, 200, 65304, 60213, 65203);
			EV_SetPos(knuckles, 54.470001f, 73.5f, 296.95001f);
			EV_SetAction(knuckles, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 2);
			EV_SetAction(knuckles, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
			EV_SetFace(knuckles, "FCDE");
			EV_SerifPlay(681);
			EV_MsgW(60, msgTbl_ev0038[TextLanguage][2]); //"\aDon't mess with me, now."
			EV_ClrFace(knuckles);
			throughplayer_off(player);
			throughplayer_off(knuckles);
			EV_SetFace(knuckles, "EFCD");
			EV_SerifPlay(682);
			EV_MsgW(90, msgTbl_ev0038[TextLanguage][3]); //"\aJust hand over the Emeralds\nyou have"...
			EV_ClrFace(knuckles);
			EV_MsgClose();
			EV_Wait(30);
			EV_CameraPos(0, 0, 47.919998f, 79.739998f, 266.73999f);
			EV_CameraAng(0, 0, 280, 31282, 65203);
			EV_CameraPos(0, 180, 48.919998f, 79.550003f, 259.81f);
			EV_SerifPlay(683);
			EV_SetFace(player, "FFF");
			EV_MsgW(50, msgTbl_ev0038[TextLanguage][4]); //"\aNo way, Knuckles!"
			EV_ClrFace(player);
			EV_MsgClose();
			EV_Wait(40);
			dsStop_all();
			break;
		case 2:
			dsStop_all();
			stopObjectAll();
			throughplayer_off(player);
			throughplayer_off(knuckles);
			EV_SetPos(player, 28.0f, 80.0f, 220.0f);
			EV_SetAng(player, 0, -39936, 0);
			EV_InitPlayer(0);
			EV_RemovePlayer(2);
			EV_RemovePlayer(3);
			EV_CameraOff();
			EV_PadOn();
			break;
	}
}