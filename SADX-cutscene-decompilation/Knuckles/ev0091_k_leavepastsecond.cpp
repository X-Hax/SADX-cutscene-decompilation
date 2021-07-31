#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0091_k_leavepastsecond(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		//LOW_EC = 0; //Not used
		FLASH = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(101);
		EventSe_Init(4);
		seqVars[37] = 1;
		EV_SetPos(player, -3.4000001f, -247.0f, 2469.6001f);
		EV_SetAng(player, 0, 35072, 0);
		EV_CreatePlayer(2, E102, -37.299999f, -238.0f, 1973.0f, 0, 0, 0);
		EV_Wait(1);
		createModelEC(
			-2.7f, -160.60001f, 2153.3999f, 0, 44288, 0, 0.0020000001f, 0.0020000001f, 0.0020000001f,
			&object_ecff_bf_s_fbody_bf_s_fbody,
			&texlist_ec_light,
			0);
		addmotModel(0, &action_ecff_bf_s_fbody, 0);
		playModel(0, 0, 1.0f, -1);
		EventSe_Play(1, 760, 90);
		FLASH = COverlayCreate(-1.0e-12f, 0.94999999f, 1.0f, 1.0f, 1.0f);
		EV_Wait(30);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.017999999f);
		}
		BGM_Play(MusicIDs_mstcln);
		EV_Wait(1);
		EV_CameraPos(1, 0, -124.2f, -211.39999f, 2455.6001f);
		EV_CameraAng(1, 0, 63488, 54805, 0);
		EV_CameraPos(1, 150, -80.900002f, -211.7f, 2527.6001f);
		EV_CameraAng(1, 150, 63232, 55829, 0);
		EV_Wait(152);
		EV_ClrFace(player);
		EV_SetFace(player, "LKL");
		EV_CameraPos(1, 0, -9.3999996f, -244.5f, 2463.2f);
		EV_CameraAng(1, 0, 1824, 40469, 0);
		EV_CameraPos(0, 80, -9.0f, -242.0f, 2462.8f);
		EV_Wait(100);
		EV_ClrFace(player);
		EV_Wait(1);
		EV_CameraPos(1, 0, -3.7f, -241.89999f, 2480.0f);
		EV_CameraAng(1, 0, 61776, 130416, 0);
		EV_CameraPos(1, 180, -4.0700002f, -243.5f, 2499.8999f);
		EV_CameraAng(0, 140, 3152, 65136, 0);
		EV_Wait(60);
		EV_ClrFace(player);
		EV_SetFace(player, "CCCECCC0");
		EV_SerifPlay(1111);
		EV_Msg(msgTbl_ev0091[TextLanguage][0]); //"\aWhat... I'm back in front of\nthe alt"...
		EV_SerifWait();
		EV_Wait(60);
		EV_ClrFace(player);
		EV_CameraPos(1, 0, 6.0f, -240.73f, 2455.8f);
		EV_CameraAng(1, 0, 591, 26234, 65280);
		EV_CameraPos(1, 140, 3.0f, -240.39999f, 2460.1001f);
		EV_ClrFace(player);
		EV_SetFace(player, "CCCECCC0");
		EV_SerifPlay(1112);
		EV_Msg(msgTbl_ev0091[TextLanguage][1]); //"\aThis is beginning to blow\nmy mind!"
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(50);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_ClrFace(player);
		EV_SetFace(player, "EECECC0");
		EV_SerifPlay(1113);
		EV_Msg(msgTbl_ev0091[TextLanguage][2]); //"\aWait a minute... \nI remember..."
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(20);
		EV_CameraPos(1, 0, -28.450001f, -244.0f, 2483.5f);
		EV_CameraAng(1, 0, 2127, 54650, 65280);
		EV_CameraPos(1, 150, -23.700001f, -244.10001f, 2487.2f);
		EV_CameraAng(1, 150, 2383, 61050, 65280);
		EV_ClrFace(player);
		EV_SetFace(player, "CCDCDDDCCECC0");
		EV_SerifPlay(1114);
		EV_Msg(msgTbl_ev0091[TextLanguage][3]); //"\aThe broken pieces of \nthe Master Eme"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_ClrFace(player);
		EV_SetFace(player, "CCDCDCCC0");
		EV_SerifPlay(1115);
		EV_Msg(msgTbl_ev0091[TextLanguage][4]); //"\aI have to restore them to \nwhere the"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(34);
		EV_SetPos(player, -4.4000001f, -157.0f, 2252.5f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -2.8699999f, -158.0f, 2201.8999f, 0.40000001f, 0.07f);
		EV_CameraPos(1, 0, -8.79f, -141.10001f, 2301.3f);
		EV_CameraAng(1, 0, 63567, 64634, 0);
		EV_CameraPos(0, 20, -8.6499996f, -135.3f, 2301.3f);
		EV_Wait(20);
		EV_MovePoint2(player, -2.8699999f, -158.0f, 2201.8999f, 0.5f, 1.0f);
		EV_Wait(20);
		EV_CameraPos(1, 0, 23.940001f, -158.0f, 2227.2f);
		EV_CameraAng(1, 0, 1871, 6266, 512);
		EV_CameraPos(0, 60, 23.940001f, -156.0f, 2227.2f);
		EV_WaitMove(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 0.89999998f, 1, 8);
		EV_Wait(20);
		EV_CameraPos(1, 0, -7.4499998f, -153.60001f, 2195.7f);
		EV_CameraAng(1, 0, 64079, 39802, 65280);
		EV_CameraPos(0, 90, -5.5700002f, -150.67f, 2194.76f);
		EV_CameraAng(0, 90, 64591, 36474, 0);
		EV_SetAction(player, &action_k_k0009_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_Wait(90);
		EV_CameraPos(0, 100, -6.5999999f, -150.39999f, 2192.0f);
		EV_CameraAng(0, 100, 64591, 36474, 0);
		EV_Wait(20);
		MemeCreate(12);
		EV_Wait(15);
		crushLightOn(-2.8699999f, -151.0f, 2197.8999f, 1, 10, 0.40000001f, 1.2f, 0xFF50DC50, 0x325A32u);
		EV_Wait(45);
		EventSe_Oneshot(1335, 128, 0, 0);
		EV_Wait(20);
		EV_SetAction(player, &action_k_k0010_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, &action_k_k0011_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(25);
		crushLightOff();
		EV_Wait(20);
		EventSe_Play(2, 1334, 1800);
		EventSe_Volume(2, -10, 1);
		EV_Wait(1);
		EventSe_Volume(2, 90, 220);
		EV_CameraPos(0, 40, -34.599998f, -147.60001f, 2162.5f);
		EV_CameraAng(0, 40, 2127, 43642, 0);
		EV_Wait(40);
		EV_CameraPos(0, 60, -55.57f, -155.60001f, 2156.5f);
		EV_CameraAng(0, 60, 10319, 45434, 3584);
		EV_Wait(60);
		EV_CameraAng(0, 40, 12367, 47994, 3584);
		EV_Wait(40);
		EV_CameraPos(1, 0, 44.57f, -14.4f, 2195.7f);
		EV_CameraAng(1, 0, 54607, 7802, 0);
		EV_CameraPos(1, 120, -17.450001f, -150.89999f, 2223.0f);
		EV_CameraAng(1, 120, 1103, 62842, 0);
		EV_Wait(100);
		EventSe_Stop(2);
		EventSe_Oneshot(1335, 128, 0, 0);
		EventSe_Oneshot(1334, 120, 0, 0);
		crushLightOn(-3.52f, -136.0f, 2151.0f, 2, 12, 2.0f, 5.0f, 0xFF50DC50, 0x325A32u);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, 0.028000001f);
		}
		EV_Wait(40);
		seqVars[37] = 2;
		EV_Wait(20);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.022f);
		}
		EV_Wait(20);
		EV_CameraPos(1, 0, 1.76f, -153.8f, 2193.46f);
		EV_CameraAng(1, 0, 2127, 27002, 0);
		EV_CameraPos(0, 80, 0.75999999f, -153.0f, 2195.1299f);
		EV_Wait(80);
		crushLightOff();
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 0.89999998f, 1, 8);
		EV_CameraPos(0, 10, -0.2f, -152.5f, 2196.6599f);
		EV_CameraAng(0, 10, 5199, 27258, 0);
		EV_Wait(45);
		EV_SetAction(player, &action_k_k0017_knuckles, &KNUCKLES_TEXLIST, 0.89999998f, 1, 4);
		EV_Wait(10);
		EV_CameraPos(1, 0, 24.6f, -125.7f, 2169.6001f);
		EV_CameraAng(1, 0, 56143, 17530, 0);
		EV_CameraPos(0, 80, 20.76f, -123.2f, 2163.0f);
		EV_MovePoint2(player, -2.48f, -157.0f, 2185.3999f, 0.40000001f, 0.1f);
		EV_ClrFace(player);
		EV_SetFace(player, "CCDCDCCC0");
		EV_SerifPlay(1116);
		EV_Msg(msgTbl_ev0091[TextLanguage][5]); //"\aIt's still incomplete!"
		EV_ClrFace(player);
		EV_WaitMove(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_CameraPos(1, 0, -7.3000002f, -149.3f, 2187.8f);
		EV_CameraAng(1, 0, 2639, 64378, 0);
		EV_Wait(80);
		EV_CameraPos(1, 0, 23.0f, -150.98f, 2192.0f);
		EV_CameraAng(1, 0, 591, 10106, 0);
		EV_CameraPos(1, 120, 19.6f, -150.98f, 2197.0f);
		EV_SetFace(player, "CCDCDCCC0");
		EV_SerifPlay(1117);
		EV_Msg(msgTbl_ev0091[TextLanguage][6]); //"\aI need to find the remaining pieces."
		EV_Wait(40);
		EV_Msg(msgTbl_ev0091[TextLanguage][7]); //"\aWherever they are."
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(1, 30, 19.6f, -150.98f, 2197.0f);
		EV_CameraAng(1, 30, 2127, 8058, 0);
		moveObject(getobjModel(0), -2.7f, -160.60001f, 2153.3999f, -2.7f, -139.60001f, 2153.3999f, 60);
		EV_Wait(60);
		EventSe_Oneshot(1338, 128, 0, 0);
		EV_Wait(60);
		EV_CameraPos(1, 0, -1.58f, -153.39999f, 2180.7f);
		EV_CameraAng(1, 0, 3663, 31098, 0);
		EV_CameraAng(1, 8, 6223, 30586, 0);
		EV_Wait(30);
		if (enableUnusedCode) {
			SONIC_SKY_2 = CSkyWalk_create2(player, -152.60001f); //Stop Knuckles sliding off the pedestal
		}
		EV_SetPos(player, 6.3000002f, -152.60001f, 2173.4399f);
		EV_SetAng(player, 0, 36216, 0);
		EV_SetAction(player, &action_k_k0018_knuckles, &KNUCKLES_TEXLIST, 0.60000002f, 1, 8);
		EV_CameraPos(1, 0, 0.40000001f, -149.5f, 2183.3f);
		EV_CameraAng(1, 0, 2639, 890, 0);
		EV_CameraPos(0, 50, 3.3f, -149.5f, 2183.0f);
		EV_ClrFace(player);
		EV_SetFace(player, "CEEDCDCDCCC0");
		EV_SerifPlay(1118);
		EV_Msg(msgTbl_ev0091[TextLanguage][8]); //"\aHey look!   \nIt's Eggman's flying fo"...
		EV_CameraPerspective(0, 70, 10923);
		EV_Wait(60);
		EV_ClrFace(player);
		EV_CameraPos(1, 0, -1.23f, -145.86f, 2177.0f);
		EV_CameraAng(1, 0, 3151, 634, 0);
		EV_CameraPos(0, 80, -1.469f, -144.60001f, 2173.2f);
		EV_Wait(80);
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		FLASH = COverlayCreate(-0.0020000001f, 0.40000001f, 0.0f, 0.80000001f, 0.0f);
		EV_CameraPos(1, 0, -14.2f, -137.12f, 2152.9299f);
		EV_CameraAng(1, 0, 60495, 50042, 512);
		EV_CameraPerspective(1, 1, 12561);
		EV_Wait(1);
		EV_CameraPos(0, 160, -6.783f, -135.87f, 2157.8201f);
		EV_CameraAng(0, 160, 59215, 55162, 512);
		EV_Wait(15);
		EV_SerifPlay(1119);
		EV_Msg(msgTbl_ev0091[TextLanguage][9]); //"\aThat's where the rest of \nthe pieces"...
		EV_Wait(105);
		EV_MsgClose();
		if (FLASH)
		{
			COverlaySetColor(FLASH, 0.0f, 0.050000001f, 0.0f);
			COverlaySetAlpha(FLASH, 0.2f);
			COverlaySetSpeed(FLASH, 0.0099999998f);
		}
		EV_Wait(50);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.02f);
		}
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[83], &KNUCKLES_TEXLIST, 0.69999999f, 1, 16);
		if (enableUnusedCode && SONIC_SKY_2) {
			FreeTask(SONIC_SKY_2);
			SONIC_SKY_2 = 0;
		}
		EV_SetPos(player, -1475.3f, -408.10001f, 2126.7f);
		EV_SetAng(player, 0, 48432, 0);
		EV_MovePoint2(player, -1529.97f, -401.10001f, 2122.7f, 1.0f, 0.1f);
		EV_CameraPos(1, 0, -1540.4f, -398.12f, 2117.6001f);
		EV_CameraAng(1, 0, 67, 48904, 0);
		EV_CameraAng(1, 70, 67, 44808, 0);
		EV_WaitMove(player);
		EV_CameraPos(1, 70, -1538.4f, -398.12f, 2118.3999f);
		EV_CameraAng(1, 70, 1091, 44808, 0);
		EV_SetAction(player, &action_k_k0019_knuckles, &KNUCKLES_TEXLIST, 0.60000002f, 1, 16);
		EV_ClrFace(player);
		EV_SetFace(player, "CDCDCDCCC0");
		EV_SerifPlay(1120);
		EV_Msg(msgTbl_ev0091[TextLanguage][10]); //"\aBut I don't know where \nthat ship is"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(40);
		EV_ClrAction(player);
		EV_CameraPos(0, 0, -1535.9f, -396.89999f, 2125.3999f);
		EV_CameraAng(0, 0, 1359, 52858, 0);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 4, -1534.9f, -396.70001f, 2125.2f);
		EV_Wait(25);
		e102 = EV_GetPlayer(2);
		EV_SetPos(e102, -1657.0f, -320.10999f, 2108.52f);
		EV_SetAng(e102, 64256, 50298, 0);
		EV_CameraPos(0, 0, -1516.1f, -402.20001f, 2132.3999f);
		EV_CameraAng(0, 0, 3919, 13690, 65280);
		EV_CameraPos(0, 90, -1516.1f, -402.20001f, 2131.2f);
		EV_Wait(30);
		BGM_Stop();
		BGM_Play(MusicIDs_thee102);
		EV_Wait(10);
		EventSe_Oneshot(1336, 60, 0, 0);
		EV_CameraPos(0, 2, -1516.1f, -402.20001f, 2131.2f);
		EV_Wait(2);
		RumbleA(0, 3);
		EV_CameraPos(0, 2, -1516.1f, -403.0f, 2131.2f);
		EV_Wait(2);
		EV_CameraPos(0, 2, -1516.1f, -402.20001f, 2131.2f);
		EV_Wait(2);
		EV_CameraPos(0, 3, -1516.1f, -404.0f, 2131.2f);
		EV_Wait(3);
		EV_CameraPos(0, 2, -1516.1f, -403.20001f, 2131.2f);
		EV_Wait(2);
		EV_CameraPos(0, 2, -1516.1f, -402.20001f, 2131.2f);
		EV_Wait(2);
		EV_CameraPos(0, 3, -1516.1f, -403.0f, 2131.2f);
		EV_Wait(3);
		EV_CameraPos(0, 20, -1516.1f, -398.20001f, 2131.2f);
		EV_CameraTargetObj(1, 30, e102, 0.0f, 12.0f, 0.0f, 0);
		EV_LookObject(player, e102, 0.0f, 0.0f, 0.0f);
		EV_Wait(30);
		EV_MovePoint2(e102, -1700.0f, -360.0f, 1700.0f, 1.5f, 0.050000001f);
		EV_Wait(70);
		EV_CameraPos(0, 0, -1653.1f, -387.20001f, 1850.2f);
		EV_Wait(85);
		EV_CameraTargetFree();
		EV_SetAng(player, 592, 43386, 0);
		EV_CameraPos(1, 0, -1533.5f, -398.39999f, 2140.2f);
		EV_CameraAng(1, 0, 2531, 1560, 2560);
		EV_CameraPos(1, 40, -1528.7f, -398.39999f, 2139.8f);
		EventSe_Play(1, 1337, 1800);
		EventSe_Volume(1, 80, 1);
		EV_Wait(1);
		EventSe_Volume(1, 0, 120);
		EV_ClrFace(player);
		EV_SetFace(player, "GDCDCDCCC0");
		EV_SerifPlay(1121);
		EV_Msg(msgTbl_ev0091[TextLanguage][11]); //"\aHey!   Isn't that \none of Eggman's r"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(90);
		EV_CameraPos(0, 0, -1536.2f, -396.0f, 2112.7f);
		EV_CameraAng(0, 0, 65507, 38680, 64768);
		EV_CameraPos(0, 160, -1532.0f, -395.89999f, 2117.3999f);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "GBGCCGCGCGG0");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "GBGCC0");
		}
		EV_SerifPlay(1122);
		EV_Msg(msgTbl_ev0091[TextLanguage][12]); //"\aI know... I'll follow it\nback to Egg"...
		EV_SerifWait();
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_MsgClose();
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_Wait(90);
		EV_CameraPos(0, 25, -1533.0f, -396.87f, 2119.5f);
		EV_CameraAng(0, 25, 2531, 42264, 64768);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "GCGBCGGCGGG");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "G0");
		}
		EV_SerifPlay(1123);
		EV_Msg(msgTbl_ev0091[TextLanguage][13]); //"\aHere I come, Eggman!"
		EV_SerifWait();
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(20);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_Wait(80);
		EV_MoveFree(e102);
		EV_LookFree(player);
		stopObjectAll();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		seqVars[37] = 2;
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_MoveFree(e102);
		EV_RemovePlayer(2);
		EV_LookFree(player);
		if (enableUnusedCode && SONIC_SKY_2) {
			FreeTask(SONIC_SKY_2);
			SONIC_SKY_2 = 0;
		}
		EV_SerifStop();
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		deleteModel(0);
		crushLightOff();
		EV_SetPos(player, -1529.97f, -401.10001f, 2122.7f);
		EV_SetAng(player, 0, 48432, 0);
		MemeDelete();
		break;
	}
}