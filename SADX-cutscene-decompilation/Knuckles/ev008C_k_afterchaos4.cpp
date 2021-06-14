#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev008C_k_afterchaos4(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		CAP_01 = 0;
		SetClip_ECScene(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(77);
		EV_SetPos(player, 102.5f, 72.169998f, 212.0f);
		EV_SetAng(player, 65430, 36864, 18);
		EV_CreatePlayer(2, Sonic_Main, 73.0f, 72.019997f, 232.50999f, 0, 0, 0);
		EV_CreatePlayer(3, Tails_Main, 37.299999f, 72.019997f, 213.32001f, 0, 28019, 0);
		create_eggmoble(80.0f, 80.0f, 160.0f, 0, 15104, 0);
		createModelEC(
			300.0f, 1200.0f, 1000.0f, 0, 0x8000, 0, 0.25f, 0.25f, 0.25f,
			&object_ecff_bf_s_fbody_bf_s_fbody,
			&texlist_ec_light,
			0);
		addmotModel(0, &action_ecff_bf_s_fbody, 0);
		CAP_01 = CreateCaptureBeam(80.0f, 80.0f, 160.0f, 5888, 0, 63376);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		seteggmobleparam(0.5f, 256);
		playModel(0, 0, 1.0f, -1);
		SetCaptureParam(CAP_01, 0.30000001f, 0.0f, 0.30000001f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 10.0f, 0.0f, 0.0f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.001f, 0.0f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.001f, 0);
		SetCaptureParam(CAP_01, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		BGM_Play(MusicIDs_egcarer1);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, -24.48f, 170.83f, 153.45f);
		EV_CameraAng(0, 0, 7936, 38144, 0);
		EV_CameraPerspective(0, 100, 13653);
		EV_CameraPos(0, 80, 60.09f, 81.339996f, 217.39f);
		EV_CameraAng(0, 125, 6836, 37862, 0);
		EV_Wait(10);
		EV_SerifPlay(1088);
		EV_Msg(msgTbl_ev008C[TextLanguage][0]); //"\aBehold, my flying fortress!\nMy creat"...
		EV_Wait(70);
		EV_CameraPos(0, 60, 63.380001f, 72.220001f, 223.58f);
		EV_Wait(60);
		EV_CameraPerspective(0, 200, 14564);
		EV_Wait(50);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 76.300003f, 92.599998f, 164.71001f);
		EV_CameraAng(0, 0, 65156, 58086, 0);
		EV_Wait(1);
		EV_CameraPerspective(0, 90, 13653);
		EV_SerifPlay(1089);
		EV_SetAng(sonic, 0, 0x8000, 0);
		EV_Msg(msgTbl_ev008C[TextLanguage][1]); //"\aBeware. Chaos' true power is\nyet to "...
		EV_Wait(90);
		EV_CameraPerspective(0, 120, 9102);
		EV_CameraPos(0, 0, 53.610001f, 74.32f, 172.56f);
		EV_CameraAng(0, 0, 644, 37606, 0);
		EV_CameraPos(0, 200, 48.990002f, 77.360001f, 102.96f);
		EV_Wait(30);
		EV_SerifPlay(1090);
		EV_Msg(msgTbl_ev008C[TextLanguage][2]); //"\aHa ha ha ha ha...  \nWe shall meet ag"...
		EV_Wait(30);
		EV_CameraTargetObj(0, 150, eggmoble, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(60);
		EV_MsgClose();
		ChgCaptureMod(CAP_01, 1);
		dsPlay_timer_v(1336, 0xCB80001, 1, 120, 185, 80.0f, 80.0f, 160.0f);
		EV_Wait(30);
		moveObjectAngle2(eggmoble, 80.0f, 80.0f, 160.0f, 235.71001f, 807.02002f, 643.87f, 0, 15104, 0, 5376, 15104, 0, 180);
		EV_Wait(150);
		stopObject(eggmoble);
		EV_CameraTargetFree();
		EV_Wait(5);
		delete_eggmoble();
		ChgCaptureMod(CAP_01, 2);
		dsStop_num(1336);
		EV_SetAng(sonic, 0, 0, 0);
		EV_LookPoint(sonic, 95.0f, 140.0f, 300.0f);
		EV_SetPos(player, 103.96f, 72.470001f, 254.33f);
		EV_SetAng(player, 65430, 59936, 18);
		EV_SetPos(tails, 37.299999f, 72.019997f, 213.32001f);
		EV_SetAng(tails, 0, 5376, 0);
		EV_Wait(30);
		eggcarrier = getobjModel(0);
		moveObjectAngle2(eggcarrier, 300.0f, 1200.0f, 1500.0f, 1000.0f, 2000.0f, 5000.0f, 0, 0x8000, 0, 0, 0x8000, 0, 400);
		dsPlay_oneshot_v(1341, 0, 0, 120, 73.0f, 72.019997f, 232.50999f);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 22.959999f, 76.32f, 152.91f);
		EV_CameraAng(0, 0, 2948, 36261, 0);
		EV_CameraPos(0, 120, 20.120001f, 73.809998f, 144.75f);
		EV_Wait(120);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 74.779999f, 75.57f, 249.39f);
		EV_CameraAng(0, 0, 1024, 3840, 0);
		EV_CameraPos(0, 200, 79.489998f, 75.870003f, 243.41f);
		EV_CameraAng(0, 200, 1024, 7168, 0);
		EV_LookObject(player, sonic, 0.0f, 6.0f, 0.0f);
		EV_LookObject(tails, sonic, 0.0f, 6.0f, 0.0f);
		EV_ClrFace(tails);
		EV_SetFace(tails, "CDCD");
		EV_Wait(5);
		EV_SerifPlay(1091);
		EV_Msg(msgTbl_ev008C[TextLanguage][3]); //"\aHurry, Sonic!   \nWhat are we waiting"...
		EV_Wait(45);
		EV_ClrFace(tails);
		stopObject(eggcarrier);
		EV_Wait(10);
		deleteModel(0);
		EV_ClrFace(tails);
		EV_SetFace(tails, "CDCD");
		EV_Wait(5);
		EV_SerifPlay(1092);
		EV_Msg(msgTbl_ev008C[TextLanguage][4]); //"\aMy workshop's close,"
		EV_Wait(30);
		EV_Msg(msgTbl_ev008C[TextLanguage][5]); //"\aso let's go get the Tornado\nand go a"...
		EV_Wait(40);
		EV_SerifWait();
		EV_LookFree(sonic);
		EV_SetAction(sonic, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CDCD");
		EV_Wait(5);
		EV_Msg(msgTbl_ev008C[TextLanguage][6]); //"\aGood idea!" 
		EV_Wait(5);
		EV_ClrFace(tails);
		EV_SerifPlay(1093);
		EV_Wait(10);
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_Wait(20);
		EV_SerifPlay(1094);
		EV_Wait(10);
		EV_SetAng(player, 65430, 56608, 18);
		EV_CameraPos(1, 65, 105.57f, 77.510002f, 268.32001f);
		EV_CameraAng(1, 65, 1024, 5376, 0);
		EV_Msg(msgTbl_ev008C[TextLanguage][7]); //"\aHey Sonic!"
		EV_Wait(10);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(sonic);
		EV_LookObject(sonic, player, 0.0f, 6.0f, 0.0f);
		EV_Wait(55);
		EV_MsgClose();
		EV_CameraPos(0, 0, 94.080002f, 76.07f, 256.29001f);
		EV_CameraAng(0, 0, 3328, 47872, 0);
		EV_CameraPos(0, 160, 94.559998f, 76.080002f, 252.32001f);
		EV_CameraAng(0, 160, 3328, 47872, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "CDCD");
		EV_Wait(10);
		EV_SerifPlay(1095);
		EV_Msg(msgTbl_ev008C[TextLanguage][8]); // "\aYou go on ahead without me."
		EV_Wait(20);
		EV_ClrFace(player);
		EV_Wait(10);
		EV_SetFace(player, "CDCD");
		EV_Msg(msgTbl_ev008C[TextLanguage][9]); //"\aI have some things I need to\ntake ca"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(20);
		EV_CameraPos(0, 0, 76.480003f, 75.239998f, 239.92999f);
		EV_CameraAng(0, 0, 4352, 5632, 0);
		EV_ClrFace(sonic);
		if (!VoiceLanguage)
		{
			EV_SetFace(sonic, "CDCD");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(sonic, "CDCD");
		}
		EV_SerifPlay(1096);
		EV_Wait(5);
		EV_Msg(msgTbl_ev008C[TextLanguage][10]); //"\aNo problem, Knuckles!"
		if (!VoiceLanguage)
		{
			EV_ClrFace(sonic);
		}
		EV_Wait(10);
		if (VoiceLanguage == 1)
		{
			EV_ClrFace(sonic);
		}
		if (!VoiceLanguage)
		{
			EV_SetFace(sonic, "CDFE");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(sonic, "CFE");
		}
		EV_SerifPlay(1097);
		EV_Wait(5);
		EV_Msg(msgTbl_ev008C[TextLanguage][11]); //"\aWe'll take care of \neverything here."
		EV_Wait(85);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 0);
		EV_MovePoint2(player, 121.87f, 72.550003f, 319.64999f, 1.5f, 0.059999999f);
		EV_ClrFace(sonic);
		EV_Wait(10);
		EV_CameraPos(0, 0, -42.73f, 119.12f, 256.13f);
		EV_CameraAng(0, 0, 62208, 50944, 0);
		EV_CameraPos(0, 60, -79.220001f, 131.35001f, 262.45999f);
		EV_SerifPlay(1098);
		EV_Msg(msgTbl_ev008C[TextLanguage][12]); //"\aLet's move!"
		EV_Wait(20);
		EV_LookFree(sonic);
		EV_SetAng(sonic, 0, 0xB000, 0);
		EV_Wait(60);
		break;
	case 2:
		dsStop_all();
		EV_InitPlayer(0);
		EV_SetPos(player, 121.87f, 72.550003f, 319.64999f);
		EV_SetAng(player, 160, 8952, 65508);
		stopObjectAll();
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		deleteModel(0);
		delete_eggmoble();
		delete_capturebeam(CAP_01);
		CAP_01 = 0;
		EV_CameraOff();
		EV_PadOn();
		SetClip_ECScene(ClipLevel);
		break;
	}
}