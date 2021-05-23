#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventList.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0017_s_tailsreunion(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);

	ObjectMaster* TR2 = 0;
	ObjectMaster* BLACKOUT = 0;

	switch (state) {
	case 1:
		SetClip_0500(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Init(4);
		SetBankDir(78);
		BLACKOUT = COverlayCreate(1.0e-32f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_CameraTargetFree();
		EV_SetPos(player, -404.60001f, 1039.6f, 3138.3999f);
		EV_SetAng(player, 0, 12288, 0);
		createModelEC(
			-85.699997f,
			1290.6f,
			3437.3999f,
			0,
			44288,
			0,
			0.029999999f,
			0.029999999f,
			0.029999999f,
			&object_ecff_bf_s_fbody_bf_s_fbody,
			&texlist_ec_light,
			0);
		addmotModel(0, &action_ecff_bf_s_fbody, 0);
		playModel(0, 0, 1.0f, -1);
		EV_CreateObject(&TR2, -738.90002f, 1120.0f, 3336.6001f, 0, 61440, 0);
		EV_Wait(1);
		EV_SetMode(TR2, 0);
		EV_SetPos(TR2, -738.90002f, 1120.0f, 3336.6001f);
		EV_SetAng(TR2, 57344, 65280, 0);
		EV_SetAction(TR2, action_tr2a_s_t2b_body, &tr2_texlist, 1.0, 1, 0);
		SonicModel_EV0017();
		moveObject(getobjModel(0), -85.699997f, 1290.6f, 3437.3999f, 195.5f, 1255.5f, 3580.6799f, 1000);
		EventSe_Play(1, 1344, 1800);
		EventSe_Volume(1, 106, 1);
		EV_Wait(1);
		EV_CameraPos(1, 0, -197.7f, 1168.6f, 3510.6001f);
		EV_CameraAng(1, 0, 3093, 49046, 0);
		EV_CameraPos(0, 190, -326.70001f, 1210.6f, 3367.6001f);
		EV_CameraAng(0, 190, 2069, 46486, 0);
		EV_Wait(40);
		EventSe_Volume(1, 20, 120);
		EV_Wait(140);
		EV_CameraPos(1, 0, -420.60001f, 1040.6f, 3130.0f);
		EV_CameraAng(1, 0, 2080, 39571, 2048);
		EV_SetAction(player, &action_s_s0017_sonic, &SONIC_TEXLIST, 1.0f, 0, 20);
		EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_CameraPos(1, 130, -412.79999f, 1040.6f, 3124.8501f);
		EV_CameraAng(1, 130, 3104, 39827, 2048);
		EV_Wait(140);
		EV_LookPoint(player, -378.79999f, 1071.7f, 3150.5f);
		EV_CameraPos(1, 0, -391.0f, 1058.8f, 3144.8999f);
		EV_CameraAng(1, 0, 57408, 11741, 0);
		EV_CameraPos(0, 100, -393.04999f, 1056.66f, 3144.0f);
		EV_Wait(100);
		EV_LookFree(player);
		EventSe_Play(2, 1343, 1800);
		EventSe_Volume(2, 80, 120);
		EV_LookObject(player, TR2, 0.0f, 1.0f, 0.0f);
		moveObject(TR2, -738.90002f, 1120.0f, 3336.6001f, -379.79999f, 1085.2f, 3363.8f, 120);
		EV_CameraPos(1, 85, -395.95999f, 1048.3f, 3135.3f);
		EV_CameraAng(1, 85, 64544, 26003, 2560);
		EV_Wait(140);
		EV_SetPos(TR2, -820.70001f, 940.59998f, 3392.7f);
		EV_SetAng(TR2, -9472, 3072, 0);
		EV_CameraPos(1, 0, -795.59998f, 939.0f, 3368.3999f);
		EV_CameraAng(1, 0, 32, 26771, 63232);
		EV_CameraPos(0, 120, -822.70001f, 947.59998f, 3364.6001f);
		EV_CameraAng(0, 120, 64032, 30867, 61696);
		EventSe_Volume(2, 110, 5);
		EV_SerifPlay(525);
		EV_Msg((msgTbl_ev0017[TextLanguage])[0]); //"\aHey Sonic!"
		EV_Wait(40);
		moveObject(TR2, -820.70001f, 940.59998f, 3392.7f, -772.90002f, 934.59998f, 3380.8f, 60);
		BGM_Play(MusicIDs_themiles);
		EV_Wait(50);
		EV_SetAng(player, 0, 7936, 0);
		EV_SetAction(player, &action_s_s0058_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(player);
		stopObjectAll();
		EV_CameraTargetFree();
		EV_Wait(1);
		EV_CameraPos(1, 0, -415.89999f, 1092.4f, 3196.7f);
		EV_CameraAng(1, 0, 56864, 1939, 0);
		EV_CameraPos(1, 90, -350.82999f, 1099.85f, 3176.8f);
		EV_CameraAng(1, 90, 57376, 8339, 0);
		EventSe_Play(3, 1338, 1800);
		EventSe_Volume(3, 100, 1);
		EV_Wait(17);
		EV_SetPath(TR2, &epathtag_TR2_st, 0.093999997f, 0);
		EV_SerifPlay(526);
		EV_Msg((msgTbl_ev0017[TextLanguage])[1]); //"\aTails!   \nI'm glad you're okay!"
		EV_Wait(50);
		EV_LookFree(player);
		EV_MsgClose();
		EventSe_Stop(2);
		EV_CameraPos(1, 0, -418.79999f, 1043.8f, 3125.0f);
		EV_CameraAng(1, 0, 48, 28484, 2763);
		EV_CameraPos(1, 110, -409.29999f, 1043.45f, 3129.0f);
		EV_CameraAng(0, 100, 1253, 42485, 62976);
		EV_ClrAction(player);
		EventSe_Volume(3, 110, 1);
		EventSe_Pitch(3, -1440, 100);
		EV_Wait(15);
		EV_PlayPad(0, &EV0017_JUMP);              // Unseen normally as Sonic is stuck victory posing. Will be seen if loaded via Test Spawn though.
		EventSe_Volume(3, 128, 100);
		EV_Wait(106);
		EV_SetPos(player, -451.60001f, 1043.6f, 2985.8999f);
		EV_CameraTargetFree();
		SonicModel_initializer_EV0017();
		EV_CameraPos(1, 0, -223.14999f, 1050.7f, 3116.7f);
		EV_CameraAng(1, 0, 61122, 9585, 61696);
		EV_CameraPos(0, 95, -230.23f, 1057.95f, 3126.5f);
		EV_CameraAng(0, 90, 59841, 8343, 61472);
		EventSe_Volume(3, 110, 1);
		EV_Wait(1);
		EventSe_Volume(3, 105, 90);
		EV_Wait(95);
		EV_CameraPos(1, 0, -196.89999f, 1019.6f, 3212.8999f);
		EV_CameraAng(1, 0, 2864, 8004, 64768);
		EV_CameraPos(0, 40, -145.55f, 1057.0f, 3178.26f);
		EV_CameraAng(0, 40, 2503, 8004, 64768);
		EventSe_Volume(3, 100, 1);
		EV_Wait(1);
		EventSe_Volume(3, 125, 39);
		EV_WaitPath(TR2);
		EventSe_Volume(3, 110, 1);
		EventSe_Pitch(3, -2440, 1);
		EV_Wait(1);
		EV_CameraPos(0, 60, -147.23f, 1057.71f, 3176.1001f);
		EV_CameraAng(0, 60, 2759, 7748, 64768);
		EV_ClrPath(TR2);
		EV_Wait(60);
		EV_CameraPos(1, 0, -324.70001f, 1273.7f, 3166.3f);
		EV_CameraAng(1, 0, 62674, 21641, 0);
		EventSe_Volume(3, 115, 1);
		EventSe_Pitch(3, -1440, 1);
		EV_Wait(1);
		EV_SetPos(TR2, -355.70001f, 1257.6f, 3170.3999f);
		EV_SetAng(TR2, 0, 60672, 0);
		EV_CameraPos(0, 110, -330.70001f, 1273.66f, 3153.5f);
		EV_CameraAng(0, 110, 61136, 20873, 65280);
		EV_Wait(30);
		EV_SerifPlay(527);
		EV_Msg((msgTbl_ev0017[TextLanguage])[2]); //"\aReady to roll, champ?   \nLet's go!"
		EV_SerifWait();
		EV_Wait(10);
		EV_CameraPos(1, 0, -367.39999f, 1257.7f, 3152.5f);
		EV_CameraAng(1, 0, 48, 36676, 0);
		EV_CameraPos(0, 50, -373.39999f, 1262.4f, 3152.8f);
		EV_CameraAng(0, 50, 560, 36932, 0);
		EV_SerifPlay(528);
		EV_Msg((msgTbl_ev0017[TextLanguage])[3]); //"\aRoger!"
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, -362.29999f, 1255.1f, 3162.8999f);
		EV_Wait(5);
		EventSe_Volume(3, 128, 1);
		EventSe_Pitch(3, 2440, 1);
		EV_Wait(1);
		moveObject(TR2, -355.70001f, 1257.6f, 3170.3999f, -268.0f, 1258.17f, 3216.8999f, 210);
		EV_CameraPos(0, 13, -373.70001f, 1238.75f, 3140.2f);
		EV_Wait(13);
		EV_CameraPos(0, 45, -420.10001f, 1247.77f, 3152.2f);
		EV_CameraAng(0, 45, 1328, 42564, 59392);
		EV_Wait(45);
		EventSe_Volume(3, 30, 160);
		EventSe_Pitch(3, -1440, 160);
		EV_CameraPos(0, 80, -468.10001f, 1220.0f, 3122.2f);
		EV_CameraAng(0, 80, 3120, 44612, 62464);
		EV_Wait(30);
		COverlaySetSpeed(BLACKOUT, 0.02f);
		EV_Wait(90);
		stopObjectAll();
		EventSe_Stop(3);
		break;
	case 2:
		dsStop_all();
		EV_CameraOff();
		EV_PadOn();
		EventSe_Stop(1);
		EventSe_Stop(2);
		EventSe_Stop(3);
		EventSe_Close();
		EV_InitPlayer(0);
		SonicModel_initializer_EV0017();
		stopObjectAll();
		deleteModel(0);
		EV_FreeObject(&TR2);
		EV_SetPos(player, -451.60001f, 1043.6f, 2985.8999f);
		FreeTask(BLACKOUT);
		BLACKOUT = 0;
		SetClip_0500(ClipLevel);
		break;
	case 3:
		EventSe_Close();
		break;
	}
}