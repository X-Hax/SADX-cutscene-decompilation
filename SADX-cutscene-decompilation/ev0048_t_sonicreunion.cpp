#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0048_t_sonicreunion(int state)
{
	ObjectMaster* TR2 = 0;
	ObjectMaster* BLACKOUT = 0;

	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* sonic = 0;

	switch (state) {
	case 1:
		SetClip_0500(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Init(4);
		SetBankDir(78);
		BLACKOUT = COverlayCreate(1.0e-32f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_SetPos(player, -545.59998f, 1039.7f, 3060.8999f);
		EV_SetAng(player, 0, 12288, 0);
		EV_Wait(1);
		EV_CreatePlayer(2, Sonic_Main, -404.60001f, 1039.6f, 3138.3999f, 0, 12288, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, -404.60001f, 1039.6f, 3138.3999f);
		EV_SetAng(sonic, 0, 5888, 0);
		EV_LookPoint(sonic, -378.79999f, 1091.7f, 3150.5f);
		createModelEC(
			-455.70001f,
			1173.6f,
			3263.3999f,
			0,
			42752,
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
		EV_SetPos(TR2, -455.70001f, 1173.6f, 3263.3999f);
		EV_SetAng(TR2, 57344, 65280, 0);
		EV_SetAction(TR2, action_tr2a_s_t2b_body, &tr2_texlist, 1.0f, 1, 0);
		ChangeTornado2Model_EV0048();
		BGM_Play(MusicIDs_themiles);
		moveObject(getobjModel(0), -455.70001f, 1173.6f, 3263.3999f, 482.70001f, 1263.6f, 3845.3999f, 1100);
		EventSe_Play(1, 1344, 1800);
		EventSe_Volume(1, -10, 1);
		EventSe_Play(2, 1338, 1800);
		EventSe_Volume(2, 95, 120);
		EV_Wait(1);
		EV_CameraPos(1, 0, -1129.9f, 1195.0f, 3052.5f);
		EV_CameraAng(1, 0, 65280, 48384, 62208);
		EV_CameraPos(0, 130, -1149.9f, 1115.4f, 3311.98f);
		EV_Wait(80);
		moveObject(TR2, -975.90002f, 1041.4f, 3355.0f, -691.20001f, 1114.0f, 3382.0f, 130);
		EV_Wait(50);
		EV_CameraPos(0, 80, -1046.9f, 1000.0f, 3523.5f);
		EV_CameraAng(0, 80, 512, 52480, 62208);
		EV_Wait(80);
		stopObject(TR2);
		EV_SetPos(TR2, -820.70001f, 940.59998f, 3392.7f);
		EV_SetAng(TR2, -9472, 3072, 0);
		EV_CameraPos(1, 0, -795.59998f, 939.0f, 3368.3999f);
		EV_CameraAng(1, 0, 32, 26771, 63232);
		EV_CameraPos(1, 130, -822.70001f, 947.59998f, 3364.6001f);
		EV_CameraAng(1, 130, 64032, 32915, 61696);
		EV_SerifPlay(759);
		EventSe_Volume(2, 115, 120);
		EV_MsgW(60, msgTbl_ev0048[TextLanguage][0]); //"\aThere you are, dead ahead!\nThe Egg C"...
		EV_SerifWait();
		EV_MsgClose();
		moveObject(TR2, -820.70001f, 940.59998f, 3392.7f, -772.90002f, 934.59998f, 3380.8f, 50);
		EV_Wait(50);
		stopObject(TR2);
		EV_Wait(1);
		EV_SetPos(TR2, -707.70001f, 1105.6f, 3428.5f);
		EV_SetAng(TR2, -9472, 0, 0);
		EV_CameraPos(1, 0, -781.09998f, 1104.0f, 3415.8f);
		EV_CameraAng(1, 0, 65056, 52371, 60672);
		EV_CameraPos(0, 90, -738.40002f, 1133.0f, 3461.6001f);
		EV_CameraAng(0, 90, 62240, 55699, 60672);
		EventSe_Volume(2, 110, 120);
		EV_Wait(90);
		EV_CameraPos(1, 0, -499.10001f, 1082.0f, 3200.8f);
		EV_CameraAng(1, 0, 62240, 57747, 62464);
		EV_CameraPos(0, 70, -447.39999f, 1076.0f, 3219.6001f);
		EV_CameraAng(0, 70, 61728, 60307, 62464);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.80000001f, 0, 4);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_Wait(70);
		EV_CameraPos(1, 0, -684.79999f, 1104.9f, 3419.5f);
		EV_CameraAng(1, 0, 1568, 20371, 4352);
		EV_CameraPos(1, 80, -698.46997f, 1107.0f, 3420.8401f);
		EV_CameraAng(1, 80, 1568, 20371, 688);
		EV_Wait(15);
		EventSe_Volume(2, 110, 120);
		EventSe_Pitch(2, -2440, 1);
		EV_SerifPlay(760);
		EV_MsgW(60, msgTbl_ev0048[TextLanguage][1]); // "\aThere's Sonic! "
		EV_SerifWait();
		EV_Wait(15);
		EV_SetAng(sonic, 0, 6400, 0);
		EV_LookFree(sonic);
		stopObjectAll();
		EV_CameraTargetFree();
		EV_Wait(1);
		EV_CameraPos(1, 0, -415.89999f, 1092.4f, 3196.7f);
		EV_CameraAng(1, 0, 56864, 1939, 0);
		EV_CameraPos(1, 150, -350.82999f, 1099.85f, 3176.8f);
		EV_CameraAng(1, 150, 57376, 8339, 0);
		EV_Wait(17);
		EventSe_Volume(2, 110, 120);
		EventSe_Pitch(2, 2440, 1);
		EV_SerifPlay(761);
		EV_Msg(msgTbl_ev0048[TextLanguage][2]); //"\aSonnnnic!"
		EV_SerifWait();
		EV_Wait(10);
		EventSe_Play(3, 1338, 1800);
		EventSe_Volume(3, 100, 1);
		EV_Wait(10);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_SetPath(TR2, &epathtag_TR2_st, 0.093999997f, 0);
		EV_SetAng(sonic, 0, 0x2000, 0);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "ECEDDEEDD");
		EV_SerifPlay(762);
		EV_Msg(msgTbl_ev0048[TextLanguage][3]); //"\aAll right, Tails! Way to go!\nThis pl"...
		EV_Wait(50);
		EV_MsgClose();
		EV_ClrFace(sonic);
		EV_CameraPos(1, 0, -418.79999f, 1043.8f, 3125.0f);
		EV_CameraAng(1, 0, 48, 28484, 2763);
		EV_CameraPos(1, 110, -409.29999f, 1043.45f, 3129.0f);
		EV_CameraAng(0, 100, 1253, 42485, 62976);
		EV_ClrAction(sonic);
		EV_Wait(19);
		EV_PlayPad(2, &EV0048_JUMP);
		EventSe_Volume(3, 128, 100);
		EV_Wait(106);
		EV_SetPos(sonic, -451.60001f, 1043.6f, 2985.8999f);
		EV_CameraTargetFree();
		ChangeTornado2Model2_EV0048();
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
		EV_SerifPlay(763);
		EV_Msg(msgTbl_ev0048[TextLanguage][4]); //"\aNow, what do you say \nwe nail those "...
		EV_SerifWait();
		EV_Wait(10);
		EV_CameraPos(1, 0, -367.39999f, 1257.7f, 3152.5f);
		EV_CameraAng(1, 0, 48, 36676, 0);
		EV_CameraPos(0, 50, -373.39999f, 1262.4f, 3152.8f);
		EV_CameraAng(0, 50, 560, 36932, 0);
		EV_SerifPlay(764);
		EV_Msg(msgTbl_ev0048[TextLanguage][5]); //"\aYou got it!   Hang on!"
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
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		ChangeTornado2Model2_EV0048();
		stopObjectAll();
		deleteModel(0);
		EV_FreeObject(&TR2);
		EV_SetPos(player, -545.59998f, 1039.7f, 3060.8999f);
		SetClip_0500(ClipLevel);
		break;
	}
}