#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00C7[] = {
	(char*)("EV_E101KAI"), &texlist_ev_e101kai,
	(char*)("WING_T"), &texlist_wing_t,
	(char*)("WING_P"), &texlist_wing_p,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	(char*)("ICM00C7"), &texlist_icm00C7,
	0
};

void ev00C7_e_outro(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		hoge1 = 0;
		WHITE = 0;
		WHITE2 = 0;
		BLACK1 = 0;
		BLACK2 = 0;
		BLACK3 = 0;
		E101KAI = 0;
		bird1 = 0;
		bird2 = 0;
		bird3 = 0;
		SMOKE1 = 0;
		SMOKE2 = 0;
		bomb1 = 0;
		bomb2 = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		if (enableUnusedCode) {
			LoadPVM("VER1_WING", &VER1_WING_TEXLIST); //Amy's flicky
		}
		EV_InitPlayer(0);
		SetBankDir(109);
		EventSe_Init(5);
		hoge1 = CIchimaie2_Create(&texlist_icm00C7, 0);
		CIchimaie2_SetTextureId(hoge1, 0);
		CIchimaie2_SetPriority(hoge1, -1.14f);
		bomb1 = Create_SphereBomb(-110.4f, 749.0f, -305.0f, 290, 2.0f, 380.0f);
		bomb2 = Create_SphereBomb(36.5f, 745.0f, -194.39999f, 550, 2.0f, 350.0f);
		EV_CameraPerspective(1, 1, 0x31C7);
		if (!SMOKE1)
		{
			SMOKE1 = CObjSmoke_Create();
		}
		if (!SMOKE2)
		{
			SMOKE2 = CObjSmoke_Create();
		}
		if (SMOKE1)
		{
			*(float*)(SMOKE1->twp->value.l + 44) = 0.2f;
			*(float*)(SMOKE1->twp->value.l + 48) = 0.5f;
			*(float*)(SMOKE1->twp->value.l + 52) = 0.5f;
			*(float*)(SMOKE1->twp->value.l + 56) = 0.5f;
		}
		if (SMOKE2)
		{
			*(float*)(SMOKE2->twp->value.l + 44) = 0.5f;
			*(float*)(SMOKE2->twp->value.l + 48) = 0.30000001f;
			*(float*)(SMOKE2->twp->value.l + 52) = 0.30000001f;
			*(float*)(SMOKE2->twp->value.l + 56) = 0.30000001f;
		}
		CreateBootSleep();
		EV_SetPos(player, -6.3299999f, 745.59998f, -219.78f);
		EV_SetAng(player, 0x317, 0xA620, 0);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 0.40000001f, 1, 8);
		bird1 = SetEventBirdie1();
		EV_SetPos(bird1, -100.0f, 5.5f, -5.5f);
		EV_SetAng(bird1, 0, 0x2000, 0);
		EV_SetMode(bird1, 0);
		bird2 = SetEventBirdie0();
		EV_SetPos(bird2, -100.0f, 0.5f, -5.5f);
		EV_SetAng(bird2, 0, 0x2000, 0);
		EV_SetMode(bird2, 0);
		bird3 = SetEventBirdie2();
		EV_SetPos(bird3, -100.0f, 0.5f, -5.5f);
		EV_SetAng(bird3, 0, 0x2000, 0);
		EV_SetMode(bird3, 0);
		EV_CreateObject(&E101KAI, -108.23f, 747.29999f, -306.56f, 464, 8443, 651);
		EV_Wait(1);
		EV_SetMode(E101KAI, 0);
		EV_SetPos(E101KAI, -108.23f, 797.29999f, -306.56f);
		EV_SetAng(E101KAI, 0x1D0, 0x2420, 0x28B);
		if (enableUnusedCode) {
			EV_SetAction(bird2, &action_w_w9001_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0); //Make Amy's flicky visible by giving it an action.
		}
		EV_SetAction(bird1, &action_w_t0004_wing_t, &texlist_wing_t, 1.0f, 1, 0);
		EV_SetAng(player, 791, 42528, 0);
		EV_CameraPos(1, 0, 10.408f, 757.24658f, -206.845f);
		EV_CameraAng(1, 0, 0xE00, 0x2C20, 0x600);
		EV_CameraPos(0, 90, 13.8f, 745.37598f, -220.75f);
		EV_CameraAng(0, 90, 0x1200, 0x3520, 0x600);
		EV_Wait(30);
		EventSe_Oneshot(810, -50, 0, 0);
		EV_SetAction(E101KAI, &action_saigo_e101kai_e101kai, &texlist_ev_e101kai, 1.3f, 0, 0);
		EV_Wait(20);
		EV_SetAction(E101KAI, &action_saigo_e101kai_e101kai, &texlist_ev_e101kai, 0.89999998f, 1, 0);
		EV_Wait(30);
		EV_SetAction(E101KAI, &action_taiki_e101kai_null11, &texlist_ev_e101kai, 0.40000001f, 1, 8);
		EV_Wait(10);
		EV_CameraPos(0, 120, 15.24f, 746.29999f, -225.17f);
		EV_CameraAng(0, 120, 0x11EA, 0x3AEF, 0x700);
		EV_Wait(90);
		moveObjectAngle2(
			E101KAI,
			-108.23f, 797.29999f, -306.56f,
			-108.23f,  785.29999f, -306.56f,
			0x1D0, 0x2420, 0x28B,
			0x9000, 0x9000, 0xE000,
			17);
		EV_Wait(20);
		moveObject(E101KAI, -108.23f, 785.29999f, -306.56f, -108.23f, 757.0f, -306.56f, 8);
		EV_Wait(8);
		EventSe_Oneshot(827, 0, 0, 0);
		moveObject(E101KAI, -108.23f, 757.0f, -306.56f, -108.23f, 760.0f, -306.56f, 2);
		EV_CameraAng(0, 1, 0x12EA, 0x3AEF, 0x700);
		EV_Wait(2);
		moveObject(E101KAI, -108.23f, 760.0f, -306.56f, -108.23f, 759.0f, -306.56f, 1);
		EV_CameraAng(0, 1, 0x10EA, 0x3AEF, 0x700);
		EV_Wait(1);
		EV_CameraAng(0, 1, 0x11EA, 0x3AEF, 0x700);
		EV_ClrAction(E101KAI);
		EV_SetAction(E101KAI, &action_saigo_e101kai_e101kai, &texlist_ev_e101kai, 1.0f, 0, 8);
		EV_SetAction(E101KAI, &action_taiki_e101kai_null11, &texlist_ev_e101kai, 0.40000001f, 1, 8);
		EV_Wait(70);
		EV_CameraPos(0, 50, 18.299999f, 748.78003f, -240.937f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0020_e102, &E102_TEXLIST, 0.64999998f, 1, 0);
		EventSe_Play(0, 827, 1800);
		EV_MovePoint2(player, -72.699997f, 745.59998f, -276.29999f, 0.57999998f, 0.60000002f);
		EV_Wait(50);
		EV_CameraPerspective(0, 66, 0x2AAB);
		EV_CameraPos(0, 0, -32.700001f, 762.59998f, -243.60001f);
		EV_CameraAng(0, 0, 0xF400, 0x2400, 0);
		EV_Wait(1);
		EV_CameraChase(player);
		EV_Wait(70);
		moveObjectAngle2(
			E101KAI,
			-108.23f, 759.0f, -307.0f,
			-108.23f, 759.0f, -307.0f,
			-0x7000, 0x9000, -0x2000,
			0x1D0, 0x1D00, 0x28B,
			10);
		EV_ClrAction(E101KAI);
		EV_SetAction(E101KAI, &action_hadou_e101kai_e101kai, &texlist_ev_e101kai, 1.0f, 0, 0);
		EV_Wait(44);
		EventSe_Oneshot(1335, 0, 0, 0);
		EventSe_Stop(0);
		BGM_Play(MusicIDs_e102);
		EV_SetPos(SMOKE1, -103.37f, 766.40002f, -302.23001f);
		EV_SetPos(SMOKE2, -103.3f, 757.70001f, -295.39001f);
		effect_create2(player, 0, -4.0f, 15.0f, 4.0f, &ev_effect_list3);
		effect_scl(2, 0.80000001f, 0.80000001f);
		EV_MoveFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0037_e102, &E102_TEXLIST, 0.80000001f, 0, 0);
		EV_Wait(2);
		moveObject(player, -72.115997f, 752.59998f, -275.79999f, -26.85f, 746.0f, -231.91f, 35);
		EV_CameraChaseFree();
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraPos(0, 0, -6.5840001f, 749.28998f, -228.23f);
		EV_CameraAng(0, 0, 0xC00, 0x3500, 0);
		EV_Wait(16);
		effect_delete(0);
		EV_Wait(19);
		effect_create2(0, 1, -108.23f, 759.0f, -306.56f, &ev_effect_list9);
		if (SMOKE1)
		{
			SMOKE1->twp->ang.y = 3;
			SMOKE1->twp->ang.x = 3;
		}
		if (SMOKE2)
		{
			SMOKE2->twp->ang.y = 4;
			SMOKE2->twp->ang.x = 4;
		}
		moveObjectAngle(
			E101KAI,
			-108.23f, 759.0f, -306.56f,
			-108.23f, 759.0f, -306.56f,
			464.0f, 9248.0f, 651.0f,
			464.0f, 9504.0f, 651.0f,
			60);
		EV_SetAction(E101KAI, &action_saigo_e101kai_e101kai, &texlist_ev_e101kai, 0.69999999f, 1, 18);
		EV_CameraPos(0, 100, -8.3999996f, 749.28998f, -223.42f);
		EV_CameraAng(0, 100, 0xC00, 0x2C00, 0);
		EV_WaitAction(player);
		crushLightOn(-110.4f, 758.0f, -305.0f, 2, 20, 0.30000001f, 2.0f, 0xFFFFFFFF, 0xFFFFFFu);
		effect_delete(1);
		EV_SetAction(player, &action_e_e0038_e102, &E102_TEXLIST, 1.0f, 1, 12);
		EV_Wait(10);
		EV_CameraAng(0, 60, 0xC00, 0x2F00, 0);
		EV_CameraPos(0, 60, -5.4000001f, 752.57001f, -224.75999f);
		EV_ClrAction(bird1);
		EV_SetAction(bird1, &action_w_t0004_wing_t, &texlist_wing_t, 1.2f, 0, 0);
		EV_SetAction(bird1, &action_w_t0001_wing_t, &texlist_wing_t, 1.0f, 1, 8);
		EV_Wait(40);
		EV_SetPos(SMOKE1, 0.0f, 0.0f, 0.0f);
		EV_SetPos(SMOKE2, 0.0f, 0.0f, 0.0f);
		ChgSphereBombMode(bomb1, 1);
		EV_Wait(52);
		EventSe_Play(1, 827, 1800);
		EV_SetAction(player, &action_e_e0039_e102, &E102_TEXLIST, 0.30000001f, 0, 16);
		EV_Wait(25);
		EV_FreeObject(&E101KAI);
		moveObject(bird1, -91.099998f, 769.70001f, -300.48001f, -39.099998f, 780.84003f, -263.0f, 55);
		EV_WaitAction(player);
		EV_SetAng(player, 0, 0x2200, 0);
		EV_SetPos(player, -21.6f, 744.0f, -228.10001f);
		EV_SetAction(player, &action_e_e0038_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(0, 50, 0xD00, 0x3400, 0x100);
		EV_CameraPos(0, 50, -3.1266f, 749.27002f, -223.43401f);
		crushLightOff();
		EV_Wait(20);
		EV_SetAction(player, &action_e_e0043_e102, &E102_TEXLIST, 0.60000002f, 1, 6);
		EV_Wait(30);
		EV_CameraChase(player);
		moveObject(bird1, -39.099998f, 780.84003f, -263.0f, -39.099998f, 800.84003f, -280.0f, 60);
		moveObjectOn(SMOKE1, -6.0f, 20.0f, 0.0f, 9999, player);
		moveObjectOn(SMOKE2, 6.0f, 10.0f, 3.0f, 9999, player);
		EV_MovePoint2(player, 5.5f, 745.0f, -201.53999f, 0.30000001f, 0.2f);
		EV_Wait(80);
		moveObject(bird1, -39.099998f, 800.84003f, -280.0f, 17.700001f, 780.0f, -206.5f, 60);
		EV_WaitMove(player);
		EventSe_Stop(1);
		EV_SetAction(player, &action_e_e0040_e102, &E102_TEXLIST, 0.5f, 0, 4);
		EV_SetAction(player, &action_e_e0040_e102, &E102_TEXLIST, 0.1f, 1, 0);
		EV_Wait(40);
		EV_CameraPos(0, 60, 13.9f, 756.75f, -199.0f);
		EV_CameraAng(0, 60, 0xD00, 0x3A00, 0x100);
		EV_Wait(10);
		if (bomb1)
		{
			FreeTask(bomb1);
			bomb1 = 0;
		}
		EV_SetPos(bird1, 17.4f, 755.0f, -188.39999f);
		EV_SetAng(bird1, 0, 0xA000, 0);
		EV_SetAction(bird1, &action_w_t0001_wing_t, &texlist_wing_t, 1.0f, 1, 8);
		EV_Wait(55);
		EV_CameraChaseFree();
		EV_CameraPos(1, 20, 20.4f, 754.0f, -187.37f);
		EV_CameraAng(1, 20, 0x1000, 0x2200, 0);
		EV_Wait(20);
		EV_CameraPos(0, 80, 21.7845f, 753.21997f, -186.13f);
		EV_Wait(80);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0040_e102, &E102_TEXLIST, 0.40000001f, 1, 0);
		EV_CameraPos(0, 0, -4.5999999f, 744.90002f, -178.60001f);
		EV_CameraAng(0, 0, 0x1000, 0xE000, 0);
		EV_CameraPos(0, 80, -9.0f, 744.90002f, -182.77f);
		EV_Wait(80);
		EV_CameraPos(0, 0, 15.26f, 750.51001f, -196.0f);
		EV_CameraAng(0, 0, 0x1700, 0x8A00, 0);
		EV_CameraPos(0, 55, 16.287001f, 753.18597f, -191.888f);
		EV_Wait(55);
		EV_CameraAng(0, 0, 0xE00, 0x4200, 0);
		EV_CameraPos(0, 0, 11.46f, 758.29999f, -200.11301f);
		EV_Wait(40);
		EV_SetAction(player, &action_e_e0043_e102, &E102_TEXLIST, 0.5f, 1, 4);
		EventSe_Play(1, 827, 1800);
		EV_Wait(15);
		EV_CameraPos(0, 60, 12.95f, 755.84998f, -217.0f);
		EV_CameraAng(0, 60, 0x1000, 0x7000, 0);
		EV_Wait(20);
		EV_SetAng(bird1, 0, 0x1000, 0);
		moveObject(bird1, 31.9f, 758.0f, -205.47f, 8.3500004f, 758.0f, -213.8f, 150);
		EV_Wait(20);
		moveObjectAngle2(player, 4.9699998f, 743.68439f, -202.06f, 25.5f, 744.0f, -202.2f, 791, 0x1500, 0, 791, 0, 0, 180);
		EV_Wait(130);
		stopObjectAll();
		EventSe_Stop(1);
		EV_Wait(1);
		EV_SetAng(bird1, 0, 0x1000, 0);
		moveObject(bird1, 8.3699999f, 772.07001f, -247.0f, -38.639999f, 789.0f, -282.10001f, 150);
		EV_SetPos(player, 0.80000001f, 743.0f, -231.39999f);
		EV_SetAng(player, 0, 0x2000, 0);
		EV_CameraPos(0, 0, 11.37f, 762.26001f, -227.8f);
		EV_CameraAng(0, 0, 0x200, 0x2A00, 0x100);
		EV_CameraPos(0, 400, 47.5f, 761.0f, -191.0f);
		EV_CameraAng(0, 400, 0xFD00, 0x3000, 0x100);
		EventSe_Play(3, 827, 1800);
		moveObjectAngle2(player, 0.80000001f, 743.0f, -231.39999f, 36.5f, 745.0f, -194.38f, 0, 0x2000, 0, 0, 0x2000, 0, 360);
		EV_Wait(50);
		WHITE = COverlayCreate(0.33333334f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_Wait(5);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -0.33333334f);
		}
		EV_Wait(40);
		EventSe_Oneshot(1333, 0, 0, 0);
		CIchimaie2_SetDstAlpha(hoge1, 1.0f, 5);
		BLACK1 = COverlayCreate(0.25f, 0.1f, 0.0f, 0.0f, 0.0f);
		if (BLACK1)
		{
			COverlaySetPriority(BLACK1, -1.3f);
		}
		CIchimaie2_SetPriority(hoge1, -1.4f);
		createScanLine(0x80u, 0, 0x50u, 0x55u, 5);
		sandStorm(20, 255);
		EV_Wait(3);
		if (BLACK1)
		{
			COverlaySetSpeed(BLACK1, 0.0f);
		}
		EV_Wait(17);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 5);
		EV_Wait(4);
		deleteScanLine();
		if (BLACK1)
		{
			COverlaySetSpeed(BLACK1, -1.0f);
		}
		EV_Wait(31);
		EV_SetPath(bird1, &epathtag_cube00C7_1, 0.2f, 0);
		EV_CameraPos(1, 0, -31.266001f, 783.62701f, -275.66f);
		EV_CameraAng(1, 0, 0x1600, 0x2800, 0x100);
		EV_Wait(56);
		EV_CameraPos(1, 0, 31.5f, 761.06f, -206.39999f);
		EV_CameraAng(1, 0, 0xFDC0, 0x2F00, 0x100);
		EV_CameraPos(0, 194, 47.5f, 761.0f, -191.0f);
		EV_CameraAng(0, 194, 0xFD00, 0x3000, 0x100);
		EV_Wait(30);
		WHITE2 = COverlayCreate(0.33333334f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_Wait(5);
		if (WHITE2)
		{
			COverlaySetSpeed(WHITE2, -0.33333334f);
		}
		EV_Wait(10);
		EV_CameraPos(1, 0, -46.330002f, 788.40002f, -297.54599f);
		EV_CameraAng(1, 0, 0xB00, 0x300, 0);
		EV_Wait(53);
		EV_CameraPos(1, 0, 41.57f, 761.20001f, -197.03661f);
		EV_CameraAng(1, 0, 0xFDD2, 0x2EFD, 0x100);
		EV_CameraPos(0, 80, 47.5f, 761.0f, -191.0f);
		EV_CameraAng(0, 80, 0xFD00, 0x3000, 0x100);
		if (WHITE2)
		{
			COverlaySetSpeed(WHITE2, 0.33333334f);
		}
		EV_Wait(5);
		if (WHITE2)
		{
			COverlaySetSpeed(WHITE2, -0.33333334f);
		}
		EV_SetAction(player, &action_e_e0043_e102, &E102_TEXLIST, 2.5f, 1, 5);
		EV_Wait(35);
		EventSe_Stop(3);
		EV_SetAction(player, &action_e_e0040_e102, &E102_TEXLIST, 0.1f, 1, 5);
		EV_Wait(50);
		EV_CameraPos(0, 100, 45.544998f, 761.71997f, -191.78f);
		EV_CameraAng(0, 100, 0xF800, 0x3000, 0x100);
		Create_e102lightning(34.0f, 741.0f, -196.0f, 4);
		EV_Wait(100);
		createScanLine(0x80u, 0, 0x50u, 0x55u, 5);
		CIchimaie2_SetDstAlpha(hoge1, 1.0f, 5);
		BLACK2 = COverlayCreate(0.25f, 0.1f, 0.0f, 0.0f, 0.0f);
		sandStorm(21, 255);
		EV_Wait(3);
		if (BLACK2)
		{
			COverlaySetSpeed(BLACK2, 0.0f);
		}
		EV_Wait(17);
		if (BLACK2)
		{
			COverlaySetSpeed(BLACK2, -1.0f);
		}
		EV_Wait(1);
		BGM_Stop();
		EV_Wait(65);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 5);
		if (SMOKE1)
		{
			FreeTask(SMOKE1);
			SMOKE1 = 0;
		}
		if (SMOKE2)
		{
			FreeTask(SMOKE2);
			SMOKE2 = 0;
		}
		deleteScanLine();
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0044_e102, &E102_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_e_e0042_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(100);
		EV_CameraPos(1, 0, 48.759998f, 746.40002f, -183.0226f);
		EV_CameraAng(1, 0, 0xE00, 0x2B00, 0x100);
		EV_CameraPos(1, 20, 48.48f, 745.45599f, -183.21001f);
		EV_Wait(30);
		EventSe_Oneshot(827, 0, 0, 0);
		EV_Wait(160);
		EV_CameraPos(0, 230, 34.834999f, 745.03998f, -172.88f);
		EV_CameraAng(0, 230, 0xE00, 0x500, 0);
		EV_Wait(220);
		EV_ClrAction(bird1);
		EV_ClrAction(bird2);
		if (enableUnusedCode) {
			EV_SetAction(bird2, &action_w_w9001_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0); //Make Amy's flicky visible by giving it an action.
		}
		EV_SetAction(bird1, &action_w_t0001_wing_t, &texlist_wing_t, 0.5f, 1, 0);
		EV_CameraPos(1, 0, -50.900002f, 801.90002f, -351.54401f);
		EV_CameraAng(1, 0, 0xF7A0, 0x8760, 0);
		EV_CameraChase(bird1);
		EV_Wait(1);
		moveObject(bird1, -48.52f, 798.84003f, -335.42599f, -55.799999f, 802.0f, -363.29999f, 120);
		EV_Wait(120);
		BGM_Play(MusicIDs_evtbgm02);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, 41.825001f, 762.28003f, -89.099998f);
		EV_CameraAng(1, 0, 0x5E0, 0xC90, 0);
		EV_CameraPos(0, 200, 45.200001f, 770.39001f, -49.176998f);
		EV_CameraAng(0, 200, 0x200, 0x1000, 0);
		EV_Wait(50);
		crushLightOn(36.5f, 745.0f, -194.39999f, 2, 20, 0.30000001f, 2.0f, 0xFFFFFFFF, 0xFFFFFFu);
		EV_Wait(50);
		ChgSphereBombMode(bomb2, 1);
		EV_Wait(100);
		EV_CameraPos(1, 0, -60.869999f, 804.76001f, -367.03f);
		EV_CameraAng(1, 0, 0xF500, 0xA700, 0x700);
		EV_CameraChase(bird1);
		EV_Wait(1);
		moveObject(bird2, -51.799999f, 800.0f, -357.29999f, -52.360001f, 804.79999f, -376.65701f, 150);
		moveObject(bird1, -55.799999f, 802.0f, -363.29999f, -56.360001f, 806.79999f, -382.65701f, 150);
		EV_Wait(150);
		EV_CameraChaseFree();
		EV_SetPos(bird3, -47.5f, 769.59998f, -254.55f);
		EV_SetAng(bird3, 0, 0x8000, 0);
		EV_SetAction(bird3, &action_w_p0001_wing_p, &texlist_wing_p, 0.69999999f, 1, 0);
		EV_CameraPos(1, 0, -56.18f, 803.0f, -367.54999f);
		EV_CameraAng(1, 0, 0xE00, 0xF800, 0x700);
		moveObject(bird1, -56.360001f, 806.79999f, -382.65701f, -54.0f, 834.0f, -420.0f, 350);
		EV_CameraPos(0, 360, -65.160004f, 788.08002f, -303.29999f);
		EV_Wait(120);
		EV_CameraPos(1, 0, -56.0f, 819.41998f, -405.69f);
		EV_CameraAng(1, 0, 0xF200, 0x8900, 0x600);
		EV_CameraChase(bird1);
		EV_Wait(120);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, -57.276001f, 823.0f, -399.79999f);
		EV_CameraAng(1, 0, 0xE00, 0xFA00, 0x600);
		EV_Wait(130);
		EV_CameraPos(0, 100, -59.400002f, 831.78003f, -414.17599f);
		EV_CameraAng(0, 100, 0x1000, 0xEB00, 0x600);
		EV_Wait(60);
		EV_SetPath(bird1, &epathtag_cube00C7_4, 1.0f, 0);
		moveObject(bird3, -54.549999f, 827.59998f, -392.54999f, -55.900002f, 835.59998f, -424.39999f, 213);
		EV_Wait(100);
		if (bomb2)
		{
			FreeTask(bomb2);
			bomb2 = 0;
		}
		BLACK3 = COverlayCreate(0.0099999998f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(115);
		break;
	case 2:
		EV_CameraOff();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_FreeObject(&E101KAI);
		EV_FreeObject(&bird1);
		EV_FreeObject(&bird2);
		EV_FreeObject(&bird3);
		deleteScanLine();
		deleteBoot();
		Delete_e102lightning();
		if (SMOKE1)
		{
			FreeTask(SMOKE1);
			SMOKE1 = 0;
		}
		if (SMOKE2)
		{
			FreeTask(SMOKE2);
			SMOKE2 = 0;
		}
		if (hoge1)
		{
			FreeTask(hoge1);
			hoge1 = 0;
		}
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		if (WHITE2)
		{
			FreeTask(WHITE2);
			WHITE2 = 0;
		}
		if (BLACK1)
		{
			FreeTask(BLACK1);
			BLACK1 = 0;
		}
		if (BLACK2)
		{
			FreeTask(BLACK2);
			BLACK2 = 0;
		}
		if (BLACK3)
		{
			FreeTask(BLACK3);
			BLACK3 = 0;
		}
		if (bomb1)
		{
			FreeTask(bomb1);
			bomb1 = 0;
		}
		if (bomb2)
		{
			FreeTask(bomb2);
			bomb2 = 0;
		}
		crushLightOff();
		EventSe_Close();
		effect_delete(0);
		effect_delete(1);
		break;
	}
}