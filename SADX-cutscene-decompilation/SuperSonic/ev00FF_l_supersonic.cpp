#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00FF[] = {
	(char*)("LAST1A_HIGHWAY_A"), &LAST1A_HIGHWAY_A_TEXLIST,
	(char*)("M_EM_BLACK"), &texlist_m_em_black,
	(char*)("WING_P"), &texlist_wing_p
};

void ev00FF_l_supersonic(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		K01_EME = 0;
		K02_EME = 0;
		K03_EME = 0;
		K04_EME = 0;
		K05_EME = 0;
		K06_EME = 0;
		K07_EME = 0;
		K08_EME = 0;
		SONIC_SKY = 0;
		//TIKAL_SKY = 0; //Unused
		AMY_SKY = 0;
		MILES_SKY = 0;
		KNUCKLES_SKY = 0;
		BIG_SKY = 0;
		SUPER_S = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EventSe_Init(4);
		SetBankDir(121);
		Last1AHigh_Create();
		EV_SetPos(player, 806.63f, 150.0f, -251.39999f);
		EV_SetAng(player, 0, 0x2000, 0);
		StgChaos7CtrlOn(270.0f, 0.0f, -8500.0f, 0, 0xA000, 0, 0x38E);
		EV_CreatePlayer(3, AmyRose, 736.22998f, 150.0f, -391.75f, 0, 0x3000, 0);
		EV_CreatePlayer(4, MilesTalesPrower, 867.89001f, 150.0f, -404.22f, 0, 0x9000, 0);
		EV_CreatePlayer(5, KnucklesTheEchidna, 901.03998f, 150.0f, -418.0f, 0, 0x8B00, 0);
		EV_CreatePlayer(6, BigTheCat, 705.67999f, 150.0f, -372.72f, 0, 0x4000, 0);
		bird = SetEventBirdie1();
		EV_SetPos(bird, 746.22998f, 150.0f, -391.72f);
		EV_SetAng(bird, 0, 0x3000, 0);
		EV_CreateObject(&K01_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&K02_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&K03_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&K04_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&K05_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&K06_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&K07_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&K08_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_Wait(1);
		big = EV_GetPlayer(6);
		EV_SetPos(big, 705.67999f, 150.0f, -372.72f);
		tails = EV_GetPlayer(4);
		EV_SetPos(tails, 756.09003f, 160.0f, -394.66f);
		knuckles = EV_GetPlayer(5);
		EV_SetPos(knuckles, 687.96997f, 160.0f, -537.42999f);
		amy = EV_GetPlayer(3);
		EV_SetPos(amy, 736.22998f, 150.0f, -391.75f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 0, 4);
		SONIC_SKY = CSkyWalk_create2(player, 150.0f);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[45], &AMY_TEXLIST, 2.0f, 1, 0);
		AMY_SKY = CSkyWalk_create2(amy, 150.0f);
		EV_ClrAction(tails);
		MILES_SKY = CSkyWalk_create2(tails, 150.0f);
		EV_ClrAction(knuckles);
		KNUCKLES_SKY = CSkyWalk_create2(knuckles, 150.0f);
		EV_ClrAction(big);
		EV_SetAction(big, &action_b_b0027_big, &BIG_TEXLIST, 1.0f, 1, 0);
		BIG_SKY = CSkyWalk_create2(big, 150.0f);
		EV_SetMode(bird, 0);
		EV_SetPos(bird, 741.22998f, 158.0f, -393.75f);
		EV_SetAng(bird, 0, 0x1000, 0);
		EV_ClrAction(bird);
		EV_SetAction(bird, &action_w_p0001_wing_p, &texlist_wing_p, 1.0f, 1, 0);
		EV_SetMode(K01_EME, 0);
		EV_SetMode(K02_EME, 0);
		EV_SetMode(K03_EME, 0);
		EV_SetMode(K04_EME, 0);
		EV_SetMode(K05_EME, 0);
		EV_SetMode(K06_EME, 0);
		EV_SetMode(K07_EME, 0);
		EV_SetMode(K08_EME, 0);
		EV_SetPos(K08_EME, 735.0f, 150.0f, -372.0f);
		EV_SetAng(K08_EME, 0x2000, 0x2000, 0x1000);
		EV_SetAction(K08_EME, &action_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_CameraPos(0, 0, 713.13f, 159.0f, -372.45999f);
		EV_CameraAng(0, 0, 0xA00, 0x3F00, 0);
		EV_Wait(20);
		EV_CameraPos(0, 60, 740.97998f, 151.0f, -361.95001f);
		EV_CameraAng(0, 60, 0xB00, 0x2900, 0);
		EV_Wait(90);
		EV_CameraPos(0, 0, 748.42999f, 152.71001f, -380.44f);
		EV_CameraAng(0, 0, 0x300, 0xE6A7, 0);
		EV_CameraPos(0, 60, 744.47998f, 151.89999f, -369.78f);
		EV_CameraAng(0, 60, 0x100, 0xE2A7, 0);
		if (BIG_SKY)
		{
			FreeTask(BIG_SKY);
			BIG_SKY = 0;
		}
		EV_RemovePlayer(6);
		EV_SetPos(tails, 756.09003f, 160.0f, -394.66f);
		EV_SetAng(tails, 0, 0xF3E8, 0);
		EV_SetPos(K08_EME, 750.0f, 150.0f, -373.39001f);
		EV_SetAng(K08_EME, 0x2000, 0x2000, 0x1000);
		EV_Wait(90);
		EV_CameraPos(0, 0, 693.39001f, 153.3f, -523.78998f);
		EV_CameraAng(0, 0, 0x500, 0x1A00, 0);
		EV_CameraPos(0, 60, 695.64001f, 151.32001f, -515.71997f);
		EV_CameraAng(0, 60, 0x700, 0x1A00, 0);
		EV_SetPos(tails, 867.89001f, 150.0f, -404.22f);
		EV_SetAng(tails, 0, 0x9000, 0);
		EV_SetPos(K08_EME, 685.40997f, 150.0f, -521.79999f);
		EV_SetAng(K08_EME, 0x2000, 0x2000, 0x1000);
		EV_SetPos(knuckles, 687.96997f, 160.0f, -537.42999f);
		EV_SetAng(knuckles, 0, 0xE6A8, 0);
		EV_Wait(45);
		EV_LookObject(knuckles, K08_EME, 0.0f, 0.0f, 0.0f);
		EV_Wait(45);
		EV_SetPos(knuckles, 901.03998f, 150.0f, -418.0f);
		EV_SetAng(knuckles, 0, 0x8B00, 0);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 812.44f, 155.3f, -235.87f);
		EV_CameraAng(0, 0, 0x100, 0x1D00, 0);
		EV_CameraPos(0, 80, 818.48999f, 155.3f, -241.09f);
		EV_LookFree(knuckles);
		EV_FreeObject(&K08_EME);
		EV_SetAction(player, &action_s_s0038_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		moveObjectAngle2(amy,
			amy->twp->pos.x,
			amy->twp->pos.y,
			amy->twp->pos.z,
			799.81f, 150.0f, -275.78f,
			amy->twp->ang.x,
			0x4000 - amy->twp->ang.y,
			amy->twp->ang.z,
			0, 0x3000, 0, 140);
		moveObjectOn(bird, 5.0f, 8.0f, -2.0f, 140, amy);
		EV_SerifPlay(1491);
		EV_Msg(msgTbl_ev00FF[TextLanguage][0]); //"\aHey, Sonic!"
		EV_Wait(45);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(player, amy, 0.0f, 6.0f, 0.0f);
		EV_CameraPos(0, 0, 801.0f, 156.10001f, -308.23001f);
		EV_CameraTargetObj(0, 0, amy, 0.0f, 6.0f, 0.0f, 0);
		EV_SerifPlay(1492);
		EV_Msg(msgTbl_ev00FF[TextLanguage][1]); //"\aAmy!"
		EV_Wait(60);
		EV_SetPos(amy, 799.81f, 150.0f, -274.69f);
		EV_SetAng(amy, 0, 0x1000, 0);
		EV_SetAng(bird, 0, 0x1000, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(amy, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(1);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 822.46997f, 155.92f, -239.19f);
		EV_CameraAng(0, 0, 0xFE12, 0x1D5D, 0);
		EV_CameraPerspective(1, 120, 0x18E4);
		EV_SetPos(K01_EME,
			amy->twp->pos.x + 0.89999998f,
			amy->twp->pos.y + 3.5f,
			amy->twp->pos.z + 1.9f);
		EV_SetAng(K01_EME, 0, 0, 0);
		EV_SetAction(K01_EME, &action_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0814_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_Wait(30);
		moveObject(K01_EME,
			amy->twp->pos.x + 0.89999998f,
			amy->twp->pos.y + 3.5f,
			amy->twp->pos.z + 1.9f,
			amy->twp->pos.x + 1.05f,
			amy->twp->pos.y + 4.8000002f,
			amy->twp->pos.z + 3.05f,
			30);
		EV_SetAction(amy, &action_a_a0815_amy, &AMY_TEXLIST, 1.0f, 1, 32);
		EV_SetFace(amy, "GGGGG");
		EV_Wait(5);
		EV_SerifPlay(1493);
		EV_Msg(msgTbl_ev00FF[TextLanguage][2]); //"\aHere, take this!"
		EV_SerifWait();
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x18E4);
		EV_CameraPos(0, 0, 812.96997f, 156.34f, -305.01001f);
		EV_CameraAng(0, 0, 0x12, 0x755D, 0);
		EV_CameraPos(1, 90, 801.09003f, 156.34f, -305.17001f);
		EV_CameraAng(1, 90, 0xFF12, 0x855D, 0);
		EV_Wait(30);
		EV_SetPos(tails, 843.98999f, 200.0f, -187.56f);
		EV_Wait(10);
		EV_LookFree(player);
		EV_SetAction(player, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.5f, 0, 8);
		EV_Wait(20);
		EV_SetPos(knuckles, 836.31f, 200.0f, -181.07001f);
		EV_Wait(40);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(20);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 0, 826.84998f, 154.0f, -217.53f);
		EV_CameraAng(0, 0, 0x282, 0x9068, 0);
		EV_CameraPos(0, 200, 824.10999f, 153.57001f, -223.95f);
		EV_SetPos(K02_EME,
			tails->twp->pos.x - 0.85000002f,
			tails->twp->pos.y + 3.5f,
			tails->twp->pos.z - 2.0f);
		EV_SetAng(K02_EME, 0, 0, 0);
		EV_SetAction(K02_EME, &action_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetPos(K03_EME,
			knuckles->twp->pos.x - 3.5f,
			knuckles->twp->pos.y + 5.3000002f,
			knuckles->twp->pos.z - 2.5f);
		EV_SetAng(K03_EME, 0, 0, 0);
		EV_SetAction(K03_EME, &action_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetPos(K04_EME,
			knuckles->twp->pos.x - 2.5f,
			knuckles->twp->pos.y + 4.8000002f,
			knuckles->twp->pos.z - 2.5f);
		EV_SetAng(K04_EME, 0, 0, 0);
		EV_SetAction(K04_EME, &action_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetPos(K06_EME,
			knuckles->twp->pos.x + 2.3f,
			knuckles->twp->pos.y + 5.4000001f,
			knuckles->twp->pos.z - 4.0f);
		EV_SetAng(K06_EME, 0, 0, 0);
		EV_SetAction(K06_EME, &action_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetPos(K07_EME,
			knuckles->twp->pos.x + 1.5f,
			knuckles->twp->pos.y + 5.0f,
			knuckles->twp->pos.z - 3.0f);
		EV_SetAng(K07_EME, 0, 0, 0);
		EV_SetAction(K07_EME, &action_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_ClrAction(tails);
		EV_ClrAction(knuckles);
		EV_SetAction(tails, &action_m_m9004_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(knuckles, &action_k_k0009_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1494);
		EV_Msg(msgTbl_ev00FF[TextLanguage][3]); //"\aHey guys, what's up?"
		StgChaos7SetPos(150.0f, 0.0f, 50.0f);
		StgChaos7SetAng(0, 0, 0);
		EV_Wait(30);
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x38E4);
		EV_CameraPos(0, 0, 886.42999f, 157.39999f, -352.91f);
		EV_CameraAng(0, 0, 0x1A82, 0x5868, 0);
		EV_CameraPos(0, 300, 1038.09f, 157.39999f, -130.75f);
		EV_SerifPlay(1495);
		EV_Msg(msgTbl_ev00FF[TextLanguage][4]); //"\aChaos only used the negative power \n"...
		EV_Wait(120);
		EV_MsgClose();
		EV_LookFree(player);
		EV_SetAng(player, 0, 0x1000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraPerspective(1, 1, 0x238E);
		EV_CameraPos(0, 0, 848.45001f, 154.12f, -202.58f);
		EV_CameraAng(0, 0, 0x482, 0x7768, 0);
		EV_CameraPos(0, 300, 839.64001f, 154.12f, -204.47f);
		StgChaos7SetPos(270.0f, 0.0f, -8500.0f);
		StgChaos7SetAng(0, 0xA000, 0);
		EV_SetFace(tails, "GGGGG");
		EV_Wait(5);
		EV_SerifPlay(1496);
		EV_Msg(msgTbl_ev00FF[TextLanguage][5]); //"\aSonic, you should be able to \nharnes"...
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_Wait(15);
		EV_SetFace(knuckles, "GGGGG");
		EV_Wait(5);
		EV_SerifPlay(1497);
		EV_Msg(msgTbl_ev00FF[TextLanguage][6]); //"\aAs much as I hate to admit it, \nI th"...
		EV_SerifWait();
		EV_ClrFace(knuckles);
		EV_MsgClose();
		EV_Wait(15);
		EV_CameraPos(0, 0, 812.03998f, 156.64f, -244.7f);
		EV_CameraAng(0, 0, 0xFE82, 0x7768, 0xFB00);
		EV_CameraAng(1, 15, 0xFE82, 0x1C68, 0xFB00);
		EV_Wait(5);
		BGM_Play(MusicIDs_sprsonic);
		EventSe_Play(0, 1344, 1800);
		EV_Wait(20);
		EV_CameraPerspective(1, 1, 0x238E);
		EV_CameraPos(0, 0, 803.67999f, 152.62f, -241.28f);
		EV_CameraAng(0, 0, 0x1982, 0x768, 0xF700);
		EV_CameraPos(1, 600, 815.87f, 150.31f, -245.21001f);
		EV_SetPos(amy, 799.81f, 150.0f, -295.78f);
		EV_SetPos(bird, 804.81f, 158.0f, -297.78f);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		voicevolchange(-500);
		EV_SerifPlay(1498);
		EV_Wait(20);
		EV_SerifPlay(1499);
		EV_Wait(15);
		EV_SerifPlay(1501);
		EV_Wait(20);
		EV_SerifPlay(1500);
		EV_Wait(30);
		voicevolresume();
		EV_SerifPlay(1502);
		EV_MsgW(100, msgTbl_ev00FF[TextLanguage][7]); //"\aNegative forces aren't the only way t"...
		EV_Wait(100);
		EV_SerifPlay(1503);
		EV_Msg(msgTbl_ev00FF[TextLanguage][8]); //"\aOur positive feelings toward \neach o"...
		EV_Wait(100);
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x238E);
		EV_CameraPos(0, 0, 822.17999f, 155.74001f, -241.27f);
		EV_CameraAng(0, 0, 0x82, 0x2E68, 0);
		EV_CameraPos(1, 120, 835.57001f, 153.57001f, -237.3f);
		EV_LookFree(player);
		EV_SetAng(player, 0, 0x1000, 0);
		EV_SetPos(K01_EME,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z + 0.2f);
		EV_SetPos(K02_EME,
			player->twp->pos.x,
			player->twp->pos.y + 5.3000002f,
			player->twp->pos.z + 0.2f);
		EV_SetPos(K03_EME,
			player->twp->pos.x,
			player->twp->pos.y + 5.3000002f,
			player->twp->pos.z + 0.2f);
		EV_SetPos(K04_EME,
			player->twp->pos.x,
			player->twp->pos.y + 5.3000002f,
			player->twp->pos.z + 0.2f);
		EV_SetPos(K05_EME,
			player->twp->pos.x,
			player->twp->pos.y + 5.3000002f,
			player->twp->pos.z + 0.2f);
		EV_SetPos(K06_EME,
			player->twp->pos.x,
			player->twp->pos.y + 5.3000002f,
			player->twp->pos.z + 0.2f);
		EV_SetPos(K07_EME,
			player->twp->pos.x,
			player->twp->pos.y + 5.3000002f,
			player->twp->pos.z + 0.2f);
		EV_SetAng(K01_EME,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAng(K02_EME,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAng(K03_EME,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAng(K04_EME,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAng(K05_EME,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAng(K06_EME,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAng(K07_EME,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_ClrAction(K01_EME);
		EV_ClrAction(K02_EME);
		EV_ClrAction(K03_EME);
		EV_ClrAction(K04_EME);
		EV_ClrAction(K05_EME);
		EV_ClrAction(K06_EME);
		EV_ClrAction(K07_EME);
		EV_SetAction(K01_EME, &action_s_s0080cd1_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetAction(K02_EME, &action_s_s0080cd2_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetAction(K03_EME, &action_s_s0080cd3_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetAction(K04_EME, &action_s_s0080cd4_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetAction(K05_EME, &action_s_s0080cd5_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetAction(K06_EME, &action_s_s0080cd6_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_SetAction(K07_EME, &action_s_s0080cd7_m_em_black, &texlist_m_em_black, 1.0f, 1, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0080_sonic, &SONIC_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, &action_s_s0081_sonic, &SONIC_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, &action_s_s0082_sonic, &SONIC_TEXLIST, 1.0f, 1, 32);
		EV_Wait(1);
		EV_SerifPlay(1504);
		EV_Msg(msgTbl_ev00FF[TextLanguage][9]); //"\aOur hearts together form awesome \npo"...
		EV_Wait(89);
		EV_MsgClose();
		EventSe_Play(1, 1340, 1800);
		EventSe_Volume(1, -120, 1);
		EV_Wait(1);
		EventSe_Volume(1, 120, 60);
		crushLightOn(
			player->twp->pos.x,
			player->twp->pos.y + 6.0f,
			player->twp->pos.z,
			3, 5, 0.2f, 4.0f,
			0xB4FFFF91, 0xFFFF32u);
		EV_Wait(30);
		SUPER_S = COverlayCreate(0.0083333338f, 0.2f, 1.0f, 1.0f, 0.88f);
		EV_Wait(100);
		EV_FreeObject(&K01_EME);
		EV_FreeObject(&K02_EME);
		EV_FreeObject(&K03_EME);
		EV_FreeObject(&K04_EME);
		EV_FreeObject(&K05_EME);
		EV_FreeObject(&K06_EME);
		EV_FreeObject(&K07_EME);
		EventSe_Stop(0);
		EV_ClrAction(player);
		EV_Wait(1);
		SetInputP(0, 46);
		EV_CameraPerspective(1, 1, 0x1C72);
		EV_CameraPos(0, 0, 795.62f, 152.75999f, -246.75f);
		EV_CameraAng(0, 0, 0xFE00, 0xCF00, 0);
		EV_SetAng(player, 0, 0xD000, 0);
		EV_Wait(60);
		crushLightOff();
		if (SUPER_S)
		{
			COverlaySetSpeed(SUPER_S, -0.016666668f);
		}
		EventSe_Volume(1, -120, 60);
		EV_Wait(45);
		EV_CameraPos(1, 120, 795.84998f, 157.75f, -246.83f);
		EV_Wait(15);
		EventSe_Stop(1);
		if (SUPER_S)
		{
			FreeTask(SUPER_S);
			SUPER_S = 0;
		}
		EV_Wait(120);
		EV_CameraPos(1, 0, 812.21997f, 152.86f, -238.42f);
		EV_CameraAng(1, 0, 0xFE00, 0x1300, 0);
		EV_CameraPos(1, 90, 812.10999f, 157.85001f, -238.64f);
		EV_Wait(90);
		EV_CameraPos(1, 0, 797.66998f, 157.38f, -247.86f);
		EV_CameraAng(1, 0, 0xFE00, 0xAB00, 0);
		EV_CameraPos(1, 60, 800.28998f, 157.38f, -252.5f);
		EV_Wait(90);
		EV_CameraPos(1, 0, 801.42999f, 150.64999f, -228.16f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 7.0f, 0.0f, 0);
		EV_CameraPos(1, 120, 786.38f, 150.17f, -261.14999f);
		EV_Wait(120);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 788.42999f, 175.8f, -254.21001f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EventSe_Play(2, 1341, 1800);
		EventSe_Volume(2, 120, 1);
		moveObject(player, 806.63f, 150.0f, -251.39999f, 806.63f, 400.0f, -251.39999f, 75);
		EV_Wait(50);
		EventSe_Play(3, 1342, 1800);
		efWhiteOn2(30, 60, 30);
		EV_Wait(25);
		stopObject(player);
		EventSe_Stop(2);
		EV_Wait(3);
		EventSe_Stop(3);
		EV_Wait(2);
		break;
	case 2:
		EventSe_Close();
		stopObjectAll();
		efWhiteOff();
		if (SONIC_SKY)
		{
			FreeTask(SONIC_SKY);
			SONIC_SKY = 0;
		}
		if (AMY_SKY)
		{
			FreeTask(AMY_SKY);
			AMY_SKY = 0;
		}
		if (MILES_SKY)
		{
			FreeTask(MILES_SKY);
			MILES_SKY = 0;
		}
		if (KNUCKLES_SKY)
		{
			FreeTask(KNUCKLES_SKY);
			KNUCKLES_SKY = 0;
		}
		if (BIG_SKY)
		{
			FreeTask(BIG_SKY);
			BIG_SKY = 0;
		}
		if (SUPER_S)
		{
			FreeTask(SUPER_S);
			SUPER_S = 0;
		}
		crushLightOff();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		EV_RemovePlayer(5);
		EV_RemovePlayer(6);
		EV_FreeObject(&bird);
		EV_FreeObject(&K01_EME);
		EV_FreeObject(&K02_EME);
		EV_FreeObject(&K03_EME);
		EV_FreeObject(&K04_EME);
		EV_FreeObject(&K05_EME);
		EV_FreeObject(&K06_EME);
		EV_FreeObject(&K07_EME);
		EV_FreeObject(&K08_EME);
		StgChaos7CtrlOff(1);
		Last1AHigh_Delete();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}