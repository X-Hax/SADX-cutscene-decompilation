#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev004D[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	(char*)("EGG_MISSILE"), &EGG_MISSILE_TEXLIST,
	0
};

void ev004D_t_missile(int state)
{
	//task* task_gattai = 0;

	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		gSkyScale.x = 1.069f;
		gSkyScale.y = 1.309999f;
		gSkyScale.z = 1.309f;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(91);
		EventSe_Init(4);
		EV_InitPlayer(0);
		seqVars[1] = 0;
		EV_SetPos(player, 340.01001f, 0.0099999998f, 1650.25f);
		EV_SetAng(player, 0, 0x4300, 0);
		EV_SetMode(player, 0);
		EV_CreatePlayer(2, AmyRose, 340.01001f, 0.0099999998f, 1630.25f, 0, 0x7800, 0);
		EV_Wait(1);
		amy = EV_GetPlayer(2);
		EV_SetPos(amy, 340.01001f, 0.0099999998f, 1630.25f);
		EV_SetAng(amy, 0, 0x7800, 0);
		obj_ver2_wing = SetEventBirdie0();
		EV_SetPos(obj_ver2_wing, 340.01001f, 0.0099999998f, 1630.25f);
		EV_SetAng(obj_ver2_wing,
			amy->twp->ang.x,
			0x4000 - amy->twp->ang.y,
			amy->twp->ang.z);
		EV_Wait(1);
		EV_SetMode(obj_ver2_wing, 0);
		EV_SetAction(obj_ver2_wing, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_CreateObjectFunc(&TEPODON, Create_EV_Eggmissile, 701.5f, -1300.25f, 3900.2f, 0xFFF0, 0, 0);
		EV_Wait(1);
		SetEggMissileParam(TEPODON, 0.25f);
		create_eggmoble(233.3f, 82.800003f, 1545.0f, 0, 0xD000, 0);
		EV_Wait(2);
		ChgEggMobleMod(5);
		EV_Wait(2);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		throughplayer_on(amy);
		EV_Wait(1);
		BGM_Play(MusicIDs_s_square);
		EV_CameraPos(1, 0, 136.0f, 30.200001f, 1507.8f);
		EV_CameraAng(1, 0, 0x1400, 0x2C00, 0);
		EV_CameraPos(1, 280, 76.779999f, 35.200001f, 1586.6f);
		EV_CameraAng(1, 280, 0x139A, 0x6177, 0);
		create_task_gattai_EV004D();
		EV_Wait(20);
		EV_SetMode(player, 0);
		EV_SetMode(amy, 0);
		EV_SetAction(player, &action_m_m0002_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(amy, &action_a_a0014_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetPath(player, &epathtag_cube_006d_14, 0.2f, 0);
		EV_Wait(40);
		EV_SetPath(obj_ver2_wing, &epathtag_cube_006d_14, 0.2f, 0);
		EV_Wait(220);
		EV_CameraPos(1, 200, -0.30000001f, 3.3900001f, 1510.0f);
		EV_CameraAng(1, 200, 0xC9A, 0x6377, 0);
		EV_Wait(200);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, -67.400002f, 40.0f, 1497.0f);
		EV_CameraAng(1, 0, 0x347, 0x4ED7, 0);
		EV_CameraPos(1, 170, -69.300003f, 4.4000001f, 1496.3f);
		EV_CameraAng(1, 170, 0x247, 0x3207, 0);
		EV_ClrPath(player);
		kill_task_gattai_EV004D();
		EV_ClrPath(obj_ver2_wing);
		EV_SetMode(amy, 3);
		EV_SetPos(amy, -91.699997f, 0.0f, 1479.1f);
		EV_SetAng(amy, 0, 0, 0);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(player, 3);
		EV_SetPos(player, -82.199997f, 0.0f, 1493.28f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetPos(obj_ver2_wing, -90.0f, 55.0f, 1520.5f);
		EV_SetAng(obj_ver2_wing,
			(int)(amy->twp->pos.x - 768.0f),
			(int)(amy->twp->pos.y - 28672.0f),
			(int)(amy->twp->pos.z));
		EV_SetMode(obj_ver2_wing, 0);
		EV_SetAction(obj_ver2_wing, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		moveObject(obj_ver2_wing, -90.0f, 54.0f, 1512.5f,
			amy->twp->pos.x - 0.5f,
			amy->twp->pos.y + 6.5f,
			amy->twp->pos.z + 6.0f,
			200);
		EV_Wait(85);
		EV_SetAction(amy, &action_a_a0011_amy, &AMY_TEXLIST, 1.2f, 1, 16);
		EV_Wait(75);
		EV_SetAction(player, &action_m_m0110_miles, &MILES_TEXLIST, 1.4f, 0, 0);
		EV_SetAction(player, &action_m_m0111_miles, &MILES_TEXLIST, 1.4f, 1, 8);
		EV_Wait(38);
		eggmoble_moveandturn(180.89999f, 8.5f, 1303.0f, 0xE000, 0xD600, 0xE000, 120, 0);
		EV_SetAng(amy, 0, 0, 0);
		EV_SetAng(player, 0, 0x5900, 0);
		EV_SetPos(obj_ver2_wing,
			amy->twp->pos.x - 0.5f,
			amy->twp->pos.y + 4.5f,
			amy->twp->pos.z + 5.4000001f);
		EV_SetAng(obj_ver2_wing,
			(int)(amy->twp->pos.x),
			(int)(amy->twp->pos.y + 10496.0f),
			(int)(amy->twp->pos.z));
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -90.599998f, 5.4000001f, 1498.1f);
		EV_CameraAng(1, 0, 0xC47, 0xC1D7, 0);
		EV_CameraAng(1, 140, 0xA47, 0xCFD7, 0);
		EV_Wait(140);
		ChgEggMobleMod(5);
		EventSe_Oneshot(25, 60, 0, 0);
		EV_CameraPos(1, 1, -90.599998f, 6.0f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.6999998f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.8000002f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.5999999f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.9000001f, 1498.1f);
		EV_Wait(1);
		EventSe_Oneshot(25, 40, 0, 0);
		RumbleA(0, 1);
		EV_CameraPos(1, 1, -90.599998f, 5.6999998f, 1498.1f);
		EV_Wait(1);
		EventSe_Oneshot(16, 30, 0, 0);
		RumbleA(0, 1);
		EV_CameraPos(1, 1, -90.599998f, 5.9000001f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.4000001f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.5999999f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.4000001f, 1498.1f);
		EV_Wait(1);
		RumbleA(0, 1);
		EV_CameraPos(1, 1, -90.599998f, 5.5f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.4000001f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.5f, 1498.1f);
		EV_Wait(1);
		EV_CameraPos(1, 1, -90.599998f, 5.4000001f, 1498.1f);
		EV_Wait(40);
		BGM_Stop();
		EV_SetAng(player, 0, 0x3000, 0);
		EV_LookFree(player);
		EV_SetAng(amy, 0, 0x1000, 0);
		EV_SetPos(obj_ver2_wing,
			amy->twp->pos.x - 2.0f,
			amy->twp->pos.y + 5.0f,
			amy->twp->pos.z + 4.5f);
		EV_SetAng(obj_ver2_wing,
			(int)(amy->twp->pos.x),
			(int)(amy->twp->pos.y + 10240.0f),
			(int)(amy->twp->pos.z));
		EV_Wait(1);
		EV_CameraPos(1, 0, -73.669998f, 5.9499998f, 1498.6f);
		EV_CameraAng(1, 0, 0x147, 0x2807, 0);
		EV_CameraPos(1, 120, -75.300003f, 6.02f, 1497.5f);
		EV_CameraAng(1, 120, 0x147, 0x28D7, 0);
		EV_Wait(130);
		EV_ClrFace(player);
		EV_SetFace(player, "BAABAAAAAABABAAAAABAA");
		EV_Wait(60);
		EV_ClrFace(player);
		EV_SetPos(obj_ver2_wing,
			amy->twp->pos.x - 5.0f,
			amy->twp->pos.y + 4.5f,
			amy->twp->pos.z + 6.5f);	
		EV_SetAng(obj_ver2_wing,
			(int)(amy->twp->pos.x),
			(int)(amy->twp->pos.y + 12288.0f),
			(int)(amy->twp->pos.z));
		EV_CameraPos(1, 0, -102.8f, 14.7f, 1508.2f);
		EV_CameraAng(1, 0, 0xFB47, 0xDBD7, 0);
		EV_CameraPos(0, 50, -100.17f, 8.6999998f, 1512.2f);
		EV_CameraAng(0, 50, 0xFB47, 0xE8D7, 0);
		EV_LookObject(amy, player, 6.0f, 5.0f, 0.0f);
		EV_SetAction(player, &action_m_m0139_miles, &MILES_TEXLIST, 0.80000001f, 0, 0);
		EV_SetAction(player, &action_m_m0140_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_Wait(50);
		EV_CameraTargetObj(1, 40, player, 0.0f, 5.0f, 0.0f, 0);
		EV_WaitAction(player);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, 11.2f, 0.0f, 1523.0f, 0.69999999f, 0.029999999f);
		EV_Wait(70);
		EV_RemovePlayer(2);
		EV_FreeObject(&obj_ver2_wing);
		EV_MoveFree(player);
		EV_MovePoint2(player, 118.2f, 0.0f, 1465.0f, 0.30000001f, 0.029999999f);
		EV_SetPos(player, 21.01f, 0.0099999998f, 1523.25f);
		EV_SetAng(player, 0, 0x5646, 0);
		EV_CameraPos(1, 0, 37.799999f, 6.5f, 1518.5f);
		EV_CameraChase(player);
		EV_Wait(30);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "DABAADCCC");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DBED");
		}
		EV_SerifPlay(792);
		EV_Msg(msgTbl_ev004D[TextLanguage][0]); //"\aThat's Eggman!  I wonder\nwhat happen"...
		EV_Wait(90);
		EV_CameraChaseFree();
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_ClrFace(player);
		EV_CameraPos(1, 0, 120.9f, 4.5999999f, 1445.8f);
		EV_CameraAng(1, 0, 0xEAD, 0xF490, 0x400);
		EV_CameraPos(0, 100, 149.7f, 7.48f, 1455.38f);
		EV_CameraAng(0, 100, 0x7AD, 0xF790, 0x400);
		EV_Wait(100);
		EV_CameraPos(0, 120, 155.17999f, 9.2299995f, 1430.86f);
		EV_CameraAng(0, 120, 0x5AD, 0xF790, 0x400);
		EV_Wait(120);
		EV_CameraPos(1, 0, 185.42999f, 13.66f, 1289.67f);
		EV_CameraAng(1, 0, 0x8AD, 0x8A00, 0x100);
		EV_CameraPos(0, 130, 185.89999f, 14.0f, 1291.5699f);
		EV_SerifPlay(793);
		EV_Msg(msgTbl_ev004D[TextLanguage][1]); //"\aI'm finished!"
		EV_Wait(30);
		EV_Msg(msgTbl_ev004D[TextLanguage][2]); //"\aChaos was defeated, and now \nmy Egg "...
		EV_SerifWait();
		EV_CameraAng(1, 120, 0x11AD, 0x8F00, 0x100);
		EV_SerifPlay(794);
		EV_Msg(msgTbl_ev004D[TextLanguage][3]); //"\aNo matter!   I will destroy\nStation "...
		EV_SetPos(player, 136.2f, 0.0f, 1460.86f);
		EV_SetAng(player, 0, 0x7600, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(77);
		EV_CameraPos(0, 9, 186.22f, 14.42f, 1292.4f);
		EventSe_Oneshot(1335, 110, 0, 0);
		EV_Wait(7);
		BGM_Play(MusicIDs_evtbgm01);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0029_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.2f, 1, 0);
		EV_CameraPos(0, 0, 180.11f, 14.24f, 1281.2f);
		EV_CameraAng(0, 0, 0xFDAD, 0x8800, 0);
		EV_CameraPos(0, 80, 193.84f, 18.27f, 1278.45f);
		EV_CameraAng(0, 80, 0xFDAD, 0x8800, 0);
		EV_Wait(20);
		EV_SetAction(eggmoble, &action_gm_gm0035_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.4f, 0, 4);
		EV_SetAction(eggmoble, &action_gm_gm0004_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.4f, 1, 8);
		EV_Wait(70);
		EV_CameraPos(0, 120, 193.08f, 45.84f, 1275.7f);
		EV_CameraAng(0, 120, 0x3AD, 0x8800, 0);
		EV_Wait(130);
		EV_CameraPos(0, 60, 216.11f, 53.27f, 1391.2f);
		EV_CameraAng(0, 60, 0x26D, 0x8800, 0);
		EV_CameraPos(0, 0, 167.11f, 29.84f, 1574.2f);
		EV_CameraAng(0, 0, 0x2AD, 0x9C00, 0x600);
		EV_CameraPos(0, 120, 113.11f, 40.040001f, 1618.2f);
		eggmoble_moveandturn(236.7f, 40.5f, 1404.0f, -0xE000, -22016, -0xE000, 120, 0);
		EV_Wait(120);
		moveObjectAngle2(TEPODON, 701.5f, -180.25f, 3300.2f, 701.5f, 86.25f, 3300.2f, 0xFFE0, 0, 0, 0xFFF0, 0x2000, 0, 200);
		EV_Wait(3);
		EV_SetPos(player, 118.2f, 0.0f, 1465.0f);
		EV_SetAng(player, 0, 0x1000, 0);
		EV_CameraPos(0, 0, 117.6f, 18.440001f, 1455.2f);
		EV_CameraAng(0, 0, 0xAD, 0x958D, 0);
		EV_CameraPos(1, 40, 106.0f, 4.1100001f, 1437.0f);
		EV_SetAction(player, &action_m_m9001_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_m_m9002_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_CameraPos(0, 70, 96.330002f, 1.87f, 1442.1f);
		EV_CameraAng(0, 70, 0xEAD, 0x9C8D, 0x500);
		EV_SetAction(eggmoble, &action_gm_gm0035_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
		eggmoble_moveandturn(297.70001f, 8.5f, 1665.0f, 0, 0, 0, 140, 0);
		EV_Wait(70);
		EV_CameraPos(0, 80, 89.559998f, 1.1f, 1449.1801f);
		EV_CameraAng(0, 80, 0xEAD, 0x9C8D, 0x500);
		EV_Wait(80);
		EV_CameraPos(0, 0, 281.59f, 14.42f, 1640.5f);
		EV_CameraAng(0, 0, 0xEAD, 0x998D, 0xFA27);
		EV_CameraPos(0, 110, 277.54999f, 16.049999f, 1645.0f);
		EV_CameraAng(0, 110, 0x7C1, 0x9B7D, 0xFA27);
		eggmoble_moveandturn(297.70001f, 9.5f, 1665.0f, 0, 0x8000, 0, 120, 0);
		EV_Wait(110);
		EV_CameraPos(0, 90, 274.19f, 15.2f, 1648.0f);
		EV_CameraAng(0, 90, 0x7C1, 0x8F57, 0xFA27);
		EV_Wait(110);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0109_miles, &MILES_TEXLIST, 0.80000001f, 1, 0);
		EV_CameraPos(1, 0, 115.23f, 3.3800001f, 1476.6f);
		EV_CameraAng(1, 0, 0x9AD, 0xF68D, 0x100);
		EV_CameraPos(1, 110, 116.0f, 4.5599999f, 1471.8f);
		eggmoble_moveandturn(297.70001f, 9.0f, 1665.0f, 0, -0x8000, 0, 40, 0);
		ChgEggMobleMod(5);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "NOO");
		}
		EV_Wait(20);
		EV_SerifPlay(797);
		EV_Msg(msgTbl_ev004D[TextLanguage][4]); //"\aIf that missile is launched..."
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FO");
		}
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(0, 0, 293.78f, 17.040001f, 1660.89f);
		EV_CameraAng(0, 0, 6317, 42125, 0xFE00);
		EV_CameraPos(0, 8, 295.07001f, 18.17f, 1661.91f);
		EV_CameraAng(0, 8, 6317, 42125, 0xFE00);
		EV_SerifPlay(798);
		EV_Msg(msgTbl_ev004D[TextLanguage][5]); //"\aReady?   Fire!"
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, 192.56f, 19.780001f, 1430.8f);
		EV_CameraAng(0, 0, 0x7AD, 0x838D, 0x800);
		EV_CameraPos(0, 160, 111.46f, 0.41999999f, 1457.2f);
		EV_CameraAng(0, 160, 0x7AD, 0x8B8D, 0x800);
		RumbleA(0, 10);
		SetMissileEffect(TEPODON, 7);
		EventSe_Play(2, 745, 1800);
		EventSe_Volume(2, 10, 1);
		EV_Wait(1);
		EventSe_Volume(2, 100, 80);
		moveObjectAngle2(TEPODON,701.5f, 86.25f, 3300.2f, 701.5f, 86.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(2);
		moveObjectAngle2( TEPODON, 701.5f, 86.25f, 3300.2f, 701.5f, 84.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(2);
		moveObjectAngle2( TEPODON, 701.5f, 84.25f, 3300.2f, 701.5f, 86.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(2);
		moveObjectAngle2( TEPODON, 701.5f, 86.25f, 3300.2f, 701.5f, 84.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(2);
		moveObjectAngle2( TEPODON, 701.5f, 84.25f, 3300.2f, 701.5f, 86.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 86.25f, 3300.2f, 701.5f, 84.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 84.25f, 3300.2f, 701.5f, 86.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0,2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 86.25f, 3300.2f, 701.5f, 84.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 84.25f, 3300.2f, 701.5f, 87.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 87.25f, 3300.2f, 701.5f, 84.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 84.25f, 3300.2f, 701.5f, 87.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 87.25f, 3300.2f, 701.5f, 84.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 84.25f, 3300.2f, 701.5f, 87.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 87.25f, 3300.2f, 701.5f, 85.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 85.25f, 3300.2f, 701.5f, 84.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 80.25f, 3300.2f, 701.5f, 86.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 86.25f, 3300.2f, 701.5f, 85.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 85.25f, 3300.2f, 701.5f, 80.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 80.25f, 3300.2f, 701.5f, 80.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 80.25f, 3300.2f, 701.5f, 85.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 85.25f, 3300.2f, 701.5f, 85.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 85.25f, 3300.2f, 701.5f, 80.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xFFFF, 0x2000, 0, 2);
		EV_Wait(1);
		moveObjectAngle2( TEPODON, 701.5f, 85.25f, 3300.2f, 701.5f, 1100.25f, 3300.2f, 0xFFFF, 0x2000, 0, 0xF000, 0x4000, 0, 200);
		EV_Wait(80);
		EV_ClrFace(player);
		EV_SetFace(player, "NO");
		EV_Wait(20);
		stopObjectAll();
		EventSe_Stop(2);
		EventSe_Play(2, 745, 1800);
		EventSe_Volume(2, 50, 1);
		EV_CameraPos(0, 0, 119.8f, 5.8000002f, 1471.5f);
		EV_CameraAng(0, 0, 0x3AD, 0x88D, 0xFF00);
		EV_Wait(15);
		moveObjectAngle2( TEPODON, 351.5f, 320.25f, 2300.2f, 471.5f, 1030.25f, 1800.2f, 0xD800, 0x2000, 0, 0xD800, 0x6000, 0, 100);
		SetEggMissileParam(TEPODON, 0.60000002f);
		EV_Wait(15);
		EV_ClrFace(player);
		EventSe_Play(2, 745, 1800);
		EventSe_Volume(2, 70, 1);
		EV_CameraPos(1, 0, 120.19f, 0.89999998f, 1458.3f);
		EV_CameraAng(1, 0, 0xCFB, 0x828D, 0x300);
		EV_CameraPos(1, 75, 118.19f, 0.62f, 1457.15f);
		EV_CameraAng(1, 75, 0x18FB, 0x8C8D, 0xC00);
		EV_CameraPerspective(1, 80, 0x2FA5);
		EventSe_Stop(2);
		EventSe_Play(2, 745, 1800);
		EventSe_Volume(2, 80, 1);
		EV_Wait(10);
		eggmoble_moveandturn(297.70001f, 9.0f, 1665.0f, 0, -0x3400, 0, 30, 0);
		EV_Wait(5);
		ChgEggMobleMod(5);
		EV_Wait(65);
		EV_SetPos(player, 89.669998f, 0.0f, 1541.1f);
		EV_SetAng(player, 0x7AD, 0x3E90, 0);
		SetEggMissileParam(TEPODON, 0.25f);
		stopObjectAll();
		EV_CameraPos(1, 0, -15.7f, 270.95001f, 1730.9f);
		EV_CameraAng(1, 0, 0x247, 0xD2D5, 0xFA00);
		EV_CameraPos(1, 170, -12.1f, 31.32f, 1689.4f);
		moveObjectAngle2( TEPODON, 1600.5f, 1300.25f, 1602.2f, 1612.5f, 100.25f, 1000.2f, 0x8B00, 0, 0x1C00, 0x8B00, 0x4000, 0, 160);
		EV_Wait(160);
		EventSe_Stop(2);
		BGM_Stop();
		EventSe_Oneshot(1339, 110, 0, 0);
		RumbleA(0, 2);
		EV_CameraPos(1, 2, -12.1f, 31.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 32.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 33.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 32.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 34.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 33.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.32f, 1689.4f);
		EV_Wait(2);
		RumbleA(0, 2);
		EV_CameraPos(1, 2, -12.1f, 32.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 33.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 32.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 34.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 33.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 32.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 33.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 32.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 34.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 33.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 32.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.32f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 31.0f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.5f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.799999f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.6f, 1689.4f);
		EV_Wait(2);
		EV_CameraPos(1, 2, -12.1f, 30.700001f, 1689.4f);
		EV_Wait(10);
		EV_CameraPos(1, 130, -26.389999f, 29.0f, 1696.4f);
		EV_CameraAng(1, 130, 0x247, 0xD2D5, 0xFB00);
		EV_Wait(130);
		EV_FreeObject(&TEPODON);
		EV_CameraPos(1, 0, 101.28f, 4.6599998f, 1538.6f);
		EV_CameraAng(1, 0, 0x347, 0x57D5, 0xFF00);
		EV_CameraPos(1, 90, 99.660004f, 4.5799999f, 1536.12f);
		EV_ClrFace(player);
		EV_SetFace(player, "BAABAAAAABABAAABAAABBBAA");
		EV_Wait(100);
		EV_ClrFace(player);
		ChgEggMobleMod(5);
		EV_Wait(2);
		EV_CameraPos(1, 0, 302.70001f, 23.200001f, 1660.5f);
		EV_CameraAng(1, 0, 0xF047, 0x5FD5, 0xFB00);
		EV_CameraPos(0, 30, 298.10001f, 19.200001f, 1658.8f);
		EV_CameraAng(0, 30, 0x1147, 0x78D5, 0xFB00);
		EV_SerifPlay(799);
		EV_Msg(msgTbl_ev004D[TextLanguage][6]); //"\aAah!  No!   It was a dud!"
		EV_SerifWait();
		EV_CameraPos(0, 30, 292.89999f, 16.0f, 1657.0f);
		EV_CameraAng(0, 30, 0x1300, 0x96D5, 0xFB00);
		EV_SetAction(eggmoble, &action_gm_gm0034_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
		EV_SerifPlay(800);
		EV_Msg(msgTbl_ev004D[TextLanguage][7]); //"\aI can't believe this!"
		EV_SerifWait();
		EV_CameraPos(1, 0, 280.0f, 6.4000001f, 1698.5f);
		EV_CameraAng(1, 0, 0x247, 0xF4D5, 0x600);
		EV_CameraPos(1, 80, 245.86f, 10.36f, 1698.5f);
		EV_CameraAng(1, 80, 0x247, 0xF4D5, 0x600);
		EV_SerifPlay(801);
		EV_Msg(msgTbl_ev004D[TextLanguage][8]); //"\aAh!  I'll go and deal \nwith this mys"...
		eggmoble_moveandturn(297.70001f, 13.0f, 1665.0f, 0, -0x1000, 0, 60, 1);
		BGM_Play(MusicIDs_hurryup);
		EV_ClrAction(eggmoble);
		EV_Wait(65);
		EventSe_Play(1, 1336, 1800);
		EventSe_Volume(1, -60, 1);
		EV_Wait(1);
		EventSe_Volume(1, -50, 80);
		eggmoble_moveandturn(309.70001f, 19.0f, 1416.0f, 0, 0, 0, 100, 1);
		EV_Wait(70);
		EV_CameraPos(1, 0, 76.0f, 7.1999998f, 1552.5f);
		EV_CameraAng(1, 0, 0xFF47, 0xC6D5, 0x600);
		EV_CameraPos(0, 55, 73.699997f, 5.1999998f, 1538.8f);
		EV_Wait(50);
		EventSe_Volume(1, -80, 80);
		EV_CameraPos(1, 0, 104.0f, 0.80000001f, 1536.9f);
		EV_CameraAng(1, 0, 0xD47, 0x4AD5, 0x600);
		EV_CameraPos(1, 100, 96.5f, 3.6700001f, 1539.1f);
		EV_ClrFace(player);
		EV_SetFace(player, "OEE");
		EV_SerifPlay(802);
		EV_Msg(msgTbl_ev004D[TextLanguage][9]); //"\aOh, no!"
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "DECDDDEEE"); //"\aI'd better get to that missile\nbefor"...
		EV_SerifPlay(803);
		EV_Msg(msgTbl_ev004D[TextLanguage][10]);
		eggmoble_moveandturn(309.70001f, 27.0f, 1416.0f, 0, -0x4000, 0, 125, 1);
		EV_Wait(40);
		EV_CameraPos(1, 0, 82.199997f, 8.0f, 1549.4f);
		EV_CameraAng(1, 0, 0x1347, 0xD5D5, 0x600);
		EV_CameraPos(1, 90, 83.900002f, 2.27f, 1549.4f);
		EV_CameraAng(1, 90, 0xA47, 0xD5D5, 0x600);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(60);
		EventSe_Stop(1);
		gSkyScale = SkyBoxScale_StationSquare[ssActNumber][ClipLevel];
		break;
	case 2:
		gSkyScale = SkyBoxScale_StationSquare[ssActNumber][ClipLevel];
		EV_CameraOff();
		EV_PadOn();
		EventSe_Stop(1);
		EventSe_Close();
		stopObjectAll();
		EV_ClrPath(player);
		kill_task_gattai_EV004D();
		EV_ClrPath(obj_ver2_wing);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&obj_ver2_wing);
		delete_eggmoble();
		EV_FreeObject(&TEPODON);
		EV_Wait(1);
		break;
	}
}