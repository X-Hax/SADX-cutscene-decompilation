#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev001B[] = { 0 };

void ev001B_s_aftergamma(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(81);
		EV_CameraAng(1, 0, 0xE00, 0x8E00, 0);
		EV_CameraPos(1, 0, 100.72f, 1527.35f, 3327.55f);
		EV_CameraPos(0, 120, -5.6700001f, 1527.35f, 3365.6201f);
		EV_SetPos(player, -3.1800001f, 1528.0f, 3300.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_CreatePlayer(4, E102, -3.1800001f, 1528.0f, 3390.0f, 0, -0x8000, 0);
		EV_Wait(1);
		e102 = EV_GetPlayer(4);
		EV_SetPos(e102, -3.1800001f, 1528.0f, 3390.0f);
		Create_e102lightning(e102->twp->pos.x,
			e102->twp->pos.y,
			e102->twp->pos.z,
			4);
		EV_ClrAction(e102);
		EV_SetAction(e102, &action_e_e0002_e102, &E102_TEXLIST, 1.0f, 1, 16);
		EV_CreatePlayer(2, AmyRose, -123.18f, 1528.0f, 3310.0f, 0, -0xC000, 0);
		EV_Wait(1);
		amy = EV_GetPlayer(2);
		EV_SetPos(amy, -123.18f, 1528.0f, 3310.0f);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(3, MilesTalesPrower, -18.18f, 1528.0f, 3283.0f, 0, 0x1000, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_SetPos(tails, -18.18f, 1528.0f, 3283.0f);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		BGM_Play(MusicIDs_thesonic);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(60);
		dsPlay_oneshot_v(1334, 0, 0, 100, -3.0f, 1525.0f, 3390.0f);
		EV_Wait(35);
		dsPlay_oneshot_v(1334, 0, 0, 100, -3.0f, 1525.0f, 3390.0f);
		EV_Wait(15);
		dsPlay_oneshot_v(1334, 0, 0, 100, -3.0f, 1525.0f, 3390.0f);
		EV_Wait(10);
		EV_CameraPos(0, 160, -12.8f, 1527.08f, 3370.53f);
		dsPlay_oneshot_v(1334, 0, 0, 100, -3.0f, 1525.0f, 3390.0f);
		EV_Wait(15);
		dsPlay_oneshot_v(1334, 0, 0, 100, -3.0f, 1525.0f, 3390.0f);
		EV_Wait(5);
		EV_ClrAction(e102);
		EV_SetAction(e102, &action_e_e0003_e102, &E102_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(e102, &action_e_e0004_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(40);
		dsPlay_oneshot_v(1335, 0, 0, 120, -3.0f, 1525.0f, 3390.0f);
		EV_Wait(30);
		EV_Wait(50);
		Delete_e102lightning();
		EV_CameraAng(0, 0, 0x600, 0x9F00, 0);
		EV_CameraPos(0, 0, -32.700001f, 1531.14f, 3308.3799f);
		EV_CameraAng(0, 70, 0x600, 0x9400, 0);
		EV_CameraPos(0, 70, -16.51f, 1529.26f, 3286.4199f);
		EV_Wait(70);
		EV_CameraAng(0, 150, 0x600, 0x8B00, 0);
		EV_CameraPos(0, 150, -10.48f, 1529.4f, 3285.6201f);
		EV_Wait(50);
		EV_CameraPerspective(1, 1, 0x1C72);
		EV_CameraPos(0, 0, -5.6900001f, 1530.97f, 3313.28f);
		EV_CameraAng(0, 0, 0x80, 0xF3B3, 0);
		EV_Wait(20);
		EV_CameraPos(0, 45, -13.77f, 1530.64f, 3339.05f);
		EV_CameraAng(0, 45, 0x80, 0xEDB3, 0);
		EV_Wait(10);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[5], &SONIC_TEXLIST, 3.5f, 1, 8);
		EV_MovePoint(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z + 60.0f);
		EV_Wait(30);
		EV_SetPos(player, -3.1800001f, 1525.6801f, 3300.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[5], &SONIC_TEXLIST, 3.5f, 1, 0);
		EV_MovePoint(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z + 60.0f);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraAng(0, 0, 0x100, 0xC000, 0);
		EV_CameraPos(0, 0, -11.74f, 1530.14f, 3305.26f);
		EV_CameraAng(0, 30, 0x100, 0x8700, 0x800);
		EV_Wait(25);
		EV_SetPos(player, -3.1800001f, 1525.6801f, 3300.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraPerspective(0, 1, 0x3C72);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[5], &SONIC_TEXLIST, 3.5f, 1, 10);
		EV_MovePoint(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z + 60.0f);
		EV_CameraAng(0, 0, 0xEF00, 0x8600, 0x500);
		EV_CameraPos(0, 0, -16.639999f, 1565.87f, 3262.8401f);
		EV_CameraAng(0, 35, 0x200, 0x8600, 0x600);
		EV_CameraPos(0, 35, -9.7600002f, 1526.92f, 3337.49f);
		EV_Wait(30);
		EV_CameraAng(0, 15, 0xF00, 36096, 0x700);
		EV_CameraPos(0, 15, -9.5299997f, 1527.28f, 3353.3f);
		EV_Wait(15);
		EV_SetPos(amy,
			e102->twp->pos.x - 20.0f,
			e102->twp->pos.y,
			e102->twp->pos.z - 15.0f);
		EV_CameraAng(0, 0, 0xF00, 0x4D00, 0x700);
		EV_CameraPos(0, 0, -27.0, 1535.4301f, 3339.28f);
		EV_CameraPos(0, 20, -18.15f, 1529.8101f, 3373.1001f);
		EV_ClrFace(amy);
		EV_SetFace(amy, "FF");
		EV_SerifPlay(548);
		EV_Msg((msgTbl_ev001B[TextLanguage])[0]); //"\aStop it, Sonic!"
		EV_Wait(20);
		EV_CameraPos(0, 50, -17.75f, 1529.5601f, 3374.6799f);
		EV_Wait(3);
		if (VoiceLanguage == Languages_English) EV_ClrFace(amy);
		EV_Wait(27);
		if (VoiceLanguage == Languages_Japanese) EV_ClrFace(amy);
		EV_MsgClose();
		EV_CameraPos(0, 0, 64.470001f, 1529.0601f, 3316.8f);
		EV_CameraAng(0, 0, 0x800, 0x5000, 0x700);
		EV_CameraPos(0, 150, 5.1500001f, 1529.8f, 3353.71f);
		EV_CameraAng(0, 150, 0x600, 0x6500, 0x700);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[44], &AMY_TEXLIST, 2.5f, 1, 0);
		EV_MovePoint(amy,
			e102->twp->pos.x,
			e102->twp->pos.y,
			e102->twp->pos.z - 15.0f);
		EV_SetPos(player, -3.1800001f, 1525.6801f, 3270.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[5], &SONIC_TEXLIST, 2.5f, 1, 0);
		EV_MovePoint(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z + 80.0f);
		EV_Wait(60);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(amy,
			player->twp->ang.x,
			-0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_WaitMove(player);
		dsPlay_oneshot(18, 0, 0, 0);
		EV_SetAction(player, SONIC_ACTIONS[7], &SONIC_TEXLIST, 0.80000001f, 0, 0);
		EV_MovePoint(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_WaitAction(player);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, 2.4100001f, 1534.15f, 3379.7f);
		EV_CameraAng(0, 0, 0xF700, 0x1200, 0);
		EV_LookFree(player);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(549);
		EV_Msg((msgTbl_ev001B[TextLanguage])[1]); //"\aStep aside, Amy! \nOut of my way!"
		EV_SetAction(player, &action_s_s0005_sonic, &SONIC_TEXLIST, 1.0f, 0, 2);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "CD");
			break;
		case 1:
			EV_SetFace(player, "DE");
			break;
		}
		SONIC_OBJECTS[6]->sibling = &object_sonic_s_r_a5_01_s_r_a5_01; //Sonic's finger
		EV_Wait(25);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0007_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_Wait(20);
		EV_MsgClose();
		EV_ClrFace(player);
		SONIC_OBJECTS[6]->sibling = SONIC_OBJECTS[5]; //Reset Sonic's hand
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_CameraPos(0, 0, -13.62f, 1534.03f, 3348.96f);
		EV_CameraAng(0, 0, 0xF900, 0x9300, 0);
		EV_CameraPos(0, 60, -10.07f, 1532.66f, 3356.0f);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0002_amy, &AMY_TEXLIST, 1.0f, 1, 16);
		EV_Wait(10);
		EV_SetFace(amy, "F");
		EV_SerifPlay(550);
		EV_Wait(20);
		EV_ClrFace(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(10);
		EV_ClrFace(amy);
		EV_SetFace(amy, "ECD");
		EV_SerifPlay(551);
		EV_MsgW(90, (msgTbl_ev001B[TextLanguage])[2]); //"\aNo! This robot is my friend.\nHe help"...
		EV_MsgClose();
		EV_ClrFace(amy);
		EV_Wait(20);
		EV_CameraPos(0, 0, -5.5f, 1532.23f, 3369.52f);
		EV_Wait(4);
		EV_SetFace(amy, "FFF");
		EV_SerifPlay(552);
		EV_Msg((msgTbl_ev001B[TextLanguage])[3]); //"\aDon't hurt him."
		EV_Wait(16);
		EV_ClrFace(amy);
		EV_Wait(14);
		EV_MsgClose();
		EV_Wait(10);
		EV_SetPos(tails,
			player->twp->pos.x - 40.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_SetAng(tails,
			player->twp->ang.x,
			player->twp->ang.y,
			player->twp->ang.z);
		EV_LookFree(tails);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		EV_CameraPos(0, 0, -0.13f, 1528.75f, 3367.7f);
		EV_CameraAng(0, 0, 0x1100, 0x1100, 0);
		EV_CameraPos(0, 45, -1.25f, 1529.97f, 3365.2f);
		EV_Wait(45);
		EV_ClrFace(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "EE");
			break;
		case 1:
			EV_SetFace(player, "EEDEEE");
			break;
		}
		EV_SerifPlay(553);
		EV_MsgW(70, (msgTbl_ev001B[TextLanguage])[4]); //"\aOkay.   \nWhatever you say."
		EV_MsgClose();
		if (VoiceLanguage == Languages_English) EV_ClrFace(player);
		EV_Wait(20);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 32);
		EV_Wait(30);
		switch (VoiceLanguage) {
		case 0:
			EV_ClrFace(player);
			EV_SetFace(player, "DDE");
			break;
		case 1:
			EV_SetFace(player, "EE");
			break;
		}

		EV_SerifPlay(554);
		EV_MsgW(60, (msgTbl_ev001B[TextLanguage])[5]); //"\aYou must have your reasons..."
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(15);
		EV_MsgClose();
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_Wait(30);
		EV_CameraPos(0, 0, 25.389999f, 1527.59f, 3344.71f);
		EV_CameraAng(0, 0, 0x480, 0x5D00, 0x500);
		EV_Wait(20);
		EV_CameraPos(0, 120, 11.44f, 1529.77f, 3352.9199f);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_SetAction(player, &action_s_s0012_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_SetAction(e102, &action_e_e0005_e102, &E102_TEXLIST, 1.0f, 1, 4);
		EV_SetAction(amy, &action_a_a0003_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		dsPlay_oneshot_v(1333, 0, 0, 120, -3.0f, 1525.0f, 3390.0f);
		RumbleA(0, 3);
		EV_CameraAng(0, 5, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0x1280, 0x5D00, 0x500);
		EV_Wait(3);
		EV_SetAction(player, &action_s_s0012_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_SetAction(e102, &action_e_e0005_e102, &E102_TEXLIST, 0.5f, 1, 0);
		EV_SetAction(amy, &action_a_a0003_amy, &AMY_TEXLIST, 0.5f, 1, 0);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x980, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x980, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		dsStop_num(1325);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x5D00, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x480, 0x5D00, 0x500);
		RumbleA(0, 3);
		dsPlay_oneshot_v(1333, 0, 0, 120, -3.0f, 1525.0f, 3390.0f);
		EV_CameraPos(0, 0, -35.189999f, 1532.11f, 3359.0601f);
		EV_CameraAng(0, 0, 0xF780, 0x1500, 0);
		EV_CameraPos(0, 60, -33.259998f, 1532.9399f, 3362.46f);
		EV_CameraAng(0, 4, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF780, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF780, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_Msg((msgTbl_ev001B[TextLanguage])[6]); //"\aHey, this ship is losing \naltitude!"
		EV_CameraAng(0, 4, 0xF780, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_SerifPlay(555);
		EV_ClrFace(tails);
		EV_SetFace(tails, "EFCD");
		EV_CameraAng(0, 4, 0xF780, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF780, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF780, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xF780, 0x1500, 0);
		EV_Wait(3);
		EV_CameraAng(0, 0, 0xF680, 0x1500, 0);
		EV_Wait(3);
		EV_Wait(57);
		dsStop_num(1325);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_SetAction(player, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_Wait(15);
		dsPlay_oneshot_v(1333, 0, 0, 100, -102.0f, 1519.0f, 3000.0f);
		EV_ClrFace(tails);
		EV_MsgClose();
		EV_CameraPos(0, 30, 6.0100002f, 1530.3f, 3369.1299f);
		EV_CameraAng(0, 30, 0x80, 0x2A00, 0);
		EV_Wait(30);
		EV_ClrFace(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "FCE");
			break;
		case 1:
			EV_SetFace(player, "FDE");
			break;
		}
		EV_SerifPlay(556);
		EV_MsgW(80, (msgTbl_ev001B[TextLanguage])[7]); // "\aHurry, Tails!   \nTake Amy and get ou"...
		EV_MsgClose();
		EV_ClrFace(player);
		EV_CameraPos(0, 0, -6.71f, 1530.29f, 3368.0601f);
		EV_CameraAng(0, 0, 0x880, 0x9800, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_ClrAction(e102);
		EV_SetAction(e102, &action_e_e0004_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(amy);
		EV_SetFace(amy, "D");
		EV_SerifPlay(557);
		EV_MsgW(25, (msgTbl_ev001B[TextLanguage])[8]); //"\aBut what about you?"
		EV_MsgClose();
		EV_ClrFace(amy);
		dsPlay_oneshot_v(1333, 0, 0, 80, -102.0f, 1519.0f, 3000.0f);
		EV_LookFree(player);
		EV_Wait(5);
		EV_LookObject(player, amy, 0.0f, 8.0f, 0.0f);
		EV_SetAction(player, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, 7.1199999f, 1531.76f, 3383.0601f);
		EV_CameraAng(0, 0, 0x80, 0x1100, 0);
		EV_CameraPerspective(0, 120, 0x271C);
		EV_ClrFace(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "FCEDEC");
			break;
		case 1:
			EV_SetFace(player, "FCE");
			break;
		}
		EV_SerifPlay(558);
		EV_MsgW(60, (msgTbl_ev001B[TextLanguage])[9]); //"\aI'll find that Eggman "
		EV_MsgW(60, (msgTbl_ev001B[TextLanguage])[10]); //"\aand put him out of commission!"
		EV_MsgClose();
		EV_ClrFace(player);
		EV_LookFree(player);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_Wait(1);
		dsPlay_oneshot_v(1333, 0, 0, 80, -102.0f, 1519.0f, 3000.0f);
		EV_CameraPos(0, 0, 12.35f, 1542.55f, 3384.9399f);
		EV_CameraAng(0, 0, 0xF580, 0x1100, 0x500);
		EV_CameraPos(0, 120, 36.639999f, 1558.34f, 3439.73f);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[5], &SONIC_TEXLIST, 2.5f, 1, 10);
		EV_MovePoint(player,
			player->twp->pos.x - 80.0f,
			player->twp->pos.y,
			player->twp->pos.z - 240.0f);
		EV_LookObject(amy, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(40);
		dsPlay_oneshot_v(1333, 0, 0, 50, -102.0f, 1519.0f, 3000.0f);
		EV_Wait(80);
		dsStop_all();
		EV_Wait(22);
		break;
	case 2:
		dsStop_all();
		EV_Wait(29);
		Delete_e102lightning();
		SONIC_OBJECTS[6]->sibling = SONIC_OBJECTS[5];
		EV_InitPlayer(0);
		EV_SetPos(player, -42.459999f, 1525.6899f, 3240.8f);
		EV_SetAng(player, 0, 0x8D17, 0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}