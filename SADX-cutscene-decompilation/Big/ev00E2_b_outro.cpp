#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00E2[] = {
	(char*)("FROG"), &texlist_frog,
	(char*)("TR2CRASH"), &texlist_tr2crash
};

void ev00E2_b_outro(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		FROG = 0;
		//obj_big = 0; //unused
		PHOTO1 = 0;
		PHOTO2 = 0;
		BLACK = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BLACK = COverlayCreate(1.0f, 0.1f, 0.0f, 0.0f, 0.0f);
		BGM_Play(MusicIDs_big);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_SetPos(player, -1108.0f, 354.14499f, 365.745f);
		EV_SetAng(player, 0xFFD0, 0x6700, 0xFFEF);
		EV_InitPlayer(0);
		EV_CreateObjectFunc(&FROG, set_shapefrog,
			player->twp->pos.x,
			player->twp->pos.y + 12.0f,
			player->twp->pos.z, 0, 0xD300, 0);
		createModel(
			1226.0f, 99.0f, -904.65997f,
			0x1000, 0xD000, 0x400,
			1.0f, 1.0f, 1.0f,
			&_object_tr2crash_tr2crash,
			&texlist_tr2crash,
			0);
		EV_CameraPerspective(1, 1, 0x38E4);
		EV_CameraAng(1, 0, 0xA00, 0xD900, 0);
		EV_CameraPos(1, 0, -1145.23f, 562.12f, -81.760002f);
		EV_Wait(1);
		if (BLACK)
		{
			COverlaySetSpeed(BLACK, -0.033333335f);
		}
		EV_Wait(18);
		EV_SetMode(FROG, 0);
		EV_SetShadow(FROG, 0.80000001f);
		EV_SetPos(FROG, -1118.3361f, 354.89999f, 355.32999f);
		EV_SetAng(FROG, 0xF400, 0x6700, 0);
		EV_SetAction(FROG, &_action_f_f0001_frog, &texlist_shape_frog, 1.0f, 1, 0);
		chg_frogshape(2);
		EV_Wait(1);
		moveObjectOn(FROG, -10.0f, 0.30000001f, -10.0f, 999, player);
		EV_SetColli(FROG, 1.0f);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(0, 200, 0x500, 0xD900, 0);
		EV_CameraPos(0, 200, -1107.27f, 209.343f, -108.52f);
		EV_Wait(200);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_CameraAng(1, 0, 0x800, 0x5500, 0);
		EV_CameraPos(1, 0, -570.0f, 222.89999f, 197.0f);
		EV_CameraAng(0, 144, 0x800, 0x5800, 0);
		EV_CameraPos(0, 144, -655.5f, 224.46001f, 62.68f);
		EV_Wait(144);
		PHOTO1 = COverlayCreate(0.025f, 0.1f, 0.89999998f, 0.89999998f, 0.89999998f);
		EV_Wait(10);
		if (PHOTO1)
		{
			COverlaySetSpeed(PHOTO1, 0.0f);
		}
		EV_Wait(10);
		EV_CameraPerspective(0, 110, 0x2E39);
		EV_CameraAng(0, 0, 0xC00, 0x5800, 0xFC00);
		EV_CameraPos(0, 0, -1098.0f, 365.54999f, 360.0f);
		EV_Wait(10);
		if (PHOTO1)
		{
			COverlaySetSpeed(PHOTO1, -0.025f);
		}
		EV_Wait(10);
		EV_CameraAng(0, 90, 0xC00, 0x4700, 0xFC00);
		EV_CameraPos(0, 90, -1098.4f, 367.16f, 363.66f);
		EV_Wait(90);
		EV_CameraPerspective(0, 1, 0x3C72);
		EV_CameraAng(0, 0, 0xF400, 0xE100, 0);
		EV_CameraPos(0, 0, -1152.4f, 388.70001f, 371.79999f);
		EV_CameraAng(0, 180, 0xF500, 0xE700, 0);
		EV_CameraPos(0, 180, -1138.3f, 388.22659f, 392.0f);
		EV_Wait(46);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV00E2B);
		EV_ClrAction(FROG);
		EV_SetAction(FROG, &_action_f_f0002_frog, &texlist_shape_frog, 1.1f, 1, 0);
		EV_Wait(45);
		EV_SetAction(FROG, &_action_f_f0002_frog, &texlist_shape_frog, 0.0f, 1, 0);
		EV_Wait(76);
		stopObjectAll();
		EV_ClrAction(FROG);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[16], &BIG_TEXLIST, 1.3f, 1, 0);
		EV_SetAction(FROG, &_action_f_f0002_frog, &texlist_shape_frog, 1.1f, 1, 0);
		moveObjectOn(FROG, 10.0f, 0.5f, 13.0f, 999, player);
		EV_SetPos(player, -1034.4399f, 107.1f, 318.44299f);
		EV_SetAng(player, 0xF97C, 0x5800, 0xF821);
		EV_MovePoint2(player, -881.65002f, 46.0f, 205.60001f, 0.0f, 0.0f);
		EV_CameraTargetObj(0, 1, player, 0.0f, 9.0f, 0.0f, 0);
		EV_CameraPos(0, 0, -1005.0f, 123.0f, 310.0f);
		EV_Wait(1);
		EV_CameraChase(player);
		EV_Wait(90);
		EV_CameraTargetFree();
		EV_CameraChaseFree();
		EV_Wait(9);
		EV_CameraAng(0, 0, 0xE300, 0x2D00, 0);
		EV_CameraPos(0, 0, 313.29999f, 74.919998f, -1185.87f);
		stopObjectAll();
		EV_MoveFree(player);
		EV_SetPos(player, 230.74001f, 0.13600001f, -1224.85f);
		EV_SetAng(player, 0xFA07, 0xC000, 0xD02);
		EV_SetPos(FROG, 229.47f, 15.5f, -1225.3f);
		EV_SetAng(FROG, 0xF9F4, 0xAC19, 0xD15);
		EV_SetColli(FROG, 0.0f);
		EV_SetMode(FROG, 0);
		EV_ClrAction(FROG);
		EV_ClrAction(player);
		EV_SetAction(FROG, &_action_f_f0001_frog, &texlist_shape_frog, 1.0f, 1, 0);
		EV_SetAction(player, &action_b_b0032_big, &BIG_TEXLIST, 1.0f, 1, 0);
		EV_Wait(5);
		EV_CameraAng(0, 120, 0x800, 0x3100, 0);
		EV_CameraPos(0, 120, 301.39001f, 9.0500002f, -1198.83f);
		EV_Wait(130);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraAng(0, 0, 0x1200, 0xCF00, 0x200);
		EV_CameraPos(0, 0, 187.87f, -7.8000002f, -1211.433f);
		EV_CameraAng(0, 280, 0x1200, 0xBE00, 0x200);
		EV_CameraPos(0, 280, 184.12199f, -7.8000002f, -1223.76f);
		EV_Wait(30);
		EV_ClrAction(FROG);
		EV_SetAction(FROG, &_action_f_f0012_frog, &texlist_shape_frog, 0.89999998f, 0, 16);
		EV_Wait(5);
		moveObject(FROG, 219.47f, 13.5f, -1225.3f, 217.625f, 0.0f, -1211.5f, 16);
		EV_Wait(16);
		EV_SetAction(FROG, &_action_f_f0013_frog, &texlist_shape_frog, 1.0f, 1, 8);
		EV_SetAction(player, &action_b_b0033_big, &BIG_TEXLIST, 1.0f, 1, 30);
		EV_Wait(60);
		EV_SetAction(FROG, &_action_f_f0009_frog, &texlist_shape_frog, 2.0f, 0, 15);
		EV_Wait(23);
		EV_SetAng(FROG, 0xF9F4, 0x8500, 0xD15);
		EV_Wait(15);
		EV_SetAction(FROG, &_action_f_f0001_frog, &texlist_shape_frog, 5.5f, 1, 0);
		EV_Wait(5);
		EV_SetAction(player, &action_b_b0033_big, &BIG_TEXLIST, 5.0f, 1, 0);
		EV_Wait(55);
		EV_SetAction(player, &action_b_b0040_big, &BIG_TEXLIST, 0.80000001f, 0, 0);
		EV_SetAction(player, &action_b_b0041_big, &BIG_TEXLIST, 0.80000001f, 1, 0);
		EV_Wait(40);
		EV_SetAction(FROG, &_action_f_f0001_frog, &texlist_shape_frog, 1.0f, 1, 0);
		EV_Wait(20);
		EV_SetAction(FROG, &_action_f_f0001_frog, &texlist_shape_frog, 0.0099999998f, 1, 0);
		EV_Wait(15);
		EV_SetAng(FROG, 0xF9F4, 0x7000, 0xD15);
		EV_Wait(25);
		PHOTO2 = COverlayCreate(0.050000001f, 0.1f, 0.89999998f, 0.89999998f, 0.89999998f);
		EV_Wait(10);
		if (PHOTO2)
		{
			COverlaySetSpeed(PHOTO2, 0.0f);
		}
		EV_Wait(10);
		stopObjectAll();
		EV_SetAng(FROG, 0, 0x9000, 0);
		EV_ClrAction(FROG);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[16], &BIG_TEXLIST, 1.4f, 1, 0);
		EV_SetAction(FROG, &_action_f_f0002_frog, &texlist_shape_frog, 1.1f, 1, 0);
		moveObjectOnRotate(FROG, -18.0f, 0.5f, -5.0f, 999, player);
		EV_SetPos(player, 613.70001f, 28.353001f, -1074.874f);
		EV_SetAng(player, 0xFE60, 0x8530, 0x620);
		EV_SetColli(FROG, 1.0f);
		EV_SetMode(FROG, 3);
		EV_CameraPos(1, 0, 606.79999f, 30.59f, -1053.545f);
		EV_CameraAng(1, 0, 0xB00, 0xFD00, 0x200);
		EV_MovePoint2(player, 605.89001f, 24.6255f, -1257.91f, 1.0f, 1.0f);
		EV_Wait(1);
		EV_CameraChase(player);
		if (PHOTO2)
		{
			COverlaySetSpeed(PHOTO2, -0.025f);
		}
		EV_Wait(130);
		EV_MovePoint2(player, 499.0f, 10.0f, -1309.6f, 1.0f, 1.0f);
		EV_Wait(45);
		EV_CameraChaseFree();
		EV_MoveFree(player);
		stopObjectAll();
		EV_SetColli(FROG, 0.0f);
		EV_SetMode(FROG, 0);
		EV_ClrAction(player);
		EV_ClrAction(FROG);
		EV_SetPos(player, -519.0f, 155.0f, -1081.8f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetPos(FROG, -519.0f, 141.3f, -1052.0f);
		EV_SetAng(FROG, 0, 0x8000, 0xFD00);
		EV_SetAction(FROG, &_action_f_f0001_frog, &texlist_shape_frog, 1.0f, 1, 0);
		EV_SetAction(player, BIG_ACTIONS[27], &BIG_TEXLIST, 0.80000001f, 1, 0);
		EV_CameraPos(1, 0, -520.90002f, 157.5f, -1058.25f);
		EV_CameraAng(1, 0, 0xB00, 0xFD00, 0x200);
		EV_Wait(1);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(59);
		EV_CameraPos(0, 90, -519.0f, 140.78f, -1043.34f);
		EV_CameraAng(0, 90, 0x1200, 0, 0);
		EV_Wait(90);
		EV_CameraPos(0, 30, -519.0f, 140.39999f, -1043.0f);
		EV_CameraAng(0, 30, 0x1200, 0, 0);
		EV_Wait(30);
		EV_SetPos(FROG, -519.0f, 141.3f, -1058.0f);
		EV_ClrAction(FROG);
		EV_SetAction(FROG, &_action_f_f0002_frog, &texlist_shape_frog, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -537.0f, 196.0f, -1025.3f);
		EV_CameraAng(0, 0, 0xE100, 0xF500, 0);
		EV_CameraPos(0, 500, -608.59998f, 451.0f, -767.0f);
		EV_Wait(275);
		break;
	case 2:
		EV_CameraOff();
		stopObjectAll();
		EV_ClrPath(player);
		EV_ClrPath(FROG);
		EV_InitPlayer(0);
		deleteModel(0);
		EV_FreeObject(&FROG);
		if (PHOTO1)
		{
			FreeTask(PHOTO1);
			PHOTO1 = 0;
		}
		if (PHOTO2)
		{
			FreeTask(PHOTO2);
			PHOTO2 = 0;
		}
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		break;
	}
}