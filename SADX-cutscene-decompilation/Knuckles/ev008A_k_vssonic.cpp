#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev008A[] = {
	(char*)("M_EM_GREEN"), & M_EM_GREEN_TEXLIST,
	0
};



void ev008A_k_vssonic(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		G_EME = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_SetPos(player, 193.56f, 70.980003f, 356.53f);
		EV_SetAng(player, 0x1190, 0x7F2D, 0xFBE0);
		EV_CreatePlayer(2, SonicTheHedgehog, 55.93f, 73.160004f, 289.95999f, 160, 61161, 0xFFE4);
		EV_CreatePlayer(3, MilesTalesPrower, 50.759998f, 73.230003f, 305.75f, 65390, 24588, 65442);
		EV_CreateObject(&G_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0034_sonic, &SONIC_TEXLIST, 1.0f, 1, 16);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(G_EME, 0);
		EV_SetPos(G_EME,
			sonic->twp->pos.x - 1.2f,
			sonic->twp->pos.y + 3.5999999f,
			sonic->twp->pos.z + 2.0f);
		EV_SetAng(G_EME, 0, 0, 0);
		EV_Wait(1);
		EV_SetAction(G_EME, &action_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		BGM_Play(MusicIDs_theknkls);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 187.57001f, 78.400002f, 291.57001f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 90, 186.21001f, 78.510002f, 293.03f);
		EV_MovePoint2(player, 178.87f, 72.650002f, 302.98999f, 1.75f, 0.059999999f);
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(player, 0xA0, 0x80E5, 0xFFE4);
		EV_CameraTargetFree();
		EV_CameraAng(0, 120, 0x23C, 0x6166, 0);
		EV_CameraPos(0, 120, 186.21001f, 78.510002f, 293.03f);
		EV_Wait(15);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_Wait(15);
		EV_CameraPos(0, 30, 205.03f, 78.400002f, 286.85001f);
		EV_CameraAng(0, 30, 0x23C, 0x4A66, 0);
		EV_Wait(30);
		EV_CameraPos(0, 120, 210.83f, 78.07f, 285.34f);
		EV_CameraAng(0, 120, 0x23C, 0x4A66, 0);
		EV_Wait(15);
		EV_CameraPos(0, 0, 90.870003f, 76.459999f, 293.20001f);
		EV_CameraAng(0, 0, 0x33C, 0x4466, 0);
		EV_SerifPlay(1063);
		EV_Msg(msgTbl_ev008A[TextLanguage][0]); //"\aThere's Sonic!   \nEggman was right."
		EV_SerifWait();
		EV_MsgClose();
		EV_SetFace(player, "CEFD");
		EV_Wait(10);
		EV_CameraPos(0, 0, 182.35001f, 73.190002f, 288.23999f);
		EV_CameraAng(0, 0, 0x113C, 0x7366, 0);
		EV_CameraPos(0, 60, 180.67999f, 75.650002f, 293.45999f);
		EV_SerifPlay(1064);
		EV_Msg(msgTbl_ev008A[TextLanguage][1]); //"\aWhat's that in his hand?"
		EV_Wait(30);
		EV_ClrFace(player);
		EV_Wait(15);
		EV_CameraPos(0, 0, 72.790001f, 78.370003f, 302.76001f);
		EV_CameraAng(0, 0, 0xFE3C, 0x2966, 0);
		EV_CameraPos(0, 15, 65.150002f, 77.989998f, 298.01999f);
		EV_CameraAng(0, 15, 0xFE3C, 0x2966, 0);
		EV_Msg(msgTbl_ev008A[TextLanguage][2]); //"\aIt looks like a piece of \nthe Master"...
		EV_Wait(15);
		EV_CameraPos(0, 60, 63.450001f, 77.900002f, 296.97f);
		EV_Wait(40);
		EV_MsgClose();
		EV_CameraPos(0, 0, 183.89f, 74.489998f, 292.14001f);
		EV_CameraAng(0, 0, 0x93C, 0x6866, 0);
		EV_CameraPos(1, 110, 196.67f, 78.190002f, 292.07001f);
		EV_CameraAng(1, 110, 0x13C, 0x4E66, 0);
		EV_SerifPlay(1065);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "FCEFD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FD");
		}
		EV_Msg(msgTbl_ev008A[TextLanguage][3]); //"\aHe has no right to have that!"
		EV_Wait(105);
		EV_ClrFace(player);
		EV_Wait(5);
		EV_MsgClose();
		EV_CameraPos(0, 0, 88.949997f, 76.089996f, 277.57001f);
		EV_CameraAng(0, 0, 0x33C, 0x5566, 0);
		EV_CameraPos(0, 100, 77.730003f, 77.120003f, 284.07001f);
		EV_SetPos(player, 87.870003f, 72.709999f, 252.82001f);
		EV_SetAng(player, 0xFF6E, 0xDEF7, 0xFFA2);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(tails, 0xFF96, 0x8000, 0x12);
		EV_FreeObject(&G_EME);
		EV_Wait(10);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(15);
		EV_CameraPerspective(0, 60, 0x238E);
		EV_CameraPos(0, 45, 56.619999f, 77.449997f, 307.81f);
		EV_CameraTargetObj(0, 35, sonic, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(15);
		EV_SetAction(sonic, &action_s_s0038_sonic, &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_Wait(30);
		EV_CameraTargetFree();
		EV_CameraAng(0, 10, 0x13C, 0xF566, 0);
		EV_Wait(10);
		throughplayer_on(player);
		throughplayer_on(sonic);
		EV_CameraPos(0, 100, 51.48f, 76.839996f, 327.13f);
		EV_Wait(20);
		EV_CameraAng(1, 0, 0x58C, 0xF58A, 0);
		EV_CameraPos(1, 0, 83.980003f, 78.0f, 261.87f);
		EV_CameraPerspective(0, 50, 0x2AAB);
		EV_SerifPlay(1066);
		EV_Msg(msgTbl_ev008A[TextLanguage][4]); //"\aHey, Knuckles!"
		EV_Wait(10);
		EV_SetPos(sonic, 55.93f, 73.160004f, 289.95999f);
		EV_SetAng(sonic, 65390, 24588, 65442);
		EV_Wait(10);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetPos(tails, 55.759998f, 73.230003f, 320.75f);
		EV_SetAng(tails, 0xFF6E, 0x600C, 0xFFA2);
		EV_Wait(10);
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 57.369999f, 77.57f, 284.06f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV008A_KN_PUNCH);
		EV_Wait(20);
		EV_CameraPerspective(0, 1, 0x71C);
		EV_Wait(10);
		EV_SetAction(sonic, &action_s_s0035_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		moveObject(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z,
			sonic->twp->pos.x - 25.0f,
			sonic->twp->pos.y,
			sonic->twp->pos.z - 25.0f,
			35);
		EV_Wait(7);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 56.41f, 77.769997f, 311.87f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 6.0f, 0.0f, 0xF800);
		EV_Wait(40);
		EV_CameraTargetFree();
		EV_CameraPos(0, 60, 38.540001f, 76.279999f, 321.75f);
		EV_CameraAng(0, 60, 0x412, 0xF8F8, 0xF800);
		EV_Wait(10);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAng(sonic, 0xFF6E, 0xCF2, 0xFFA2);
		EV_SetPos(sonic, 30.93f, 70.0f, 264.95999f);
		EV_SetPos(tails,
			tails->twp->pos.x - 20.0f,
			tails->twp->pos.y,
			tails->twp->pos.z + 20.0f);
		EV_WaitAction(sonic);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_SetAng(sonic, 0xFF6E, 0xCF2, 0xFFA2);
		EV_Wait(30);
		EV_CameraPos(0, 0, 28.93f, 77.699997f, 285.53f);
		EV_CameraAng(0, 0, 0x412, 0xF8F8, 0xF800);
		EV_CameraPos(1, 45, 30.120001f, 78.400002f, 278.67001f);
		EV_SetAng(player, 0xFF6E, 0x89C2, 0xFFA2);
		EV_SetPos(player, 42.959999f, 73.43f, 301.29001f);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "FF");
		EV_SerifPlay(1067);
		EV_Msg(msgTbl_ev008A[TextLanguage][5]); //"\aWhoa! What do you think \nyou're doin"...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		throughplayer_off(player);
		throughplayer_off(sonic);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, -5.3800001f, 92.459999f, 247.06f);
		EV_CameraAng(0, 0, 0xF4F6, 0xA5EC, 0);
		EV_CameraPos(0, 130, -14.98f, 95.669998f, 240.62f);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "FCD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FBBBBF");
		}
		EV_Wait(5);
		EV_SerifPlay(1068);
		EV_Msg(msgTbl_ev008A[TextLanguage][6]); //"\aAll right!   Put 'em up!"
		EV_Wait(30);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_SerifPlay(1069);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_SetAction(player, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 2);
		EV_SetAction(player, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Msg(msgTbl_ev008A[TextLanguage][7]); //"\aHand over the Emerald now!"
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "FCDFE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FD");
		}
		EV_Wait(90);
		EV_ClrFace(player);
		EV_CameraPos(0, 0, 40.040001f, 78.589996f, 319.81f);
		EV_CameraAng(0, 0, 0xF6, 0xFCEC, 0);
		EV_CameraPos(0, 180, 34.049999f, 78.589996f, 319.51001f);
		EV_SerifPlay(1070);
		EV_Msg(msgTbl_ev008A[TextLanguage][8]); //"\aThat's not gonna happen,\nbuddy!"
		EV_SetFace(sonic, "FDFE");
		EV_Wait(36);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(4);
		EV_MsgClose();
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(60);
		dsStop_all();
		break;
	case 2:
		dsStop_all();
		stopObjectAll();
		throughplayer_off(player);
		throughplayer_off(sonic);
		EV_SetPos(player, 28.0f, 80.0f, 220.0f);
		EV_SetAng(player, 0, -0x9C00, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_FreeObject(&G_EME);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}