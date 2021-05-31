#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0028_s_sonicvsknuckles(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(8);
		SetBankDir(49); //First two Knuckles punches
		switch (VoiceLanguage) { //Last punch (voiced)
		case 0:
			SetBankDir(69);
			break;
		case 1:
			SetBankDir(70);
			break;
		}
		EV_InitPlayer(0);
		EV_SetPos(player, 34.939999f, 60.889999f, 427.09f);
		EV_SetAng(player, 3801, 31182, 64503);
		EV_CreatePlayer(2, Knuckles_Main, 87.870003f, 72.709999f, 252.82001f, 65390, 57079, 65442);
		EV_Wait(1);
		EV_CreatePlayer(3, Tails_Main,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z + 30.0f,
			player->Data1->Rotation.x,
			0x4000 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EV_SetPos(player, 34.939999f, 60.889999f, 427.09f);
		EV_SetAng(player, 3801, 31182, 64503);
		knuckles = EV_GetPlayer(2);
		EV_SetPos(knuckles, 87.870003f, 72.709999f, 252.82001f);
		EV_SetAng(knuckles, 65390, 57079, 65442);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5f, 1, 0);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 2.5f, 1, 0);
		BGM_Play(MusicIDs_theknkls);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 112.26f, 75.0f, 252.8f);
		EV_CameraAng(0, 0, 908, 28298, 0);
		EV_MovePoint2(player, 55.93f, 73.160004f, 289.95999f, 1.75f, 0.059999999f);
		EV_MovePoint2(tails, 55.759998f, 73.230003f, 320.75f, 1.75f, 0.059999999f);
		EV_CameraPos(0, 110, 88.669998f, 74.199997f, 242.28999f);
		EV_Wait(110);
		EV_CameraPos(0, 120, 86.849998f, 74.199997f, 241.46001f);
		EV_Wait(13); //Make this longer to prevent the issue below.
		EV_ClrAction(player);
		EV_ClrAction(tails);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(player, 65390, 24588, 65442); //Y rotate rarely works because it happens before the active MovePoint2 finishes. 
		EV_SetAng(tails, 65390, 24588, 65442);
		EV_Wait(20);
		EV_CameraPos(0, 20, 86.879997f, 74.949997f, 230.49001f);
		EV_CameraAng(0, 20, 1420, 30858, 0);
		EV_Wait(20);
		throughplayer_on(player);
		throughplayer_on(knuckles);
		EV_CameraPos(0, 120, 87.599998f, 74.400002f, 226.60001f);
		EV_Wait(20);
		EV_CameraPos(1, 0, 83.980003f, 73.849998f, 261.87f);
		EV_CameraAng(1, 0, 1420, 62858, 0);
		EV_CameraPos(0, 60, 83.980003f, 78.0f, 261.87f);
		EV_Wait(60);
		EV_CameraPerspective(0, 45, 10923);
		EV_SerifPlay(604);
		EV_Msg(msgTbl_ev0028[TextLanguage][0]); //"\aWhat's up, Knuckles?"
		EV_Wait(45);
		EV_MsgClose();
		EV_CameraTargetObj(0, 45, knuckles, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(1, 45, 78.029999f, 74.470001f, 286.89999f);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(tails, knuckles, 0.0f, 6.0f, 0.0f);
		EV_CameraPerspective(0, 1, 10923);
		EV_SetPos(player, 55.93f, 73.160004f, 289.95999f);
		EV_SetPos(knuckles, 87.870003f, 72.709999f, 252.82001f);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 2.5f, 1, 0);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 80.050003f, 98.809998f, 315.63f);
		EV_CameraTargetObj(0, 0, knuckles, 0.0f, 6.0f, 0.0f, 0);
		EV_ClrAction(knuckles);
		EV_PlayPad(2, &EV0028_KN_PUNCH);
		EV_Wait(20);
		EV_SetAction(player, &action_s_s0035_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_s_s0036_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		moveObject(player,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z,
			player->Data1->Position.x - 25.0f,
			player->Data1->Position.y,
			player->Data1->Position.z - 25.0f,
			40);
		EV_Wait(10);
		EV_CameraTargetFree();
		EV_CameraTargetObj(0, 30, player, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(50);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 42.43f, 76.949997f, 258.59f);
		EV_CameraAng(0, 0, 937, 22543, 0);
		EV_SetPos(knuckles, 42.959999f, 72.709999f, 301.29001f);
		EV_SetAng(knuckles, 65390, 35266, 65442);
		EV_SetAng(tails, 65390, 35266, 65442);
		EV_SetAction(knuckles, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(15);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(605);
		EV_Wait(15);
		EV_Msg(msgTbl_ev0028[TextLanguage][1]); //"\aSomethin' buggin' you?"
		EV_CameraPos(0, 60, 46.810001f, 81.330002f, 241.47f);
		EV_CameraAng(0, 60, 64681, 29455, 0);
		EV_SetAction(player, &action_s_s0002_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(player);
		EV_SetAng(player, 65390, 3314, 65442);
		EV_SetAction(player, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_ClrFace(knuckles);
		EV_SetFace(knuckles, "F");
		EV_SerifPlay(606);
		EV_Msg(msgTbl_ev0028[TextLanguage][2]); //"\aNo times for games, \nSonic!"
		EV_Wait(25);
		EV_MsgClose();
		EV_ClrFace(player);
		EV_Wait(5);
		throughplayer_off(player);
		throughplayer_off(knuckles);
		EV_SetAction(knuckles, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 2);
		EV_SetAction(knuckles, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		EV_SetFace(knuckles, "CDE");
		EV_SerifPlay(607);
		EV_Msg(msgTbl_ev0028[TextLanguage][3]); //"\aGive me the Emeralds you have!\nRight"...
		EV_Wait(70);
		EV_MsgClose();
		EV_ClrFace(knuckles);
		EV_CameraPos(0, 0, 66.419998f, 79.57f, 306.0f);
		EV_CameraAng(0, 0, 64937, 8207, 0);
		EV_CameraPos(0, 160, 60.740002f, 79.57f, 311.63f);
		EV_CameraAng(0, 160, 64937, 7439, 0);
		EV_Msg(msgTbl_ev0028[TextLanguage][4]); //"\aWhat!? Let's just see you\ntake 'em, "...
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_Wait(10);
		EV_SerifPlay(608);
		EV_Wait(30);
		EV_SetFace(player, "F");
		EV_Wait(20);
		if (VoiceLanguage == 1)
		{
			EV_ClrFace(player);
			EV_SetFace(player, "F");
		}
		EV_Wait(12);
		EV_MsgClose();
		if (!VoiceLanguage) EV_ClrFace(player);
		EV_Wait(17);
		if (VoiceLanguage == 1) EV_ClrFace(player);
		dsStop_all();
		EV_Wait(73);
		break;
	case 2:
		dsStop_all();
		EV_Wait(8);
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