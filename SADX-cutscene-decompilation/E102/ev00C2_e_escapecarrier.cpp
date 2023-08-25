#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00C2[] = {
	(char*)("VER1_WING"), &VER1_WING_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	0
};

void ev00C2_e_escapecarrier(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
//		obj_amy = 0; //Needs to use DataPointer for now, because the functions related to task_gattai need to be rewritten to make this way work.
		obj_wing = 0;
		BLACKOUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(81);
		EventSe_Init(5);
		EV_InitPlayer(0);
		BLACKOUT = COverlayCreate(1.0e-32f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_Wait(1);
		EV_CreatePlayer(4, SonicTheHedgehog, -3.0999999f, 1525.7f, 3314.3401f, 0, 0, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(4);
		EV_SetPos(sonic, -3.0999999f, 1525.7f, 3314.3401f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_SetPos(player, -3.0999999f, 1525.7f, 3354.3401f);
		EV_SetAng(player,
			sonic->twp->ang.x,
			-0x4000 - sonic->twp->ang.y,
			sonic->twp->ang.z);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 16);
		EV_CreatePlayer(2, AmyRose,
			player->twp->pos.x - 40.0f,
			player->twp->pos.y,
			player->twp->pos.z - 66.0f,
			player->twp->ang.x,
			0xD700 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		amy = EV_GetPlayer(2);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0004_amy, &AMY_TEXLIST, 0.80000001f, 1, 16);
		obj_wing = SetEventBirdie0();
		EV_SetPos(obj_wing, -13.1f, 1025.7f, 3314.3401f);
		EV_SetAng(obj_wing, 0, 0, 0);
		EV_Wait(1);
		EV_SetMode(obj_wing, 0);
		EV_CreatePlayer(3, MilesTalesPrower,
			sonic->twp->pos.x - 15.0f,
			sonic->twp->pos.y,
			sonic->twp->pos.z - 17.0f,
			sonic->twp->ang.x,
			0x5000 - sonic->twp->ang.y,
			sonic->twp->ang.z);
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(tails, player, 0.0f, 6.0f, 0.0f);
		BGM_Play(MusicIDs_thee102);
		EV_CameraAng(0, 0, 0xE00, 0x1100, 0);
		EV_CameraPos(0, 0, -17.799999f, 1527.6f, 3384.8f);
		EV_CameraPos(1, 150, 16.5f, 1527.6f, 3368.8999f);
		EV_Wait(80);
		EV_CameraAng(1, 100, 0xE00, 0x1700, 0);
		EV_Wait(100);
		EV_CameraPos(0, 0, 5.8000002f, 1536.8f, 3343.2f);
		EV_CameraAng(0, 0, 0x86D, 0x5D54, 0xFE00);
		EV_CameraPos(0, 130, 31.700001f, 1531.4f, 3346.0f);
		EV_CameraAng(0, 130, 0xA6D, 0x3850, 0xFE00);
		EV_Wait(60);
		EV_SetAction(player, &action_e_e0034_e102, &E102_TEXLIST, 0.89999998f, 1, 30);
		EV_Wait(140);
		EV_LookObject(amy, player, 0.0f, 10.0f, 30.0f);
		EV_SetPos(amy, -39.700001f, 1525.9f, 3313.8f);
		EV_SetAng(amy, 0, 0x400, 0);
		EV_CameraPos(0, 0, -41.700001f, 1531.13f, 3322.2f);
		EV_CameraAng(0, 0, 0x958, 0x11FF, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0004_amy, &AMY_TEXLIST, 0.80000001f, 1, 16);
		EV_CameraPos(0, 15, -37.259998f, 1531.1f, 3320.0f);
		EV_ClrFace(amy);
		EV_SetFace(amy, "FFF");
		EV_SerifPlay(1281);
		EV_MsgW(60, msgTbl_ev00C2[TextLanguage][0]); //"\aStop, Mr. Robot!"
		EV_ClrFace(amy);
		BGM_Stop();
		EV_SetPos(player, -3.0999999f, 1525.7f, 3354.3401f);
		EV_SetPos(sonic, -3.0999999f, 1525.7f, 3314.3401f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_LookObject(amy, player, 0.0f, 16.0f, 0.0f);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[44], &AMY_TEXLIST, 1.8f, 1, 0);
		EV_MovePoint(amy, -3.55f, 1525.7f, 3339.02f);
		EV_CameraPos(1, 0, -21.4f, 1535.01f, 3301.8f);
		EV_CameraAng(1, 0, 0x400, 0x7700, 0x700);
		EV_CameraPos(1, 80, 6.5f, 1533.3f, 3310.3999f);
		EV_CameraAng(1, 80, 0x100, 0x7500, 0x700);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		BGM_Stop();
		EV_WaitMove(amy);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(amy,
			sonic->twp->ang.x,
			0x4000 - sonic->twp->ang.y,
			sonic->twp->ang.z);
		EV_SerifPlay(1282);
		EV_Msg(msgTbl_ev00C2[TextLanguage][1]); //"\aAmy...?"
		EV_CameraPos(1, 130, 2.5f, 1532.71f, 3324.1699f);
		EV_CameraAng(1, 130, 0x700, 0x7700, 0x700);
		EV_Wait(100);
		EV_MsgClose();
		BGM_Play(MusicIDs_evtbgm00);
		EV_Wait(35);
		EV_CameraPos(1, 0, 15.86f, 1532.9f, 3342.1599f);
		EV_CameraAng(1, 0, 0x600, 0x4E00, 0);
		EV_CameraPos(1, 120, 20.51f, 1532.1f, 3340.5f);
		EV_CameraAng(1, 120, 0x600, 0x4E00, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0002_amy, &AMY_TEXLIST, 1.0f, 1, 16);
		EV_ClrFace(amy);
		EV_SetFace(amy, "ECDCDEDECD0");
		EV_SerifPlay(1283);
		EV_Msg(msgTbl_ev00C2[TextLanguage][2]); //"\aHey, Mr. Robot.   \nI know you're not"...
		EV_Wait(20);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 48);
		EV_Wait(80);
		EV_SerifWait();
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_CameraPos(1, 0, -3.4000001f, 1535.5428f, 3343.6499f);
		EV_CameraAng(1, 0, 0xE200, 0x100, 0);
		EV_CameraPos(1, 90, -3.4000001f, 1535.0428f, 3343.0f);
		EV_CameraAng(1, 90, 0xE200, 0x100, 0);
		EV_ClrFace(amy);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(amy, "CDC0");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(amy, "CD0");
		}
		EV_SerifPlay(1284);
		EV_Msg(msgTbl_ev00C2[TextLanguage][3]); //"\aWait!   Remember me?"
		EV_Wait(36);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(amy);
		}
		EV_Wait(44);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(amy);
		}
		EV_MsgClose();
		EV_Wait(20);
		EV_CameraPos(0, 150, 7.5500002f, 1532.7f, 3329.78f);
		EV_CameraAng(0, 150, 0x600, 0x6A00, 0);
		EV_SetAction(player, &action_e_e0034_e102, &E102_TEXLIST, 1.5f, 1, 0);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0034_e102, &E102_TEXLIST, 2.0999999f, 1, 0);
		EV_Wait(70);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0034_e102, &E102_TEXLIST, 1.5f, 1, 0);
		EV_Wait(70);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0034_e102, &E102_TEXLIST, 0.69999999f, 1, 0);
		EV_Wait(90);
		EV_SetAction(player, &action_e_e0035_e102, &E102_TEXLIST, 0.69999999f, 1, 20);
		EV_Wait(60);
		EV_SetPos(tails,
			sonic->twp->pos.x - 40.0f,
			sonic->twp->pos.y,
			sonic->twp->pos.z - 10.0f);
		EV_SetAng(tails,
			sonic->twp->ang.x,
			0x7000 - sonic->twp->ang.y,
			sonic->twp->ang.z);
		EV_LookFree(tails);
		EV_LookObject(tails, sonic, 0.0f, 6.0f, 0.0f);
		EV_SetPos(sonic, -3.0999999f, 1525.7f, 3320.3401f);
		EV_CameraPos(1, 140, 5.6999998f, 1529.5f, 3312.53f);
		EV_CameraAng(1, 140, 0x600, 0x6F00, 0);
		EV_SetAction(sonic, &action_s_s0011_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_Wait(40);
		EV_ClrFace(sonic);
		EV_SetFace(player, "EA"); //This is a mistake because Gamma can't do faces.
		EV_SerifPlay(1285);
		EV_MsgW(50, msgTbl_ev00C2[TextLanguage][4]); //"\aAmy?"
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_SetAction(sonic, &action_s_s0018_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "DDEEDE");
		EV_Wait(1);
		EV_SerifPlay(1286);
		EV_MsgW(60, msgTbl_ev00C2[TextLanguage][5]); //"\aHuh!   I really don't get this."
		EV_ClrFace(sonic);
		EV_Wait(60);
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_SetPos(sonic,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z - 25.0f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0018_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_CameraPerspective(1, 60, 0x2889);
		EV_CameraPos(0, 0, 26.4f, 1542.8f, 3328.8f);
		EV_CameraAng(0, 0, 0xF000, 0x6241, 0x100);
		EV_Wait(10);
		EV_CameraPos(0, 70, 19.889999f, 1543.4f, 3318.6299f);
		EV_CameraAng(0, 70, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EventSe_Play(0, 1333, 1800);
		BGM_Stop();
		EV_SetAction(sonic, &action_s_s0012_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_SetAction(amy, &action_a_a0003_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		BGM_Play(MusicIDs_egcarer1);
		RumbleA(0, 3);
		EV_CameraAng(0, 5, 0xFD00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFD00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFD00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFD00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFD00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFD00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFD00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_SetAction(sonic, &action_s_s0012_sonic, &SONIC_TEXLIST, 0.25f, 1, 0);
		EV_SetAction(amy, &action_a_a0003_amy, &AMY_TEXLIST, 0.5f, 1, 0);
		EV_CameraAng(0, 5, 0xFA00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFA00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xFA00, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EventSe_Volume(0, -70, 21);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF500, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0x580, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraAng(0, 5, 0xF600, 0x6241, 0x500);
		EV_Wait(3);
		EV_CameraPos(0, 0, -31.559999f, 1531.1f, 3317.0f);
		EV_CameraAng(0, 0, 0xFE80, 0x1F00, 0);
		EV_SetAction(player, &action_e_e0035_e102, &E102_TEXLIST, 1.0f, 1, 30);
		EV_CameraPerspective(1, 60, 0x2889);
		EV_Wait(1);
		EV_CameraPos(0, 15, -32.700001f, 1531.0f, 3315.3999f);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_ClrFace(tails);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(
				tails,
				"DDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tails, "DDCA");
		}
		EV_SerifPlay(1287);
		EV_Msg(msgTbl_ev00C2[TextLanguage][6]); //"\aSonic, look! \nThe Egg Carrier's losi"...
		EV_Wait(20);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFD80, 0x1F00, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 0xFE80, 0x1F00, 0);
		EV_Wait(3);
		EV_SerifWait();
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_MsgClose();
		EV_Wait(5);
		EV_SetPos(amy, -3.55f, 1525.7f, 3339.02f);
		EV_SetAng(amy, 0, 0xA000, 0);
		EV_LookFree(amy);
		EV_LookObject(amy, sonic, 0.0f, 4.0f, 0.0f);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 0, -45.900002f, 1528.76f, 3287.0f);
		EV_CameraAng(0, 0, 0x380, 0x9900, 0x300);
		EV_CameraPos(0, 70, -48.389999f, 1529.0f, 3288.78f);
		EV_SetAction(sonic, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.2f, 0, 4);
		EV_Wait(20);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "FCEC");
		EV_SerifPlay(1288);
		EV_MsgW(70, msgTbl_ev00C2[TextLanguage][7]); //"\aWe've gotta split.   \nTake Amy and g"...
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(sonic);
		EV_ClrFace(amy);
		EV_SetFace(amy, "DC");
		EV_LookFree(amy);
		EV_LookObject(amy, sonic, 0.0f, 4.0f, 0.0f);
		EV_SerifPlay(1289);
		EV_MsgW(40, msgTbl_ev00C2[TextLanguage][8]); //"\aWhat will you do?"
		EV_ClrFace(amy);
		EV_LookFree(sonic);
		EV_LookFree(amy);
		EV_LookObject(sonic, amy, 0.0f, 4.0f, 0.0f);
		EV_LookObject(amy, sonic, 0.0f, 6.0f, 0.0f);
		EV_CameraPos(0, 0, 11.4f, 1546.36f, 3359.0f);
		EV_CameraAng(0, 0, 0xEE80, 0x2200, 0x300);
		EV_CameraPos(0, 60, 13.5f, 1542.7f, 3360.6499f);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 8);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 0);
		EV_ClrFace(sonic);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "DCDCCDCC");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(sonic, "DCD");
		}
		EV_SerifPlay(1290);
		EV_MsgW(60, msgTbl_ev00C2[TextLanguage][9]); //"\aI'll nail that Eggman!"
		EV_MsgW(60, msgTbl_ev00C2[TextLanguage][10]); //"\aHe must be stopped, at all costs!"
		EV_MsgClose();
		EV_ClrFace(sonic);
		EV_LookFree(sonic);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 2.5f, 1, 10);
		EV_MovePoint(sonic,
			sonic->twp->pos.x - 80.0f,
			sonic->twp->pos.y,
			sonic->twp->pos.z - 240.0f);
		EV_LookObject(amy, sonic, 0.0f, 6.0f, 0.0f);
		EV_CameraAng(1, 70, 0xF780, 0x1C00, 0);
		EV_Wait(85);
		EV_SetPos(amy, -3.55f, 1525.7f, 3339.02f);
		EV_SetAng(amy, 0, 0xA000, 0);
		EV_LookFree(amy);
		EV_SetAction(obj_wing, &action_w_w0121_wing, &VER1_WING_TEXLIST, 0.69999999f, 1, 0);
		EV_SetPos(obj_wing,
			amy->twp->pos.x + 1.0f,
			amy->twp->pos.y + 1.0f,
			amy->twp->pos.z - 0.60000002f);
		EV_SetAng(obj_wing,
			(int)amy->twp->pos.x,
			(int)amy->twp->pos.y + 0x9000,
			(int)amy->twp->pos.z);
		EV_ClrFace(amy);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(amy, "CCCCDDA");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(amy, "CCA");
		}
		EV_SerifPlay(1291);
		EV_Msg(msgTbl_ev00C2[TextLanguage][11]); //"\aThanks again for saving me as usual,"...
		EV_CameraPos(0, 0, 0.40000001f, 1528.6f, 3327.3999f);
		EV_CameraAng(0, 0, 0x800, 0x764D, 0x300);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0010_amy, &AMY_TEXLIST, 1.0f, 1, 16);
		EV_SetAng(amy, 0, 0x9000, 0);
		EV_CameraPos(0, 100, 3.4000001f, 1531.6f, 3328.3f);
		EV_CameraAng(0, 100, 0x800, 0x734D, 0x300);
		EV_Wait(100);
		EV_ClrFace(amy);
		EV_CameraPos(0, 60, 3.55f, 1532.0f, 3328.0f);
		EV_Wait(60);
		EV_MsgClose();
		EV_CameraPos(1, 0, 13.9f, 1528.7f, 3335.23f);
		EV_CameraAng(1, 0, 0xC00, 0x5800, 0);
		EV_SetPos(amy, -3.55f, 1525.9f, 3330.3401f);
		EV_SetAng(amy, 0, 0, 0);
		EV_SetPos(obj_wing,
			amy->twp->pos.x + 3.0f,
			amy->twp->pos.y + 1.0f,
			amy->twp->pos.z + 4.3000002f);
		EV_SetAng(obj_wing, 63056, 0, 0);
		moveObjectOn(obj_wing, 0.0f, 0.89999998f, 1.5f, 200, amy);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0006_amy, &AMY_TEXLIST, 1.3f, 1, 0);
		EV_MovePoint2(amy, -3.55f, 1525.9f, 3339.3401f, 1.0f, 0.059999999f);
		EV_WaitMove(amy);
		EV_SetAction(amy, &action_a_a0010_amy, &AMY_TEXLIST, 1.3200001f, 1, 0);
		EV_CameraPos(1, 130, 21.9f, 1525.9f, 3329.8999f);
		EV_CameraAng(1, 170, 0xC00, 0x5B00, 0);
		EV_MoveFree(sonic);
		EV_ClrAction(sonic);
		EV_SetPos(sonic, 1.58f, 1532.8f, 3011.0f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_LookObject(amy, player, 0.0f, 16.0f, 0.0f);
		EV_SetAng(amy, 0, 0, 0);
		EV_Wait(1);
		EV_ClrFace(amy);
		EV_SetFace(amy, "CCAAA");
		EV_Msg(msgTbl_ev00C2[TextLanguage][12]); //"\aAnd how are you, my metal friend?\nIt"...
		EV_SerifPlay(1292);
		EV_SerifWait();
		EV_Wait(1);
		EV_SerifPlay(1293);
		EV_SerifWait();
		EV_Wait(70);
		EV_ClrFace(amy);
		EV_SetFace(amy, "CCDCA");
		EV_SerifPlay(1294);
		EV_MsgW(100, msgTbl_ev00C2[TextLanguage][13]); //"\aWhy not leave Eggman and come\nwith u"...
		EV_ClrFace(amy);
		EV_CameraPos(1, 120, 19.6f, 1526.77f, 3331.6599f);
		EV_CameraAng(1, 120, 0xC00, 0x5B00, 0);
		EV_SerifPlay(1300);
		EV_MsgW(75, msgTbl_ev00C2[TextLanguage][14]); //"\aWhy do you help me?"
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(20);
		EV_CameraPos(1, 0, -3.2f, 1537.2f, 3344.8601f);
		EV_CameraAng(1, 0, 0xE300, 0x200, 0x200);
		EV_CameraPos(1, 80, -3.29f, 1536.6f, 3344.1101f);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_ClrFace(amy);
		EV_SetFace(amy, "CCCA");
		EV_SerifPlay(1295);
		EV_Msg(msgTbl_ev00C2[TextLanguage][15]); //"\aI told you we'd be friends \nthe next"...
		EV_SerifWait();
		EV_ClrFace(amy);
		EV_CameraPos(1, 80, -3.23f, 1533.8f, 3345.49f);
		EV_CameraAng(1, 80, 0xF000, 0x200, 0x200);
		EV_ClrFace(amy);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(amy, "CCA");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(amy, "CCCA");
		}
		EV_SerifPlay(1296);
		EV_MsgW(65, msgTbl_ev00C2[TextLanguage][16]); //"\aEven birdie wants the best for you."
		EV_SerifWait();
		EV_SerifPlay(1297);
		EV_Msg(msgTbl_ev00C2[TextLanguage][17]); //"\aYou must ditch that awful Eggman!"
		EV_Wait(65);
		EV_ClrFace(amy);
		EV_CameraAng(1, 25, 0xF500, 0x1600, 0);
		EV_LookFree(amy);
		EV_LookObject(amy, tails, 0.0f, 4.0f, 0.0f);
		EV_LookFree(tails);
		EV_LookObject(tails, amy, 0.0f, 4.0f, 0.0f);
		EV_ClrFace(tails);
		EV_SetFace(tails, "DCA");
		EV_SerifPlay(1298);
		EV_Msg(msgTbl_ev00C2[TextLanguage][18]); //"\aAmy, come on!"
		EV_Wait(60);
		EV_ClrFace(tails);
		EV_CameraPos(1, 0, -19.35f, 1528.7f, 3314.8899f);
		EV_CameraAng(1, 0, 0xA00, 0x9200, 0);
		EV_Wait(30);
		EV_LookFree(amy);
		EV_LookObject(amy, player, 0.0f, 16.0f, 0.0f);
		EV_CameraPos(1, 100, -24.33f, 1525.9f, 3304.3f);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0015_amy, &AMY_TEXLIST, 2.5f, 1, 0);
		EV_LookFree(amy);
		EV_LookObject(amy, tails, 0.0f, 16.0f, 0.0f);
		EV_MovePoint(amy, -33.400002f, 1530.9f, 3312.5f);
		EV_Wait(1);
		EV_SetPos(obj_wing,
			amy->twp->pos.x + 1.0f,
			amy->twp->pos.y + 1.0f,
			amy->twp->pos.z);
		EV_SetAng(obj_wing,
			(int)amy->twp->pos.x,
			(int)amy->twp->pos.y + 0x9000,
			(int)amy->twp->pos.z);
		moveObjectOn(obj_wing, 1.0f, 1.0f, 0.60000002f, 300, amy);
		EV_WaitMove(amy);
		EV_MsgClose();
		seqVars[44] = 2;
		EV_CreateObject(&obj_amy, -1.95f, 1528.7f, 3370.0f, 0, 0x8000, 0);
		EV_Wait(1);
		EV_SetPos(player, 23.1f, 1525.7f, 3354.3401f);
		EV_ClrAction(obj_amy);
		EV_SetAction(obj_amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(obj_amy, 0);
		EV_SetColli(obj_amy, 0.0f);
		EV_SetPos(obj_amy, -6.2350001f, 1531.0f, 3371.6001f);
		EV_SetAng(obj_amy, 0, 0x9800, 0);
		EV_SetPos(amy, 0.0f, 1634.7f, 3175.0f);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		moveObjectOn(obj_wing, -0.30000001f, 1.0f, 0.60000002f, 200, obj_amy);
		EV_CameraPos(0, 0, 7.9200001f, 1527.7758f, 3348.76f);
		EV_CameraAng(0, 0, 0x7B7, 0x2EDE, 0x200);
		EV_LookFree(tails);
		EV_LookFree(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 1.6f, 1, 8);
		EV_SetAction(tails, MILES_ACTIONS[48], &MILES_TEXLIST, 1.3f, 1, 8);
		EV_Wait(8);
		EV_MovePoint2(sonic, -44.599998f, 1530.46f, 3026.0f, 1.6f, 0.0f);
		EV_MovePoint2(tails, -2.0754001f, 1530.46f, 3358.678f, 1.3f, 0.0f);
		EV_LookFree(tails);
		EV_WaitMove(tails);
		EV_SetPos(tails, -3.8199999f, 1525.7f, 3319.0f);
		EV_SetPos(obj_amy, -1.95f, 1531.0f, 3368.0f);
		EV_SetAng(obj_amy, 0, 0x8000, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, -6.0f, 1552.5601f, 3298.0f);
		EV_CameraAng(1, 0, 0xFBB7, 0x80DE, 0);
		EV_CameraTargetObj(1, 1, tails, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		EV_CameraPos(1, 70, -1.227f, 1533.0f, 3350.3f);
		EV_SetMode(tails, 0);
		EV_SetMode(player, 0);
		SetE102Effect(
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_SetPath(tails, &epathtag_cube004c_14, 0.60000002f, 2);
		EV_SetPath(tails, &epathtag_cube004c_22, 1.0f, 2);
		EV_Wait(40);
		EV_SetAction(tails, &action_m_m0002_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(obj_amy, &action_a_a0014_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(3);
		EV_CameraTargetFree();
		EV_Wait(7);
		create_task_gattai_EV00C2();
		EV_CameraTargetFree();
		EV_Wait(11);
		EV_CameraTargetObj(1, 1, tails, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(20);
		EV_CameraPos(1, 0, 53.860001f, 1526.25f, 3352.3501f);
		EV_CameraTargetObj(1, 0, tails, 0.0f, 4.0f, 0.0f, 0);
		EV_CameraPos(1, 111, 45.860001f, 1527.25f, 3328.1699f);
		EV_Wait(20);
		EV_CameraTargetFree();
		EV_Wait(50);
		EV_CameraTargetFree();
		EV_CameraAng(1, 41, 0x107E, 0x590D, 0x500);
		EV_Wait(30);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(11);
		EV_CameraTargetFree();
		EV_SerifPlay(1299);
		EV_Msg(msgTbl_ev00C2[TextLanguage][19]); // "\aWe'll meet again, my robot friend!"
		EV_Wait(50);
		EV_SetAction(player, E102_ACTIONS[24], &E102_TEXLIST, 1.4f, 1, 16);
		EV_Wait(11);
		ChgEffectMod(1);
		EV_Wait(45);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x382E);
		EV_Wait(1);
		EV_CameraPos(1, 0, 53.860001f, 1526.25f, 3352.3501f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 10.0f, 0.0f, 0);
		EV_CameraPos(1, 70, 51.860001f, 1527.25f, 3341.5801f);
		EV_SetPath(player, &epathtag_cube004c_19, 0.69999999f, 2);
		EV_Wait(40);
		ChgEffectMod(0);
		if (BLACKOUT)
		{
			COverlaySetSpeed(BLACKOUT, 0.016000001f);
		}
		EV_Wait(100);
		EventSe_Stop(0);
		delete_task_gattai_EV00C2();
		EV_Wait(1);
		break;
	case 2:
		stopObjectAll();
		delete_task_gattai_EV00C2();
		EV_SetMode(player, 1);
		EV_FreeObject(&obj_amy);
		EV_ClrPath(tails);
		EV_ClrPath(player);
		EV_FreeObject(&obj_wing);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		DelE102Effect();
		EventSe_Close();
		EV_SerifStop();
		if (BLACKOUT)
		{
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		break;
	}
}
