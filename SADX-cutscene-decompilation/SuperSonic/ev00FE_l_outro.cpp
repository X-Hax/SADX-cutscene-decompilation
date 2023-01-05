#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00FE[] = {
	(char*)("CHAOS0"),BOSSCHAOS0_TEXLISTS[0],
	(char*)("EV_ALIFE"), ADV03_TEXLISTS[0],
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("LAST1A_HIGHWAY_A"), &LAST1A_HIGHWAY_A_TEXLIST,
	(char*)("WING_P"), &texlist_wing_p,
	0
};

void ev00FE_l_outro(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		AL_01 = 0;
		AL_02 = 0;
		AL_03 = 0;
		AL_04 = 0;
		AL_05 = 0;
		AL_06 = 0;
		AL_07 = 0;
		bird = 0;
		SONIC_SKY = 0;
		MILES_SKY = 0;
		KNUCKLES_SKY = 0;
		AMY_SKY = 0;
		BIG_SKY = 0;
		TIKAL_SKY = 0;
		SONIC_2SKY = 0;
		MILES_2SKY = 0;
		KNUCKLES_2SKY = 0;
		SONIC_3SKY = 0;
		SONIC_4SKY = 0;
		B_OUT = 0;
		W_OUT = 0;
		B_IN = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		B_IN = COverlayCreate(1.0f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(1);
		GetPlayerWorkPtr(0)->equipment &= ~Upgrades_SuperSonic; //Disable Super Sonic
		EV_InitPlayer(0);
		Last1AHigh_Create();
		SetBankDir(120);
		EventSe_Init(1);
		EV_SetPos(player, 696.78998f, 156.0f, -762.0f);
		EV_SetAng(player, 0, 0x6754, 0);
		EV_Wait(1);
		EV_CreatePlayer(2, Tikal, 1015.0f, 84.0f, -825.0f, 0, 0xE500, 0);
		EV_CreatePlayer(4, MilesTalesPrower, 703.0f, 156.0f, -755.0f, 0, 0x67C7, 0);
		EV_CreatePlayer(5, KnucklesTheEchidna, 689.15997f, 156.0f, -770.25f, 0, 0x6754, 0);
		CreateChaos0(720.0f, 96.0f, -840.0f, 0, 0xA000, 0, 60);
		EV_CreateObjectFunc(&AL_01, EV_Alife, 740.0f, 101.3f, -1030.5699f, 0, 0x4000, 0);
		EV_CreateObjectFunc(&AL_02, EV_Alife, 732.0f, 101.3f, -1035.0f, 0, 0x4000, 0);
		EV_CreateObjectFunc(&AL_03, EV_Alife, 745.0f, 101.3f, -1040.5699f, 0, 0x4000, 0);
		EV_CreateObjectFunc(&AL_04, EV_Alife, 848.66998f, 101.3f, -788.0f, 0, 0xE800, 0);
		EV_CreateObjectFunc(&AL_05, EV_Alife, 856.0f, 101.3f, -781.0f, 0, 0xE800, 0);
		EV_CreateObjectFunc(&AL_06, EV_Alife, 861.66998f, 100.3f, -775.0f, 0, 0xE800, 0);
		EV_CreateObjectFunc(&AL_07, EV_Alife, 869.66998f, 100.3f, -795.0f, 0, 0xE800, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		SONIC_SKY = CSkyWalk_create2(player, 156.0f);
		tails = EV_GetPlayer(4);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		MILES_SKY = CSkyWalk_create2(tails, 156.0f);
		knuckles = EV_GetPlayer(5);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		KNUCKLES_SKY = CSkyWalk_create2(knuckles, 156.0f);
		tikal = EV_GetPlayer(2);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_ti_wait, &TIKAL_TEXLIST, 0.5f, 1, 0);
		SetSclChaos0(0.60000002f, 0.60000002f, 0.60000002f);
		EV_Wait(1);
		CngMotStand2Chaos0();
		EV_SetMode(AL_01, 0);
		EV_SetMode(AL_02, 0);
		EV_SetMode(AL_03, 0);
		EV_SetMode(AL_04, 0);
		EV_SetMode(AL_05, 0);
		EV_SetMode(AL_06, 0);
		EV_SetMode(AL_07, 0);
		CHAOS = GetChaos0();
		EV_LookObject(player, CHAOS, 0.0f, 50.0f, 0.0f);
		EV_LookObject(tails, CHAOS, 0.0f, 50.0f, 0.0f);
		EV_LookObject(knuckles, CHAOS, 0.0f, 50.0f, 0.0f);
		BGM_Play(MusicIDs_evtbgm00);
		EV_CameraPerspective(0, 1, 0x2AAB);
		EV_CameraPos(0, 0, 758.23999f, 245.88f, -843.28003f);
		EV_CameraAng(0, 0, 0x500, 0x3F00, 0);
		EV_Wait(45);
		if (B_IN)
		{
			COverlaySetSpeed(B_IN, -0.0055555557f);
		}
		EV_CameraPos(1, 180, 740.73999f, 103.95f, -843.70001f);
		EV_CameraAng(1, 180, 0x500, 0x3F00, 0);
		EV_SetAction(AL_01, &action_al_walk_al_model, ADV03_TEXLISTS[0], 0.5f, 1, 0);
		EV_Wait(8);
		EV_SetAction(AL_02, &action_al_walk_al_model, ADV03_TEXLISTS[0], 0.5f, 1, 0);
		EV_Wait(8);
		EV_SetAction(AL_03, &action_al_walk_al_model, ADV03_TEXLISTS[0], 0.5f, 1, 0);
		EV_Wait(8);
		EV_SetAction(AL_04, &action_al_walk_al_model, ADV03_TEXLISTS[0], 0.5f, 1, 0);
		EV_Wait(8);
		EV_SetAction(AL_05, &action_al_walk_al_model, ADV03_TEXLISTS[0], 0.5f, 1, 0);
		EV_Wait(8);
		EV_SetAction(AL_06, &action_al_walk_al_model, ADV03_TEXLISTS[0], 0.5f, 1, 0);
		EV_Wait(8);
		EV_SetAction(AL_07, &action_al_walk_al_model, ADV03_TEXLISTS[0], 0.5f, 1, 0);
		EV_Wait(8);
		EV_Wait(140);
		if (B_IN)
		{
			FreeTask(B_IN);
			B_IN = 0;
		}
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, 743.78003f, 106.38f, -812.77002f);
		EV_CameraAng(0, 0, 0, 0x1D00, 0);
		EV_CameraPos(0, 100, 726.15002f, 106.38f, -807.13f);
		EV_CameraAng(0, 100, 0, 0x414, 0);
		EV_Wait(90);
		EV_CameraPos(0, 80, 725.15002f, 106.38f, -807.13f);
		EV_CameraAng(0, 80, 0, 0xFF14, 0);
		EV_Wait(45);
		EV_CameraPos(0, 0, 738.95001f, 103.38f, -978.02002f);
		EV_CameraAng(0, 0, 0, 0x400, 0);
		EV_CameraPos(0, 90, 746.90002f, 103.38f, -978.90002f);
		EV_Wait(5);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_SetAng(CHAOS, 0, 0x7900, 0);
		CngMotStand4Chaos0();
		EV_Wait(45);
		EV_CameraPos(0, 0, 706.84003f, 107.95f, -845.32001f);
		EV_CameraAng(0, 0, 0x200, 0xAD00, 0);
		EV_CameraPos(1, 80, 709.09003f, 107.95f, -849.78003f);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(20);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_CameraPos(0, 0, 809.26001f, 101.56f, -802.54999f);
		EV_CameraAng(0, 0, 0x200, 0xAC00, 0);
		EV_CameraPos(1, 120, 817.28998f, 101.56f, -817.53998f);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_SetPos(AL_01, 730.0f, 101.0f, -846.0f);
		EV_SetPos(AL_02, 736.0f, 101.0f, -838.0f);
		EV_SetPos(AL_03, 727.0f, 101.0f, -834.0f);
		EV_SetAng(AL_01, 0, 0x3500, 0);
		EV_SetAng(AL_02, 0, 0x5000, 0);
		EV_SetAng(AL_03, 0, 0x5500, 0);
		EV_SetPos(AL_04, 723.0f, 101.0f, -852.0f);
		EV_SetPos(AL_05, 716.0f, 101.0f, -848.5f);
		EV_SetPos(AL_06, 730.0f, 101.0f, -855.0f);
		EV_SetPos(AL_07, 736.0f, 101.0f, -847.0f);
		EV_SetAng(AL_04, 0, 0, 0);
		EV_SetAng(AL_05, 0, 0xE000, 0);
		EV_SetAng(AL_06, 0, 0x3000, 0);
		EV_SetAng(AL_07, 0, 0x3500, 0);
		EV_ClrAction(AL_01);
		EV_ClrAction(AL_02);
		EV_ClrAction(AL_03);
		EV_ClrAction(AL_04);
		EV_ClrAction(AL_05);
		EV_ClrAction(AL_06);
		EV_ClrAction(AL_07);
		EV_SetAction(AL_01, &action_al_e0001_al_model, ADV03_TEXLISTS[0], 0.80000001f, 1, 0);
		EV_SetAction(AL_02, &action_al_e0002_al_model, ADV03_TEXLISTS[0], 0.69999999f, 1, 0);
		EV_SetAction(AL_03, &action_al_e0003_al_model, ADV03_TEXLISTS[0], 0.60000002f, 1, 0);
		EV_SetAction(AL_04, &action_al_e0001_al_model, ADV03_TEXLISTS[0], 0.69999999f, 1, 0);
		EV_SetAction(AL_05, &action_al_e0002_al_model, ADV03_TEXLISTS[0], 0.89999998f, 1, 0);
		EV_SetAction(AL_06, &action_al_e0003_al_model, ADV03_TEXLISTS[0], 0.69999999f, 1, 0);
		EV_SetAction(AL_07, &action_al_e0001_al_model, ADV03_TEXLISTS[0], 0.80000001f, 1, 0);
		EV_SetAng(CHAOS, 0, 0xA000, 0);
		CngMotStand2Chaos0();
		EV_CameraPos(0, 0, 727.65002f, 115.83f, -822.57001f);
		EV_CameraAng(0, 0, 0xED00, 0x700, 0);
		EV_CameraPos(1, 150, 734.96997f, 137.41f, -780.33002f);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 100, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 90, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 90, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 80, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 80, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 70, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 70, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 60, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 60, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 50, 0, 0);
		CngMotStand4Chaos0();
		EV_CameraAng(0, 0, 0x400, 0x7400, 0);
		EV_CameraPos(0, 0, 736.32001f, 102.57f, -883.85999f);
		EventSe_Oneshot(1334, 40, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 40, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 40, 0, 0);
		EV_CameraAng(0, 45, 0x10BB, 0x7400, 0);
		EventSe_Oneshot(1334, 60, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 60, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 60, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 60, 0, 0);
		EV_Wait(15);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 50, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1334, 60, 0, 0);
		EV_CameraPos(0, 0, 712.46002f, 131.56f, -821.25f);
		EV_CameraAng(0, 0, 0x1300, 0x7500, 0);
		EventSe_Oneshot(1334, -20, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, -20, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1334, -20, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, -20, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1334, -20, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, -20, 0, 0);
		EV_Wait(20);
		EV_CameraPos(0, 0, 715.15002f, 146.57001f, -785.09998f);
		EV_CameraAng(0, 0, 0x1200, 0x5D00, 0);
		EV_CameraPos(0, 450, 727.17999f, 146.57001f, -771.15002f);
		EV_SetFace(knuckles, "CDECDE");
		EV_Wait(5);
		EV_SerifPlay(1505);
		EV_Msg(msgTbl_ev00FE[TextLanguage][0]); //"\aChaos has changed again.\nThis time f"...
		EV_SerifWait();
		EV_ClrFace(knuckles);
		EV_Wait(15);
		EV_SetFace(tails, "GGG");
		EV_Wait(5);
		EV_SerifPlay(1506);
		EV_Msg(msgTbl_ev00FE[TextLanguage][1]); //"\aYeah!  Super Sonic must have \nneutra"...
		EV_Wait(2);
		EV_ClrFace(tails);
		EV_Wait(15);
		EV_SetFace(tails, "GGGGGG");
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgClose();
		EV_Wait(60);
		CngMotStand2Chaos0();
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, 718.78003f, 114.91f, -815.12f);
		EV_CameraAng(0, 0, 0xF500, 0xF700, 0);
		EV_Wait(15);
		EV_CameraPos(0, 280, 713.91998f, 121.04f, -793.48999f);
		EV_SerifPlay(1507);
		BGM_Stop();
		EV_Wait(1);
		BGM_Play(MusicIDs_evtbgm03);
		EV_Msg(msgTbl_ev00FE[TextLanguage][2]); //"\aThese are the Chao \nyou were protect"...
		EV_Wait(60);
		EV_MsgClose();
		efWhiteOn2(60, 15, 60);
		EV_Wait(65);
		EV_SetPos(tikal, 740.0f, 100.0f, -870.0f);
		EV_SetAng(tikal, 0, 0xE500, 0);
		EV_Wait(120);
		EV_CameraPos(0, 0, 731.23999f, 100.78f, -847.45001f);
		EV_CameraAng(0, 0, 0x900, 0xF200, 0);
		EV_CameraPos(1, 100, 733.29999f, 102.09f, -852.96002f);
		EV_Wait(100);
		EV_CameraPos(0, 0, 758.78998f, 103.9f, -884.76001f);
		EV_CameraAng(0, 0, 0x300, 0x5C00, 0);
		EV_CameraPos(0, 180, 767.40002f, 103.9f, -875.47998f);
		EV_SerifPlay(1508);
		EV_MsgW(180, msgTbl_ev00FE[TextLanguage][3]); //"\aThey stayed alive for generations\nan"...
		EV_Wait(180);
		EV_MsgClose();
		EV_CameraPos(0, 0, 734.96002f, 101.28f, -855.53003f);
		EV_CameraAng(0, 0, 0xE00, 0xF500, 0);
		EV_SetFace(tikal, "GGGGG");
		EV_Wait(5);
		EV_SerifPlay(1509);
		EV_Msg(msgTbl_ev00FE[TextLanguage][4]); //"\aThe fighting's over.\nHarmony's resto"...
		EV_Wait(2);
		EV_ClrFace(tikal);
		EV_Wait(15);
		EV_SetFace(tikal, "GGG");
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_Wait(15);
		EV_CameraPos(0, 0, 733.84998f, 101.74f, -843.37f);
		EV_CameraAng(0, 0, 0x1300, 0x4500, 0);
		EV_CameraPerspective(0, 120, 0x2000);
		EV_Wait(120);
		EV_SetAng(tikal, 0, 0xF500, 0);
		EV_SetAction(tikal, &action_j_j0040_tikal, &TIKAL_TEXLIST, 0.5f, 1, 32);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, 718.41998f, 115.0f, -791.13f);
		EV_CameraTargetObj(0, 0, tikal, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 100, 719.48999f, 133.53f, -794.98999f);
		EV_Wait(50);
		EV_SetFace(tikal, "GGGGG");
		EV_Wait(5);
		EV_SerifPlay(1510);
		EV_Msg(msgTbl_ev00FE[TextLanguage][5]); //"\aThank you so much!"
		EV_Wait(20);
		EV_ClrFace(tikal);
		EV_Wait(25);
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 756.84003f, 100.04f, -894.40002f);
		EV_CameraAng(1, 0, 0x900, 0x6B00, 0);
		EV_CameraPos(0, 90, 759.10999f, 120.53f, -898.40002f);
		EV_Wait(100);
		W_OUT = COverlayCreate(0.0033333334f, 0.0099999998f, 1.0f, 1.0f, 1.0f);
		EV_CameraPos(0, 0, 722.06f, 102.98f, -795.71997f);
		EV_CameraTargetObj(0, 0, tikal, 0.0f, 4.0f, -4.0f, 0);
		EV_CameraPos(1, 160, 688.28003f, 102.98f, -842.08002f);
		EV_SetShadow(tikal, 0.1f);
		GetPlayerWorkPtr(2)->shadow.scl = 0.0f;
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0036_tikal, &TIKAL_TEXLIST, 0.5f, 1, 32);
		EV_SetPos(tikal, 730.0f, 105.0f, -850.0f);
		EV_SetAng(tikal, 0, 0xE500, 0);
		TIKAL_SKY = CSkyWalk_create2(tikal, 105.0f);
		EV_SetPos(AL_01, 722.0f, 101.0f, -835.0f);
		EV_SetPos(AL_06, 720.0f, 101.0f, -858.0f);
		EV_SetPos(AL_07, 731.0f, 101.0f, -837.0f);
		EV_SetAng(AL_01, 0, 0x5500, 0);
		EV_SetAng(AL_06, 0, -0x500, 0);
		EV_SetAng(AL_07, 0, 0x5500, 0);
		EV_Wait(60);
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, 0.00019999999f);
		}
		EV_Wait(100);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 708.39001f, 107.32f, -847.21002f);
		EV_CameraAng(1, 0, 0x87C, 0xC149, 0);
		EV_SetAction(tikal, &action_j_j0037_tikal, &TIKAL_TEXLIST, 0.5f, 1, 32);
		CngMotFlyChaos0();
		EV_Wait(75);
		EV_CameraPos(1, 0, 726.39001f, 107.05f, -859.98999f);
		EV_CameraAng(1, 0, 0x474, 0x7349, 0);
		EV_CameraPos(1, 100, 736.46002f, 103.45f, -891.20001f);
		EV_Wait(100);
		EV_LookFree(player);
		EV_LookFree(tails);
		EV_LookFree(knuckles);
		EV_CameraPos(1, 0, 762.78003f, 102.89f, -817.71997f);
		EV_CameraAng(1, 0, 0x57C, 0x2749, 0);
		EventSe_Play(0, 1335, 1800);
		EventSe_Volume(0, -128, 1);
		EV_Wait(1);
		EventSe_Volume(0, 120, 180);
		EV_Wait(29);
		EV_CameraTargetObj(0, 120, tikal, 8.0f, 6.0f, 0.0f, 0);
		moveObject(tikal,
			tikal->twp->pos.x,
			tikal->twp->pos.y,
			tikal->twp->pos.z,
			tikal->twp->pos.x - 10.0f,
			tikal->twp->pos.y + 100.0f,
			tikal->twp->pos.z,
			300);
		EV_Wait(15);
		moveObject(CHAOS,
			CHAOS->twp->pos.x,
			CHAOS->twp->pos.y,
			CHAOS->twp->pos.z,
			CHAOS->twp->pos.x + 10.0f,
			CHAOS->twp->pos.y + 100.0f,
			CHAOS->twp->pos.z,
			400);
		EV_Wait(200);
		efWhiteOn2(60, 15, 60);
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, -0.0083333338f);
		}
		EV_Wait(61);
		if (TIKAL_SKY)
		{
			FreeTask(TIKAL_SKY);
			TIKAL_SKY = 0;
		}
		stopObject(tikal);
		stopObject(CHAOS);
		EV_RemovePlayer(2);
		DeleteChaos0();
		EventSe_Volume(0, -100, 60);
		EV_FreeObject(&AL_01);
		EV_FreeObject(&AL_02);
		EV_FreeObject(&AL_03);
		EV_FreeObject(&AL_04);
		EV_FreeObject(&AL_05);
		EV_FreeObject(&AL_06);
		EV_FreeObject(&AL_07);
		EV_CameraTargetFree();
		EV_Wait(70);
		EventSe_Stop(0);
		EV_LookFree(player);
		EV_LookFree(tails);
		EV_LookFree(knuckles);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, 728.97998f, 130.96001f, -796.21997f);
		EV_CameraAng(0, 0, 0x194C, 0x5816, 0);
		EV_CameraPos(0, 220, 742.34998f, 130.96001f, -776.29999f);
		EV_Wait(115);
		EV_CameraPos(0, 0, 708.15002f, 151.67f, -772.20001f);
		EV_CameraAng(0, 0, 0x194C, 0x5816, 0);
		EV_CameraPos(0, 150, 710.38f, 151.67f, -768.88f);
		EV_Wait(30);
		EV_LookPoint(player, 893.71002f, 400.0f, -1298.0699f);
		create_eggmoble(893.71002f, 350.0f, -1298.0699f, 0, 0x3400, 0);
		EV_Wait(10);
		EV_ClrAction(GetEggMobleTask());
		EV_Wait(10);
		seteggmobleparam(0.5f, 0x100);
		EV_CameraPos(0, 0, 690.26001f, 157.64f, -732.03003f);
		EV_CameraAng(0, 0, 0x74C, 0xF516, 0);
		EV_CameraPos(0, 100, 686.82001f, 229.47f, -719.48999f);
		EV_Wait(80);
		EV_CameraPos(0, 0, 910.16998f, 370.72f, -1211.5699f);
		EV_CameraAng(0, 0, 0xFA4C, 0x716, 0);
		EV_Wait(15);
		EV_CameraPos(0, 300, 916.71002f, 389.20001f, -1006.85f);
		EV_CameraAng(0, 200, 0x4C, 0xFC16, 0);
		eggmoble_moveandturn(893.71002f, 352.0f, -1298.0699f, 0, -0x8000, 0, 30, 1);
		EV_Wait(35);
		eggmoble_moveandturn(1386.8f, 600.0f, -2868.25f, 0, 0, 0, 300, 1);
		if (SONIC_SKY)
		{
			FreeTask(SONIC_SKY);
			SONIC_SKY = 0;
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
		EV_Wait(1);
		EV_SetPos(player, 691.78998f, 150.0f, -762.0f);
		EV_SetPos(tails, 698.0f, 150.0f, -755.0f);
		EV_SetPos(knuckles, 684.15997f, 150.0f, -770.25f);
		SONIC_2SKY = CSkyWalk_create2(player, 150.0f);
		MILES_2SKY = CSkyWalk_create2(tails, 150.0f);
		KNUCKLES_2SKY = CSkyWalk_create2(knuckles, 150.0f);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_CameraPos(0, 0, 691.06f, 155.17f, -771.22998f);
		EV_CameraAng(0, 0, 0x94C, 0x8716, 0);
		EV_CameraPos(0, 90, 691.56f, 155.85001f, -768.34998f);
		ChgEggMobleMod(5);
		EV_Wait(10);
		delete_eggmoble();
		EV_Wait(160);
		EV_CreatePlayer(6, AmyRose, 671.53998f, 150.0f, -533.45001f, 0, 0x5700, 0);
		EV_CreatePlayer(7, BigTheCat, 717.56f, 150.0f, -585.12f, 0, 0x4D00, 0);
		bird = SetEventBirdie1();
		EV_SetPos(bird, 671.53998f, 150.0f, -533.45001f);
		EV_SetAng(bird, 0, 0x5700, 0);
		EV_Wait(1);
		amy = EV_GetPlayer(6);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		AMY_SKY = CSkyWalk_create2(amy, 150.0f);
		big = EV_GetPlayer(7);
		EV_ClrAction(big);
		EV_SetAction(big, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		BIG_SKY = CSkyWalk_create2(big, 150.0f);
		EV_SetMode(bird, 0);
		EV_SetPos(bird, 669.53998f, 158.0f, -538.45001f);
		EV_SetAng(bird, 0, 0x5700, 0);
		EV_ClrAction(bird);
		EV_SetAction(bird, &action_w_p0001_wing_p, &texlist_wing_p, 1.0f, 1, 0);
		EV_Wait(1);
		EV_CameraPos(0, 0, 738.09003f, 158.31f, -581.88f);
		EV_CameraAng(0, 0, 0x94C, 0x3616, 0);
		EV_Wait(60);
		EV_CameraPos(0, 0, 677.47998f, 153.45f, -534.46997f);
		EV_CameraAng(0, 0, 0x124C, 0x3E16, 0);
		EV_CameraPos(0, 90, 677.39001f, 153.45f, -532.46997f);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_CameraPos(0, 0, 698.65997f, 157.17f, -761.76001f);
		EV_CameraAng(0, 0, 0xF94C, 0x7C16, 0);
		EV_SetAng(knuckles, 0, 0x4754, 0);
		if (AMY_SKY)
		{
			FreeTask(AMY_SKY);
			AMY_SKY = 0;
		}
		if (BIG_SKY)
		{
			FreeTask(BIG_SKY);
			BIG_SKY = 0;
		}
		EV_RemovePlayer(6);
		EV_RemovePlayer(7);
		EV_FreeObject(&bird);
		BGM_Stop();
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tails, "GGG");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tails, "G");
		}
		EV_Wait(5);
		EV_SerifPlay(1511);
		EV_Msg(msgTbl_ev00FE[TextLanguage][6]); //"\aAll's well that ends well, right?"
		EV_Wait(60);
		EV_ClrFace(tails);
		if (SONIC_2SKY)
		{
			FreeTask(SONIC_2SKY);
			SONIC_2SKY = 0;
		}
		EV_LookFree(player);
		EV_SetPos(player, 691.78998f, 135.0f, -762.0f);
		EV_SetAng(player, 0, 0xEA86, 0);
		SONIC_3SKY = CSkyWalk_create2(player, 135.0f);
		EV_Wait(30);
		EV_MsgClose();
		EV_SetAng(tails, 0, 0x87C7, 0);
		EV_CameraPos(0, 0, 689.37f, 179.42999f, -784.01001f);
		EV_CameraAng(0, 0, 0xDE4C, 0x8416, 0);
		EV_CameraPos(1, 300, 688.76001f, 186.06f, -790.08002f);
		EV_LookFree(tails);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0127_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(15);
		BGM_Play(MusicIDs_thesonic);
		EV_SerifPlay(1512);
		EV_Msg(msgTbl_ev00FE[TextLanguage][7]); //"\aSonic?"
		EV_Wait(50);
		EV_MsgClose();
		EV_Wait(30);
		if (SONIC_3SKY)
		{
			FreeTask(SONIC_3SKY);
			SONIC_3SKY = 0;
		}
		EV_Wait(1);
		EV_SetPos(player, -402.64999f, 556.85999f, -264.29001f);
		EV_ClrAction(player);
		SONIC_4SKY = CSkyWalk_create2(player, 522.0f);
		EV_CameraPos(0, 0, -324.32001f, 534.34003f, -300.59f);
		EV_CameraAng(0, 0, 0x84C, 0x6516, 0);
		EV_Wait(45);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV0001_S_JUMP);
		EV_Wait(10);
		if (SONIC_4SKY)
		{
			FreeTask(SONIC_4SKY);
			SONIC_4SKY = 0;
		}
		EV_CameraPos(0, 300, -34.669998f, 600.21997f, -673.35999f);
		EV_Wait(45);
		EventSe_Oneshot(0x300, 100, 0, 0);
		EV_SetPos(player, 764.98999f, 100.0f, -814.88f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(255);
		B_OUT = COverlayCreate(0.0083333338f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(120);
		break;
	case 2:
		EventSe_Close();
		stopObjectAll();
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		if (B_IN)
		{
			FreeTask(B_IN);
			B_IN = 0;
		}
		if (SONIC_SKY)
		{
			FreeTask(SONIC_SKY);
			SONIC_SKY = 0;
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
		if (AMY_SKY)
		{
			FreeTask(AMY_SKY);
			AMY_SKY = 0;
		}
		if (BIG_SKY)
		{
			FreeTask(BIG_SKY);
			BIG_SKY = 0;
		}
		if (TIKAL_SKY)
		{
			FreeTask(TIKAL_SKY);
			TIKAL_SKY = 0;
		}
		if (SONIC_2SKY)
		{
			FreeTask(SONIC_2SKY);
			SONIC_2SKY = 0;
		}
		if (MILES_2SKY)
		{
			FreeTask(MILES_2SKY);
			MILES_2SKY = 0;
		}
		if (KNUCKLES_2SKY)
		{
			FreeTask(KNUCKLES_2SKY);
			KNUCKLES_2SKY = 0;
		}
		if (SONIC_3SKY)
		{
			FreeTask(SONIC_3SKY);
			SONIC_3SKY = 0;
		}
		if (SONIC_4SKY)
		{
			FreeTask(SONIC_4SKY);
			SONIC_4SKY = 0;
		}
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(4);
		EV_RemovePlayer(5);
		EV_RemovePlayer(6);
		EV_RemovePlayer(7);
		delete_eggmoble();
		EV_FreeObject(&bird);
		EV_FreeObject(&AL_01);
		EV_FreeObject(&AL_02);
		EV_FreeObject(&AL_03);
		EV_FreeObject(&AL_04);
		EV_FreeObject(&AL_05);
		EV_FreeObject(&AL_06);
		EV_FreeObject(&AL_07);
		DeleteChaos0();
		efWhiteOff();
		EV_SetPos(player, 764.98999f, 100.0f, -814.88f);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}