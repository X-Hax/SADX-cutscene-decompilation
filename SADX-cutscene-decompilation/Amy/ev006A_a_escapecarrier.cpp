#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev006A_a_escapecarrier(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		obj_ver1_wing = 0;
		B_OUT = 0;
		//task_gattai = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		SetBankDir(81);
		EventSe_Init(5);
		EV_InitPlayer(0);
		EV_CameraPerspective(0, 1, 12561);
		EV_SetPos(player, -55.599998f, 1525.67f, 3270.1899f);
		EV_SetAng(player, 0, 22648, 0);
		EV_CreatePlayer(2, SonicTheHedgehog, -8.0f, 1525.6899f, 3320.0f, 0, 0, 0);
		EV_CreatePlayer(3, MilesTalesPrower, 8.0f, 1525.6899f, 3322.0f, 0, 0, 0);
		EV_CreatePlayer(4, E102, 0.0f, 1525.7f, 3400.0f, 0, 0x8000, 0);
		obj_ver1_wing = SetEventBirdie0();
		EV_SetPos(obj_ver1_wing, 2.8199999f, 1638.08f, 3195.52f);
		EV_SetAng(obj_ver1_wing, 0, 0, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_LookFree(player);
		EV_LookPoint(player, -90.0f, 1560.0f, 3200.0f);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		e102 = EV_GetPlayer(4);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(obj_ver1_wing, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0121_wing, &VER1_WING_TEXLIST, 1.0f, 1, 1);
		Create_e102lightning(
			e102->twp->pos.x,
			e102->twp->pos.y,
			e102->twp->pos.z,
			4);
		EV_LookFree(tails);
		EV_LookObject(tails, e102, 0.0f, 6.0f, 0.0f);
		EV_LookFree(sonic);
		EV_LookObject(sonic, e102, 0.0f, 6.0f, 0.0f);
		BGM_Play(MusicIDs_evtbgm00);
		EV_LookFree(player);
		EV_LookObject(player, e102, 0.0f, 6.0f, 0.0f);
		EV_CameraPerspective(1, 1, 7282);
		EV_CameraPos(1, 0, -58.470001f, 1530.72f, 3256.29f);
		EV_CameraAng(1, 0, 512, 34560, 0);
		EV_Wait(10);
		EV_CameraPos(0, 80, -2.3399999f, 1530.72f, 3245.95f);
		EV_Wait(60);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(20);
		EV_CameraPos(0, 0, -45.580002f, 1529.58f, 3428.98f);
		EV_CameraAng(0, 0, 1664, 60851, 0);
		EV_CameraPos(0, 70, -18.040001f, 1529.5699f, 3437.03f);
		EV_CameraAng(0, 70, 1664, 62387, 0);
		EV_Wait(60);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(40);
		Delete_e102lightning();
		EV_LookFree(player);
		EV_SetPos(sonic, -3.1800001f, 1525.6801f, 3300.0f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_SetPos(tails, -55.599998f, 1525.67f, 3250.1899f);
		EV_SetPos(e102, -3.1800001f, 1525.6801f, 3390.0f);
		EV_CameraPos(0, 0, -5.6900001f, 1530.97f, 3313.28f);
		EV_CameraAng(0, 0, 128, 62387, 0);
		EV_Wait(30);
		EV_CameraPos(0, 45, -13.77f, 1530.64f, 3339.05f);
		EV_CameraAng(0, 45, 128, 60851, 0);
		EV_Wait(10);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 3.5f, 1, 0);
		EV_MovePoint(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z + 60.0f);
		EV_Wait(35);
		EV_SetPos(sonic, -3.1800001f, 1525.6801f, 3300.0f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 3.5f, 1, 0);
		EV_MovePoint(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z + 60.0f);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraAng(0, 0, 256, 49152, 0);
		EV_CameraPos(0, 0, -11.74f, 1530.14f, 3305.26f);
		EV_CameraAng(0, 30, 256, 34560, 2048);
		EV_Wait(25);
		EV_SetPos(sonic, -3.1800001f, 1525.6801f, 3300.0f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_SetPos(player, -63.18f, 1525.6801f, 3370.0f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_CameraPerspective(0, 1, 15474);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 3.5f, 1, 10);
		EV_MovePoint(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z + 60.0f);
		EV_CameraAng(0, 0, 61184, 36864, 1280);
		EV_CameraPos(0, 0, -16.639999f, 1565.87f, 3262.8401f);
		EV_CameraAng(0, 35, 512, 36864, 1536);
		EV_CameraPos(0, 35, -9.7600002f, 1526.92f, 3337.49f);
		EV_Wait(30);
		EV_CameraAng(0, 15, 3840, 38144, 1792);
		EV_CameraPos(0, 15, -9.5299997f, 1527.28f, 3353.3f);
		EV_Wait(15);
		EV_SetPos(player,
			e102->twp->pos.x - 20.0f,
			e102->twp->pos.y,
			e102->twp->pos.z - 15.0f);
		EV_CameraAng(0, 0, 3840, 19712, 1792);
		EV_CameraPos(0, 0, -27.0f, 1535.4301f, 3339.28f);
		EV_CameraPos(0, 20, -18.15f, 1529.8101f, 3373.1001f);
		EV_Wait(20);
		EV_CameraPos(0, 50, -17.75f, 1529.5601f, 3374.6799f);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(938);
		EV_Msg(msgTbl_ev006A[TextLanguage][0]); //"\aPlease stop!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetPos(tails, 50.0f, 1525.6899f, 3250.0f);
		EV_CameraPos(0, 0, 64.470001f, 1529.0601f, 3316.8f);
		EV_CameraAng(0, 0, 2048, 20480, 1792);
		EV_CameraPos(0, 160, 5.1500001f, 1529.8f, 3353.71f);
		EV_CameraAng(0, 160, 1536, 25856, 1792);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 2.5f, 1, 0);
		EV_MovePoint(player,
			e102->twp->pos.x,
			e102->twp->pos.y,
			e102->twp->pos.z - 15.0f);
		EV_SetPos(sonic, -3.1800001f, 1525.6801f, 3270.0f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 2.5f, 1, 0);
		EV_MovePoint(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z + 80.0f);
		EV_Wait(60);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(player,
			sonic->twp->ang.x,
			-0x4000 - sonic->twp->ang.y,
			sonic->twp->ang.z);
		EV_WaitMove(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[7], &SONIC_TEXLIST, 0.80000001f, 0, 0);
		EV_MovePoint(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z + 10.0f);
		EV_WaitAction(sonic);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 2.4100001f, 1534.15f, 3379.7f);
		EV_CameraAng(0, 0, 63232, 4608, 0);
		EV_Wait(10);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "E");
		EV_SerifPlay(939);
		EV_Msg(msgTbl_ev006A[TextLanguage][1]); //"\aAmy!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_SerifPlay(940);
		EV_SetFace(sonic, "FFFFF");
		EV_Msg(msgTbl_ev006A[TextLanguage][2]); //"\aThat's one of Eggman's clunkers.\nOut"...
		EV_LookFree(sonic);
		EV_Wait(10);
		SONIC_OBJECTS[6]->sibling = &object_sonic_s_r_a5_01_s_r_a5_01;
		EV_SetAction(sonic, &action_s_s0005_sonic, &SONIC_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(sonic, &action_s_s0007_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		SONIC_OBJECTS[6]->sibling = SONIC_OBJECTS[5];
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, -13.62f, 1534.03f, 3348.96f);
		EV_CameraAng(0, 0, 63744, 37632, 0);
		EV_CameraPos(0, 60, -10.07f, 1532.66f, 3356.0f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0002_amy, &AMY_TEXLIST, 1.0f, 1, 16);
		EV_SetFace(player, "E");
		EV_SerifPlay(941);
		EV_Msg(msgTbl_ev006A[TextLanguage][3]); //"\aNo!"
		EV_Wait(10);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 20);
		EV_MsgClose();
		EV_ClrFace(player);
		EV_SerifPlay(942);
		EV_SetFace(player, "ECDCD");
		EV_Msg(msgTbl_ev006A[TextLanguage][4]); //"\aHe helped me before \nby letting me e"...
		EV_Wait(20);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SerifPlay(943);
		EV_SetFace(player, "ECDCD");
		EV_Msg(msgTbl_ev006A[TextLanguage][5]); //"\aThis robot is different!"
		EV_Wait(20);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetFace(player, "FEF");
		EV_SerifPlay(944);
		EV_Msg(msgTbl_ev006A[TextLanguage][6]); //"\aYou don't need to hurt him, okay?"
		EV_Wait(20);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(10);
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
		EV_CameraPos(1, 0, 1.3099999f, 1526.14f, 3370.95f);
		EV_CameraAng(1, 0, 4864, 4352, 0);
		EV_CameraPos(0, 60, -1.59f, 1529.74f, 3364.4099f);
		EV_Wait(60);
		EV_SerifPlay(945);
		EV_SetFace(sonic, "E");
		EV_Msg(msgTbl_ev006A[TextLanguage][7]); //"\aAmy…"
		EV_Wait(20);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 32);
		EV_Wait(60);
		EV_SerifPlay(946);
		EV_SetFace(sonic, "DED");
		EV_Msg(msgTbl_ev006A[TextLanguage][8]); //"\aOkay, I guess I'll let him go, then."
		EV_Wait(20);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(sonic);
		EV_CameraPos(0, 0, 25.389999f, 1527.59f, 3344.71f);
		EV_CameraAng(0, 0, 1152, 23808, 1280);
		EV_CameraPos(0, 120, 11.44f, 1529.77f, 3352.9199f);
		EV_CameraAng(0, 4, 4736, 23808, 1280);
		EV_Wait(3);
		EventSe_Play(0, 1333, 1800);
		BGM_Stop();
		EV_SetAction(sonic, &action_s_s0012_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_SetAction(player, &action_a_a0003_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 4736, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 4736, 23808, 1280);
		EV_Wait(3);
		BGM_Play(MusicIDs_egcarer1);
		RumbleA(0, 3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 4736, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 4736, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4736, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 5, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4736, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 5, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4736, 23808, 1280);
		EV_Wait(3);
		EventSe_Volume(0, -30, 1);
		EV_SetAction(sonic, &action_s_s0012_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_SetAction(player, &action_a_a0003_amy, &AMY_TEXLIST, 0.5f, 1, 0);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 2432, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 2432, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EventSe_Volume(0, -70, 21);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1408, 23808, 1280);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1152, 23808, 1280);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, -35.189999f, 1532.11f, 3359.0601f);
		EV_CameraAng(0, 0, 63360, 5376, 0);
		EV_CameraPos(0, 60, -33.259998f, 1532.9399f, 3362.46f);
		EV_CameraAng(0, 4, 63104, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63360, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63104, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63360, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63104, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63360, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63104, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63360, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63104, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63360, 5376, 0);
		EV_Wait(3);
		EV_SerifPlay(947);
		EV_SetFace(tails, "FED");
		EV_Msg(msgTbl_ev006A[TextLanguage][9]); //"\aThe Egg Carrier's losing altitude!"
		EV_CameraAng(0, 4, 63104, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63360, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63104, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 63360, 5376, 0);
		EV_Wait(3);
		EV_CameraAng(0, 0, 63104, 5376, 0);
		EV_Wait(3);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_CameraPos(0, 40, 6.0100002f, 1530.3f, 3369.1299f);
		EV_CameraAng(0, 40, 128, 10752, 0);
		EV_MsgClose();
		EV_SetAction(sonic, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 3);
		EV_Wait(30);
		EV_SerifPlay(948);
		EV_SetFace(sonic, "FCE");
		EV_Msg(msgTbl_ev006A[TextLanguage][10]); //"\aWe're fresh outta time!\n\aTake Amy a"...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_CameraPos(0, 0, -6.71f, 1530.29f, 3368.0601f);
		EV_CameraAng(0, 0, 2176, 38912, 0);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(949);
		EV_SetFace(player, "D");
		EV_Msg(msgTbl_ev006A[TextLanguage][11]); //"\aWhat about you?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_LookFree(sonic);
		EV_Wait(10);
		EV_LookObject(sonic, player, 0.0f, 8.0f, 0.0f);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, 7.1199999f, 1531.76f, 3383.0601f);
		EV_CameraAng(0, 0, 128, 4352, 0);
		EV_CameraPerspective(0, 120, 10012);
		EV_SerifPlay(950);
		EV_SetFace(sonic, "FCEDEC");
		EV_Msg(msgTbl_ev006A[TextLanguage][12]); //"\aI'll nail that Eggman!\n\aCan't let h"...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_LookFree(sonic);
		EV_CameraPerspective(0, 1, 12561);
		EV_Wait(1);
		EV_CameraPos(0, 0, 12.35f, 1542.55f, 3384.9399f);
		EV_CameraAng(0, 0, 62848, 4352, 1280);
		EV_CameraPos(0, 120, 36.639999f, 1558.34f, 3439.73f);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 2.5f, 1, 10);
		EV_MovePoint(sonic,
			sonic->twp->pos.x - 80.0f,
			sonic->twp->pos.y,
			sonic->twp->pos.z - 240.0f);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_Wait(60);
		EV_RemovePlayer(2);
		EV_LookFree(player);
		EV_LookFree(tails);
		EV_LookPoint(player, -83.089996f, 1525.6801f, 3119.04f);
		EV_CameraPerspective(0, 1, 5461);
		EV_CameraPos(0, 0, -16.129999f, 1529.58f, 3361.6799f);
		EV_CameraAng(0, 0, 2176, 40980, 0);
		EV_CameraPos(1, 80, -2.8800001f, 1529.58f, 3355.73f);
		EV_CameraAng(1, 80, 2176, 32020, 0);
		EV_Wait(80);
		EV_SetFace(player, "GGGP");
		EV_SerifPlay(951);
		EV_Msg(msgTbl_ev006A[TextLanguage][13]); //"\aI knew you would save me, Sonic.\n\aY"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 3.0f, 1, 0);
		EV_CameraPerspective(1, 10, 0x2000);
		EV_CameraPos(1, 10, -2.7f, 1529.6f, 3347.5f);
		EV_CameraAng(1, 10, 2688, 32532, 0);
		EV_Wait(30);
		EV_LookPoint(player, -3.1800001f, 1550.6801f, 3200.0f);
		EV_Wait(45);
		EV_CameraPos(0, 0, 18.809999f, 1528.25f, 3344.6001f);
		EV_CameraAng(0, 0, 1408, 28180, 0);
		EV_LookFree(player);
		EV_LookObject(player, e102, 0.0f, 12.0f, 0.0f);
		EV_SetPos(player, -3.1800001f, 1525.6801f, 3360.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraPos(1, 120, 10.87f, 1528.25f, 3340.77f);
		EV_Wait(15);
		EV_SerifPlay(952);
		EV_Msg(msgTbl_ev006A[TextLanguage][14]); //"\aUhhh, you okay?"
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(40);
		EV_SerifWait();
		EV_CameraPos(0, 0, -23.959999f, 1527.03f, 3405.8799f);
		EV_CameraAng(0, 0, 1159, 60436, 0);
		EV_CameraPos(0, 500, -17.889999f, 1528.47f, 3394.47f);
		EV_SerifPlay(953);
		EV_Msg(msgTbl_ev006A[TextLanguage][15]); //"\aIt's dangerous here."
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(954);
		EV_SetFace(player, "EDCDE");
		EV_Msg(msgTbl_ev006A[TextLanguage][16]); //"\aDon't pay attention to Eggman\nanymor"...
		EV_Wait(40);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(0, 0, -14.95f, 1527.1899f, 3334.8201f);
		EV_CameraAng(0, 0, 2176, 35604, 0);
		EV_CameraPos(0, 300, -28.73f, 1527.1899f, 3342.6899f);
		EV_CameraAng(0, 300, 2176, 40212, 0);
		EV_Wait(10);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 3.0f, 1, 0);
		EV_SerifPlay(955);
		EV_Msg(msgTbl_ev006A[TextLanguage][17]); //"\aWhy are you helping me?"
		EV_Wait(30);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, 0.039999999f, 1532.59f, 3370.8f);
		EV_CameraAng(0, 0, 64896, 4116, 0);
		EV_CameraPos(0, 90, -0.74000001f, 1532.4f, 3368.03f);
		EV_SerifWait();
		EV_MsgClose();
		EV_SetPos(obj_ver1_wing,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_SetAng(obj_ver1_wing,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0120_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, -1.01f, 1532.36f, 3360.95f);
		EV_CameraAng(0, 0, 3456, 30996, 0);
		EV_CameraPos(0, 120, -2.4400001f, 1535.29f, 3369.3401f);
		EV_SerifPlay(956);
		EV_Msg(msgTbl_ev006A[TextLanguage][18]); //"\aI said we'd be friends\n\aand I'm ret"...
		EV_Wait(20);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, 1.74f, 1535.99f, 3373.74f);
		EV_CameraAng(0, 0, 62080, 4372, 0);
		EV_CameraPos(0, 100, 0.58999997f, 1535.02f, 3371.1399f);
		EV_SerifPlay(957);
		EV_SetFace(player, "EDCP");
		EV_Msg(msgTbl_ev006A[TextLanguage][19]); //"\aEven this birdie wants you \nto be fr"...
		EV_Wait(10);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, 16.139999f, 1530.8f, 3342.1599f);
		EV_CameraAng(0, 0, 896, 26644, 0);
		EV_CameraPos(0, 200, 28.83f, 1528.8199f, 3323.0801f);
		EV_SerifPlay(958);
		EV_SetFace(player, "EDCP");
		EV_Msg(msgTbl_ev006A[TextLanguage][20]); //"\aEggman's not the kind of man\nyou sho"...
		EV_Wait(40);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 0.5f, 1, 16);
		EV_Wait(40);
		EV_CameraPos(0, 0, -32.060001f, 1528.37f, 3342.3201f);
		EV_CameraAng(0, 0, 1920, 21268, 0);
		EV_CameraPos(0, 90, -30.26f, 1528.37f, 3345.8799f);
		EV_SerifPlay(959);
		EV_SetFace(tails, "EDC");
		EV_Msg(msgTbl_ev006A[TextLanguage][21]); //"\aAmy, come on!  Let's get going!"
		EV_Wait(30);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, 42.189999f, 1527.97f, 3392.77f);
		EV_CameraAng(0, 0, 1408, 12820, 0);
		EV_CameraPos(0, 100, 48.720001f, 1527.03f, 3395.0901f);
		EV_SerifPlay(960);
		EV_SetFace(player, "GEP");
		EV_Msg(msgTbl_ev006A[TextLanguage][22]); //"\aUntil we meet again, Mr. Robot!\nTake"...
		EV_Wait(70);
		EV_MsgClose();
		EV_CameraPerspective(1, 80, 10923);
		EV_CameraPos(0, 80, 8.21f, 1527.15f, 3343.2f);
		EV_CameraAng(0, 80, 2432, 28436, 0);
		EV_Wait(40);
		throughplayer_on(player);
		EV_SetPos(tails, -5.0500002f, 1525.6801f, 3311.0f);
		EV_Wait(1);
		EV_SetMode(player, 0);
		EV_SetMode(tails, 0);
		EV_SetMode(e102, 0);
		SetE102Effect(
			e102->twp->pos.x,
			e102->twp->pos.y,
			e102->twp->pos.z);
		EV_SetPath(tails, &epathtag_cube004c_14, 0.60000002f, 2);
		EV_SetPath(tails, &epathtag_cube004c_22, 2.0f, 2);
		EV_Wait(30);
		EV_ClrAction(tails);
		EV_SetAction(tails, &ev_action_m_m0002_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0014_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_FreeObject(&obj_ver1_wing);
		EV_Wait(5);
		tails->twp->timer.b[3] |= 4u;
		create_task_gattai_EV006A();
		EV_CameraTargetFree();
		EV_Wait(16);
		EV_CameraTargetObj(1, 1, player, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(22);
		EV_CameraTargetFree();
		EV_CameraPos(0, 55, -93.029999f, 1635.66f, 3375.8f);
		EV_CameraTargetObj(1, 30, player, 0.0f, 4.0f, 0.0f, 0);
		EV_Wait(55);
		EV_CameraPos(1, 37, -142.16f, 1628.347f, 3386.73f);
		EV_Wait(25);
		EV_SetAction(e102, E102_ACTIONS[24], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(11);
		ChgEffectMod(1);
		EV_CameraTargetFree();
		EV_CameraPos(0, 45, -141.63f, 1623.64f, 3358.01f);
		EV_CameraAng(0, 45, 60902, 45882, 0);
		EV_Wait(15);
		EV_SetPath(e102, &epathtag_cube004c_19, 0.69999999f, 2);
		EV_Wait(35);
		ChgEffectMod(0);
		EV_Wait(75);
		EV_CameraPerspective(0, 1, 14382);
		EV_Wait(1);
		EV_CameraPos(1, 0, -215.96001f, 1616.454f, 3405.1799f);
		EV_CameraAng(1, 0, 64742, 11066, 256);
		EV_CameraPos(1, 250, -178.91f, 1619.46f, 3412.29f);
		EV_RemovePlayer(4);
		EventSe_Stop(0);
		EV_Wait(150);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		delete_task_gattai_EV006A();
		EV_Wait(1);
		break;
	case 2:
		tails->twp->timer.b[3] &= ~4u;
		tails->twp->timer.b[3] &= ~0x10u;
		EV_CameraOff();
		EV_PadOn();
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		SONIC_OBJECTS[6]->sibling = SONIC_OBJECTS[5];
		EV_SetMode(tails, 1);
		throughplayer_off(player);
		EV_ClrPath(e102);
		delete_task_gattai_EV006A();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		EV_FreeObject(&obj_ver1_wing);
		DelE102Effect();
		Delete_e102lightning();
		EventSe_Close();
		break;
	}
}