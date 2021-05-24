#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0039_t_beforechaos4(int state)
{
	ObjectMaster* B_EME = 0;
	ObjectMaster* G_EME = 0;
	ObjectMaster* SMOKE_01 = 0;
	ObjectMaster* SMOKE_02 = 0;
	ObjectMaster* CAP_01 = 0;
	ObjectMaster* CHAOS = 0;
	ObjectMaster* B_OUT = 0;

	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* knuckles = 0;
	ObjectMaster* sonic = 0;
	ObjectMaster* eggmoble = 0;

	//Enable this to see the unused dust effect.
	bool enableUnusedCode = false;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(77);
		EV_SetPos(player, 73.0f, 72.0f, 170.0f);
		EV_SetAng(player, 63780, 0, 0);
		EV_CreatePlayer(2, Knuckles_Main, 73.0f, 73.050003f, 380.60001f, 65430, 0x8000, 18);
		EV_CreatePlayer(3, Sonic_Main, -104.07f, 75.459999f, 349.37f, 0, 28019, 0);
		create_eggmoble(85.0f, 40.0f, 80.0f, 0, 15104, 0);
		CAP_01 = CreateCaptureBeam(77.0f, 72.050003f, 185.0f, 0, 0, 0);
		SMOKE_01 = CObjSmoke_Create();
		SMOKE_02 = CObjSmoke_Create();
		if (enableUnusedCode) {
			SMOKE_01->Data1->Rotation.y = 5;
			SMOKE_01->Data1->Rotation.x = 5;
			SMOKE_02->Data1->Rotation.y = 5;
			SMOKE_02->Data1->Rotation.x = 5;
		}
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[48], &MILES_TEXLIST, 2.0f, 1, 0);
		knuckles = EV_GetPlayer(2);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		sonic = EV_GetPlayer(3);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		seteggmobleparam(0.5f, 256);
		ChgEggMobleMod(5);
		SetCaptureParam(CAP_01, 0.1f, 0.0f, 0.1f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 5.0f, 0.0f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.001f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.001f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		EV_CreateObject(&B_EME,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z,
			0, 0, 0);
		EV_CreateObject(&G_EME,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z,
			0, 0, 0);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 78.540001f, 76.160004f, 154.45f);
		EV_CameraAng(0, 0, 393, 32109, 62464);
		EV_CameraChase(player);
		EV_CameraPerspective(0, 30, 9102);
		moveObject(player, 73.0f, 72.0f, 170.0f, 73.0f, 72.199997f, 230.0f, 30);
		moveObject(knuckles, 73.0f, 72.0f, 380.60001f, 73.0f, 73.050003f, 320.60001f, 30);
		EV_Wait(15);
		EV_SetMode(G_EME, 0);
		EV_SetMode(B_EME, 0);
		EV_Wait(15);
		EV_SetPos(B_EME, 81.0f, 72.050003f, 180.0f);
		EV_SetAng(B_EME, 0, 0, 0);
		EV_SetPos(G_EME, 73.0f, 72.050003f, 190.0f);
		EV_SetAng(G_EME, 0, 24576, 0);
		EV_SetPos(SMOKE_01, 73.0f, 72.0f, 230.0f);
		EV_SetPos(SMOKE_01, 73.0f, 72.0f, 320.0f);
		stopObject(player);
		stopObject(knuckles);
		throughplayer_on(player);
		throughplayer_on(knuckles);
		EV_Wait(1);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPerspective(0, 30, 7282);
		EV_CameraPos(0, 0, 65.389999f, 77.879997f, 346.79001f);
		EV_CameraAng(0, 0, 65417, 64621, 64256);
		EV_CameraPos(0, 15, 69.860001f, 77.300003f, 295.98999f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m9012_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_m_m9010_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_m_m9011_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		moveObject(player,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z,
			player->Data1->Position.x,
			72.349998f,
			player->Data1->Position.z + 48.0f,
			15);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, &action_k_k0039_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(knuckles, &action_k_k0033_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(knuckles, &action_k_k0035_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		moveObject(knuckles,
			knuckles->Data1->Position.x,
			knuckles->Data1->Position.y,
			knuckles->Data1->Position.z,
			knuckles->Data1->Position.x,
			72.349998f,
			knuckles->Data1->Position.z - 48.0f,
			15);
		EV_Wait(10);
		dsPlay_oneshot_v(1338, 0, 0, 120, player->Data1->Position.x, 72.349998f, player->Data1->Position.z + 48.0f);
		EV_Wait(5);
		EV_SetShadow(G_EME, 0.30000001f);
		EV_SetShadow(B_EME, 0.30000001f);
		EV_SetShadow(eggmoble, 1.35f);
		RumbleA(0, 1);
		stopObject(player);
		stopObject(knuckles);
		EV_Wait(5);
		EV_CameraPerspective(0, 30, 12561);
		EV_CameraPos(0, 0, 61.810001f, 77.940002f, 208.53999f);
		EV_CameraAng(0, 0, 65161, 34413, 64768);
		player->Data1->Position.z;
		player->Data1->Position.y;
		player->Data1->Position.x;
		moveObject(player,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z,
			73.0f, 72.0f, 230.0f, 30);
		moveObject(knuckles,
			knuckles->Data1->Position.x,
			knuckles->Data1->Position.y,
			knuckles->Data1->Position.z,
			73.0f, 72.0f, 320.60001f, 30);
		moveObject(SMOKE_01,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z,
			73.0f, 72.0f, 230.0f, 35);
		moveObject(SMOKE_02,
			knuckles->Data1->Position.x,
			knuckles->Data1->Position.y,
			knuckles->Data1->Position.z,
			73.0f, 72.0f, 320.0f, 35);
		EV_SerifPlay(684);
		EV_Wait(10);
		EV_SetPos(B_EME, 73.0f, 75.0f, 250.0f);
		EV_SetAction(B_EME, &action_ce_0003_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(B_EME, &action_ce_0004_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		moveObject(
			B_EME,
			B_EME->Data1->Position.x,
			B_EME->Data1->Position.y,
			B_EME->Data1->Position.z,
			81.0f,
			72.050003f,
			180.0f,
			30);
		dsPlay_oneshot_v(1334, 0, 0, 120, 81.0f, 72.050003f, 180.0f);
		SMOKE_01->Data1->Rotation.y = 5;
		SMOKE_01->Data1->Rotation.x = 5;
		SMOKE_02->Data1->Rotation.y = 5;
		SMOKE_02->Data1->Rotation.x = 5;
		EV_Wait(15);
		dsPlay_oneshot_v(1334, 0, 0, 120, 81.0f, 72.050003f, 180.0f);
		EV_LookObject(player, B_EME, 0.0f, 0.0f, 0.0f);
		EV_SetPos(G_EME, 73.0f, 75.0f, 235.0f);
		EV_SetAction(G_EME, &action_ce_0005_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(G_EME, &action_ce_0006_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		moveObject(
			G_EME,
			G_EME->Data1->Position.x,
			G_EME->Data1->Position.y,
			G_EME->Data1->Position.z,
			73.0f,
			72.050003f,
			190.0f,
			30);
		EV_Wait(5);
		EV_CameraTargetFree();
		EV_CameraTargetObj(0, 30, B_EME, 0.0f, 0.0f, 0.0f, 0);
		stopObject(player);
		stopObject(knuckles);
		stopObject(SMOKE_01);
		EV_SerifPlay(685);
		EV_Msg(msgTbl_ev0039[TextLanguage][0]); //"\aWhoa! Oh no, the Emeralds!"
		SMOKE_01->Data1->Rotation.y = 0;
		SMOKE_01->Data1->Rotation.x = 0;
		SMOKE_02->Data1->Rotation.y = 0;
		SMOKE_02->Data1->Rotation.x = 0;
		throughplayer_off(player);
		throughplayer_off(knuckles);
		EV_Wait(5);
		FreeTask(SMOKE_01);
		SMOKE_01 = 0;
		FreeTask(SMOKE_02);
		SMOKE_02 = 0;
		EV_Wait(5);
		stopObject(B_EME);
		EV_Wait(15);
		stopObject(G_EME);
		EV_Wait(15);
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_CameraPerspective(0, 1, 1820);
		EV_CameraPos(0, 0, 64.68f, 80.580002f, 89.599998f);
		EV_CameraAng(0, 0, 65117, 33955, 0);
		EV_Wait(15);
		BGM_Play(MusicIDs_eggman);
		EV_CameraPos(0, 45, 126.85f, 100.11f, -68.57f);
		EV_CameraAng(0, 45, 65117, 30720, 0);
		EV_Wait(15);
		EV_ClrFace(player);
		eggmoble_move_rapid(85.0f, 80.0f, 80.0f, 50);
		QueueSound_XYZ(1337, (EntityData1*)0xCB80001, 1, 120, 70, 85.0f, 80.0f, 80.0f);
		EV_Wait(30);
		EV_SerifPlay(686);
		EV_Msg(msgTbl_ev0039[TextLanguage][1]); //"\aHa ha ha ha ha ha ha ha ha ha!\nAnd t"...
		EV_Wait(30);
		ChgEggMobleMod(5);
		EV_Wait(10);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 84.080002f, 111.19f, 85.099998f);
		EV_CameraAng(0, 0, 0, 64768, 0);
		EV_CameraPos(0, 15, 84.080002f, 94.190002f, 85.099998f);
		EV_Wait(15);
		EV_CameraPos(0, 45, 84.080002f, 93.190002f, 85.099998f);
		EV_Wait(30);
		EV_CameraPos(0, 30, 103.13f, 102.22f, 110.82f);
		EV_CameraAng(0, 30, 61696, 6144, 0);
		ChgEggMobleMod(0);
		EV_Wait(30);
		EV_CameraPos(0, 45, 106.24f, 104.38f, 115.47f);
		EV_Wait(15);
		eggmoble_move_rapid(80.0f, 80.0f, 160.0f, 45);
		ChgEggMobleSMod(1);
		dsPlay_oneshot_v(1341, 0, 0, 120, 80.0f, 80.0f, 160.0f);
		EV_CameraPos(1, 45, 103.13f, 102.22f, 110.82f);
		EV_CameraAng(1, 45, 62720, 28672, 0);
		EV_Wait(45);
		EV_CameraPos(1, 80, 107.19f, 105.15f, 101.03f);
		EV_SerifPlay(687);
		EV_Msg(msgTbl_ev0039[TextLanguage][2]); //"\aEggman's back!"
		EV_Wait(15);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 5461);
		EV_CameraPos(0, 0, 83.629997f, 73.699997f, 120.18f);
		EV_CameraAng(0, 0, 512, 31744, 0);
		QueueSound_XYZ(1336, (EntityData1*)0xCB80002, 1, 120, 60, 80.0f, 80.0f, 160.0f);
		EV_SetAng(eggmoble, 0, 0, 18);
		EV_Wait(10);
		ChgCaptureMod(CAP_01, 1);
		EV_Wait(10);
		moveObject(B_EME,
			B_EME->Data1->Position.x,
			B_EME->Data1->Position.y,
			B_EME->Data1->Position.z,
			B_EME->Data1->Position.x,
			B_EME->Data1->Position.y + 10.0f,
			B_EME->Data1->Position.z,
			30);
		moveObject(G_EME,
			G_EME->Data1->Position.x,
			G_EME->Data1->Position.y,
			G_EME->Data1->Position.z,
			G_EME->Data1->Position.x,
			G_EME->Data1->Position.y + 10.0f,
			G_EME->Data1->Position.z,
			35);
		EV_Wait(20);
		EV_SerifPlay(688);
		EV_Msg(msgTbl_ev0039[TextLanguage][3]); //"\aHe's got the Emeralds!"
		ChgEggMobleSMod(0);
		EV_Wait(10);
		ChgEggMobleMod(5);
		EV_Wait(5);
		stopObject(B_EME);
		stopObject(G_EME);
		ChgCaptureMod(CAP_01, 2);
		DoSoundQueueThing(1336);
		EV_Wait(5);
		EV_MsgClose();
		EV_ClrAction(eggmoble);
		EV_ClrAction(G_EME);
		EV_ClrAction(G_EME);
		EV_SetAction(G_EME, &action_gm_0030cg_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(B_EME, &action_gm_gm0030cb_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(eggmoble, &action_gm_gm0030_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 82.300003f, 95.059998f, 166.44f);
		EV_CameraAng(0, 0, 62720, 4864, 0);
		EV_CameraPos(1, 60, 89.669998f, 99.589996f, 181.07001f);
		EV_SetPos(G_EME,
			eggmoble->Data1->Position.x + 1.0f,
			eggmoble->Data1->Position.y - 9.1999998f,
			eggmoble->Data1->Position.z);
		EV_SetAng(G_EME,
			(int)eggmoble->Data1->Position.x,
			(int)eggmoble->Data1->Position.y,
			(int)eggmoble->Data1->Position.z);
		EV_SetPos(B_EME, eggmoble->Data1->Position.x,
			eggmoble->Data1->Position.y - 9.1999998f,
			eggmoble->Data1->Position.z);
		EV_SetAng(B_EME,
			(int)eggmoble->Data1->Position.x,
			(int)eggmoble->Data1->Position.y,
			(int)eggmoble->Data1->Position.z);
		EV_SetPos(sonic, 37.299999f, 72.019997f, 213.32001f);
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(player,
			player->Data1->Rotation.x,
			-16384 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EV_SetPos(knuckles, 105.82f, 72.129997f, 349.73001f);
		EV_SetAng(knuckles, 65430, 36864, 18);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		EV_SerifPlay(689);
		EV_Msg(msgTbl_ev0039[TextLanguage][4]); //"\aYou two are bumbling idiots,\nyou kno"...
		EV_Wait(70);
		EV_MsgClose();
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 6372);
		EV_CameraPos(0, 0, 99.209999f, 109.2f, 135.95f);
		EV_CameraAng(0, 0, 60928, 27904, 0);
		EV_CameraPos(0, 90, 108.56f, 119.03f, 117.38f);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 7282);
		EV_CameraPos(0, 0, 59.419998f, 76.160004f, 233.14999f);
		EV_CameraAng(0, 0, 512, 49152, 0);
		EV_CameraPos(0, 60, 59.419998f, 76.160004f, 220.73f);
		moveObject(knuckles, 107.76f, 72.519997f, 258.72f, 102.5f, 72.169998f, 220.0f, 30);
		EV_Wait(30);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 7282);
		EV_CameraPos(0, 0, 100.98f, 72.870003f, 209.2f);
		EV_CameraAng(0, 0, 5632, 30976, 0);
		EV_CameraPos(0, 0, 103.93f, 72.870003f, 209.71001f);
		EV_SetFace(knuckles, "F");
		EV_Wait(5);
		EV_SerifPlay(690);
		EV_Msg(msgTbl_ev0039[TextLanguage][5]); //"\aHey... Those are...\n the Chaos Emera"...
		EV_Wait(30);
		EV_ClrFace(knuckles);
		EV_CameraPerspective(0, 1, 10923);
		EV_CameraPos(0, 0, 88.389999f, 94.309998f, 175.25999f);
		EV_CameraAng(0, 0, 1024, 3584, 0);
		EV_LookObject(knuckles, eggmoble, 0.0f, 12.0f, 0.0f);
		EV_CameraPos(1, 15, 86.720001f, 94.800003f, 170.57001f);
		EV_Wait(60);
		EV_CameraPos(1, 60, 85.309998f, 104.18f, 182.86f);
		EV_CameraAng(1, 60, 60672, 3328, 0);
		EV_SerifPlay(691);
		EV_Msg(msgTbl_ev0039[TextLanguage][6]); // "\aYou are so easily tricked!"
		EV_Wait(60);
		EV_SetShadow(G_EME, 0.0f);
		EV_SetShadow(B_EME, 0.0f);
		EV_SetShadow(eggmoble, 0.0f);
		EV_CameraPerspective(0, 1, 6372);
		EV_CameraPos(0, 0, 53.66f, 111.64f, 139.66f);
		EV_CameraAng(0, 0, 60672, 40192, 0);
		EV_CameraPos(0, 90, 59.5f, 107.15f, 146.42999f);
		EV_SerifPlay(692);
		EV_Msg(msgTbl_ev0039[TextLanguage][7]); //"\aAll I did was wait for you\nto bring "...
		EV_Wait(90);
		EV_CameraPerspective(0, 1, 6372);
		EV_CameraPos(0, 0, 31.709999f, 74.75f, 180.78999f);
		EV_CameraAng(0, 0, 512, 41984, 0);
		EV_SerifPlay(693);
		EV_Msg(msgTbl_ev0039[TextLanguage][8]); //"\aWhat the heck is \nhe talking about, "...
		EV_SetFace(player, "FF");
		EV_Wait(40);
		EV_ClrFace(player);
		EV_LookObject(player, knuckles, 0.0f, 0.0f, 0.0f);
		EV_Wait(50);
		EV_CameraPos(1, 30, -1.88f, 74.980003f, 164.88f);
		EV_CameraAng(1, 30, 512, 41984, 0);
		EV_SetAction(sonic, &action_s_s9001_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_SerifPlay(694);
		EV_Msg(msgTbl_ev0039[TextLanguage][9]); //"\aDon't you realize \nwhen you've been "...
		EV_ClrFace(sonic);
		if (!VoiceLanguage)
		{
			EV_SetFace(sonic, "FCE");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(sonic, "CE");
		}
		EV_Wait(60);
		EV_LookObject(knuckles, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(15);
		EV_SetAction(knuckles, &action_k_k0038_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(knuckles, &action_k_k0034_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(695);
		EV_Msg(msgTbl_ev0039[TextLanguage][10]); //"\aTricked?   \nNo one makes a fool out "...
		EV_ClrFace(knuckles);
		if (VoiceLanguage == 1)
		{
			EV_SetFace(knuckles, "I");
		}
		EV_Wait(5);
		if (!VoiceLanguage)
		{
			EV_SetFace(knuckles, "F");
		}
		EV_Wait(5);
		if (!VoiceLanguage)
		{
			EV_ClrFace(knuckles);
			EV_SetFace(knuckles, "F");
		}
		EV_Wait(20);
		EV_ClrFace(knuckles);
		if (!VoiceLanguage)
		{
			EV_SetFace(knuckles, "I");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(knuckles, "F");
		}
		EV_SerifPlay(696);
		EV_Msg(msgTbl_ev0039[TextLanguage][11]); //"\aWay to go, Knucklehead!"
		EV_SetAction(sonic, &action_s_s0033_sonic, &SONIC_TEXLIST, 0.25f, 0, 16);
		EV_LookObject(sonic, knuckles, 0.0f, 6.0f, 0.0f);
		EV_Wait(4);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_ClrFace(sonic);
		if (!VoiceLanguage)
		{
			EV_SetFace(sonic, "CECE");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(sonic, "CE");
		}
		EV_Wait(30);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 108.83f, 76.400002f, 204.03f);
		EV_CameraAng(0, 0, 0, 25588, 0);
		EV_CameraPos(0, 120, 116.96f, 76.400002f, 197.73f);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 3641);
		EV_CameraPos(0, 0, 79.860001f, 97.410004f, 177.16f);
		EV_CameraAng(0, 0, 62720, 0, 0);
		EV_Wait(1);
		BGM_Stop();
		EV_CameraPerspective(0, 100, 12561);
		EV_SerifPlay(697);
		EV_Msg(msgTbl_ev0039[TextLanguage][12]); //"\aHa ha ha ha!  Four!  \nCount 'em, 4 E"...
		EV_Wait(90);
		EV_MsgClose();
		EV_Wait(10);
		EV_LookFree(player);
		EV_LookFree(knuckles);
		EV_LookFree(sonic);
		EV_CameraPos(0, 30, 93.470001f, 106.04f, 258.95001f);
		EV_CameraAng(0, 30, 61184, 3840, 0);
		EV_Wait(15);
		EV_SerifPlay(698);
		EV_Msg(msgTbl_ev0039[TextLanguage][13]); //"\aI summon Chaos!   \nCome forth!"
		BGM_Play(MusicIDs_evtbgm01);
		EV_Wait(10);
		EV_CameraPos(0, 60, 97.089996f, 110.5f, 268.32999f);
		EV_Wait(60);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 66.120003f, 76.349998f, 223.75999f);
		EV_CameraAng(0, 0, 1784, 43520, 0);
		EV_Wait(10);
		CreateChaos2(26.83f, 69.800003f, 159.98f, 0, 21760, 0, 240);
		EV_Wait(1);
		SetPositionChaos2(26.83f, 69.800003f, 159.98f);
		SetAngleChaos2(0, 21760, 0);
		SetWaterChaos2();
		ChangeMotionSpeedChaos2(0.5f);
		EV_CameraPos(0, 20, 43.0f, 76.169998f, 196.59f);
		EV_CameraAng(0, 20, 1024, 43520, 0);
		ToHumanChaos2();
		EV_Wait(20);
		QueueSound_XYZ(1339, (EntityData1*)0xCB80003, 1, 120, 265, 26.83f, 69.800003f, 159.98f);
		EV_CameraPos(0, 45, 8.3900003f, 91.059998f, 149.03f);
		EV_CameraAng(0, 45, 63232, 43520, 0);
		EV_Wait(45);
		EV_CameraPos(0, 120, -14.2f, 96.970001f, 135.48f);
		EV_Wait(45);
		EV_SetShadow(G_EME, 0.30000001f);
		EV_SetShadow(B_EME, 0.30000001f);
		EV_SetShadow(eggmoble, 1.35f);
		EV_SetAng(eggmoble, 0, 0x4000, 0);
		EV_SetAng(G_EME, 0, 49152, 0);
		EV_SetAng(B_EME, 0, 49152, 0);
		EV_CameraPerspective(0, 1, 4551);
		EV_CameraPos(0, 0, 76.120003f, 74.18f, 293.91f);
		EV_CameraAng(0, 0, 768, 3328, 0);
		EV_CameraPos(0, 130, 134.14999f, 74.209999f, 275.72f);
		EV_CameraAng(0, 130, 768, 8704, 0);
		EV_Wait(130);
		EV_CameraPerspective(0, 1, 5461);
		EV_CameraPos(0, 0, 38.23f, 110.21f, 180.10001f);
		EV_CameraAng(0, 0, 61440, 53760, 0);
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
		EV_SerifPlay(699);
		EV_MsgW(50, msgTbl_ev0039[TextLanguage][14]); //"\a Here!   Eat up!"
		EV_MsgClose();
		EV_CameraPos(0, 0, 62.970001f, 82.419998f, 245.27f);
		EV_CameraAng(0, 0, 256, 3840, 0);
		EV_CameraPos(1, 90, 47.650002f, 83.400002f, 208.32001f);
		EV_SetPos(B_EME, 30.0f, 100.0f, 163.0f);
		moveObject(B_EME, 30.0f, 100.0f, 163.0f, 30.0f, 86.0f, 163.0f, 60);
		EV_SetPos(G_EME, 26.0f, 95.0f, 162.0f);
		moveObject(G_EME, 26.0f, 95.0f, 162.0f, 26.0f, 85.5f, 162.0f, 60);
		EV_SetAng(player, 0, 37888, 0);
		EV_SetAng(sonic, 0, 33280, 0);
		EV_Wait(90);
		EV_CameraPos(0, 0, 73.160004f, 81.239998f, 252.14999f);
		EV_CameraAng(0, 0, 0, 4864, 0);
		EV_CameraPos(1, 60, 94.739998f, 81.239998f, 297.70001f);
		EV_Wait(10);
		crushLightOn(26.83f, 85.5f, 159.98f, 3, 5, 0.2f, 4.0f, -1258291311, 16777010);
		EV_Wait(30);
		CHAOS = COverlayCreate(0.011111111f, 0.2f, 1.0f, 1.0f, 0.88f);
		EV_Wait(70);
		dsPlay_oneshot_v(1340, 0, 0, 120, 26.83f, 60.0f, 159.98f);
		DeleteChaos2();
		EV_FreeObject(&B_EME);
		EV_FreeObject(&G_EME);
		CreateChaos4(26.83f, 60.0f, 159.98f, 0, 21760, 0, 120);
		EV_Wait(1);
		ChangeMotionSpeedChaos4(0.5f);
		EV_Wait(10);
		crushLightOff();
		COverlaySetSpeed(CHAOS, -0.016666668f);
		EV_Wait(60);
		FreeTask(CHAOS);
		CHAOS = 0;
		EV_Wait(10);
		EV_SerifPlay(700);
		EV_MsgW(50, msgTbl_ev0039[TextLanguage][15]); //"\aOh no...   \nIt's changing again!"
		EV_SerifPlay(701);
		EV_Msg(msgTbl_ev0039[TextLanguage][16]);
		EV_CameraPos(1, 120, 101.03f, 81.239998f, 310.20999f); //"\aWe gotta stop this, fast!"
		EV_Wait(100);
		EV_MsgClose();
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		dsStop_all();
		EV_InitPlayer(0);
		stopObjectAll();
		FreeTask(CHAOS);
		CHAOS = 0;
		FreeTask(B_OUT);
		B_OUT = 0;
		crushLightOff();
		throughplayer_off(player);
		throughplayer_off(knuckles);
		DeleteChaos2();
		DeleteChaos4();
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_FreeObject(&B_EME);
		EV_FreeObject(&G_EME);
		delete_eggmoble();
		delete_capturebeam(CAP_01);
		CAP_01 = 0;
		FreeTask(SMOKE_01);
		SMOKE_01 = 0;
		FreeTask(SMOKE_02);
		SMOKE_02 = 0;
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}