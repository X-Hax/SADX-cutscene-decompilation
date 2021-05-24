#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0026_s_outro(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* tails = 0;

	ObjectMaster* smoke = 0;
	ObjectMaster* WHITE = 0;
	ObjectMaster* BLACK = 0;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		smoke = CObjSmoke_Create();
		WriteData((float*)smoke->Data1->LoopData, 2.0f);
		WriteData((float*)(smoke->Data1->LoopData) + 11, 0.899999976158142f);
		WriteData((float*)(smoke->Data1->LoopData) + 12, 0.5f);
		WriteData((float*)(smoke->Data1->LoopData) + 13, 0.5f);
		WriteData((float*)(smoke->Data1->LoopData) + 14, 0.5f);
		EV_SetPos(player, 338.5f, 204.0f, 684.40002f);
		EV_SetAng(player, 63488, 37632, 0);
		EV_SetAction(player, &action_s_s0042_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_CreatePlayer(2, Tails_Main, -235.60001f, 1528.6f, 3543.3f, 0, 0x8000, 0);
		create_eggmoble(187.45f, 350.0f, 420.0f, 0, 21760, 0);
		EV_SetPos(smoke, 187.45f, 370.0f, 420.0f);
		BGM_Play(MusicIDs_sonic);
		EV_CameraAng(1, 0, 1424, 2784, 65280);
		EV_CameraPos(1, 0, 430.20001f, 210.60001f, 700.5f);
		EV_Wait(10);
		EV_CameraAng(0, 50, 1424, 2784, 65280);
		EV_CameraPos(0, 50, 340.10001f, 207.0f, 703.0f);
		EV_Wait(50);
		playertwp[2]->Object.SByte[3] |= 4u;
		playertwp[2]->Object.SByte[3] |= 0x20u;
		smoke->Data1->Rotation.y = 1;
		smoke->Data1->Rotation.x = 1;
		seteggmobleparam(5.0f, 592);
		EV_CameraPos(0, 70, 337.73999f, 207.0f, 703.5f);
		EV_Wait(70);
		eggmoble_moveandturn(421.26999f, 174.0f, 1108.0f, 0, 0, 0, 170, 0);
		moveObject(smoke, 187.45f, 360.0f, 420.0f, 421.26999f, 184.0f, 1108.0f, 170);
		EV_CameraAng(0, 80, 10640, 6368, 65280);
		EV_CameraPos(0, 80, 339.79999f, 202.37f, 691.0f);
		EV_Wait(37);
		EV_SetAction(player, &action_s_s0071_sonic, &SONIC_TEXLIST, 0.5f, 0, 8);
		EV_Wait(45);
		EV_CameraAng(1, 0, 3472, 30688, 65280);
		EV_CameraPos(1, 0, 343.20001f, 204.646f, 672.29999f);
		EV_CameraPos(0, 80, 342.84f, 205.3f, 674.14001f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0042_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_SetAng(player, 0, 4352, 0);
		EV_Wait(110);
		EV_SetAction(player, &action_s_s0071_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_LookPoint(player, 857.11603f, 138.82401f, 1096.548f);
		EV_Wait(25);
		EV_SetFace(player, "P");
		EV_Wait(20);
		delete_eggmoble();
		FreeTask(smoke);
		smoke = 0;
		tails = EV_GetPlayer(2);
		EV_SetMode(tails, 0);
		EV_SetPath(tails, &epathtag_cube0026_t1, 1.0f, 0);
		EV_ClrAction(tails);
		EV_SetMotion(tails, MILES_OBJECTS[1], action_m_m9014_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(player, 0, 2048, 0);
		EV_CameraAng(1, 0, 2192, 47840, 65280);
		EV_CameraPos(1, 0, 324.70001f, 206.3f, 683.57001f);
		EV_CameraPos(0, 90, 324.22f, 206.3f, 687.5f);
		EV_Wait(80);
		CEcCloud_Start(2.5f, 4);
		EV_CameraAng(0, 0, 61440, 10752, 0);
		EV_CameraPos(0, 0, 734.0f, 319.0f, 791.0f);
		EV_CameraChase(tails);
		EV_SetFace(tails, "G");
		EV_Wait(76);
		EV_CameraChaseFree();
		CEcCloud_Stop();
		EV_CameraAng(0, 0, 1024, 55296, 0);
		EV_CameraPos(0, 0, 305.63f, 208.56f, 722.09998f);
		EV_Wait(5);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV0026S2);
		EV_Wait(20);
		EV_CameraAng(0, 30, 2560, 57344, 0);
		EV_CameraPos(0, 30, 290.17001f, 195.27f, 704.46997f);
		EV_Wait(30);
		EV_ClrAction(tails);
		EV_SetMotion(tails, MILES_OBJECTS[1], action_m_m0150_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(tails, 0, 38400, 0);
		moveObject(tails, 358.70001f, 219.0f, 704.40002f, 154.0f, 219.0f, 548.59998f, 200);
		EV_CameraPos(0, 0, 217.57001f, 11.2f, 667.90002f);
		EV_CameraAng(0, 0, 15360, 57600, 64512);
		EV_CameraPerspective(0, 70, 15656);
		EV_CameraPos(0, 70, 254.44f, -15.56f, 623.56f);
		EV_CameraAng(0, 70, 15360, 57600, 64512);
		EV_Wait(90);
		EV_Wait(1);
		stopObjectAll();
		EV_ClrAction(player);
		EV_ClrAction(tails);
		EV_SetAction(player, SONIC_ACTIONS[6], &SONIC_TEXLIST, 2.0f, 1, 8);
		EV_SetMotion(tails, MILES_OBJECTS[1], action_m_m0150_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_LookObject(player, tails, 0.0f, 0.0f, 0.0f);
		EV_SetMode(tails, 0);
		EV_SetMode(player, 3);
		EV_SetPath(player, &epathtag_cube0026_s2, 0.31999999f, 1);
		EV_SetPath(tails, &epathtag_cube0026_t2, 0.31999999f, 0);
		EV_CameraPerspective(0, 1, 12743);
		EV_CameraPos(1, 0, 982.96002f, 132.13f, 753.12268f);
		EV_CameraAng(1, 0, 1024, 38144, 0);
		EV_CameraPos(0, 43, 942.35999f, 133.2f, 684.54999f);
		EV_CameraAng(0, 43, 65280, 37120, 0);
		EV_Wait(35);
		EV_LookObject(tails, player, 0.0f, 0.0f, 0.0f);
		EV_SetFace(tails, "G");
		EV_Wait(8);
		EV_CameraPos(0, 32, 889.16998f, 119.58f, 655.5f);
		EV_CameraAng(0, 32, 65280, 42752, 0);
		EV_Wait(32);
		EV_ClrFace(tails);
		EV_LookFree(tails);
		EV_CameraPos(0, 16, 868.79999f, 104.41f, 647.5f);
		EV_CameraAng(0, 16, 65360, 42695, 65474);
		EV_Wait(16);
		EV_CameraPos(0, 18, 858.20001f, 84.699997f, 614.0f);
		EV_CameraAng(0, 18, 64848, 33479, 65474);
		EV_Wait(18);
		EV_CameraPos(0, 18, 849.29999f, 65.860001f, 594.20001f);
		EV_CameraAng(0, 18, 63312, 29639, 63682);
		EV_Wait(18);
		EV_LookFree(player);
		EV_LookObject(tails, player, 0.0f, 0.0f, 0.0f);
		EV_CameraPos(0, 32, 795.20001f, 8.5799999f, 569.90002f);
		EV_CameraAng(0, 32, 5712, 34247, 63682);
		EV_Wait(32);
		EV_CameraPos(0, 28, 735.5f, 12.7f, 623.62402f);
		EV_CameraAng(0, 28, 4176, 48071, 1024);
		EV_Wait(28);
		EV_CameraPos(0, 38, 665.54999f, -18.5567f, 614.20001f);
		EV_CameraAng(0, 38, 8016, 46791, 1024);
		EV_Wait(38);
		EV_CameraPos(0, 11, 653.27002f, -29.74f, 611.33337f);
		EV_CameraAng(0, 11, 7935, 46848, 1024);
		EV_Wait(11);
		EV_CameraPos(0, 20, 617.29999f, -26.266001f, 597.13501f);
		EV_CameraAng(0, 20, 2384, 50375, 1024);
		EV_Wait(20);
		EV_CameraPos(0, 22, 592.86798f, -10.894f, 556.11499f);
		EV_CameraAng(0, 22, 2914, 45499, 1024);
		EV_Wait(22);
		EV_LookObject(player, tails, 0.0f, 0.0f, 0.0f);
		EV_SetFace(player, "P");
		EV_CameraPos(0, 22, 563.073f, -2.0699999f, 532.08752f);
		EV_CameraAng(0, 22, 1890, 46011, 1024);
		EV_Wait(22);
		EV_SetMotion(tails, MILES_OBJECTS[1], action_m_m0150_miles, &MILES_TEXLIST, 1.5f, 1, 8);
		EV_LookFree(player);
		EV_CameraPos(0, 13, 545.32397f, 8.1599998f, 521.83551f);
		EV_CameraAng(0, 13, 65378, 44475, 256);
		EV_Wait(13);
		EV_SetFace(tails, "G");
		EV_CameraPos(0, 25, 506.2254f, 13.2f, 511.08499f);
		EV_CameraAng(0, 25, 64354, 44800, 256);
		EV_Wait(25);
		EV_ClrFace(tails);
		EV_CameraPos(0, 24, 462.483f, 10.648f, 524.19f);
		EV_CameraAng(0, 24, 63330, 50619, 0);
		EV_Wait(24);
		EV_LookFree(tails);
		EV_LookObject(player, tails, 0.0f, 0.0f, 0.0f);
		EV_SetAction(player, SONIC_ACTIONS[6], &SONIC_TEXLIST, 2.2f, 1, 0);
		EV_CameraPos(0, 29, 407.758f, 4.178f, 538.59003f);
		EV_CameraAng(0, 29, 0, 51968, 0);
		EV_Wait(29);
		EV_SetFace(player, "P");
		EV_CameraPos(0, 22, 360.95001f, -6.8600001f, 561.92999f);
		EV_CameraAng(0, 22, 1024, 54784, 64512);
		EV_Wait(22);
		EV_LookFree(player);
		EV_LookObject(tails, player, 0.0f, 0.0f, 0.0f);
		EV_CameraPos(0, 18, 307.52802f, -0.30000001f, 542.57849f);
		EV_CameraAng(0, 18, 64512, 44800, 64512);
		EV_Wait(18);
		EV_CameraPos(0, 26, 257.12329f, 13.0f, 500.29999f);
		EV_CameraAng(0, 26, 63744, 44800, 512);
		EV_Wait(26);
		EV_CameraPos(0, 21, 257.0f, 27.549999f, 457.978f);
		EV_CameraAng(0, 21, 63761, 35584, 479);
		WHITE = COverlayCreate(0.1f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_Wait(25);
		EV_CameraPos(0, 50, 269.77399f, 63.16f, 357.12799f);
		EV_CameraAng(0, 50, 62976, 40960, 479);
		EV_SetPos(tails, 2088.27f, 186.47f, 1560.4f);
		EV_Wait(20);
		EV_ClrPath(player);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[6], &SONIC_TEXLIST, 0.69999999f, 1, 0);
		playertwp[2]->Object.SByte[3] &= ~4u;
		playertwp[2]->Object.SByte[3] &= ~0x10u;
		playertwp[2]->Object.SByte[3] &= ~0x20u;
		CEcCloud_Start(2.5f, 6);
		EV_ClrFace(player);
		EV_ClrFace(tails);
		EV_ClrPath(player);
		EV_ClrPath(tails);
		EV_ClrAction(player);
		EV_ClrAction(tails);
		EV_LookObject(tails, player, 0.0f, 2.0f, 0.0f);
		EV_SetPos(tails, 2088.27f, 186.47f, 1560.4f);
		EV_SetAng(tails, 65466, 12517, 51);
		EV_SetPos(player, 2099.8799f, 186.476f, 1556.354f);
		EV_SetAng(player, 65466, 8907, 51);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_CameraPerspective(0, 1, 12561);
		EV_Wait(10);
		EV_SetAng(player, 65466, 8907, 51);
		EV_Wait(10);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 2095.6001f, 187.12601f, 1547.13f);
		EV_CameraAng(0, 0, 4033, 37821, 0);
		COverlaySetSpeed(WHITE, -0.016666668f);
		EV_Wait(60);
		EV_CameraPos(0, 80, 2111.7f, 187.545f, 1552.053f);
		EV_CameraAng(0, 80, 3803, 20660, 1024);
		EV_SetFace(player, "FEFEFEF");
		EV_Wait(80);
		EV_CameraPos(0, 100, 2110.8999f, 187.08f, 1565.4436f);
		EV_CameraAng(0, 100, 4708, 9214, 1024);
		EV_Wait(120);
		EV_CameraPos(0, 55, 2141.0f, 165.0f, 1591.92f);
		EV_CameraAng(0, 55, 4864, 9728, 0);
		EV_CameraPerspective(1, 55, 18204);
		EV_Wait(20);
		EV_ClrFace(player);
		EV_ClrAction(player);
		SONIC_OBJECTS[6]->sibling = &object_sonic_s_r_a5_01_s_r_a5_01;
		EV_SetAction(player, &action_s_s0070_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_s_s0068_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(43);
		EV_CameraPos(0, 4, 2137.3401f, 173.545f, 1589.1801f);
		EV_CameraAng(0, 4, 1120, 9728, 0);
		EV_CameraPerspective(1, 4, 10923);
		EV_Wait(40);
		BLACK = COverlayCreate(0.033333335f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(30);
		break;
	case 2:
		playertwp[2]->Object.SByte[3] &= ~4u;
		playertwp[2]->Object.SByte[3] &= ~0x10u;
		playertwp[2]->Object.SByte[3] &= ~0x20u;
		EV_CameraOff();
		stopObjectAll();
		EV_ClrPath(player);
		EV_ClrPath(tails);
		SONIC_OBJECTS[6]->sibling = SONIC_OBJECTS[5];
		EV_SetPos(player, 1199.0f, 126.0f, 851.0f);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		FreeTask(WHITE);
		WHITE = 0;
		FreeTask(BLACK);
		BLACK = 0;
		CEcCloud_Stop();
		delete_eggmoble();
		FreeTask(smoke);
		smoke = 0;
		break;
	}
}