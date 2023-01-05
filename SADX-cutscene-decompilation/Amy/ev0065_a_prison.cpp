#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0065[] = {
	(char*)("VER1_WING"), &VER1_WING_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	0
};

void ev0065_a_prison(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		obj_ver1_wing = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(96);
		EV_CameraPos(1, 0, 100.2f, 24.200001f, 72.550003f);
		EV_CameraAng(1, 0, 0xFF00, 0xFF00, 0);
		EV_CameraPos(1, 120, -100.0f, 24.200001f, 72.550003f);
		EV_SetPos(player, -100.0f, 0.0f, -33.369999f);
		EV_SetAng(player, 0, 0xF215, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0114_amy, &AMY_TEXLIST, 1.0f, 1, 1);
		EV_CreatePlayer(2, E102, 140.0f, 0.0f, 43.0f, 0, 0xC000, 0);
		EV_Wait(1);
		e102 = EV_GetPlayer(2);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 0.5f, 1, 1);
		obj_ver1_wing = SetEventBirdie0();
		EV_SetPos(obj_ver1_wing, -100.0f, 5.5f, -5.5f);
		EV_SetAng(obj_ver1_wing, 0, 0, 0);
		EV_Wait(1);
		EV_SetMode(obj_ver1_wing, 0);
		EV_Wait(1);
		EV_SetPos(obj_ver1_wing,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_SetAng(obj_ver1_wing,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAction(obj_ver1_wing, &action_w_w0114_wing, &VER1_WING_TEXLIST, 1.0f, 1, 1);
		EV_SetPos(e102, 140.0f, 0.0f, 43.0f);
		EV_SetAng(e102, 0, 0xC000, 0);
		BGM_Play(MusicIDs_e102);
		EV_Wait(150);
		EV_CameraPos(1, 100, -100.0f, 7.9499998f, -17.93f);
		EV_CameraAng(1, 100, 0xF503, 0xFF00, 0);
		EV_Wait(120);
		EV_SerifPlay(885);
		EV_Msg(msgTbl_ev0065[TextLanguage][0]); //"\aNow, now.  Calm down."
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, -115.83f, 3.45f, -33.880001f);
		EV_CameraAng(1, 0, 0xFF00, 0xC000, 0);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 120, -115.83f, 3.45f, -31.879999f);
		EV_Wait(90);
		EV_LookObject(player, e102, 0.0f, 10.0f, 0.0f);
		EV_Wait(20);
		EV_CameraPos(1, 80, -115.83f, 3.45f, 49.119999f);
		EV_CameraAng(1, 80, 0xFF00, 0xC000, 0);
		EV_Wait(100);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(1, 0, 85.720001f, 7.21f, 43.5f);
		EV_CameraAng(1, 0, 0x300, 0xC000, 0);
		EV_CameraPos(0, 60, 93.470001f, 7.7800002f, 43.5f);
		EV_Wait(80);
		EV_SetAction(e102, &action_e_e0006_e102, &E102_TEXLIST, 1.0f, 0, 16);
		EV_WaitAction(e102);
		EV_SetAng(e102, 0, 0x8000, 0);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[3], &E102_TEXLIST, 1.0f, 1, 16);
		EV_MovePoint2(e102, 135.0f, 0.0f, 10.0f, 0.75f, 0.059999999f);
		EV_Wait(60);
		EV_MovePoint2(e102, -40.0f, 0.0f, 10.0f, 0.75f, 0.059999999f);
		EV_CameraPos(0, 0, 125.61f, 3.02f, 100.16f);
		EV_CameraAng(1, 0, 0xC00, 0x3600, 0);
		EV_CameraPos(0, 90, 137.28f, 3.02f, 53.599998f);
		EV_Wait(90);
		EV_CameraPos(0, 150, 145.56f, 3.02f, 20.559999f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0115_amy, &AMY_TEXLIST, 1.0f, 1, 1);
		EV_Wait(120);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_SetPos(e102, -18.67f, 0.0f, 13.77f);
		EV_SetAng(e102, 0, 0xC000, 0);
		EV_CameraPos(1, 0, -97.010002f, 16.35f, -85.839996f);
		EV_CameraAng(1, 0, 0xFEE4, 0x829D, 0);
		EV_CameraPos(1, 300, -106.99f, 16.35f, -85.199997f);
		EV_MovePoint2(e102, -100.0f, 0.0f, 20.0f, 0.75f, 0.059999999f);
		EV_WaitMove(e102);
		EV_SetAction(e102, &action_e_e0006_e102, &E102_TEXLIST, 1.0f, 0, 16);
		EV_WaitAction(e102);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[1], &E102_TEXLIST, 0.5f, 0, 16);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 0.5f, 1, 16);
		EV_SetAng(e102, 0, 0x8000, 0);
		EV_Wait(60);
		EV_CameraPos(0, 0, -99.519997f, 0.23999999f, -26.35f);
		EV_CameraAng(0, 0, 0x12E4, 0xF5F3, 0);
		EV_CameraPos(0, 70, -101.45f, 0.23999999f, -26.84f);
		EV_ClrFace(player);
		EV_SetFace(player, "EEE");
		EV_Msg(msgTbl_ev0065[TextLanguage][1]); //"\aWhat do you want?"
		EV_SerifPlay(886);
		EV_Wait(40);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetAction(obj_ver1_wing, &action_w_w0116_wing, &VER1_WING_TEXLIST, 1.0f, 0, 0);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, -102.08f, 4.23f, -52.950001f);
		EV_CameraAng(0, 0, 0xFDE4, 0x7FF3, 0);
		EV_CameraPos(0, 90, -102.08f, 16.209999f, -52.380001f);
		EV_Wait(90);
		EV_SerifPlay(887);
		EV_MsgW(55, msgTbl_ev0065[TextLanguage][2]); //"\aHand me the bird."
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0xE39);
		EV_CameraPos(0, 0, -108.74f, 18.299999f, 11.14f);
		EV_CameraAng(0, 0, 0xF3EC, 0xF4F3, 0);
		EV_SetAction(player, &action_a_a0117_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0117_wing, &VER1_WING_TEXLIST, 1.0f, 0, 0);
		EV_Wait(20);
		EV_SetAction(player, &action_a_a0118_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0118_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(888);
		EV_Msg(msgTbl_ev0065[TextLanguage][3]); //"\aNope!"
		EV_Wait(32);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(10);
		EV_CameraPos(0, 0, -100.11f, 2.0599999f, -27.07f);
		EV_CameraAng(0, 0, 0xAE4, 0x7FF3, 0);
		EV_SerifPlay(889);
		EV_MsgW(60, msgTbl_ev0065[TextLanguage][4]); //"\aQuietly hand over the bird."
		EV_MsgClose();
		EV_Wait(20);
		EV_CameraPos(0, 0, -107.92f, 14.19f, -5.3200002f);
		EV_CameraAng(0, 0, 0xEFF4, 0xF4F3, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "FF");
		EV_SerifPlay(890);
		EV_MsgW(45, msgTbl_ev0065[TextLanguage][5]); //"\aNO!   Never!"
		EV_MsgClose();
		EV_ClrFace(player);
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, -128.35001f, 2.3399999f, -44.91f);
		EV_CameraAng(0, 0, 0x3E4, 0x95F3, 0);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraPos(0, 70, -127.49f, 2.3399999f, -45.43f);
		EV_SerifPlay(891); 
		EV_MsgW(30, msgTbl_ev0065[TextLanguage][6]); //"\aWhy not?"
		EV_MsgClose();
		EV_CameraPos(0, 20, -119.13f, 1.76f, -57.380001f);
		EV_Wait(20);
		EV_CameraPos(0, 300, -116.55f, 1.76f, -58.919998f);
		EV_Wait(10);
		EV_SetFace(player, "FF");
		EV_SerifPlay(892);
		EV_MsgW(60, msgTbl_ev0065[TextLanguage][7]); //"\aI don't need to tell you anything."
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetAction(player, &action_a_a0119_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0119_wing, &VER1_WING_TEXLIST, 1.0f, 0, 0);
		EV_Wait(31);
		EV_SetAction(player, &action_a_a0120_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0120_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(player, "FFF");
		EV_SerifPlay(893);
		EV_MsgW(90, msgTbl_ev0065[TextLanguage][8]); //"\aYou tell ME why you want it, now!"
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetAng(obj_ver1_wing,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, -108.49f, 13.74f, -2.05f);
		EV_CameraAng(0, 0, 0xE4, 0x93F3, 0);
		EV_SerifPlay(894);
		EV_MsgW(40, msgTbl_ev0065[TextLanguage][9]); //"\aDoes not compute."
		EV_MsgClose();
		EV_Wait(40);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, -116.01f, 0.88f, -23.629999f);
		EV_CameraAng(0, 0, 0xAE4, 0xD2F3, 0);
		EV_SetFace(player, "FF");
		EV_SerifPlay(895);
		EV_MsgW(40, msgTbl_ev0065[TextLanguage][10]); //"\aYou don't even know?"
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPerspective(0, 60, 0x1555);
		EV_Wait(60);
		EV_SetFace(player, "FFF");
		EV_SerifPlay(896);
		EV_MsgW(90, msgTbl_ev0065[TextLanguage][11]); //"\aI know you might hurt us both."
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPos(0, 0, -116.06f, 9.46f, -5.2800002f);
		EV_CameraAng(0, 0, 0xFCE4, 0xEBF3, 0);
		EV_Wait(60);
		EV_SetFace(player, "FF");
		EV_SerifPlay(897);
		EV_MsgW(60, msgTbl_ev0065[TextLanguage][12]); //"\aPlease, Mr. Robot..."
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPos(0, 70, -115.91f, 10.39f, 15.97f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0121_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -100.0f, 0.0f, -10.0f, 0.75f, 0.059999999f);
		moveObjectOn(obj_ver1_wing, 0.0f, 0.0f, 0.0f, -1, player);
		EV_Wait(20);
		EV_LookFree(e102);
		EV_SetAction(e102, E102_ACTIONS[29], &E102_TEXLIST, 1.0f, 1, 16);
		EV_SetPos(e102, -100.0f, 0.0f, 20.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 20.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 21.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 21.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 22.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 22.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 23.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 23.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 24.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 24.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 25.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 25.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 26.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 26.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 27.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 27.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 28.0f);
		EV_Wait(2);
		EV_SetAction(player, &action_a_a0120_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(player, e102, 0.0f, 14.0f, 0.0f);
		stopObject(obj_ver1_wing);
		EV_SetPos(obj_ver1_wing,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_SetAng(obj_ver1_wing,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetPos(e102, -100.0f, 0.0f, 28.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 29.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 29.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 30.0f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 30.5f);
		EV_Wait(2);
		EV_SetPos(e102, -100.0f, 0.0f, 31.0f);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(45);
		EV_SetFace(player, "CDECDEC");
		EV_SerifPlay(898);
		EV_MsgW(90, msgTbl_ev0065[TextLanguage][13]); //"\aWon't you help us, please?"
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 0, -100.03f, 21.860001f, -57.110001f);
		EV_CameraAng(0, 0, 0xF8E4, 0x7FF3, 0);
		EV_Wait(45);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 2.5f, 1, 0);
		dsPlay_timer(1326, 213385217, 1, 0, 40);
		EV_SerifPlay(899);
		EV_MsgW(40, msgTbl_ev0065[TextLanguage][14]); //"\aInsufficient data."
		EV_MsgClose();
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SerifPlay(900);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 2.5f, 1, 0);
		dsPlay_timer(1326, 213385218, 1, 0, 120);
		EV_Msg(msgTbl_ev0065[TextLanguage][15]); //"\aYou have feelings for something \nyou"...
		EV_SerifWait();
		EV_MsgClose();
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 2.5f, 1, 0);
		EV_SerifPlay(901);
		dsPlay_timer(1326, 213385219, 1, 0, 50);
		EV_MsgW(40, msgTbl_ev0065[TextLanguage][16]); //"\aIllogical!"
		EV_MsgClose();
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(20);
		EV_CameraPos(0, 0, -102.11f, 30.959999f, 47.470001f);
		EV_CameraAng(0, 0, 0xEBE4, 0xFCF3, 0);
		EV_Wait(30);
		EV_SetFace(player, "E");
		EV_SerifPlay(902);
		EV_MsgW(30, msgTbl_ev0065[TextLanguage][17]); //"\aI pity you."
		EV_ClrFace(player);
		EV_SetFace(player, "ECD");
		EV_SerifPlay(903);
		EV_MsgW(90, msgTbl_ev0065[TextLanguage][18]); //"\aLove is not part of your programming,"...
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPos(0, 0, -110.56f, 12.99f, 3.6800001f);
		EV_CameraAng(0, 0, 0xEE0B, 0xE31A, 0);
		EV_CameraPos(0, 60, -104.08f, 8.3000002f, -3.8699999f);
		EV_Wait(30);
		EV_SetAction(obj_ver1_wing, &action_w_w0121_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		dsPlay_timer(1336, 213385220, 1, 0, 120);
		EV_Wait(30);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -128.5f, 18.389999f, -10.87f);
		EV_CameraAng(0, 0, 0xF2E4, 0xC0F3, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w9001_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		moveObject(obj_ver1_wing, -100.0f, 0.0f, -11.0f,
			e102->twp->pos.x,
			e102->twp->pos.y + 17.0f,
			e102->twp->pos.z - 15.0f, 60);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 2.0f, 1, 0);
		EV_SetFace(player, "EC");
		EV_SerifPlay(904);
		EV_Msg(msgTbl_ev0065[TextLanguage][19]); //"\aHey birdie!   Come back here!"
		EV_ClrFace(player);
		EV_SerifWait();
		EV_MsgClose();
		dsPlay_timer(1337, 213385221, 1, 0, 240);
		EV_CameraPos(0, 60, -127.69f, 18.389999f, 24.120001f);
		EV_Wait(60);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_CameraPos(0, 0, -100.0f, 16.65f, 27.26f);
		EV_CameraAng(0, 0, 0x3E4, 0, 0);
		EV_CameraPerspective(0, 60, 0x238E);
		EV_Wait(60);
		EV_Wait(30);
		EV_CameraPos(0, 0, -91.660004f, 17.67f, 15.83f);
		EV_CameraAng(0, 0, 0xFBE4, 0x65F3, 0);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 3.0f, 1, 0);
		dsPlay_timer(1326, 213385222, 1, 0, 150);
		EV_CameraPos(0, 90, -79.779999f, 19.690001f, -0.14f);
		EV_Wait(90);
		EV_CameraPos(0, 0, -143.59f, 22.68f, 26.860001f);
		EV_CameraAng(0, 0, 0xF1E4, 0xBDF3, 0);
		EV_CameraPos(0, 180, -150.17f, 25.059999f, 26.530001f);
		EV_Wait(60);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[3], &E102_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(e102, -123.0f, 0.0f, 31.0f, 0.75f, 0.059999999f);
		EV_Wait(30);
		EV_SetAng(obj_ver1_wing, 0, 0xCB27, 0);
		EV_CameraPos(0, 180, -150.17f, 25.059999f, 26.530001f);
		dsPlay_timer(1334, 213385223, 1, 0, 60);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 0.30000001f, 1, 16);
		EV_Wait(60);
		EV_SerifPlay(905);
		EV_MsgW(60, msgTbl_ev0065[TextLanguage][20]); //"\aGo, escape!"
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0xE39);
		EV_CameraPos(0, 0, -130.14f, 9.1800003f, 69.269997f);
		EV_CameraAng(0, 0, 0xFDE4, 0x3F3, 0);
		EV_CameraPos(0, 20, -97.300003f, 9.1800003f, 48.32f);
		EV_Wait(20);
		EV_CameraPos(0, 80, -94.910004f, 9.1800003f, 48.32f);
		EV_SetFace(player, "C");
		EV_SerifPlay(906);
		EV_Msg(msgTbl_ev0065[TextLanguage][21]); //"\aWh-what?"
		EV_Wait(10);
		EV_ClrFace(player);
		EV_Wait(50);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x271C);
		EV_CameraPos(0, 0, -145.75999f, 3.5899999f, 41.209999f);
		EV_CameraAng(0, 0, 0x23A, 0xD65D, 0);
		EV_CameraPos(0, 50, -146.32001f, 15.57f, 41.549999f);
		EV_ClrAction(e102);
		EV_SetAction(e102, &action_e_e0024_e102, &E102_TEXLIST, 0.5f, 0, 32);
		EV_Wait(50);
		EV_CameraPos(0, 80, -146.32001f, 20.0f, 41.59f);
		EV_SetAction(e102, &action_e_e0025_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		dsPlay_oneshot_v(1333, 0, 0, 120, -123.0f, 0.0f, 31.0f);
		EV_Wait(15);
		EV_CameraPos(0, 0, -111.76f, 2.4200001f, 10.19f);
		EV_CameraAng(0, 0, 0x370, 0xE667, 0);
		seqVars[35] |= 4u;
		dsPlay_timer_v(1335, 0xCB80008, 1, 120, 120, -100.0f, 0.1f, -33.369999f);
		RumbleA(0, 3);
		EV_CameraPos(0, 120, -120.68f, 2.21f, 22.469999f);
		EV_CameraAng(0, 120, 0xE70, 0xE667, 0);
		EV_CameraPerspective(0, 120, 0x3111);
		EV_Wait(120);
		EV_CameraPos(0, 270, -123.99f, 2.21f, 27.02f);
		EV_Wait(60);
		EV_SetFace(player, "E");
		EV_SerifPlay(907);
		EV_MsgW(60, msgTbl_ev0065[TextLanguage][22]); //"\aYou sure?"
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 120, -137.38f, 19.48f, 24.08f);
		EV_CameraAng(0, 120, 0xF4E4, 0xBAF3, 0x150);
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[45], &AMY_TEXLIST, 1.5f, 1, 32);
		EV_MovePoint2(player, -74.0f, 0.0f, 15.0f, 0.75f, 0.059999999f);
		EV_SetAng(obj_ver1_wing, 0, 0x4000, 0);
		EV_Wait(1);
		moveObject(obj_ver1_wing, -100.0f, 17.0f, 16.0f, -74.0f, 12.0f, 17.0f, 80);
		EV_Wait(80);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 1);
		EV_SetAng(player, 0, 0xD44C, 0);
		EV_LookObject(player, e102, 0.0f, 14.0f, 0.0f);
		stopObject(obj_ver1_wing);
		EV_Wait(1);
		EV_SetAng(obj_ver1_wing, 0, 0xC000, 0);
		EV_Wait(30);
		EV_SerifPlay(908);
		EV_MsgW(60, msgTbl_ev0065[TextLanguage][23]); //"\aIt's dangerous here."
		EV_Wait(15);
		EV_CameraPos(0, 150, -139.28999f, 20.02f, 23.84f);
		EV_CameraAng(0, 150, 0xF4E4, 0xBAF3, 0x150);
		EV_Wait(45);
		EV_SerifPlay(909);
		EV_MsgW(120, msgTbl_ev0065[TextLanguage][24]); //"\aHurry.  We'll be at \nthe Mystic Ruin"...
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, -87.57f, 3.9000001f, 9.8599997f);
		EV_CameraAng(0, 0, 0x6E4, 0xA9F3, 0);
		EV_CameraPos(0, 250, -86.019997f, 3.9000001f, 7.29f);
		EV_Wait(30);
		EV_SetFace(player, "EE");
		EV_SerifPlay(910);
		EV_Msg(msgTbl_ev0065[TextLanguage][25]); //"\aYou're really nice."
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "CC");
		EV_SerifPlay(911);
		EV_MsgW(90, msgTbl_ev0065[TextLanguage][26]); //"\aYou're different from the other robot"...
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 0, -35.450001f, 8.3500004f, 18.92f);
		EV_CameraAng(0, 0, 0xFEE4, 0x3FF3, 0);
		EV_LookFree(player);
		EV_CameraPos(0, 300, -31.450001f, 8.46f, 18.92f);
		EV_SetFace(player, "FF0");
		EV_SerifPlay(912);
		EV_MsgW(80, msgTbl_ev0065[TextLanguage][27]); //"\aYou've got a soft spot \ninside your "...
		EV_SetFace(player, "FFF");
		EV_SerifPlay(913);
		EV_MsgW(60, msgTbl_ev0065[TextLanguage][28]); //"\aIf you want, \nwe can be friends, oka"...
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(20);
		EV_SetAng(obj_ver1_wing, 0, 0x4000, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_MovePoint2(player, -10.0f, 0.0f, 15.0f, 0.75f, 0.059999999f);
		moveObjectOn(obj_ver1_wing, 0.0f, 12.0f, 2.0f, 200, player);
		EV_SetAction(player, AMY_ACTIONS[45], &AMY_TEXLIST, 2.0f, 1, 16);
		EV_Wait(90);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -136.71001f, 18.85f, 11.68f);
		EV_CameraAng(0, 0, 0xF2E4, 0xC0F3, 0x500);
		EV_SetPos(player, -74.0f, 0.0f, 15.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[45], &AMY_TEXLIST, 2.0f, 1, 16);
		EV_MovePoint2(player, 137.5f, 0.0f, 10.0f, 0.75f, 0.059999999f);
		EV_CameraPos(0, 80, -136.35001f, 18.85f, 26.67f);
		EV_Wait(110);
		EV_CameraPos(0, 0, -104.83f, 11.15f, 4.3000002f);
		EV_CameraAng(0, 0, 0xFFE4, 0x56F3, 0);
		EV_CameraPos(0, 30, -99.5f, 11.15f, 12.77f);
		EV_Wait(20);
		EV_SetPos(player, 50.0f, 5.0f, 21.0f);
		EV_Wait(2);
		break;
	case 2:
		stopObjectAll();
		BGM_Stop();
		EV_InitPlayer(0);
		EV_SetPos(player, 50.0f, 5.0f, 21.0f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_FreeObject(&obj_ver1_wing);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}