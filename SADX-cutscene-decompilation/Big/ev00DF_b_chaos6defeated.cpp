#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00DF[] = {
	(char*)("SHAPE_FROG"), &texlist_shape_frog,
	(char*)("FROG"), &texlist_frog,
	0
};

void ev00DF_b_chaos6defeated(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		B_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_thebig);
		EV_SetPos(player, -6.9099998f, 746.03998f, -539.73999f);
		EV_SetAng(player, 0xFCD3, 0x8693, 0);
		EV_CreateObjectFunc(&Frog, set_shapefrog,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_CreatePlayer(2, SonicTheHedgehog, 97.870003f, 746.97998f, -488.81f, 0xFD77, 0xE5A1, 0xFE16);
		StgChaos6CtrlOn(5.4000001f, 750.0f, -400.0f, 0, 0x8000, 0, 0x38E);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_ClrAction(Frog);
		EV_SetAction(player, &action_b_b0035_big, &BIG_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(Frog, &action_f_f0016_frog, &texlist_frog, 1.0f, 1, 8);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_SetMode(Frog, 0);
		chg_frogshape(2);
		EV_Wait(1);
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 0.5f,
			player->twp->pos.z);
		EV_SetAng(Frog,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, -14.04f, 759.04999f, -576.97998f);
		EV_CameraAng(0, 0, 0xFD00, 0x8800, 0);
		EV_ClrAction(player);
		EV_ClrAction(Frog);
		EV_SetAction(player, &action_b_b0036_big, &BIG_TEXLIST, 1.0f, 0, 8);
		EV_SetMotion(Frog, &object_shape_frog_frog, motion_f_f0017_frog, &texlist_shape_frog, 1.0f, 0, 8);
		EV_SetMotion(Frog, &object_shape_frog_frog, motion_f_f0017_frog, &texlist_shape_frog, 1.0f, 0, 8);
		EV_SetAction(player, &action_b_b0037_big, &BIG_TEXLIST, 1.0f, 1, 4);
		if (!TV_System) //NTSC
		{
			EV_SetMotion(Frog, &object_shape_frog_frog, motion_f_f0018_frog, &texlist_shape_frog, 1.0f, 1, 8);
		}
		if (TV_System == 1) //PAL, unused in PC version
		{
			EV_SetMotion(Frog, &object_shape_frog_frog, motion_f_f0018_frog, &texlist_shape_frog, 1.0f, 1, 0);
		}
		EV_Wait(1);
		EV_SerifPlay(1383);
		EV_MsgW(0, msgTbl_ev00DF[TextLanguage][0]); //"\aHoo-ray!"
		EV_CameraPerspective(0, 150, 0x238E);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_ClrAction(Frog);
		if (TV_System == 1) ////PAL, unused in PC version
		{
			EV_SetMotion(Frog, &object_shape_frog_frog, motion_f_f0015_frog, &texlist_shape_frog, 0.83399999f, 1, 8);
		}
		EV_SetAction(player, &action_b_b0034_big, &BIG_TEXLIST, 1.0f, 1, 8);
		if (!TV_System) //NTSC
		{
			EV_SetMotion(Frog, &object_shape_frog_frog, motion_f_f0015_frog, &texlist_shape_frog, 1.0f, 1, 8);
		}
		EV_SerifPlay(1384);
		EV_MsgW(0, msgTbl_ev00DF[TextLanguage][1]); //"\aFroggy, heh heh heh heh,\nI won't let"...
		EV_SerifWait();
		EV_MsgClose();
		EV_SetAction(sonic, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_SerifWait();
		EV_CameraPos(0, 0, 114.27f, 753.5f, -461.39999f);
		EV_CameraAng(0, 0, 0, 0x1E00, 0);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "FEF");
		EV_SerifPlay(1385);
		EV_MsgW(60, msgTbl_ev00DF[TextLanguage][2]); //"\aGo!  Go on and get outta here!   \nI'"...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_CameraPos(0, 0, -40.439999f, 768.45001f, -576.32001f);
		EV_CameraAng(0, 0, 0xF800, 0xA300, 0);
		EV_CameraPos(0, 240, -63.459999f, 774.5f, -596.17999f);
		EV_SerifPlay(1386);
		EV_MsgW(60, msgTbl_ev00DF[TextLanguage][3]); //"\aOh, okay...   Thanks!"
		EV_Wait(30);
		EV_ClrAction(player);
		EV_ClrAction(Frog);
		EV_SetAction(player, &action_b_b0035_big, &BIG_TEXLIST, 1.0f, 1, 8);
		EV_SetMotion(Frog, &object_shape_frog_frog, motion_f_f0016_frog, &texlist_shape_frog, 1.0f, 1, 8);
		EV_SerifPlay(1387);
		EV_MsgW(60, msgTbl_ev00DF[TextLanguage][4]); //"\aCome, little buddy.   \nTime to get a"...
		EV_Wait(30);
		EV_MsgClose();
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		StgChaos6CtrlOff();
		EV_InitPlayer(0);
		EV_FreeObject(&Frog);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}