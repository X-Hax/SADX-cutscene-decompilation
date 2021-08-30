#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00FD_l_perfectchaos(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		W_EME = 0;
		B_EME = 0;
		G_EME = 0;
		P_EME = 0;
		R_EME = 0;
		S_EME = 0;
		Y_EME = 0;
		SONIC_SKY = 0;
		TIKAL_SKY = 0;
		BALL = 0;
		BOM = 0;
		TIKAL_BALL = 0;
		SetTableBg_chaos7(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_Wait(1);
		EV_InitPlayer(0);
		Last1AHigh_Create();
		SetBankDir(119);
		EventSe_Init(5);
		EV_SetPos(player, 806.63f, 150.0f, -251.39999f);
		EV_SetAng(player, 0, 0xD265, 0);
		StgChaos7CtrlOn(150.0f, 0.0f, 50.0f, 0, 0, 0, 910);
		create_eggmoble(86.849998f, 200.0f, -725.0f, 0, 0x4000, 0);
		createModelEC(
			3500.0f, 1500.0f, 100.0f,
			0, 0x4000, 0x700,
			0.15000001f, 0.15000001f, 0.15000001f,
			&object_ecff_bf_s_fbody_bf_s_fbody,
			&texlist_ec_light,
			0);
		addmotModel(0, &action_ecff_bf_s_fbody, 0);
		EV_CreateObject(&W_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&B_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&G_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&P_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&R_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&S_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		EV_CreateObject(&Y_EME, 0.0f, 0.0f, 0.0f, 0, 0, 0);
		BOM = Create_SphereBomb(0.0f, 100.0f, 2000.0f, 200, 7.0f, 1800.0f);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		SONIC_SKY = CSkyWalk_create2(player, 150.0f);
		EV_SetPos(player, 806.63f, 150.0f, -251.39999f);
		EV_SetAng(player, 0, 0xD265, 0);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(W_EME, 0);
		EV_SetMode(B_EME, 0);
		EV_SetMode(G_EME, 0);
		EV_SetMode(P_EME, 0);
		EV_SetMode(R_EME, 0);
		EV_SetMode(S_EME, 0);
		EV_SetMode(Y_EME, 0);
		EV_SetPos(W_EME,
			player->twp->pos.x + 8.0f,
			player->twp->pos.y - 6.0f,
			player->twp->pos.z - 8.0f);
		EV_SetAng(W_EME, 0, 0, 0);
		EV_SetPos(B_EME,
			player->twp->pos.x + 8.0f,
			player->twp->pos.y - 6.0f,
			player->twp->pos.z + 8.0f);
		EV_SetAng(B_EME, 0, 0, 0);
		EV_SetPos(G_EME,
			player->twp->pos.x + 8.0f,
			player->twp->pos.y - 6.0f,
			player->twp->pos.z);
		EV_SetAng(G_EME, 0, 0, 0);
		EV_SetPos(P_EME,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y - 6.0f,
			player->twp->pos.z);
		EV_SetAng(P_EME, 0, 0, 0);
		EV_SetPos(R_EME,
			player->twp->pos.x,
			player->twp->pos.y - 6.0f,
			player->twp->pos.z + 8.0f);
		EV_SetAng(R_EME, 0, 0, 0);
		EV_SetPos(S_EME,
			player->twp->pos.x,
			player->twp->pos.y - 6.0f,
			player->twp->pos.z - 8.0f);
		EV_SetAng(S_EME, 0, 0, 0);
		EV_SetPos(Y_EME,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y - 6.0f,
			player->twp->pos.z - 8.0f);
		EV_SetAng(Y_EME, 0, 0, 0);
		SetSphereBombParameter(BOM, 0.99000001f, 4.0f, 1800.0f);
		EV_Wait(1);
		seteggmobleparam(0.5f, 256);
		ChgEggMobleMod(5);
		playModel(0, 0, 1.0f, -1);
		EV_SetAction(W_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(B_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(G_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(P_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(R_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(S_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(Y_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		BGM_Play(MusicIDs_tical);
		EV_CameraPerspective(0, 1, 0x38E4);
		EV_CameraPos(0, 0, 816.39001f, 155.75999f, -271.26001f);
		EV_CameraAng(0, 0, 0x2331, 0x6185, 0);
		EV_Wait(45);
		EV_CameraAng(0, 100, 0x931, 0x6185, 0);
		EV_Wait(145);
		EV_CameraPerspective(0, 1, 0x2AAB);
		EV_CameraPos(0, 0, 803.20001f, 152.47f, -244.75f);
		EV_CameraAng(0, 0, 0x1531, 0xDC85, 0);
		EV_CameraPos(0, 240, 801.26001f, 152.47f, -247.03999f);
		EV_ClrFace(player);
		EV_SetFace(player, "CDE");
		EV_SerifPlay(1476);
		EV_Msg(msgTbl_ev00FD[TextLanguage][0]); //"\aIf I wasn't just dreaming, \nthat mon"...
		EV_Wait(30);
		EV_ClrFace(player);
		EV_Wait(30);
		EV_SetFace(player, "CDE");
		EV_Wait(15);
		EV_ClrFace(player);
		EV_Wait(30);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CDE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "D");
		}
		EV_Wait(75);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x2AAB);
		EV_CameraPos(0, 0, 803.38f, 154.60001f, -241.03999f);
		EV_CameraAng(0, 0, 0x631, 0xF300, 0);
		EV_Wait(15);
		EV_SetAction(player, &action_s_s0038_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		eggcarrier = getobjModel(0);
		moveObject(eggcarrier, 3500.0f, 1500.0f, 100.0f, 2000.0f, 1000.0f, 100.0f, 450);
		EV_Wait(30);
		EV_CameraPos(1, 30, 803.38f, 154.60001f, -241.03999f);
		EV_CameraAng(1, 30, 0xF31, 0xBD00, 0);
		EV_Wait(30);
		EV_SerifPlay(1477);
		EV_Msg(msgTbl_ev00FD[TextLanguage][1]); //"\aEggman!"
		EV_Wait(30);
		BGM_Stop();
		EV_Wait(1);
		BGM_Play(MusicIDs_egcarer1);
		EV_Wait(15);
		EV_MsgClose();
		EV_CameraPos(0, 0, 1102.88f, 499.72f, -152.58f);
		EV_CameraAng(0, 0, 0x1631, 0xB100, 0);
		EV_CameraPos(0, 120, 1273.65f, 610.59003f, -86.709999f);
		EventSe_Play(1, 1334, 1800);
		EventSe_Volume(1, 100, 60);
		EV_Wait(40);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_SetAng(player, 0, 0x13265, 0);
		EV_Wait(40);
		EV_CameraPos(0, 0, 814.66998f, 151.44f, -248.74001f);
		EV_CameraAng(0, 0, 0x1931, 0x2300, 0);
		EV_CameraPos(0, 90, 812.06f, 151.44f, -245.71001f);
		EV_ClrFace(player);
		EV_SetFace(player, "CDE");
		EV_SerifPlay(1478);
		EV_MsgW(60, msgTbl_ev00FD[TextLanguage][2]); //"\aLooks like he's after Chaos, too!"
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x18E4);
		EV_CameraPos(0, 0, 87.169998f, 213.74001f, -720.28998f);
		EV_CameraAng(0, 0, 0xFB31, 512, 0);
		EV_SerifPlay(1479);
		EV_MsgW(90, msgTbl_ev00FD[TextLanguage][3]); //"\aThis Egg Carrier 2 was made because\n"...
		EV_CameraPerspective(0, 1, 0x2AAB);
		EV_CameraPos(0, 0, 1795.42f, 1494.8101f, -217.61f);
		EV_CameraAng(0, 0, 0xE231, 0x4B00, 0xF600);
		EV_CameraPos(0, 200, 1707.89f, 1425.4399f, -767.09998f);
		EV_SerifPlay(1480);
		EV_Msg(msgTbl_ev00FD[TextLanguage][4]); //"\aYou have defied your master,\nstupid "...
		EV_Wait(50);
		StgChaos7Breath(5000.0f);
		EV_Wait(50);
		stopObject(eggcarrier);
		EV_Wait(1);
		moveObject(eggcarrier, 3500.0f, 1500.0f, 100.0f, 2000.0f, 1000.0f, 100.0f, 400);
		EV_CameraPerspective(0, 1, 0x4000);
		EV_CameraAng(0, 0, 0x831, 0xAC85, 0);
		EV_CameraPos(0, 0, -16.27f, 504.47f, -367.98999f);
		EV_CameraPos(0, 1000, 156.85001f, 544.20001f, -278.26999f);
		EV_SerifPlay(1481);
		EV_Msg(msgTbl_ev00FD[TextLanguage][5]); //"\aNow you must be destroyed \nat all co"...
		EV_Wait(55);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EV_MsgClose();
		EventSe_Play(2, 1336, 90);
		EventSe_Volume(2, 120, 40);
		EventSe_Pitch(2, 8000, 40);
		EventSe_Oneshot(14, 120, 0, 0);
		EV_Wait(15);
		EventSe_Stop(1);
		EV_CameraPos(0, 0, 935.96997f, 599.81f, 31.629999f);
		EV_CameraAng(0, 0, 0xFE31, 0x4085, 0);
		EV_Wait(10);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(14, 50, 0, 0);
		EV_Wait(10);
		EV_CameraPos(1, 80, 1481.66f, 768.91998f, 24.67f);
		EV_CameraAng(1, 80, 0xF631, 0x4085, 0);
		EV_CameraPerspective(0, 80, 0x5555);
		EventSe_Play(3, 1337, 90);
		EventSe_Volume(3, 120, 40);
		EventSe_Pitch(3, 8000, 40);
		EV_Wait(70);
		EventSe_Stop(2);
		EV_CameraPerspective(0, 1, 0x4000);
		EV_CameraPos(0, 0, 1193.63f, 674.29999f, -93.489998f);
		EV_CameraAng(0, 0, 0x1631, 0xAC85, 0);
		EV_Wait(30);
		effect_create2(eggcarrier, 10, 100.0f, -30.0f, 500.0f, &ev_effect_list2);
		effect_scl(10, 10.0f, 10.0f);
		EventSe_Oneshot(1338, 120, 0, 0);
		EV_Wait(5);
		effect_create2(eggcarrier, 11, -100.0f, 10.0f, 100.0f, &ev_effect_list2);
		effect_scl(11, 8.0f, 8.0f);
		EventSe_Oneshot(1338, 120, 0, 0);
		EV_Wait(5);
		effect_create2(eggcarrier, 12, 100.0f, -200.0f, -250.0f, &ev_effect_list2);
		effect_scl(12, 8.0f, 8.0f);
		EventSe_Oneshot(1338, 120, 0, 0);
		EV_Wait(5);
		effect_create2(eggcarrier, 13, -250.0f, -250.0f, -300.0f, &ev_effect_list2);
		effect_scl(13, 8.0f, 8.0f);
		effect_create2(eggcarrier, 14, 100.0f, -50.0f, 0.0f, &ev_effect_list9);
		effect_scl(14, 12.0f, 12.0f);
		effect_create2(eggcarrier, 15, -100.0f, -100.0f, 500.0f, &ev_effect_list9);
		effect_scl(15, 6.0f, 6.0f);
		EventSe_Oneshot(1338, 120, 0, 0);
		EV_Wait(20);
		EventSe_Oneshot(1338, 120, 0, 0);
		EV_Wait(20);
		EventSe_Oneshot(1338, 120, 0, 0);
		EV_Wait(20);
		stopObject(eggcarrier);
		EV_Wait(1);
		EV_CameraPos(0, 0, 1181.73f, 623.89001f, -1111.48f);
		EV_CameraAng(0, 0, 0x1036A, 0x7DAD, 0);
		EV_CameraPos(0, 560, 1189.7f, 424.98001f, -314.87f);
		EV_CameraAng(0, 560, 0xF9B9, 0x6FC1, 0);
		EventSe_Play(0, 1339, 200);
		EventSe_Volume(0, 120, 45);
		moveObjectAngle2(
			eggcarrier,
			2000.0f, 1300.0f, 2000.0f,
			-600.0f, -100.0f, 2900.0f,
			0, 0x4000, 0x1000,
			0x3000, 0x4000, 0x1B00,
			300);
		EV_Wait(150);
		ChgSphereBombMode(BOM, 1);
		EV_Wait(30);
		EventSe_Oneshot(1340, 120, 0, 0);
		EV_Wait(150);
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0036_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 10923);
		EV_CameraPos(0, 0, 65.080002f, 237.60001f, -654.83002f);
		EV_CameraAng(0, 0, 0x1E31, 0x2600, 0xD00);
		EV_CameraPos(0, 140, 111.43f, 252.17999f, -694.92999f);
		stopObject(eggcarrier);
		EV_SerifPlay(1482);
		EV_Wait(20);
		EV_Msg(msgTbl_ev00FD[TextLanguage][6]); //"\aAaaaahhhhh!"
		EV_Wait(60);
		EV_MsgClose();
		EV_SetAng(player, 0, 0xD265, 0);
		EV_Wait(30);
		EV_CameraPos(0, 0, 797.76001f, 155.42f, -248.48f);
		EV_CameraAng(0, 0, 0x431, 0xB500, 0);
		EV_CameraPos(0, 140, 799.09003f, 155.42f, -253.3f);
		EV_SetFace(player, "F");
		EV_SerifPlay(1483);
		EV_Msg(msgTbl_ev00FD[TextLanguage][7]); //"\aI've had enough!  \nWho do you think "...
		EV_Wait(5);
		EV_ClrFace(player);
		EV_Wait(10);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "FFFF");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FE");
		}
		EV_Wait(45);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_MsgClose();
		EV_Wait(15);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(15);
		delete_eggmoble();
		BGM_Stop();
		EV_Wait(1);
		BGM_Play(MusicIDs_tical);
		BALL = CTikalLight_Create(
			player->twp->pos.x + 4.0f,
			player->twp->pos.y + 9.0f,
			player->twp->pos.z - 200.0f);
		EV_SetMode(BALL, 0);
		EV_SetPath(BALL, &epathtag_EV00FD_TK, 0.25f, 0);
		EV_Wait(1);
		EventSe_Oneshot(1341, 120, 0, 0);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, 804.33002f, 155.75999f, -268.48001f);
		EV_CameraAng(0, 0, 0x2431, 0x9885, 0);
		EV_SetAng(player, 0, 0x2000, 0);
		EV_CameraTargetObj(0, 15, BALL, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(80);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 802.67999f, 151.44f, -269.29001f);
		EV_CameraPos(0, 350, 831.46997f, 151.44f, -252.32001f);
		EV_ClrPath(BALL);
		EV_SetPos(BALL,
			player->twp->pos.x + 4.0f,
			player->twp->pos.y + 9.0f,
			player->twp->pos.z + 4.0f);
		EV_SetAction(player, &action_s_s0072_sonic, &SONIC_TEXLIST, 0.5f, 0, 32);
		EV_SetAction(player, &action_s_s0073_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EventSe_Play(4, 760, 1800);
		EventSe_Volume(4, 80, 160);
		EV_ClrFace(player);
		EV_SetFace(player, "CD");
		EV_Wait(5);
		EV_SerifPlay(1484);
		EV_Msg(msgTbl_ev00FD[TextLanguage][8]); //"\aOh, it's you!"
		EV_Wait(15);
		EV_ClrFace(player);
		EV_Wait(35);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CD");
		}
		EV_Wait(45);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_Wait(10);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CDECD");
		}
		EV_Wait(5);
		EV_SerifPlay(1485);
		EV_Msg(msgTbl_ev00FD[TextLanguage][9]); //"\aThe one... who sealed Chaos... \nin t"...
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CDECD");
		}
		EV_Wait(10);
		EV_ClrFace(player);
		EV_Wait(10);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CDECD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DDE");
		}
		EV_Wait(70);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_MsgClose();
		EV_Wait(25);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(10);
		EV_SetFace(player, "CDECD");
		EV_Wait(5);
		EV_SerifPlay(1486);
		EV_Msg(msgTbl_ev00FD[TextLanguage][10]); //"\aTikal!"
		EV_Wait(10);
		EV_ClrFace(player);
		EV_Wait(15);
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 798.81f, 156.03999f, -270.16f);
		EV_CameraAng(0, 0, 0xFF31, 0x9985, 0);
		TIKAL_BALL = COverlayCreate(0.011764706f, 0.2f, 1.0f, 1.0f, 0.88f);
		EV_Wait(40);
		EventSe_Stop(4);
		EV_Wait(40);
		EV_CreatePlayer(2, Tikal, 835.0f, 149.0f, -235.0f, 0, 0xA900, 0);
		EV_Wait(1);
		tikal = EV_GetPlayer(2);
		EV_SetPos(tikal, 835.0f, 149.0f, -235.0f);
		EV_SetAng(tikal, 0, 0xA900, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_ti_wait, &TIKAL_TEXLIST, 0.5f, 1, 0);
		TIKAL_SKY = CSkyWalk_create2(tikal, 150.0f);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_LookObject(player, tikal, 0.0f, 6.0f, 0.0f);
		EV_Wait(5);
		if (BALL)
		{
			FreeTask(BALL);
			BALL = 0;
		}
		if (TIKAL_BALL)
		{
			COverlaySetSpeed(TIKAL_BALL, -0.016666668f);
		}
		EV_Wait(60);
		if (TIKAL_BALL)
		{
			FreeTask(TIKAL_BALL);
			TIKAL_BALL = 0;
		}
		EV_CameraPos(0, 0, 825.09003f, 156.41f, -249.56f);
		EV_CameraAng(0, 0, 0xFF31, 0x9685, 0);
		EV_CameraPos(1, 180, 828.76001f, 156.27f, -243.61f);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0017_tikal, &TIKAL_TEXLIST, 0.5f, 1, 32);
		EV_SetFace(tikal, "CDECDE");
		EV_Wait(5);
		EV_SerifPlay(1470);
		EV_Msg(msgTbl_ev00FD[TextLanguage][11]); //"\aMy heart has always been in the \nMas"...
		EV_Wait(130);
		EV_ClrFace(tikal);
		EV_SerifWait();
		EV_Wait(25);
		EV_CameraPos(0, 0, 851.45001f, 155.47f, -219.0f);
		EV_CameraAng(0, 0, 0xFF31, 0x2685, 0);
		EV_CameraPos(1, 120, 844.19f, 155.47f, -210.85001f);
		EV_CameraAng(1, 120, 0xFF31, 0x1885, 0);
		EV_SetFace(tikal, "CDECDE");
		EV_Wait(5);
		EV_SerifPlay(1471);
		EV_Msg(msgTbl_ev00FD[TextLanguage][12]); //"\aNow he's filled with anger and sadnes"...
		EV_Wait(80);
		EV_ClrFace(tikal);
		EV_Wait(15);
		EV_CameraPerspective(0, 1, 0x38E4);
		EV_CameraPos(0, 0, 579.0f, 537.79999f, -368.32999f);
		EV_CameraAng(0, 0, 0x731, 0x7B85, 0);
		EV_CameraPos(1, 180, 752.90002f, 537.79999f, -349.14001f);
		EV_SetFace(tikal, "FFFFF");
		EV_Wait(5);
		EV_SerifPlay(1472);
		EV_MsgW(120, msgTbl_ev00FD[TextLanguage][13]); //"\aAnd if it goes on, he'll eventually "...
		EV_Wait(120);
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_SetAng(tikal, 0, 0xD000, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0040_tikal, &TIKAL_TEXLIST, 0.5f, 1, 0);
		EV_Wait(20);
		EV_CameraPerspective(0, 1, 0x471C);
		EV_CameraPos(0, 0, 893.66998f, 178.0f, -298.35001f);
		EV_CameraAng(0, 0, 0x1A31, 0x5D85, 0);
		EV_CameraPos(0, 180, 881.06f, 161.38f, -292.53f);
		EV_CameraAng(0, 180, 0x1431, 0x5D85, 0);
		CreateRotaryEmerald(
			671.0f, 750.0f, -73.220001f,
			200.0f, 182,
			W_EME, B_EME, G_EME, P_EME, R_EME, S_EME, Y_EME);
		SetEffectRotaryEmerald(1, &ev_effect_list19, 1.5f, 1.0f, 1.0f, 0.0f, 0.0f);
		SetEffectRotaryEmerald(2, &ev_effect_list19, 1.5f, 1.0f, 0.0f, 1.0f, 0.0f);
		SetEffectRotaryEmerald(3, &ev_effect_list19, 1.5f, 1.0f, 1.0f, 1.0f, 1.0f);
		SetEffectRotaryEmerald(4, &ev_effect_list19, 1.5f, 1.0f, 1.0f, 1.0f, 0.0f);
		SetEffectRotaryEmerald(5, &ev_effect_list19, 1.5f, 1.0f, 1.0f, 0.0f, 1.0f);
		SetEffectRotaryEmerald(6, &ev_effect_list19, 1.5f, 1.0f, 0.0f, 1.0f, 1.0f);
		SetEffectRotaryEmerald(7, &ev_effect_list19, 1.5f, 1.0f, 0.0f, 0.0f, 1.0f);
		StgChaos7Howl1();
		EV_Wait(180);
		SplashRotaryEmerald(10.0f);
		EventSe_Oneshot(1342, 120, 0, 0);
		EV_Wait(120);
		deleteRotaryEmeraldTask();
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 804.28998f, 158.71001f, -268.20999f);
		EV_CameraAng(0, 0, 0xEC36, 0x1822, 0);
		EV_Wait(30);
		effect_create2(B_EME, 16, 0.0f, 0.0f, 0.0f, &ev_effect_list9);
		effect_scl(16, 0.13f, 0.13f);
		EV_SetPos(B_EME,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y,
			player->twp->pos.z - 30.0f);
		EV_SetAng(B_EME, 0, 0x7000, 0);
		EV_ClrAction(B_EME);
		EV_SetAction(B_EME, &action_ce_0003_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 0, 0);
		EV_Wait(10);
		EventSe_Play(4, 1344, 40);
		EV_WaitAction(B_EME);
		effect_delete(16);
		EV_SetAction(B_EME, &action_ce_0004_m_em_blue, &texlist_m_em_black, 1.0f, 1, 0);
		EV_Wait(45);
		EV_CameraPerspective(0, 1, 0x471C);
		EV_CameraPos(0, 0, 836.51001f, 153.31f, -251.75999f);
		EV_CameraAng(0, 0, 0x1C31, 0x6885, 0);
		EV_CameraPos(1, 80, 835.10999f, 150.23f, -249.62f);
		EV_SetPos(B_EME,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y - 10.0f,
			player->twp->pos.z - 30.0f);
		EV_SetAng(B_EME, 0, 0x7000, 0);
		EV_SetFace(tikal, "FFFFF");
		EV_Wait(5);
		EV_SerifPlay(1473);
		EV_Msg(msgTbl_ev00FD[TextLanguage][14]); //"\aLook!  \nHe's absorbed the Emerald's "...
		EV_Wait(50);
		EV_ClrFace(tikal);
		EV_Wait(20);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, 831.27002f, 156.14f, -219.03999f);
		EV_CameraAng(0, 0, 49, 0xF785, 0);
		EV_SetFace(tikal, "EFCE");
		EV_Wait(5);
		EV_SerifPlay(1474);
		EV_Msg(msgTbl_ev00FD[TextLanguage][15]); //"\aHe must be sealed in\nthe Master Emer"...
		EV_Wait(70);
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_Wait(25);
		EV_CameraPos(1, 20, 846.53003f, 157.09f, -198.06f);
		EV_CameraAng(1, 20, 0xFF31, 0x1385, 0);
		EV_SetFace(player, "FFF");
		EV_Wait(5);
		EV_SerifPlay(1487);
		EV_Msg(msgTbl_ev00FD[TextLanguage][16]); //"\aHow can that help?"
		EV_Wait(10);
		EV_ClrFace(player);
		EV_Wait(25);
		EV_CameraPos(0, 0, 826.94f, 154.14f, -245.92f);
		EV_CameraAng(0, 0, 0x431, 0x3986, 0);
		EV_CameraPos(0, 240, 821.04999f, 154.75f, -246.86f);
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.5f, 0, 4);
		EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_SetFace(player, "FEFEFE");
		EV_Wait(5);
		EV_SerifPlay(1488);
		EV_Msg(msgTbl_ev00FD[TextLanguage][17]); //"\aIt won't change how he feels inside, "...
		EV_Wait(50);
		EV_ClrFace(player);
		EV_Wait(25);
		EV_SetFace(player, "FDFFF");
		EV_Wait(5);
		EV_SerifPlay(1489);
		EV_Msg(msgTbl_ev00FD[TextLanguage][18]); //"\aHis heart will still remain in turmoi"...
		EV_Wait(100);
		EV_ClrFace(player);
		EV_Wait(25);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 821.06f, 158.47f, -238.37f);
		EV_CameraAng(0, 0, 0xFC31, 0x2486, 0);
		EV_SetFace(player, "FEFEFE");
		EV_Wait(5);
		EV_SerifPlay(1490);
		EV_Msg(msgTbl_ev00FD[TextLanguage][19]); //"\aHe'll just be trapped forever!"
		EV_SetAng(tikal, 0, 0xA900, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0017_tikal, &TIKAL_TEXLIST, 0.5f, 1, 0);
		EV_Wait(20);
		EV_CameraPerspective(1, 10, 0x11C7);
		EV_Wait(25);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(20);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 789.37f, 156.55f, -242.61f);
		EV_CameraAng(0, 0, 0xFE31, 0xBB86, 0);
		EV_CameraPos(0, 100, 790.14001f, 156.55f, -249.57001f);
		EV_SetFace(tikal, "FEO");
		EV_Wait(5);
		EV_SerifPlay(1475);
		EV_Msg(msgTbl_ev00FD[TextLanguage][20]); //"\aWhat choice do we have?"
		EV_Wait(30);
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_Wait(70);
		break;
	case 2:
		stopObjectAll();
		EventSe_Close();
		if (SONIC_SKY)
		{
			FreeTask(SONIC_SKY);
			SONIC_SKY = 0;
		}
		if (TIKAL_SKY)
		{
			FreeTask(TIKAL_SKY);
			TIKAL_SKY = 0;
		}
		effect_delete(10);
		effect_delete(11);
		effect_delete(12);
		effect_delete(13);
		effect_delete(14);
		effect_delete(15);
		effect_delete(16);
		if (BOM)
		{
			FreeTask(BOM);
			BOM = 0;
		}
		deleteRotaryEmeraldTask();
		EV_FreeObject(&W_EME);
		EV_FreeObject(&B_EME);
		EV_FreeObject(&G_EME);
		EV_FreeObject(&P_EME);
		EV_FreeObject(&R_EME);
		EV_FreeObject(&S_EME);
		EV_FreeObject(&Y_EME);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		deleteModel(0);
		delete_eggmoble();
		EV_SetPos(player, 806.63f, 150.0f, -251.39999f);
		EV_SetAng(player, 0, 0xD265, 0);
		StgChaos7CtrlOff(0);
		Last1AHigh_Delete();
		if (BALL)
		{
			FreeTask(BALL);
			BALL = 0;
		}
		if (TIKAL_BALL)
		{
			FreeTask(TIKAL_BALL);
			TIKAL_BALL = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		SetTableBg_chaos7(ClipLevel);
		break;
	}
}