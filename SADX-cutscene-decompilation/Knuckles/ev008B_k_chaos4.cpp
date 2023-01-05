#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev008B[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("CAPTUREBEAM"), &CAPTUREBEAM_TEXLIST,
	(char*)("M_EM_BLUE"), &M_EM_BLUE_TEXLIST,
	(char*)("M_EM_GREEN"), &M_EM_GREEN_TEXLIST,
	(char*)("CHAOS2"), &CHAOS2_TEXLIST,
	(char*)("CHAOS4_COMMON"), &CHAOS4_COMMON_TEXLIST,
	(char*)("EV_CHAOS0_MANJU"), &EV_CHAOS0_MANJU_TEXLIST,
	(char*)("CHAOS_SURFACE"), &CHAOS_SURFACE_TEXLIST,
	0
};

void ev008B_k_chaos4(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SMOKE_01 = 0;
		SMOKE_02 = 0;
		CHAOS = 0;
		B_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(77);
		EV_SetPos(player, 73.0f, 73.050003f, 380.60001f);
		EV_SetAng(player, 0xFF96, 0x8000, 0x12);
		EV_CreatePlayer(2, SonicTheHedgehog, 73.0f, 72.0f, 170.0f, 0xF924, 0, 0);
		EV_CreatePlayer(3, MilesTalesPrower, -104.07f, 75.459999f, 349.37f, 0, 0x6D73, 0);
		create_eggmoble(85.0f, 40.0f, 80.0f, 0, 0x3B00, 0);
		CAP_01 = CreateCaptureBeam(77.0f, 72.050003f, 185.0f, 0, 0, 0);
		if (!SMOKE_01)
		{
			SMOKE_01 = CObjSmoke_Create();
		}
		if (!SMOKE_02)
		{
			SMOKE_02 = CObjSmoke_Create();
		}
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[57], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[6], &SONIC_TEXLIST, 2.0f, 1, 0);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		seteggmobleparam(0.5f, 0x100);
		ChgEggMobleMod(5);
		SetCaptureParam(CAP_01, 0.1f, 0.0f, 0.1f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.001f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.001f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		EV_CreateObject(&B_EME,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z,
			0, 0, 0);
		EV_CreateObject(&G_EME,
			sonic->twp->pos.x,
			sonic->twp->pos.z,
			sonic->twp->pos.y,
			0, 0, 0);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_Wait(1);
		EV_CameraPos(0, 0, 66.330002f, 76.639999f, 394.67999f);
		EV_CameraAng(0, 0, 0x189, 0xF56D, 0xF400);
		EV_CameraChase(player);
		EV_CameraPerspective(0, 30, 0x238E);
		moveObject(sonic, 73.0f, 72.0f, 170.0f, 73.0f, 72.199997f, 230.0f, 30);
		moveObject(player, 73.0f, 72.0f, 380.60001f, 73.0f, 73.050003f, 320.60001f, 30);
		EV_Wait(15);
		EV_SetMode(G_EME, 0);
		EV_SetMode(B_EME, 0);
		EV_Wait(15);
		EV_SetPos(B_EME, 81.0f, 72.050003f, 180.0f);
		EV_SetAng(B_EME, 0, 0, 0);
		EV_SetPos(G_EME, 73.0f, 72.050003f, 190.0f);
		EV_SetAng(G_EME, 0, 0x6000, 0);
		EV_SetPos(SMOKE_01, 73.0f, 72.0f, 230.0f);
		EV_SetPos(SMOKE_01, 73.0f, 72.0f, 320.0f);
		stopObject(player);
		stopObject(sonic);
		throughplayer_on(player);
		throughplayer_on(sonic);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraPerspective(0, 30, 0x1C72);
		EV_CameraPos(0, 0, 61.509998f, 76.849998f, 206.58f);
		EV_CameraAng(0, 0, 0x189, 0x8E6D, 0xFB00);
		EV_CameraPos(0, 15, 62.630001f, 78.220001f, 247.53999f);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0046_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(sonic, &action_s_s9000_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(sonic, &action_s_s9001_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		moveObject(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z,
			sonic->twp->pos.x,
			72.349998f,
			sonic->twp->pos.z + 48.0f,
			15);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0033_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_k_k0038_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_k_k0039_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		moveObject(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			player->twp->pos.x,
			72.349998f,
			player->twp->pos.z - 48.0f,
			15);
		EV_Wait(10);
		dsPlay_oneshot_v(1338, 0, 0, 120,
			player->twp->pos.x,
			72.349998f,
			player->twp->pos.z + 48.0f);
		EV_Wait(5);
		EV_SetShadow(G_EME, 0.30000001f);
		EV_SetShadow(B_EME, 0.30000001f);
		EV_SetShadow(eggmoble, 1.35f);
		RumbleA(0, 1);
		stopObject(player);
		stopObject(sonic);
		EV_Wait(5);
		EV_CameraPerspective(0, 30, 0x3111);
		EV_CameraPos(0, 0, 61.810001f, 77.940002f, 208.53999f);
		EV_CameraAng(0, 0, 0xFE89, 0x866D, 0xFD00);
		moveObject(sonic,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z,
			73.0f, 72.0f, 230.0f, 30);
		moveObject(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			73.0f, 72.0f, 320.60001f, 30);
		moveObject(SMOKE_01,
			sonic->twp->pos.x,
			sonic->twp->pos.y,
			sonic->twp->pos.z, 73.0f, 72.0f, 230.0f, 35);
		moveObject(SMOKE_02,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			73.0f, 72.0f, 320.0f, 35);
		EV_SerifPlay(464);
		EV_Wait(10);
		EV_SetPos(B_EME, 73.0f, 75.0f, 250.0f);
		EV_SetAction(B_EME, &action_ce_0003_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(B_EME, &action_ce_0004_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		moveObject(
			B_EME,
			B_EME->twp->pos.x,
			B_EME->twp->pos.y,
			B_EME->twp->pos.z,
			81.0f,
			72.050003f,
			180.0f,
			30);
		dsPlay_oneshot_v(1334, 0, 0, 120, 81.0f, 72.050003f, 180.0f);
		if (SMOKE_01)
		{
			SMOKE_01->twp->ang.y = 5;
			SMOKE_01->twp->ang.x = 5;
		}
		if (SMOKE_02)
		{
			SMOKE_02->twp->ang.y = 5;
			SMOKE_02->twp->ang.x = 5;
		}
		EV_Wait(15);
		dsPlay_oneshot_v(1334, 0, 0, 120, 81.0f, 72.050003f, 180.0f);
		EV_SetPos(G_EME, 73.0f, 75.0f, 235.0f);
		EV_SetAction(G_EME, &action_ce_0005_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(G_EME, &action_ce_0006_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		moveObject(
			G_EME,
			G_EME->twp->pos.x,
			G_EME->twp->pos.y,
			G_EME->twp->pos.z,
			73.0f,
			72.050003f,
			190.0f,
			30);
		EV_Wait(5);
		EV_CameraTargetFree();
		EV_CameraTargetObj(0, 30, B_EME, 0.0f, 0.0f, 0.0f, 0);
		stopObject(player);
		stopObject(sonic);
		stopObject(SMOKE_01);
		EV_SerifPlay(462);
		EV_Msg(msgTbl_ev008B[TextLanguage][0]); //"\aOh no!   \nThe Chaos Emeralds...!"
		if (SMOKE_01)
		{
			SMOKE_01->twp->ang.y = 0;
			SMOKE_01->twp->ang.x = 0;
		}
		if (SMOKE_02)
		{
			SMOKE_02->twp->ang.y = 0;
			SMOKE_02->twp->ang.x = 0;
		}
		EV_LookFree(sonic);
		EV_LookPoint(sonic, 75.0f, 75.0f, 233.5f);
		throughplayer_off(player);
		throughplayer_off(sonic);
		EV_Wait(5);
		if (SMOKE_01)
		{
			FreeTask(SMOKE_01);
			SMOKE_01 = 0;
		}
		if (SMOKE_02)
		{
			FreeTask(SMOKE_02);
			SMOKE_02 = 0;
		}
		EV_Wait(5);
		stopObject(B_EME);
		EV_Wait(15);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "EEI");
		stopObject(G_EME);
		EV_Wait(5);
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_CameraPerspective(0, 1, 0x71C);
		EV_CameraPos(0, 0, 64.68f, 80.580002f, 89.599998f);
		EV_CameraAng(0, 0, 0xFE5D, 0x84A3, 0);
		EV_Wait(15);
		BGM_Play(MusicIDs_eggman);
		EV_CameraPos(0, 45, 126.85f, 100.11f, -68.57f);
		EV_CameraAng(0, 45, 0xFE5D, 0x7800, 0);
		EV_Wait(15);
		EV_ClrFace(sonic);
		eggmoble_move_rapid(85.0f, 80.0f, 80.0f, 50);
		dsPlay_timer_v(1337, 213385217, 1, 120, 70, 85.0f, 80.0f, 80.0f);
		EV_Wait(30);
		EV_SerifPlay(1072);
		EV_Wait(30);
		ChgEggMobleMod(5);
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 84.080002f, 111.19f, 85.099998f);
		EV_CameraAng(0, 0, 0, 0xFD00, 0);
		EV_CameraPos(0, 15, 84.080002f, 94.190002f, 85.099998f);
		EV_Wait(15);
		EV_CameraPos(0, 45, 84.080002f, 93.190002f, 85.099998f);
		EV_Wait(30);
		EV_CameraPos(0, 30, 103.13f, 102.22f, 110.82f);
		EV_CameraAng(0, 30, 0xF100, 0x1800, 0);
		ChgEggMobleMod(0);
		EV_Wait(30);
		EV_CameraPos(0, 45, 106.24f, 104.38f, 115.47f);
		EV_Wait(15);
		eggmoble_move_rapid(80.0f, 80.0f, 160.0f, 45);
		ChgEggMobleSMod(1);
		dsPlay_oneshot_v(1341, 0, 0, 120, 80.0f, 80.0f, 160.0f);
		EV_CameraPos(1, 45, 103.13f, 102.22f, 110.82f);
		EV_CameraAng(1, 45, 0xF500, 0x7000, 0);
		EV_Wait(45);
		EV_CameraPos(1, 80, 107.19f, 105.15f, 101.03f);
		EV_SerifPlay(1073);
		EV_Msg(msgTbl_ev008B[TextLanguage][1]); //"\aEggman!   \nWhat's he doing here?"
		EV_Wait(15);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, 83.629997f, 73.699997f, 120.18f);
		EV_CameraAng(0, 0, 0x200, 0x7C00, 0);
		dsPlay_timer_v(1336, 213385218, 1, 120, 60, 80.0f, 80.0f, 160.0f);
		EV_SetAng(eggmoble, 0, 0, 0x12);
		EV_Wait(10);
		ChgCaptureMod(CAP_01, 1);
		EV_Wait(10);
		moveObject(B_EME,
			B_EME->twp->pos.x,
			B_EME->twp->pos.y,
			B_EME->twp->pos.z,
			B_EME->twp->pos.x,
			B_EME->twp->pos.y + 10.0f,
			B_EME->twp->pos.z,
			30);
		moveObject(G_EME,
			G_EME->twp->pos.x,
			G_EME->twp->pos.y,
			G_EME->twp->pos.z,
			G_EME->twp->pos.x,
			G_EME->twp->pos.y + 10.0f,
			G_EME->twp->pos.z,
			35);
		EV_Wait(20);
		EV_SerifPlay(1074);
		ChgEggMobleSMod(0);
		EV_Wait(10);
		ChgEggMobleMod(5);
		EV_Wait(5);
		stopObject(B_EME);
		stopObject(G_EME);
		ChgCaptureMod(CAP_01, 2);
		dsStop_num(1336);
		EV_Wait(5);
		EV_ClrAction(eggmoble);
		EV_ClrAction(G_EME);
		EV_ClrAction(G_EME);
		EV_SetAction(eggmoble, &action_gm_gm0030_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(G_EME, &action_gm_0030cg_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(B_EME, &action_gm_gm0030cb_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 82.300003f, 95.059998f, 166.44f);
		EV_CameraAng(0, 0, 0xF500, 0x1300, 0);
		EV_CameraPos(0, 60, 89.669998f, 99.589996f, 181.07001f);
		EV_SetPos(G_EME,
			eggmoble->twp->pos.x + 1.0f,
			eggmoble->twp->pos.y - 9.1999998f,
			eggmoble->twp->pos.z);
		EV_SetAng(G_EME,
			(int)eggmoble->twp->pos.x,
			(int)eggmoble->twp->pos.y,
			(int)eggmoble->twp->pos.z);
		EV_SetPos(B_EME,
			eggmoble->twp->pos.x,
			eggmoble->twp->pos.y - 9.1999998f,
			eggmoble->twp->pos.z);
		EV_SetAng(B_EME,
			(int)eggmoble->twp->pos.x,
			(int)eggmoble->twp->pos.y,
			(int)eggmoble->twp->pos.z);
		EV_SetPos(tails, 37.299999f, 72.019997f, 213.32001f);
		EV_LookFree(sonic);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(sonic,
			sonic->twp->ang.x,
			-0x4000 - sonic->twp->ang.y,
			sonic->twp->ang.z);
		EV_SetPos(player, 105.82f, 72.129997f, 349.73001f);
		EV_SetAng(player, 0xFF96, 0x9000, 0x12);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		EV_SerifPlay(1075);
		EV_Msg(msgTbl_ev008B[TextLanguage][2]); //"\aHa! That's all there is to it.\nYou g"...
		EV_Wait(70);
		EV_MsgClose();
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 0x18E4);
		EV_CameraPos(0, 0, 99.209999f, 109.2f, 135.95f);
		EV_CameraAng(0, 0, 0xEE00, 0x6D00, 0);
		EV_CameraPos(0, 90, 108.56f, 119.03f, 117.38f);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, 59.419998f, 76.160004f, 233.14999f);
		EV_CameraAng(0, 0, 0x200, 0xC000, 0);
		EV_CameraPos(0, 60, 59.419998f, 76.160004f, 220.73f);
		moveObject(player, 107.76f, 72.519997f, 258.72f, 102.5f, 72.169998f, 220.0f, 30);
		EV_Wait(30);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_CameraPos(0, 0, 100.98f, 72.870003f, 209.2f);
		EV_CameraAng(0, 0, 0x1600, 0x7900, 0);
		EV_CameraPos(0, 0, 103.93f, 72.870003f, 209.71001f);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "F");
		}
		EV_Wait(5);
		EV_SerifPlay(1076);
		EV_Msg(msgTbl_ev008B[TextLanguage][3]); //"\aThat's a Chaos Emerald!"
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "F");
		}
		EV_Wait(30);
		EV_ClrFace(player);
		EV_CameraPerspective(0, 1, 0x2AAB);
		EV_CameraPos(0, 0, 88.389999f, 94.309998f, 175.25999f);
		EV_CameraAng(0, 0, 0x400, 0xE00, 0);
		EV_LookObject(player, eggmoble, 0.0f, 12.0f, 0.0f);
		EV_CameraPos(1, 15, 86.720001f, 94.800003f, 170.57001f);
		EV_Wait(60);
		EV_CameraPos(1, 60, 85.309998f, 104.18f, 182.86f);
		EV_CameraAng(1, 60, 0xED00, 0xD00, 0);
		EV_SerifPlay(1077);
		EV_Msg(msgTbl_ev008B[TextLanguage][4]); //"\aFirst come, first served,\nthey say."
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 0x18E4);
		EV_CameraPos(0, 0, 53.66f, 111.64f, 139.66f);
		EV_CameraAng(0, 0, 0xED00, 0x9D00, 0);
		EV_CameraPos(0, 90, 59.5f, 107.15f, 146.42999f);
		EV_SerifPlay(1078);
		EV_Msg(msgTbl_ev008B[TextLanguage][5]); //"\aAnd you serve me too well\nfor your o"...
		EV_Wait(50);
		EV_Msg(msgTbl_ev008B[TextLanguage][6]); //"\aHa ha ha ha ha ha ha..."
		EV_Wait(40);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(0, 0, 68.160004f, 74.540001f, 223.09f);
		EV_CameraAng(0, 0, 0x1200, 0x9F00, 0xFF00);
		EV_CameraPos(0, 60, 65.040001f, 72.400002f, 219.82001f);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "F");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(sonic, "FE");
		}
		EV_Wait(5);
		EV_SerifPlay(1079);
		EV_Msg(msgTbl_ev008B[TextLanguage][7]); //"\aYou can't get away with this!"
		EV_Wait(20);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(30);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(sonic);
		}
		EV_LookObject(sonic, player, 0.0f, 6.0f, 0.0f);
		EV_ClrFace(sonic);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "EEFEE");
		}
		EV_Wait(30);
		EV_CameraPerspective(0, 45, 0x1C72);
		EV_CameraPos(0, 45, 42.23f, 74.5f, 210.67999f);
		EV_CameraAng(0, 45, 0x400, 0xB100, 0);
		EV_Wait(30);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(15);
		EV_CameraPos(0, 240, 38.52f, 74.110001f, 209.25f);
		EV_LookFree(sonic);
		EV_SetAction(sonic, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_SerifPlay(1080);
		EV_Msg(msgTbl_ev008B[TextLanguage][8]); //"\aKnuckles, did you let him\ntrick you "...
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "FCE");
		EV_Wait(60);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_Wait(15);
		EV_SetAction(player, &action_k_k0034_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(player, &action_k_k0035_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1081);
		EV_Msg(msgTbl_ev008B[TextLanguage][9]); //"\aLike, you weren't?"
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
			EV_SetFace(player, "F");
		}
		EV_Wait(5);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
			EV_SetFace(player, "F");
		}
		EV_Wait(5);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
			EV_SetFace(player, "F");
		}
		EV_Wait(10);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
			EV_SetFace(player, "I");
		}
		EV_Wait(10);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
			EV_SetFace(player, "I");
		}
		EV_SerifPlay(1082);
		EV_Msg(msgTbl_ev008B[TextLanguage][10]); //"\aSmooth move, Knucklehead!"
		EV_SetAction(sonic, &action_s_s0013_sonic, &SONIC_TEXLIST, 0.25f, 0, 16);
		EV_LookObject(sonic, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(4);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_CameraPerspective(0, 1, 0xFA5);
		EV_CameraPos(0, 0, 134.05f, 76.400002f, 185.8f);
		EV_CameraAng(0, 0, 0, 0x5E00, 0);
		EV_CameraPos(0, 120, 143.69f, 76.400002f, 177.07001f);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CECE");
		EV_Wait(30);
		EV_MsgClose();
		EV_ClrFace(sonic);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 0xE39);
		EV_CameraPos(0, 0, 79.860001f, 97.410004f, 177.16f);
		EV_CameraAng(0, 0, 0xF500, 0, 0);
		EV_Wait(1);
		BGM_Stop();
		EV_CameraPerspective(0, 100, 0x3111);
		EV_SerifPlay(1083);
		EV_Msg(msgTbl_ev008B[TextLanguage][11]); //"\aHa ha ha ha ha ha ha... \nI've got 4 "...
		EV_Wait(90);
		EV_MsgClose();
		EV_Wait(10);
		EV_LookFree(player);
		EV_LookFree(sonic);
		EV_LookFree(tails);
		EV_CameraPos(0, 30, 93.470001f, 106.04f, 258.95001f);
		EV_CameraAng(0, 30, 0xEF00, 0xF00, 0);
		EV_Wait(20);
		EV_SerifPlay(1084);
		EV_Msg(msgTbl_ev008B[TextLanguage][12]); //"\aHere, Chaos!"
		BGM_Play(MusicIDs_evtbgm01);
		EV_Wait(10);
		EV_CameraPos(0, 60, 97.089996f, 110.5f, 268.32999f);
		EV_Wait(60);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, 66.120003f, 76.349998f, 223.75999f);
		EV_CameraAng(0, 0, 0x6F8, 0xAA00, 0);
		EV_Wait(10);
		CreateChaos2(26.83f, 69.800003f, 159.98f, 0, 0x5500, 0, 240);
		EV_Wait(1);
		SetPositionChaos2(26.83f, 69.800003f, 159.98f);
		SetAngleChaos2(0, 0x5500, 0);
		SetWaterChaos2();
		ChangeMotionSpeedChaos2(0.5f);
		EV_CameraPos(0, 20, 43.0f, 76.169998f, 196.59f);
		EV_CameraAng(0, 20, 0x400, 0xAA00, 0);
		ToHumanChaos2();
		EV_Wait(20);
		dsPlay_timer_v(1339, 213385219, 1, 120, 265, 26.83f, 69.800003f, 159.98f);
		EV_CameraPos(0, 45, 8.3900003f, 91.059998f, 149.03f);
		EV_CameraAng(0, 45, 0xF700, 0xAA00, 0);
		EV_Wait(45);
		EV_CameraPos(0, 120, -14.2f, 96.970001f, 135.48f);
		EV_Wait(45);
		EV_SetAng(eggmoble, 0, 0x4000, 0);
		EV_SetAng(G_EME, 0, 0xC000, 0);
		EV_SetAng(B_EME, 0, 0xC000, 0);
		EV_CameraPerspective(0, 1, 0x11C7);
		EV_CameraPos(0, 0, 76.120003f, 74.18f, 293.91f);
		EV_CameraAng(0, 0, 0x300, 0xD00, 0);
		EV_CameraPos(0, 130, 134.14999f, 74.209999f, 275.72f);
		EV_CameraAng(0, 130, 0x300, 0x2200, 0);
		EV_Wait(130);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, 38.23f, 110.21f, 180.10001f);
		EV_CameraAng(0, 0, 0xF000, 0xD200, 0);
		EV_CameraPos(0, 60, 22.360001f, 117.48f, 187.61f);
		EV_ClrAction(eggmoble);
		EV_ClrAction(G_EME);
		EV_ClrAction(B_EME);
		EV_SetAction(eggmoble, &action_gm_gm0032_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(G_EME, &action_gm_gm0032cg_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(G_EME, &action_ce_0005_m_em_green, &M_EM_GREEN_TEXLIST, 0.30000001f, 0, 0);
		EV_SetAction(G_EME, &action_ce_0006_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(B_EME, &action_gm_gm0032cb_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(B_EME, &action_ce_0003_m_em_blue, &M_EM_BLUE_TEXLIST, 0.30000001f, 0, 0);
		EV_SetAction(B_EME, &action_ce_0004_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1085);
		EV_MsgW(50, msgTbl_ev008B[TextLanguage][13]); //"\aCome here, my hungry pet!"
		EV_MsgClose();
		EV_CameraPos(0, 0, 62.970001f, 82.419998f, 245.27f);
		EV_CameraAng(0, 0, 0x100, 0xF00, 0);
		EV_CameraPos(1, 90, 47.650002f, 83.400002f, 208.32001f);
		EV_SetPos(B_EME, 30.0f, 100.0f, 163.0f);
		moveObject(B_EME, 30.0f, 100.0f, 163.0f, 30.0f, 86.0f, 163.0f, 60);
		EV_SetPos(G_EME, 26.0f, 95.0f, 162.0f);
		moveObject(G_EME, 26.0f, 95.0f, 162.0f, 26.0f, 85.5f, 162.0f, 60);
		EV_SetAng(player, 0, 0x9400, 0);
		EV_SetAng(tails, 0, 0x8200, 0);
		EV_Wait(90);
		EV_CameraPos(0, 0, 73.160004f, 81.239998f, 252.14999f);
		EV_CameraAng(0, 0, 0, 0x1300, 0);
		EV_CameraPos(1, 60, 94.739998f, 81.239998f, 297.70001f);
		EV_Wait(10);
		crushLightOn(26.83f, 85.5f, 159.98f, 3, 5, 0.2f, 4.0f, 0xB4FFFF91, 0xFFFF32);
		EV_Wait(30);
		CHAOS = COverlayCreate(0.011111111f, 0.2f, 1.0f, 1.0f, 0.88f);
		EV_Wait(70);
		dsPlay_oneshot_v(1340, 0, 0, 120, 26.83f, 60.0f, 159.98f);
		DeleteChaos2();
		EV_FreeObject(&B_EME);
		EV_FreeObject(&G_EME);
		CreateChaos4(26.83f, 60.0f, 159.98f, 0, 0x5500, 0, 120);
		EV_Wait(1);
		ChangeMotionSpeedChaos4(0.5f);
		EV_Wait(10);
		crushLightOff();
		if (CHAOS)
		{
			COverlaySetSpeed(CHAOS, -0.016666668f);
		}
		EV_Wait(60);
		if (CHAOS)
		{
			FreeTask(CHAOS);
			CHAOS = 0;
		}
		EV_Wait(10);
		EV_SerifPlay(1086);
		EV_MsgW(50, msgTbl_ev008B[TextLanguage][14]); //"\aNow look what he is!"
		EV_SerifPlay(1087);
		EV_CameraPos(1, 0, 82.169998f, 72.900002f, 175.8f);
		EV_CameraAng(1, 0, 0x476, 0x9200, 0);
		EV_CameraPos(1, 200, 87.559998f, 74.300003f, 187.49001f);
		EV_CameraAng(1, 200, 0x476, 0x9200, 0);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "FFF");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CFB");
		}
		EV_Msg(msgTbl_ev008B[TextLanguage][15]); //"\aNo problem.   I'll make him eat dirt!"
		EV_Wait(110);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		EV_InitPlayer(0);
		stopObjectAll();
		if (CHAOS)
		{
			FreeTask(CHAOS);
			CHAOS = 0;
		}
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		crushLightOff();
		throughplayer_off(player);
		throughplayer_off(sonic);
		DeleteChaos2();
		DeleteChaos4();
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_FreeObject(&B_EME);
		EV_FreeObject(&G_EME);
		delete_eggmoble();
		light_delete(CAP_01);
		CAP_01 = 0;
		if (SMOKE_01)
		{
			FreeTask(SMOKE_01);
			SMOKE_01 = 0;
		}
		if (SMOKE_02)
		{
			FreeTask(SMOKE_02);
			SMOKE_02 = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}