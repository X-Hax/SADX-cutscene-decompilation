#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00BF[] = {
	(char*)("VER1_WING"), &VER1_WING_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST
};

void ev00BF_e_prison(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(96);
		EV_SetPos(player, 140.0f, 0.0f, 43.0f);
		EV_SetAng(player, 0, 0xC000, 0);
		EV_CreatePlayer(2, AmyRose, -100.0f, 0.1f, -33.369999f, 0, 0xF215, 0);
		obj_ver1_wing = SetEventBirdie0();
		EV_SetPos(obj_ver1_wing, -100.0f, 5.5f, -5.5f);
		EV_SetAng(obj_ver1_wing, 0, 0, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 0.5f, 1, 0);
		amy = EV_GetPlayer(2);
		EV_SetPos(amy, -100.0f, 0.1f, -33.369999f);
		EV_SetAng(amy, 0, 0xF215, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0115_amy, &AMY_TEXLIST, 1.0f, 1, 1);
		EV_SetMode(obj_ver1_wing, 0);
		EV_Wait(1);
		EV_SetPos(player, 140.0f, 0.0f, 43.0f);
		EV_SetAng(player, 0, 0xC000, 0);
		EV_SetPos(obj_ver1_wing, -100.0f, 0.0f, -33.369999f);
		EV_SetAng(obj_ver1_wing, 0, 0xF215, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0114_wing, &VER1_WING_TEXLIST, 1.0f, 1, 1);
		BGM_Play(MusicIDs_e102);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, -92.690002f, 20.879999f, 105.44f);
		EV_CameraAng(0, 0, 0xFE00, 0xC000, 0);
		EV_CameraPos(0, 90, -92.690002f, 20.879999f, 31.440001f);
		EV_Wait(90);
		EV_CameraPos(0, 0, 115.31f, 15.67f, 67.440002f);
		EV_CameraAng(0, 0, 0xFE00, 0xC000, 0);
		EV_CameraPos(0, 45, 115.31f, 15.67f, 44.439999f);
		EV_Wait(45);
		EV_CameraPos(0, 45, 115.31f, 15.67f, 41.439999f);
		EV_Wait(30);
		EV_SetAction(player, &action_e_e0006_e102, &E102_TEXLIST, 1.0f, 0, 16);
		EV_WaitAction(player);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[3], &E102_TEXLIST, 1.0f, 1, 16);
		EV_MovePoint2(player, 135.0f, 0.0f, 16.0f, 0.75f, 0.059999999f);
		EV_Wait(60);
		EV_CameraPos(0, 0, 127.3f, 15.77f, 46.450001f);
		EV_CameraAng(1, 0, 0xFE00, 0, 0);
		EV_CameraChase(player);
		EV_MovePoint2(player, -100.0f, 0.0f, 20.0f, 0.75f, 0.059999999f);
		EV_WaitMove(player);
		EV_CameraChaseFree();
		EV_CameraPos(0, 45, -129.52f, 16.450001f, 42.860001f);
		EV_CameraAng(0, 45, 0xFC00, 0xE600, 0);
		EV_LookObject(amy, player, 0.0f, 14.0f, 0.0f);
		EV_SetAction(player, &action_e_e0006_e102, &E102_TEXLIST, 1.0f, 0, 16);
		EV_WaitAction(player);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_CameraPos(0, 60, -134.85001f, 17.33f, 50.060001f);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 0.5f, 1, 8);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -99.519997f, 0.23999999f, -26.35f);
		EV_CameraAng(0, 0, 0x12E4, 0xF5F3, 0);
		EV_CameraPos(0, 70, -101.45f, 0.23999999f, -26.84f);
		EV_ClrFace(amy);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(amy, "EEE");
		}
		EV_Msg(msgTbl_ev00BF[TextLanguage][0]); //"\aGo away!"
		EV_SerifPlay(1242);
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(amy, "EEE");
		}
		EV_Wait(40);
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_SetAction(obj_ver1_wing, &action_w_w0116_wing, &VER1_WING_TEXLIST, 1.0f, 0, 0);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, -102.08f, 4.23f, -52.950001f);
		EV_CameraAng(0, 0, 0xFDE4, 0x7FF3, 0);
		EV_CameraPos(0, 90, -102.08f, 16.209999f, -52.380001f);
		EV_Wait(90);
		EV_SerifPlay(1243);
		EV_MsgW(55, msgTbl_ev00BF[TextLanguage][1]); //"\aGive me the bird."
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0xE39);
		EV_CameraPos(0, 0, -108.74f, 18.299999f, 11.14f);
		EV_CameraAng(0, 0, 0xF3EC, 0xF4F3, 0);
		EV_SetAction(amy, &action_a_a0117_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0117_wing, &VER1_WING_TEXLIST, 1.0f, 0, 0);
		EV_Wait(20);
		EV_SetAction(amy, &action_a_a0118_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0118_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(amy);
		EV_SetFace(amy, "F");
		EV_SerifPlay(1244);
		EV_Msg(msgTbl_ev00BF[TextLanguage][2]); //"\aNo way!"
		EV_Wait(32);
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_Wait(10);
		EV_CameraPos(0, 0, -100.11f, 2.0599999f, -27.07f);
		EV_CameraAng(0, 0, 0xAE4, 0x7FF3, 0);
		EV_SerifPlay(1245);
		EV_Msg(msgTbl_ev00BF[TextLanguage][3]); //"\aResistance is futile; \ngive me the b"...
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(20);
		EV_CameraPos(0, 0, -107.92f, 14.19f, -5.3200002f);
		EV_CameraAng(0, 0, 0xEFF4, 0xF4F3, 0);
		EV_ClrFace(amy);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(amy, "FF");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(amy, "F");
		}
		EV_SerifPlay(1246);
		EV_MsgW(45, msgTbl_ev00BF[TextLanguage][4]); //"\aI said NO!"
		EV_MsgClose();
		EV_ClrFace(amy);
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, -128.35001f, 2.3399999f, -44.91f);
		EV_CameraAng(0, 0, 0x3E4, 0x95F3, 0);
		EV_SetAng(amy, 0, 0, 0);
		EV_CameraPos(0, 70, -127.49f, 2.3399999f, -45.43f);
		EV_SerifPlay(1247);
		EV_MsgW(30, msgTbl_ev00BF[TextLanguage][5]); //"\aWhy not?"
		EV_MsgClose();
		EV_CameraPos(0, 20, -119.13f, 1.76f, -57.380001f);
		EV_Wait(20);
		EV_CameraPos(0, 300, -116.55f, 1.76f, -58.919998f);
		EV_Wait(10);
		EV_SetFace(amy, "FF");
		EV_SerifPlay(1248);
		EV_MsgW(60, msgTbl_ev00BF[TextLanguage][6]); //"\aNone of your business why not."
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_SetAction(amy, &action_a_a0119_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0119_wing, &VER1_WING_TEXLIST, 1.0f, 0, 0);
		EV_Wait(31);
		EV_SetAction(amy, &action_a_a0120_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(obj_ver1_wing, &action_w_w0120_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(amy, "FFF");
		EV_SerifPlay(1249);
		EV_MsgW(90, msgTbl_ev00BF[TextLanguage][7]); //"\aI want to know why you want it."
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_SetAng(obj_ver1_wing,
			amy->twp->ang.x,
			0x4000 - amy->twp->ang.y,
			amy->twp->ang.z);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, -108.49f, 13.74f, -2.05f);
		EV_CameraAng(0, 0, 0xE4, 0x93F3, 0);
		EV_SerifPlay(1250);
		EV_MsgW(40, msgTbl_ev00BF[TextLanguage][8]); //"\aData unavailable."
		EV_MsgClose();
		EV_Wait(40);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, -116.01f, 0.88f, -23.629999f);
		EV_CameraAng(0, 0, 0xAE4, 0xD2F3, 0);
		EV_SetFace(amy, "FF");
		EV_SerifPlay(1251);
		EV_MsgW(40, msgTbl_ev00BF[TextLanguage][9]); //"\aYou don't even know?"
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_CameraPerspective(0, 60, 0x1555);
		EV_Wait(60);
		EV_SetFace(amy, "FFF");
		EV_SerifPlay(1252);
		EV_MsgW(90, msgTbl_ev00BF[TextLanguage][10]); //"\aI bet you'd be mean to him, \nyou bul"...
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_CameraPos(0, 0, -116.06f, 9.46f, -5.2800002f);
		EV_CameraAng(0, 0, 0xFCE4, 0xEBF3, 0);
		EV_Wait(60);
		EV_SetFace(amy, "FF");
		EV_SerifPlay(1253);
		EV_MsgW(60, msgTbl_ev00BF[TextLanguage][11]); //"\aWhy not help us out instead?"
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_CameraPos(0, 70, -115.91f, 10.39f, 15.97f);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0121_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(amy, -100.0f, 0.0f, -11.0f, 0.75f, 0.059999999f);
		moveObjectOn(obj_ver1_wing, 0.0f, 0.0f, 0.0f, -1, amy);
		EV_Wait(20);
		EV_LookFree(player);
		EV_SetAction(player, E102_ACTIONS[29], &E102_TEXLIST, 1.0f, 1, 16);
		EV_SetPos(player, -100.0f, 0.0f, 20.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 20.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 21.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 21.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 22.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 22.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 23.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 23.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 24.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 24.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 25.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 25.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 26.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 26.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 27.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 27.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 28.0f);
		EV_Wait(2);
		EV_SetAction(amy, &action_a_a0120_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(amy, player, 0.0f, 14.0f, 0.0f);
		stopObject(obj_ver1_wing);
		EV_SetPos(obj_ver1_wing,
			amy->twp->pos.x,
			amy->twp->pos.y,
			amy->twp->pos.z);
		EV_SetAng(obj_ver1_wing,
			amy->twp->ang.x,
			0x4000 - amy->twp->ang.y,
			amy->twp->ang.z);
		EV_SetPos(player, -100.0f, 0.0f, 28.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 29.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 29.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 30.0f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 30.5f);
		EV_Wait(2);
		EV_SetPos(player, -100.0f, 0.0f, 31.0f);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(45);
		EV_SetFace(amy, "CDECDEC");
		EV_SerifPlay(1254);
		EV_MsgW(90, msgTbl_ev00BF[TextLanguage][12]); //"\aDon't you know how bad I feel?"
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 0, -100.03f, 21.860001f, -57.110001f);
		EV_CameraAng(0, 0, 0xF8E4, 0x7FF3, 0);
		EV_Wait(45);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 2.5f, 1, 0);
		dsPlay_timer(1326, 213385217, 1, 0, 40);
		EV_SerifPlay(1255);
		EV_MsgW(40, msgTbl_ev00BF[TextLanguage][13]); //"\aDoes not compute."
		EV_MsgClose();
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SerifPlay(1256);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 2.5f, 1, 0);
		dsPlay_timer(1326, 213385218, 1, 0, 120);
		EV_Msg(msgTbl_ev00BF[TextLanguage][14]); //"\aWhy try to save that \nwhich is usele"...
		EV_SerifWait();
		EV_MsgClose();
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 2.5f, 1, 0);
		EV_SerifPlay(1257);
		dsPlay_timer(1326, 213385219, 1, 0, 50);
		EV_MsgW(40, msgTbl_ev00BF[TextLanguage][15]); //"\aDoes not compute."
		EV_MsgClose();
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(20);
		EV_CameraPos(0, 0, -102.11f, 30.959999f, 47.470001f);
		EV_CameraAng(0, 0, 0xEBE4, 0xFCF3, 0);
		EV_Wait(30);
		EV_SetFace(amy, "E");
		EV_SerifPlay(1258); 
		EV_MsgW(30, msgTbl_ev00BF[TextLanguage][16]); //"\aI feel sorry for you!"
		EV_ClrFace(amy);
		EV_SetFace(amy, "ECD");
		EV_SerifPlay(1259);
		EV_MsgW(90, msgTbl_ev00BF[TextLanguage][17]); //"\aEggman failed to give you feelings."
		EV_ClrFace(amy);
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
		moveObject(obj_ver1_wing,
			-100.0f, 0.0f, -11.0f,
			player->twp->pos.x,
			player->twp->pos.y + 17.0f,
			player->twp->pos.z - 15.0f,
			60);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 2.0f, 1, 0);
		EV_SetFace(amy, "EC");
		EV_SerifPlay(1260);
		EV_Msg(msgTbl_ev00BF[TextLanguage][18]); //\aWait a minute, birdie!"
		EV_ClrFace(amy);
		EV_SerifWait();
		EV_MsgClose();
		dsPlay_timer(1337, 213385221, 1, 0, 240);
		EV_CameraPos(0, 60, -127.69f, 18.389999f, 24.120001f);
		EV_Wait(60);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_CameraPos(0, 0, -100.0f, 16.65f, 27.26f);
		EV_CameraAng(0, 0, 0x3E4, 0, 0);
		EV_CameraPerspective(0, 60, 0x238E);
		EV_Wait(60);
		EV_Wait(30);
		EV_CameraPos(0, 0, -91.660004f, 17.67f, 15.83f);
		EV_CameraAng(0, 0, 0xFBE4, 0x65F3, 0);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 3.0f, 1, 0);
		dsPlay_timer(1326, 213385222, 1, 0, 150);
		EV_CameraPos(0, 90, -79.779999f, 19.690001f, -0.14f);
		EV_Wait(90);
		EV_CameraPos(0, 0, -143.59f, 22.68f, 26.860001f);
		EV_CameraAng(0, 0, 0xF1E4, 0xBDF3, 0);
		EV_CameraPos(0, 180, -150.17f, 25.059999f, 26.530001f);
		EV_Wait(60);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[3], &E102_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -123.0f, 0.0f, 31.0f, 0.75f, 0.059999999f);
		EV_Wait(30);
		EV_SetAng(obj_ver1_wing, 0, 0xCB27, 0);
		EV_CameraPos(0, 180, -150.17f, 25.059999f, 26.530001f);
		dsPlay_timer(1334, 213385223, 1, 0, 60);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.30000001f, 1, 16);
		EV_Wait(60);
		EV_SerifPlay(1261);
		EV_MsgW(60, msgTbl_ev00BF[TextLanguage][19]); //"\aGet going!"
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0xE39);
		EV_CameraPos(0, 0, -130.14f, 9.1800003f, 69.269997f);
		EV_CameraAng(0, 0, 0xFDE4, 0x3F3, 0);
		EV_CameraPos(0, 20, -97.300003f, 9.1800003f, 48.32f);
		EV_Wait(20);
		EV_CameraPos(0, 80, -94.910004f, 9.1800003f, 48.32f);
		EV_SetFace(amy, "C");
		EV_SerifPlay(1262);
		EV_Msg(msgTbl_ev00BF[TextLanguage][20]); //"\aGet going!"
		EV_Wait(10);
		EV_ClrFace(amy);
		EV_Wait(50);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x271C);
		EV_CameraPos(0, 0, -145.75999f, 3.5899999f, 41.209999f);
		EV_CameraAng(0, 0, 0x23A, 0xD65D, 0);
		EV_CameraPos(0, 50, -146.32001f, 15.57f, 41.549999f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0024_e102, &E102_TEXLIST, 0.5f, 0, 32);
		EV_Wait(50);
		EV_CameraPos(0, 80, -146.32001f, 20.0f, 41.59f);
		EV_SetAction(player, &action_e_e0025_e102, &E102_TEXLIST, 1.0f, 1, 0);
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
		EV_SetFace(amy, "E");
		EV_SerifPlay(1263);
		EV_MsgW(60, msgTbl_ev00BF[TextLanguage][21]); //"\aHuh?"
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 120, -137.38f, 19.48f, 24.08f);
		EV_CameraAng(0, 120, 0xF4E4, 0xBAF3, 0x150);
		EV_LookFree(amy);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[45], &AMY_TEXLIST, 1.5f, 1, 32);
		EV_MovePoint2(amy, -74.0f, 0.0f, 15.0f, 0.75f, 0.059999999f);
		EV_SetAng(obj_ver1_wing, 0, 0x4000, 0);
		EV_Wait(1);
		moveObject(obj_ver1_wing, -100.0f, 17.0f, 16.0f, -74.0f, 12.0f, 17.0f, 80);
		EV_Wait(80);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 1);
		EV_SetAng(amy, 0, 0xD44C, 0);
		EV_LookObject(amy, player, 0.0f, 14.0f, 0.0f);
		stopObject(obj_ver1_wing);
		EV_Wait(1);
		EV_SetAng(obj_ver1_wing, 0, 0xC000, 0);
		EV_Wait(30);
		EV_SerifPlay(1264);
		EV_MsgW(60, msgTbl_ev00BF[TextLanguage][22]); //"\aWhy are you letting us go?"
		EV_Wait(15);
		EV_CameraPos(0, 150, -139.28999f, 20.02f, 23.84f);
		EV_CameraAng(0, 150, 0xF4E4, 0xBAF3, 0x150);
		EV_Wait(45);
		EV_SerifPlay(1265);
		EV_MsgW(120, msgTbl_ev00BF[TextLanguage][23]); //"\aIt is dangerous here."
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, -87.57f, 3.9000001f, 9.8599997f);
		EV_CameraAng(0, 0, 0x6E4, 0xA9F3, 0);
		EV_CameraPos(0, 250, -86.019997f, 3.9000001f, 7.29f);
		EV_Wait(30);
		EV_SetFace(amy, "EE");
		EV_SerifPlay(1266);
		EV_Msg(msgTbl_ev00BF[TextLanguage][24]); //"\aHurry. We will be arriving at \nthe M"...
		EV_SerifWait();
		EV_ClrFace(amy);
		EV_SetFace(amy, "CC");
		EV_SerifPlay(1267);
		EV_MsgW(90, msgTbl_ev00BF[TextLanguage][25]); //"\aYou're not like those other robots, "...
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 0, -35.450001f, 8.3500004f, 18.92f);
		EV_CameraAng(0, 0, 0xFEE4, 0x3FF3, 0);
		EV_LookFree(amy);
		EV_CameraPos(0, 300, -31.450001f, 8.46f, 18.92f);
		EV_SetFace(amy, "FF0");
		EV_SerifPlay(1268);
		EV_MsgW(80, msgTbl_ev00BF[TextLanguage][26]); //"\aYou truly are a good person inside, "...
		EV_SetFace(amy, "FFF");
		EV_SerifPlay(1269);
		EV_MsgW(60, msgTbl_ev00BF[TextLanguage][27]); //"\aI guess we can be friends then... \nT"...
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_Wait(20);
		EV_SetAng(obj_ver1_wing, 0, 0x4000, 0);
		EV_Wait(1);
		EV_ClrAction(amy);
		EV_MovePoint2(amy, -10.0f, 0.0f, 15.0f, 0.75f, 0.059999999f);
		moveObjectOn(obj_ver1_wing, 0.0f, 12.0f, 2.0f, 200, amy);
		EV_SetAction(amy, AMY_ACTIONS[45], &AMY_TEXLIST, 2.0f, 1, 16);
		EV_Wait(90);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -136.71001f, 18.85f, 11.68f);
		EV_CameraAng(0, 0, 0xF2E4, 0xC0F3, 0x500);
		EV_SetPos(amy, -74.0f, 0.0f, 15.0f);
		EV_SetAng(amy, 0, 0x8000, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[45], &AMY_TEXLIST, 2.0f, 1, 16);
		EV_MovePoint2(amy, 137.5f, 0.0f, 10.0f, 0.75f, 0.059999999f);
		EV_CameraPos(0, 80, -136.35001f, 18.85f, 26.67f);
		EV_Wait(110);
		EV_CameraPos(0, 0, -104.83f, 11.15f, 4.3000002f);
		EV_CameraAng(0, 0, 0xFFE4, 0x56F3, 0);
		EV_CameraPos(0, 30, -99.5f, 11.15f, 12.77f);
		EV_Wait(30);
		break;
	case 2:
		stopObjectAll();
		BGM_Stop();
		EV_InitPlayer(0);
		EV_SetPos(player, -123.0f, 0.0f, 31.0f);
		EV_SetAng(player, 0, 0xC000, 0);
		EV_FreeObject(&obj_ver1_wing);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}