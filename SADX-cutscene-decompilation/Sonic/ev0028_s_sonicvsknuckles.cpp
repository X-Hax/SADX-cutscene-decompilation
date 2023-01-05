#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0028[] = { 0 };

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
		EV_SetAng(player, 0xED9, 0x79CE, 0xFBF7);
		EV_CreatePlayer(2, KnucklesTheEchidna, 87.870003f, 72.709999f, 252.82001f, 65390, 57079, 65442);
		EV_Wait(1);
		EV_CreatePlayer(3, MilesTalesPrower,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z + 30.0f,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetPos(player, 34.939999f, 60.889999f, 427.09f);
		EV_SetAng(player, 0xED9, 0x79CE, 0xFBF7);
		knuckles = EV_GetPlayer(2);
		EV_SetPos(knuckles, 87.870003f, 72.709999f, 252.82001f);
		EV_SetAng(knuckles, 0xFF6E, 0xDEF7, 0xFFA2);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5f, 1, 0);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 2.5f, 1, 0);
		BGM_Play(MusicIDs_theknkls);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 112.26f, 75.0f, 252.8f);
		EV_CameraAng(0, 0, 0x38C, 0x6E8A, 0);
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
		EV_SetAng(player, 0xFF6E, 0x600C, 0xFFA2); //Y rotate rarely works because it happens before the active MovePoint2 finishes. 
		EV_SetAng(tails, 0xFF6E, 0x600C, 0xFFA2);
		EV_Wait(20);
		EV_CameraPos(0, 20, 86.879997f, 74.949997f, 230.49001f);
		EV_CameraAng(0, 20, 0x58C, 0x788A, 0);
		EV_Wait(20);
		throughplayer_on(player);
		throughplayer_on(knuckles);
		EV_CameraPos(0, 120, 87.599998f, 74.400002f, 226.60001f);
		EV_Wait(20);
		EV_CameraPos(1, 0, 83.980003f, 73.849998f, 261.87f);
		EV_CameraAng(1, 0, 0x58C, 0xF58A, 0);
		EV_CameraPos(0, 60, 83.980003f, 78.0f, 261.87f);
		EV_Wait(60);
		EV_CameraPerspective(0, 45, 0x2AAB);
		EV_SerifPlay(604);
		EV_Msg(msgTbl_ev0028[TextLanguage][0]); //"\aWhat's up, Knuckles?"
		EV_Wait(45);
		EV_MsgClose();
		EV_CameraTargetObj(0, 45, knuckles, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(1, 45, 78.029999f, 74.470001f, 286.89999f);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(tails, knuckles, 0.0f, 6.0f, 0.0f);
		EV_CameraPerspective(0, 1, 0x2AAB);
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
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			player->twp->pos.x - 25.0f,
			player->twp->pos.y,
			player->twp->pos.z - 25.0f,
			40);
		EV_Wait(10);
		EV_CameraTargetFree();
		EV_CameraTargetObj(0, 30, player, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(50);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 42.43f, 76.949997f, 258.59f);
		EV_CameraAng(0, 0, 0x3A9, 0x580F, 0);
		EV_SetPos(knuckles, 42.959999f, 72.709999f, 301.29001f);
		EV_SetAng(knuckles, 0xFF6E, 0x89C2, 0xFFA2);
		EV_SetAng(tails, 0xFF6E, 0x89C2, 0xFFA2);
		EV_SetAction(knuckles, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(15);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(605);
		EV_Wait(15);
		EV_Msg(msgTbl_ev0028[TextLanguage][1]); //"\aSomethin' buggin' you?"
		EV_CameraPos(0, 60, 46.810001f, 81.330002f, 241.47f);
		EV_CameraAng(0, 60, 0xFCA9, 0x730F, 0);
		EV_SetAction(player, &action_s_s0002_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(player);
		EV_SetAng(player, 0xFF6E, 0xCF2, 0xFFA2);
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
		EV_CameraAng(0, 0, 0xFDA9, 0x200F, 0);
		EV_CameraPos(0, 160, 60.740002f, 79.57f, 311.63f);
		EV_CameraAng(0, 160, 0xFDA9, 0x1D0F, 0);
		EV_Msg(msgTbl_ev0028[TextLanguage][4]); //"\aWhat!? Let's just see you\ntake 'em, "...
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_Wait(10);
		EV_SerifPlay(608);
		EV_Wait(30);
		EV_SetFace(player, "F");
		EV_Wait(20);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
			EV_SetFace(player, "F");
		}
		EV_Wait(12);
		EV_MsgClose();
		if (VoiceLanguage == Languages_Japanese) EV_ClrFace(player);
		EV_Wait(17);
		if (VoiceLanguage == Languages_English) EV_ClrFace(player);
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
		EV_SetAng(player, 0, -0x9C00, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}