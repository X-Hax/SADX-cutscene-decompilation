#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0048[] = {
	(char*)("EC_LIGHT"), &texlist_ec_light,
	(char*)("EV_TR2BEFORE_WITH_SONIC"), &tr2_texlist,
	0
};

void ev0048_t_sonicreunion(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetClip_0500(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Init(4);
		SetBankDir(78);
		BLACKOUT = COverlayCreate(1.0e-32f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_SetPos(player, -545.59998f, 1039.7f, 3060.8999f);
		EV_SetAng(player, 0, 0x3000, 0);
		EV_Wait(1);
		EV_CreatePlayer(2, SonicTheHedgehog, -404.60001f, 1039.6f, 3138.3999f, 0, 0x3000, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, -404.60001f, 1039.6f, 3138.3999f);
		EV_SetAng(sonic, 0, 0x1700, 0);
		EV_LookPoint(sonic, -378.79999f, 1091.7f, 3150.5f);
		createModelEC(-455.70001f, 1173.6f, 3263.3999f, 0, 0xA700, 0, 0.029999999f, 0.029999999f, 0.029999999f,
			&object_ecff_bf_s_fbody_bf_s_fbody, &texlist_ec_light, 0);
		addmotModel(0, &action_ecff_bf_s_fbody, 0);
		playModel(0, 0, 1.0f, -1);
		EV_CreateObject(&TR2, -738.90002f, 1120.0f, 3336.6001f, 0, 0xF000, 0);
		EV_Wait(1);
		EV_SetMode(TR2, 0);
		EV_SetPos(TR2, -455.70001f, 1173.6f, 3263.3999f);
		EV_SetAng(TR2, 0xE000, 0xFF00, 0);
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
		EV_CameraAng(1, 0, 0xFF00, 0xBD00, 0xF300);
		EV_CameraPos(0, 130, -1149.9f, 1115.4f, 3311.98f);
		EV_Wait(80);
		moveObject(TR2, -975.90002f, 1041.4f, 3355.0f, -691.20001f, 1114.0f, 3382.0f, 130);
		EV_Wait(50);
		EV_CameraPos(0, 80, -1046.9f, 1000.0f, 3523.5f);
		EV_CameraAng(0, 80, 0x200, 0xCD00, 0xF300);
		EV_Wait(80);
		stopObject(TR2);
		EV_SetPos(TR2, -820.70001f, 940.59998f, 3392.7f);
		EV_SetAng(TR2, -0x2500, 0xC00, 0);
		EV_CameraPos(1, 0, -795.59998f, 939.0f, 3368.3999f);
		EV_CameraAng(1, 0, 0x20, 0x6893, 0xF700);
		EV_CameraPos(1, 130, -822.70001f, 947.59998f, 3364.6001f);
		EV_CameraAng(1, 130, 0xFA20, 0x8093, 0xF100);
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
		EV_SetAng(TR2, -0x2500, 0, 0);
		EV_CameraPos(1, 0, -781.09998f, 1104.0f, 3415.8f);
		EV_CameraAng(1, 0, 0xFE20, 0xCC93, 0xED00);
		EV_CameraPos(0, 90, -738.40002f, 1133.0f, 3461.6001f);
		EV_CameraAng(0, 90, 0xF320, 0xD993, 0xED00);
		EventSe_Volume(2, 110, 120);
		EV_Wait(90);
		EV_CameraPos(1, 0, -499.10001f, 1082.0f, 3200.8f);
		EV_CameraAng(1, 0, 0xF320, 0xE193, 0xF400);
		EV_CameraPos(0, 70, -447.39999f, 1076.0f, 3219.6001f);
		EV_CameraAng(0, 70, 0xF120, 0xEB93, 0xF400);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.80000001f, 0, 4);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_Wait(70);
		EV_CameraPos(1, 0, -684.79999f, 1104.9f, 3419.5f);
		EV_CameraAng(1, 0, 0x620, 0x4F93, 0x1100);
		EV_CameraPos(1, 80, -698.46997f, 1107.0f, 3420.8401f);
		EV_CameraAng(1, 80, 0x620, 0x4F93, 0x2B0);
		EV_Wait(15);
		EventSe_Volume(2, 110, 120);
		EventSe_Pitch(2, -2440, 1);
		EV_SerifPlay(760);
		EV_MsgW(60, msgTbl_ev0048[TextLanguage][1]); // "\aThere's Sonic! "
		EV_SerifWait();
		EV_Wait(15);
		EV_SetAng(sonic, 0, 0x1900, 0);
		EV_LookFree(sonic);
		stopObjectAll();
		EV_CameraTargetFree();
		EV_Wait(1);
		EV_CameraPos(1, 0, -415.89999f, 1092.4f, 3196.7f);
		EV_CameraAng(1, 0, 0xDE20, 0x793, 0);
		EV_CameraPos(1, 150, -350.82999f, 1099.85f, 3176.8f);
		EV_CameraAng(1, 150, 0xE020, 0x2093, 0);
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
		EV_CameraAng(1, 0, 0x30, 0x6F44, 0xACB);
		EV_CameraPos(1, 110, -409.29999f, 1043.45f, 3129.0f);
		EV_CameraAng(0, 100, 0x4E5, 0xA5F5, 0xF600);
		EV_ClrAction(sonic);
		EV_Wait(19);
		EV_PlayPad(2, &EV0048_JUMP);
		EventSe_Volume(3, 128, 100);
		EV_Wait(106);
		EV_SetPos(sonic, -451.60001f, 1043.6f, 2985.8999f);
		EV_CameraTargetFree();
		ChangeTornado2Model2_EV0048();
		EV_CameraPos(1, 0, -223.14999f, 1050.7f, 3116.7f);
		EV_CameraAng(1, 0, 0xEEC2, 0x2571, 0xF100);
		EV_CameraPos(0, 95, -230.23f, 1057.95f, 3126.5f);
		EV_CameraAng(0, 90, 0xE9C1, 0x2097, 0xF020);
		EventSe_Volume(3, 110, 1);
		EV_Wait(1);
		EventSe_Volume(3, 105, 90);
		EV_Wait(95);
		EV_CameraPos(1, 0, -196.89999f, 1019.6f, 3212.8999f);
		EV_CameraAng(1, 0, 0xB30, 0x1F44, 0xFD00);
		EV_CameraPos(0, 40, -145.55f, 1057.0f, 3178.26f);
		EV_CameraAng(0, 40, 0x9C7, 0x1F44, 0xFD00);
		EventSe_Volume(3, 100, 1);
		EV_Wait(1);
		EventSe_Volume(3, 125, 39);
		EV_WaitPath(TR2);
		EventSe_Volume(3, 110, 1);
		EventSe_Pitch(3, -2440, 1);
		EV_Wait(1);
		EV_CameraPos(0, 60, -147.23f, 1057.71f, 3176.1001f);
		EV_CameraAng(0, 60, 0xAC7, 0x1E44, 0xFD00);
		EV_ClrPath(TR2);
		EV_Wait(60);
		EV_CameraPos(1, 0, -324.70001f, 1273.7f, 3166.3f);
		EV_CameraAng(1, 0, 0xF4D2, 0x5489, 0);
		EventSe_Volume(3, 115, 1);
		EventSe_Pitch(3, -1440, 1);
		EV_Wait(1);
		EV_SetPos(TR2, -355.70001f, 1257.6f, 3170.3999f);
		EV_SetAng(TR2, 0, 0xED00, 0);
		EV_CameraPos(0, 110, -330.70001f, 1273.66f, 3153.5f);
		EV_CameraAng(0, 110, 0xEED0, 0x5189, 0xFF00);
		EV_Wait(30);
		EV_SerifPlay(763);
		EV_Msg(msgTbl_ev0048[TextLanguage][4]); //"\aNow, what do you say \nwe nail those "...
		EV_SerifWait();
		EV_Wait(10);
		EV_CameraPos(1, 0, -367.39999f, 1257.7f, 3152.5f);
		EV_CameraAng(1, 0, 0x30, 0x8F44, 0);
		EV_CameraPos(0, 50, -373.39999f, 1262.4f, 3152.8f);
		EV_CameraAng(0, 50, 0x230, 0x9044, 0);
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
		EV_CameraAng(0, 45, 0x530, 0xA644, 0xE800);
		EV_Wait(45);
		EventSe_Volume(3, 30, 160);
		EventSe_Pitch(3, -1440, 160);
		EV_CameraPos(0, 80, -468.10001f, 1220.0f, 3122.2f);
		EV_CameraAng(0, 80, 0xC30, 0xAE44, 0xF400);
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
