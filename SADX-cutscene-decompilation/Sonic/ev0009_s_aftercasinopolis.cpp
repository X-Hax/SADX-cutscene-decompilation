#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0009_s_aftercasinopolis(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* tails = 0;
	ObjectMaster* eggmoble = 0;

	ObjectMaster* emerald = 0;
	ObjectMaster* cap1 = 0;
	ObjectMaster* WHITE = 0;

	//There's a skip in the camera sequence at the beginning due to a text box that was removed after the original JP version. (EV_Msg- functions force the event to wait 20 frames).
	//Set to 1 to fix the camera sequence.
	//Set to 2 to do the above as well as restore the text box (As "?" to be compatible with all languages).
	int enableUnusedCode = 0;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(77);
		EventSe_Init(5);
		BGM_Play(MusicIDs_s_square);
		EV_SetPos(player, -610.35303f, 0.0f, 925.89001f);
		EV_SetAng(player, 0, 8092, 0);
		EV_InitPlayer(0);
		EV_CreatePlayer(2, Tails_Main, -607.56799f, 0.0f, 913.71997f, 0, 8264, 0);
		create_eggmoble(-411.44f, 13.0f, 1091.1f, 64512, 57344, 0);
		EV_CreateObject(&emerald, -547.33002f, -0.5f, 973.90002f, 0, 0, 0);
		EV_SetMode(emerald, 0);
		EV_CameraAng(1, 0, 3072, 7168, 0);
		EV_CameraPos(1, 0, -589.42999f, 66.120003f, 943.79999f);
		EV_Wait(9);
		ChgEggMobleMod(0);
		EV_CameraAng(0, 105, 4096, 6656, 0);
		EV_CameraPos(0, 105, -564.0f, 48.27f, 974.87f);
		EV_Wait(110);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.7f, 1, 0);
		tails = EV_GetPlayer(2);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 1.7f, 1, 0);
		cap1 = CreateCaptureBeam(-568.40002f, 0.0f, 973.41998f, 0, 0, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.050000001f, 0.0f, 0.050000001f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.079999998f, 0.0f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0049999999f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.1f, 0.0f, 0.0f, 0.0f, 0);
		EV_CameraAng(0, 110, 4083, 13450, 0);
		EV_CameraPos(0, 110, -558.51001f, 0.24699999f, 939.06f);
		EV_Wait(90);
		EV_CameraPerspective(0, 100, 15474);
		EV_MovePoint2(player, -552.78601f, -2.5f, 964.98999f, 1.0f, 0.89999998f);
		EV_MovePoint2(tails, -553.40002f, -2.5f, 954.44f, 0.89999998f, 0.89999998f);
		EV_Wait(20);
		ChgEggMobleMod(0);
		EV_CameraAng(0, 100, 4188, 13036, -256);
		EV_CameraPos(0, 100, -482.0f, -2.0650001f, 998.37299f);
		EV_Wait(40);
		BGM_Stop();
		EV_WaitMove(player);
		EV_SerifPlay(460);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[7], &SONIC_TEXLIST, 0.89999998f, 0, 0);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[67], &MILES_TEXLIST, 0.89999998f, 0, 0);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		
		switch (enableUnusedCode) {
		case 1:
			EV_Wait(20);
			break;
		case 2:
			EV_Msg("?");
			break;
		default:
			break;
		}
		
		eggmoble_move_normal(-503.47f, 4.0f, 1000.72f, 30);
		EventSe_Play(2, 1337, 1800);
		EV_Wait(20);
		BGM_Play(MusicIDs_eggman);
		EV_Wait(15);
		eggmoble_move_normal(-446.92001f, 10.0f, 1054.21f, 1);
		EV_Wait(2);

		//This will only show up for 1 frame unless the unused code is enabled.
		EV_CameraAng(1, 0, 1883, 40625, 65280);
		EV_CameraPos(1, 0, -517.59998f, 24.054001f, 980.90002f);
		EV_Wait(1);
		eggmoble_move_normal(-516.24451f, 18.0f, 992.21503f, 22);
		EV_CameraPerspective(1, 22, 11833);
		EV_CameraAng(1, 22, 782, 33528, 65280);

		switch (enableUnusedCode) {
		case 1:
			EV_Wait(20);
			break;
		case 2:
			EV_MsgClose();
			break;
		default:
			break;
		}

		EV_CameraAng(1, 0, 62734, 10744, 65280);
		EV_CameraPos(1, 0, -522.33002f, 9.21f, 978.04999f);
		EV_CameraAng(0, 22, 62734, 9720, 65280);
		EV_CameraPos(0, 22, -543.84998f, 5.5999999f, 970.59998f);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[122], &SONIC_TEXLIST, 1.5f, 0, 0);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(22);
		EV_CameraAng(1, 0, 270, 50680, 65280);
		EV_CameraPos(1, 0, -606.59998f, 6.0f, 978.70001f);
		EV_CameraPos(0, 60, -606.0f, 6.0f, 982.66998f);
		eggmoble_move_normal(-602.729f, -1.0f, 927.89001f, 38);
		EV_Wait(2);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV0009S);
		EV_ClrAction(tails);
		EV_PlayPad(2, &EV0009M);
		EV_SerifPlay(461);
		EV_Msg(msgTbl_ev0009[TextLanguage][0]); //"\aHey!"
		EV_Wait(25);
		EV_SerifStop();
		EV_MsgClose();
		EventSe_Stop(2);
		EV_SetPos(player, -509.51999f, -2.3699999f, 987.17999f);
		EV_SetAng(player, 0, 46072, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(tails, -520.65997f, 0.5f, 947.21802f);
		EV_SetAng(tails, 0, 61688, 0);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 54542, 52728, 65280);
		EV_CameraPos(1, 0, -557.90002f, 15.978f, 980.87f);
		EV_CameraPos(0, 45, -555.0f, 11.6f, 982.0f);
		EV_SetPos(emerald, -548.06f, -2.0f, 978.40002f);
		EV_Wait(1);
		EV_ClrAction(emerald);
		EV_SetAction(emerald, &action_ce_0001_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 0, 0);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_SetAction(emerald, &action_ce_0002_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 1, 0);
		EV_Wait(38);
		eggmoble_move_normal(-603.37f, 4.0f, 974.04999f, 1);
		EV_Wait(3);
		eggmoble_turn(0, 31992, 0, 1, 0);
		EV_Wait(3);
		ChgEggMobleMod(0);
		EV_SerifStop();
		EV_CameraAng(0, 40, 64256, 52826, 65280);
		EV_CameraPos(0, 40, -556.34998f, 1.55f, 981.73779f);
		EV_ClrFace(player);
		EV_SetFace(player, "CE");
		EV_SerifPlay(462);
		EV_Msg(msgTbl_ev0009[TextLanguage][1]); //"\aOh no!\nThe Chaos Emerald!"
		EV_Wait(20);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -540.20001f, -2.51f, 980.84998f, 0.89999998f, 0.60000002f);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 1.1f, 1, 8);
		EV_MovePoint2(tails, -542.87f, -2.51f, 965.48602f, 0.75f, 0.0f);
		eggmoble_moveandturn(-568.40002f, 7.0f, 973.41998f, 0, 0x2000, 0, 1, 0);
		EV_MsgClose();
		ChgEggMobleMod(5);
		EV_ClrFace(player);
		EV_CameraPos(0, 0, -564.0f, 19.700001f, 984.44f);
		EV_CameraAng(0, 0, 2672, 11376, 0);
		EV_CameraPos(0, 15, -561.70001f, 19.74f, 974.59998f);
		EV_MoveFree(player);
		EV_MoveFree(tails);
		EV_Wait(1);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0025_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.3f, 0, 0);
		EV_SetPos(player, -538.90002f, -2.457f, 981.12701f);
		EV_SetAng(player, 0, 50467, 0);
		EV_SetPos(tails, -531.88f, 0.5f, 966.28003f);
		EV_SetAng(tails, 0, 52984, 0);
		EV_SetPos(emerald, -550.20001f, -2.5f, 978.15002f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0051_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(463);
		EV_Msg(msgTbl_ev0009[TextLanguage][2]); //"\aOh, no you don't!"
		EV_WaitAction(eggmoble);
		EventSe_Oneshot(1335, 0, 0, 0);
		ChgEggMobleSMod(5);
		EV_CameraAng(1, 0, 4208, 8560, 65024);
		EV_CameraPos(1, 0, -549.26001f, 7.1799998f, 984.71997f);
		EV_CameraPos(0, 20, -538.12701f, -1.944f, 992.57001f);
		EV_SerifPlay(464);
		EV_SetFace(player, "FD");
		EV_Msg(msgTbl_ev0009[TextLanguage][3]); //"\aAw Geesh!"
		ChgEggMobleMod(5);
		EV_CameraAng(0, 170, 4208, 8560, 65024);
		EV_CameraPos(0, 170, -535.46002f, -2.1229999f, 989.59998f);
		EV_Wait(20);
		EV_MsgClose();
		EV_CameraAng(1, 0, 61710, 14584, 256);
		EV_CameraPos(1, 0, -461.85599f, 27.16f, 990.45398f);
		eggmoble_move_rapid(-568.40002f, 11.0f, 973.41998f, 1);
		EV_SetPos(emerald, -568.40002f, -2.0f, 973.41998f);
		EV_Wait(1);
		EV_SetPos(player, -530.0f, -1.46f, 985.90002f);
		EV_SetAng(player, 0, 46072, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0052_sonic, &SONIC_TEXLIST, 0.25f, 1, 8);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0112_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(player);
		EV_SetPos(tails, -546.79999f, -1.5f, 955.32001f);
		EV_SetAng(tails, 0, 61688, 0);
		EV_LookFree(tails);
		EventSe_Play(1, 1336, 1800);
		EventSe_Volume(1, -10, 1);
		ChgCaptureMod(cap1, 1);
		EV_Wait(13);
		EV_FreeObject(&emerald);
		EV_Wait(13);
		ChgCaptureMod(cap1, 2);
		EventSe_Stop(1);
		EV_SerifPlay(465);
		EV_Msg(msgTbl_ev0009[TextLanguage][4]); //"\aHa ha ha ha ha ha ha ha ha!"
		EV_CameraPos(0, 150, -509.47f, 9.5f, 984.08301f);
		EV_CameraAng(0, 150, 63246, 14072, 65024);
		eggmoble_move_normal(-448.5f, 25.0f, 982.14001f, 50);
		EV_SerifPlay(466);
		EV_Msg(msgTbl_ev0009[TextLanguage][5]); //"\aE-gg-ma-n-- "
		EV_Wait(30);
		WHITE = COverlayCreate(0.016666668f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_MsgClose();
		EV_Wait(40);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&emerald);
		delete_eggmoble();
		FreeTask(WHITE);
		WHITE = 0;
		delete_capturebeam(cap1);
		cap1 = 0;
		EventSe_Close();
		break;
	}
}