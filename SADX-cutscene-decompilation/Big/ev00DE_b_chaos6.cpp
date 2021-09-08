#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00DE[] = {
	(char*)("M_EM_YELLOW"), &M_EM_YELLOW_TEXLIST,
	(char*)("M_EM_SKY"), &M_EM_SKY_TEXLIST,
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("CHAOS4_COMMON"), &CHAOS4_COMMON_TEXLIST,
	(char*)("SHAPE_FROG"), &texlist_shape_frog
};

void ev00DE_b_chaos6(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		C_EME_Y = 0;
		C_EME_S = 0;
		FLASH = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(112);
		EventSe_Init(4);
		EV_InitPlayer(0);
		EV_CreatePlayer(5, SonicTheHedgehog, 185.0f, 766.0f, -199.0f, 0xF800, 8833, 0);
		EV_CreateObject(&C_EME_Y, 973.29999f, 126.5f, 823.5f, 0xFFF0, 0x19E0, 0x54);
		EV_CreateObject(&C_EME_S, 973.29999f, 126.5f, 823.5f, 0xFFF0, 0x19E0, 0x54);
		EV_CreateObjectFunc(&Frog, set_shapefrog, 51.200001f, 748.5f, -463.0f, 0, 0xA900, 0);
		EV_Wait(1);
		EV_SetPos(C_EME_Y, 4.8000002f, 740.5f, -440.60001f);
		EV_SetAng(C_EME_Y, 0x600, 0x9FF3, 0);
		EV_SetPos(C_EME_S, 2.8f, 740.5f, -440.60001f);
		EV_SetAng(C_EME_S, 0x600, 0x9FF3, 0);
		EV_SetPos(player, 62.5f, 747.5f, -456.60001f);
		EV_SetAng(player, 0x600, 0x9FF3, 0);
		sonic = EV_GetPlayer(5);
		EV_SetPos(sonic, -169.7f, 594.0f, -809.40002f);
		EV_SetAng(sonic, 0x300, 0x100, 0);
		EV_SetMode(Frog, 0);
		EV_SetMode(C_EME_Y, 0);
		EV_SetMode(C_EME_S, 0);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_shape_frog, 1.0f, 1, 0);
		EV_SetAction(C_EME_Y, &action_m_em_yellow, &M_EM_YELLOW_TEXLIST, 1.0f, 1, 1);
		EV_SetAction(C_EME_S, &action_m_em_yellow, &M_EM_SKY_TEXLIST, 1.0f, 1, 1);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 1);
		EV_SetShadow(Frog, 0.60000002f);
		create_eggmoble(77.400002f, 825.79999f, -429.10001f, 0, 0, 0);
		EV_Wait(3);
		CreateChaos4(5.3000002f, 745.0f, -500.70001f, 0, 0x6800, 0, 80);
		StgChaos6CtrlOn(-321.0f, 592.5f, -289.85001f, 0, 0, 0, 100);
		EV_Wait(1);
		ChangeMotionSpeedChaos4(1.0f);
		StgChaos6Human2Water();
		EV_SetPos(player, 62.5f, 747.5f, -456.60001f);
		EV_SetAng(player, 0x900, 0xA000, 0);
		BGM_Play(MusicIDs_evtbgm04);
		EventSe_Play(1, 1337, 1800);
		EventSe_Volume(1, 20, 1);
		EventSe_Pan(1, 20, 1);
		EV_CameraPos(1, 0, -40.450001f, 756.0f, -470.17999f);
		EV_CameraAng(1, 0, 0xFF54, 0xB0E5, 0xFFB2);
		EV_CameraPos(1, 110, -34.18f, 758.16998f, -495.35999f);
		EV_CameraAng(1, 110, 0x154, 0xBAE5, 0xFFB2);
		EV_Wait(125);
		EV_CameraPos(1, 0, -22.32f, 751.09998f, -518.40002f);
		EV_CameraAng(0, 0, 0xC29, 0x84A9, 0xFFE0);
		EV_CameraPos(0, 55, 15.93f, 766.0f, -529.79999f);
		EV_CameraAng(0, 55, 0x429, 0x6AA9, 0xFEE0);
		EV_Wait(55);
		EV_CameraPos(0, 50, 34.200001f, 775.40002f, -495.79999f);
		EV_CameraAng(0, 50, 0x1029, 0x4DA8, 0xFEE0);
		EV_Wait(50);
		EV_CameraPos(0, 85, 28.450001f, 769.92999f, -480.70001f);
		EV_CameraAng(0, 85, 0x1E29, 0x19A8, 0xFBE0);
		EV_Wait(25);
		EV_CameraPerspective(0, 140, 0x29F5);
		EV_Wait(85);
		EV_CameraPos(0, 0, 83.199997f, 749.67999f, -491.5f);
		EV_CameraAng(0, 0, 0xF29, 0x4BA8, 0xFEE0);
		EV_CameraPos(0, 80, 88.129997f, 749.44f, -466.20001f);
		EV_CameraAng(0, 80, 0x1329, 0x3DA8, 0xFEE0);
		EV_Wait(110);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 8);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		EV_CameraPos(1, 0, 61.0f, 756.0f, -487.0f);
		EV_CameraAng(1, 0, 0xB29, 0x81A9, 0xFFE0);
		EV_SerifPlay(1367);
		EV_Msg(msgTbl_ev00DE[TextLanguage][0]); //"\aSo! I see you're trying to escape! \n"...
		eggmoble_moveandturn(11.0f, 765.0f, -411.0f, 0, -22016, 0, 100, 0);
		EV_CameraAng(1, 60, 0xB29, 0x74C2, 0xFFE0);
		EV_Wait(120);
		ChgEggMobleMod(5);
		EV_SerifWait();
		EV_MsgCls();
		EV_SetPos(player, 62.5f, 747.5f, -456.60001f);
		EV_SetAng(player, 0x600, 0x92F3, 0);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 27.799999f, 778.59998f, -477.60001f);
		EV_CameraAng(1, 0, 0, 0x1F3, 0);
		EV_SerifPlay(1368);
		EV_Msg(msgTbl_ev00DE[TextLanguage][1]); //"\aChaos!   Grab him.   Get that frog!"
		EV_CameraAng(1, 25, 0x400, 0x10F3, 0);
		EV_Wait(23);
		EV_CameraPos(1, 8, 27.0f, 778.79999f, -479.39999f);
		EV_Wait(40);
		EV_LookFree(player);
		EV_CameraPos(1, 0, 39.5f, 765.5f, -479.95999f);
		EV_CameraPos(1, 100, 42.599998f, 757.59998f, -475.29999f);
		EV_CameraTargetObj(1, 0, Frog, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(40);
		EV_MsgClose();
		EV_SetPos(C_EME_S, 18.5f, 781.0f, -415.39999f);
		EV_SetAng(C_EME_S, 0, 0, 0);
		EV_SetAction(GetEggMobleTask(), &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.1f, 1, 0);
		EV_SerifPlay(1369);
		EV_Msg(msgTbl_ev00DE[TextLanguage][2]); //"\aAnd don't forget the Chaos Emerald."
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 14.3f, 781.91998f, -414.0f);
		EV_CameraAng(1, 0, 0xEDB3, 0x6031, 0);
		EV_Wait(20);
		EV_CameraPos(0, 17, 21.700001f, 785.35999f, -419.88f);
		EV_CameraAng(0, 17, 0xEDB3, 0x6531, 0);
		EV_Wait(60);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, 56.467999f, 747.63f, -460.75f);
		EV_CameraAng(1, 0, 0x56A, 0x2474, 0);
		EV_CameraAng(1, 140, 0x146A, 0x2474, 2048);
		EV_CameraPerspective(1, 1, 0x1DDE);
		EV_Wait(170);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		EV_CameraPos(1, 0, 51.900002f, 753.29999f, -480.79999f);
		EV_CameraAng(1, 0, 0xF66A, 0x7C74, 0);
		EV_CameraPos(1, 80, 51.400002f, 752.0f, -475.0f);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_shape_frog, 1.8f, 1, 0);
		EV_Wait(30);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_shape_frog, 3.3f, 1, 0);
		EV_Wait(30);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_shape_frog, 4.0f, 1, 0);
		EV_Wait(20);
		EV_CameraPos(1, 0, 48.700001f, 748.63f, -455.29999f);
		EV_CameraAng(1, 0, 0xFB6A, 0xEED9, 0);
		EV_CameraPos(1, 80, 44.369999f, 749.52002f, -459.0f);
		EV_CameraAng(1, 80, 0xFB6A, 0xDAD9, 0);
		EV_Wait(25);
		chg_frogshape(1);
		EV_Wait(55);
		chg_frogshape(6);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_shape_frog, 0.89999998f, 1, 0);
		EV_Wait(10);
		EV_SetPos(C_EME_Y, 51.200001f, 748.5f, -463.0f);
		EV_SetAng(C_EME_Y, 0, 0, 0);
		EV_CameraPos(1, 60, 41.630001f, 747.5f, -465.17999f);
		EV_CameraAng(1, 60, 0xE6A, 0xBCD9, 0);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_shape_frog, 0.5f, 1, 0);
		EV_Wait(40);
		chg_frogshape(0);
		EV_Wait(20);
		crushLightOn(C_EME_Y->twp->pos.x, C_EME_Y->twp->pos.y, C_EME_Y->twp->pos.z - 0.5f, 2, 22, 0.2f, 0.69999999f, 0xFFFFFF64, 0xFFFF1Eu);
		moveObject(C_EME_Y, 51.200001f, 748.34998f, -463.0f, 49.110001f, 748.34998f, -466.0f, 110);
		EV_Wait(140);
		EV_CameraPos(0, 0, 47.400002f, 749.33002f, -490.60001f);
		EV_CameraAng(0, 0, 0x600, 0x88FB, 0x80);
		EV_CameraPos(0, 70, 35.66f, 750.09998f, -497.39999f);
		EV_CameraAng(0, 70, 0x600, 0x88FB, 0x80);
		EV_Wait(20);
		crushLightOff();
		EV_Wait(50);
		EV_SetPath(C_EME_Y, &epathtag_CEMY00DE, 0.079999998f, 0);
		EV_CameraTargetObj(1, 20, C_EME_Y, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(40);
		EV_SetPath(C_EME_S, &epathtag_CEMS00DE, 0.25f, 0);
		EV_CameraPos(0, 140, 55.799999f, 745.5f, -501.39999f);
		EV_CameraTargetObj(1, 20, C_EME_S, 0.0f, 0.0f, 0.0f, 0);
		EventSe_Play(1, 1333, 1800);
		EventSe_Volume(1, 110, 1);
		EventSe_Pan(1, -30, 1);
		EV_Wait(30);
		BGM_Play(MusicIDs_evtbgm01);
		crushLightOn(11.0f, 780.0f, -497.20001f, 3, 10, 0.40000001f, 2.0f, 0xFFFFFF64, 0xFFFF1Eu);
		EV_Wait(15);
		crushLightOff();
		crushLightOn(14.77f, 777.07001f, -494.97f, 3, 11, 0.5f, 2.5999999f, 0xFF1E1EFF, 0x8282FFu);
		EV_Wait(70);
		FLASH = COverlayCreate(0.000019999999f, 0.30000001f, 1.0f, 1.0f, 1.0f);
		EV_FreeObject(&C_EME_Y);
		EV_FreeObject(&C_EME_S);
		DeleteChaos4();
		StgChaos6SetPos(-5.3000002f, 745.0f, -500.70001f);
		StgChaos6SetAng(0, 0x6800, 0);
		StgChaos6Water2Human();
		EV_SetAction(GetEggMobleTask(), &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.1f, 1, 0);
		EV_SetAction(player, &action_b_b0020_big, &BIG_TEXLIST, 1.2f, 1, 0);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 23.700001f, 751.09998f, -470.70001f);
		EV_CameraAng(1, 0, 0x700, 0x12D1, 0x18);
		EV_CameraPos(0, 25, 26.700001f, 784.59998f, -464.39999f);
		EV_CameraAng(0, 25, 0xEA00, 0x12D1, 0x18);
		crushLightOff();
		EV_Wait(30);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.0099999998f);
		}
		EV_CameraPos(0, 80, 51.299999f, 757.79999f, -436.39999f);
		EV_CameraAng(0, 80, 0, 0x18D1, 0x18);
		EV_Wait(80);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.0000000099999999f);
		}
		EventSe_Stop(1);
		EV_SetAction(player, &action_b_b0020_big, &BIG_TEXLIST, 1.4f, 1, 0);
		EV_LookFree(player);
		EV_CameraPos(1, 0, 15.0f, 783.79999f, -420.60001f);
		EV_CameraAng(1, 0, 0xF200, 0x6D0C, 0);
		EV_CameraPos(1, 90, 14.6f, 782.79999f, -417.5f);
		EV_CameraAng(1, 90, 0xF254, 0x6D0C, 0);
		EV_SerifPlay(1371);
		EV_Msg(msgTbl_ev00DE[TextLanguage][3]); //"\aAll right!   And now for the frog."
		EV_SerifWait();
		EV_MsgCls();
		EV_CameraPos(1, 0, 56.799999f, 750.20001f, -473.14999f);
		EV_CameraAng(1, 0, 0xFD50, 0x7E0C, 0);
		EV_CameraPos(0, 8, 50.799999f, 750.20001f, -473.45001f);
		EV_Wait(17);
		EV_CameraPos(1, 0, 15.0f, 778.92999f, -416.5f);
		EV_CameraAng(1, 0, 0xFF50, 0x680C, 0);
		EV_CameraAng(1, 80, 0x550, 0x680C, 0);
		EV_SerifPlay(1370);
		EV_Msg(msgTbl_ev00DE[TextLanguage][4]); //"\aThe frog is possessed by your tail. "
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_shape_frog, 1.5f, 1, 0);
		EV_Wait(85);
		EV_CameraPos(1, 0, 58.599998f, 758.0f, -470.53f);
		EV_CameraAng(1, 0, 0xD50, 0x8F0C, 0);
		EV_SerifWait();
		EV_CameraTargetFree();
		EV_Msg(msgTbl_ev00DE[TextLanguage][5]); //"\aOnce you get your tail, \nyou'll be c"...
		EV_SerifPlay(1372);
		EV_CameraPos(1, 0, 5.9000001f, 753.5f, -451.0f);
		EV_CameraAng(1, 0, 0x1154, 0x220C, 0);
		EV_CameraPos(0, 50, 28.299999f, 752.70001f, -470.16f);
		EV_Wait(50);
		EV_CameraPos(1, 0, 13.7f, 788.5f, -419.79999f);
		EV_CameraAng(1, 0, 0xE354, 0x770C, 0);
		EV_CameraPos(0, 50, 13.0f, 786.0f, -416.79999f);
		EV_Wait(90);
		EV_CameraPos(1, 0, 52.700001f, 753.5f, -471.70001f);
		EV_CameraAng(1, 0, 0x1154, 0x9A0C, 0xFB00);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, 32.200001f, 795.79999f, -474.29999f);
		EV_CameraAng(1, 0, 0xEA54, 0x270C, 0xFB00);
		EV_CameraPos(1, 40, 38.73f, 771.79999f, -471.0f);
		EV_CameraAng(1, 40, 0xF854, 0x270C, 0);
		EV_Wait(40);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.4f, 1, 0);
		EV_CameraPos(1, 0, 56.900002f, 750.0f, -463.10999f);
		EV_CameraAng(1, 100, 0x56, 0x2D0C, 0);
		EV_CameraAng(1, 100, 0x454, 0x2D0C, 0);
		EV_CameraPerspective(1, 100, 0x24FA);
		EV_Wait(120);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		EV_CameraPos(1, 0, 80.870003f, 763.0f, -460.70001f);
		EV_CameraAng(1, 0, 0xF6CC, 0x40DA, 0x100);
		EV_CameraPos(1, 100, 80.599998f, 763.09998f, -466.70001f);
		EV_CameraAng(1, 100, 0xF7C8, 0x3ADA, 0x200);
		EV_SetAction(Frog, &_action_f_f0002_frog, &texlist_shape_frog, 1.0f, 1, 0);
		moveObject(Frog, 53.0f, 750.0f, -461.20001f, 2.8f, 773.0f, -486.0f, 130);
		EV_WaitMove(Frog);
		EV_Wait(120);
		EV_SetAction(Frog, &action_f_f0010_frog, &texlist_shape_frog, 1.0f, 1, 0);
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		FLASH = COverlayCreate(0.000019999999f, 0.30000001f, 0.60000002f, 0.60000002f, 1.0f);
		EV_CameraPos(1, 0, 8.8699999f, 773.70001f, -486.0f);
		EV_CameraAng(1, 0, 0x100, 0x3629, 0x400);
		EV_CameraPos(1, 90, 9.5699997f, 771.59998f, -481.29999f);
		EV_CameraAng(1, 90, 0x123C, 0x3000, 0x400);
		EV_Wait(40);
		chg_frogshape(2);
		EventSe_Oneshot(6, 60, 0, 0);
		EV_Wait(60);
		EventSe_Oneshot(6, 90, 0, 0);
		EV_CameraPos(1, 50, 6.8000002f, 771.59998f, -482.29999f);
		EV_CameraAng(1, 50, 0x53C, 0x3029, 0x400);
		EV_Wait(50);
		EV_MsgCls();
		EV_MsgClose();
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		EV_CameraPos(1, 0, -64.169998f, 761.70001f, -464.0f);
		EV_CameraAng(1, 0, 0x103C, 0xD229, 0x400);
		EV_CameraPos(1, 80, -82.300003f, 757.70001f, -506.0f);
		EV_CameraAng(1, 80, 0x163C, 0xC929, 0x400);
		crushLightOn(-35.400002f, 791.20001f, -523.90002f, 4, 10, 0.5f, 2.5999999f, 0xFFDCDCB4, 0xB4B428u);
		EV_Wait(20);
		EventSe_Play(2, 1334, 1800);
		EventSe_Volume(2, 128, 1);
		EventSe_Pan(2, 20, 1);
		FLASH = COverlayCreate(0.015f, 0.30000001f, 1.0f, 1.0f, 0.94999999f);
		EV_Wait(60);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.050000001f);
		}
		EV_CameraPos(1, 0, -70.169998f, 864.70001f, -497.0f);
		EV_CameraAng(1, 0, 0xE03C, 0xD729, 0x400);
		EV_CameraPos(0, 70, -28.17f, 820.70001f, -445.0f);
		EV_CameraAng(0, 70, 0x83C, 0x229, 0x400);
		EV_Wait(70);
		EV_CameraPos(0, 140, -7.6500001f, 849.70001f, -412.0f);
		EV_CameraAng(0, 140, 0xE83C, 0x329, 64768);
		EventSe_Stop(2);
		EventSe_Oneshot(1336, 128, -10, 0);
		EV_LookFree(player);
		EV_SetPos(sonic, 171.60001f, 747.0f, -397.39999f);
		EV_SetAng(sonic, 0, 0x9600, 0);
		EV_SetPos(player, 66.099998f, 759.5f, -458.29999f);
		EV_SetAng(player, 0x900, 0x9AF3, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[6], &SONIC_TEXLIST, 1.2f, 1, 0);
		EV_Wait(5);
		EV_Wait(40);
		EventSe_Oneshot(1335, 128, -10, 0);
		EV_Wait(40);
		crushLightOff();
		EV_MovePoint2(sonic, 70.599998f, 747.0f, -477.0f, 1.6f, 0.1f);
		EV_Wait(40);
		EV_CameraPos(1, 0, 39.5f, 756.70001f, -469.39999f);
		EV_CameraAng(1, 0, 0x500, 0xB129, 0);
		EV_CameraAng(1, 90, 0x500, 0xBB29, 0);
		BGM_Play(MusicIDs_thesonic);
		EV_WaitMove(sonic);
		EventSe_Oneshot(18, 100, 0, 0);
		EV_SetAng(sonic, 0xF800, 0xB500, 0);
		EV_SetAction(sonic, SONIC_ACTIONS[7], &SONIC_TEXLIST, 1.4f, 0, 16);
		EV_WaitAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CAAAAAAAAAAAAAAAAAAAAA");
		EV_SerifPlay(1373);
		EV_Msg(msgTbl_ev00DE[TextLanguage][6]); //"\aUnbelievable!   \nLook what happened!"...
		EV_SerifWait();
		EV_Wait(30);
		EV_ClrAction(player);
		EV_CameraPos(1, 0, 80.5f, 747.70001f, -457.39999f);
		EV_CameraAng(1, 0, 0x1303, 0x2C27, 0);
		EV_CameraPos(1, 100, 113.6f, 747.5f, -460.54999f);
		EV_CameraAng(1, 100, 0xC03, 0x3727, 0);
		EV_CameraPerspective(1, 90, 0x25B0);
		EV_Wait(1);
		EV_SerifPlay(1374);
		EV_Msg(msgTbl_ev00DE[TextLanguage][7]); //"\aChaos has transformed again."
		EV_Wait(100);
		EV_SerifWait();
		EV_SerifPlay(1375);
		EV_Msg(msgTbl_ev00DE[TextLanguage][8]); //"\aHuh? "
		EV_SerifWait();
		EV_LookFree(player);
		EV_Wait(20);
		EV_CameraPos(1, 24, 95.599998f, 752.70001f, -456.54999f);
		EV_CameraAng(1, 24, 0xA03, 0x4C27, 0);
		EV_SerifPlay(1376);
		EV_Msg(msgTbl_ev00DE[TextLanguage][9]); //"\aHahaha!!! "
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.69999999f, 0, 16);
		EV_Wait(10);
		EV_MovePoint2(sonic, 68.599998f, 747.0f, -477.0f, 0.80000001f, 0.059999999f);
		EV_WaitAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_SetAng(sonic, 0, 0xC000, 0);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		EV_CameraPos(1, 0, 30.959999f, 777.70001f, -411.89999f);
		EV_CameraAng(1, 0, 0x2DD, 0x480C, 0);
		EV_CameraPos(1, 20, 27.4f, 778.12f, -416.60001f);
		EV_CameraAng(1, 20, 0x5DD, 0x500C, 0);
		EV_CameraPerspective(1, 1, 0x1C72);
		EV_SerifPlay(1377);
		EV_Msg(msgTbl_ev00DE[TextLanguage][10]); //"\aUh oh!   Gotta go!"
		EV_Wait(20);
		EV_CameraPos(1, 34, 19.9f, 782.40002f, -420.29999f);
		EV_CameraAng(1, 34, 0xFADD, 0x620C, 0);
		EV_Wait(40);
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		EV_SerifPlay(1378);
		EV_Msg(msgTbl_ev00DE[TextLanguage][11]); //"\aFroggy? "
		EV_CameraPos(1, 0, 89.400002f, 762.0f, -470.0f);
		EV_CameraAng(1, 0, 0x884, 0x4351, 0);
		EV_SetPos(player, 62.5f, 747.5f, -456.60001f);
		EV_SetAng(player, 0xFCD0, 0xA0BA, 0);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_Wait(1);
		EV_CameraAng(1, 70, 0x884, 0x3E51, 0);
		EV_Wait(70);
		EV_SetPos(Frog, -18.700001f, 775.59998f, -488.0f);
		EV_SetAng(Frog, 0, 0x5700, 0);
		EV_SetAng(sonic, 0, 0x9600, 0);
		EV_CameraPos(1, 0, 8.8999996f, 775.5f, -446.56f);
		EV_CameraAng(1, 0, 0x84, 0x1A51, 0);
		EV_CameraPos(1, 80, 2.9000001f, 775.5f, -454.56f);
		EV_CameraAng(1, 80, 0x84, 0x1851, 0);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CCAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
		EV_SerifPlay(1379);
		EV_Msg(msgTbl_ev00DE[TextLanguage][12]); //"\aI'll save you...   Don't worry, pally"...
		EV_SerifWait();
		EV_SetAng(player, 0, 0xAC00, 0);
		EV_SetAng(sonic, 0, 0xA400, 0);
		EV_LookObject(sonic, player, 0.0f, 8.0f, 0.0f);
		EV_SerifPlay(1380);
		EV_Msg(msgTbl_ev00DE[TextLanguage][13]); //"\aSo he's your friend, eh?"
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		EV_CameraPos(1, 0, 42.0f, 767.59998f, -457.89999f);
		EV_CameraAng(1, 0, 0xF184, 0xC551, 0);
		EV_ClrFace(sonic);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "CDAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(sonic, "D");
		}
		EV_Wait(5);
		EV_Wait(5);
		EV_SetAction(player, &action_b_b0013_big, &BIG_TEXLIST, 0.89999998f, 0, 8);
		EV_SetAction(player, &action_b_b0014_big, &BIG_TEXLIST, 1.0f, 1, 0);
		EV_Wait(40);
		EV_MsgCls();
		EV_MsgClose();
		EV_LookFree(sonic);
		EV_ClrFace(sonic);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "AAAAAAAAAAAAAAAAAAAAA");
		}
		EV_SetAng(sonic, 0, 0xA400, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(sonic);
		}
		EV_SetFace(sonic, "DCDEAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA");
		EV_SerifPlay(1381);
		EV_Msg(msgTbl_ev00DE[TextLanguage][14]); //"\aNo sweat... I'll get him back!\nWatch"...
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 1);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_LookFree(player);
		EV_Wait(140);
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[6], &SONIC_TEXLIST, 1.4f, 1, 0);
		EV_CameraPos(1, 0, 69.099998f, 755.59998f, -429.60001f);
		EV_CameraAng(1, 0, 0x584, 0x1B51, 0);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(1, 80, 90.199997f, 755.59998f, -446.5f);
		EV_CameraAng(1, 80, 0x984, 0x2751, 0);
		EV_MovePoint2(sonic, -89.5f, 766.5f, -520.29999f, 0.46000001f, 0.059999999f);
		EV_Wait(80);
		EV_SetPos(player, 62.5f, 747.5f, -456.60001f);
		EV_SetAng(player, 0x900, 0xA000, 0);
		EV_CameraPos(1, 0, 40.0f, 760.29999f, -512.79999f);
		EV_CameraAng(1, 0, 0xFC1D, 0x999A, 0xFFB2);
		EV_CameraPos(1, 80, 27.6f, 752.20001f, -498.47f);
		EV_CameraAng(1, 80, 0x190, 0x9C5A, 0xFFB0);
		EV_Wait(80);
		EV_CameraPos(1, 0, 49.400002f, 764.29999f, -456.79999f);
		EV_CameraAng(1, 0, 0xF41D, 0xCA9A, 0);
		EV_CameraPos(1, 30, 55.400002f, 765.53998f, -449.10001f);
		EV_CameraAng(1, 30, 0xF81D, 0xBC9A, 0);
		EV_SerifPlay(1382);
		EV_Msg(msgTbl_ev00DE[TextLanguage][15]); //"\aCareful Froggy!  Don't worry.  \nWe'l"...
		EV_Wait(30);
		EV_CameraPos(1, 0, 42.959999f, 748.29999f, -457.72f);
		EV_CameraAng(1, 0, 0x123A, 0xBE62, 0xFFB2);
		EV_CameraPos(0, 60, 42.299999f, 760.0f, -467.39999f);
		EV_CameraAng(0, 60, 0xFD3A, 0xAF62, 0xFFB2);
		EV_Wait(60);
		EV_CameraPos(0, 60, 49.799999f, 761.29999f, -464.20001f);
		EV_CameraAng(0, 60, 0x23A, 0xAF62, 0xFFB2);
		EV_Wait(60);
		EventSe_Oneshot(1335, 128, -10, 0);
		EV_CameraPos(1, 0, 113.0f, 756.70001f, -438.89999f);
		EV_CameraAng(1, 0, 0xD3A, 0x2F62, 0xFFB2);
		EV_CameraPos(1, 70, 114.5f, 749.09998f, -449.0f);
		EV_CameraAng(1, 70, 0xF3A, 0x2F62, 0xFFB2);
		EV_Wait(160);
		EventSe_Stop(1);
		EV_SerifWait();
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_MsgCls();
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_InitPlayer(0);
		EV_SerifStop();
		DeleteChaos4();
		EV_RemovePlayer(5);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		EV_FreeObject(&C_EME_Y);
		EV_FreeObject(&C_EME_S);
		EV_FreeObject(&Frog);
		delete_eggmoble();
		crushLightOff();
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		StgChaos6CtrlOff();
		EV_ClrPath(C_EME_Y);
		EV_ClrPath(C_EME_S);
		EventSe_Close();
		EV_Wait(1);
		break;
	}
}