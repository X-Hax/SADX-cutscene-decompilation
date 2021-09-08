#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev000D[] = {
	(char*)("EV_TR1_WITH_SONIC"), &EV_TR1_WITH_SONIC_TEXLIST
};

void ev000D_s_tornado1(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		SetBankDir(78);
		EventSe_Init(9);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_SetPos(player, 1385.0f, 190.81f, 878.06f);
		EV_SetAng(player, 0, 0x6E00, 0);
		EV_Wait(1);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(3, MilesTalesPrower, 1418.05f, 201.80896f, 844.42999f, 0, 0x7A2D, 0);
		EV_Wait(1);
		EV_CreateObjectFunc(&PLANE, object_tr1_s_t1_body_s_t1_body, 1475.05f, 211.89999f, 779.59003f, 0, 0x6600, 0);
		EV_SetMode(PLANE, 0);
		EV_Wait(1);
		EV_SetAction(PLANE, action_tr1_s_t1_body, &EV_TR1_WITH_SONIC_TEXLIST, 0.69999999f, 1, 1);
		p_SonicObj_initializer_EV000D();
		EV_CameraPos(1, 0, 1370.45f, 195.86f, 883.60999f);
		EV_CameraAng(1, 0, 0x300, 0xD5F4, 0x200);
		tails = EV_GetPlayer(3);
		EV_MovePoint2(tails, 1412.85f, 201.8f, 819.40002f, 0.40000001f, 2.0f);
		EV_Wait(60);
		EV_CameraPos(1, 120, 1372.23f, 201.92999f, 892.45001f);
		EV_CameraAng(1, 120, 0xF500, 0xE2F4, 0);
		EV_WaitMove(tails);
		EV_LookObject(tails, player, 0.0f, 4.0f, 0.0f);
		EV_SetFace(tails, "ED");
		EV_SerifPlay(713);
		EV_Msg((msgTbl_ev000D[TextLanguage])[0]); //"\aSonic, wait here for a second..."
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(tails);
		EV_ClrAction(tails);
		EV_MovePoint2(tails, 1459.9301f, 201.81f, 781.47998f, 1.0f, 0.5f);
		EV_WaitMove(tails);
		EV_Wait(30);
		EV_SetAction(player, &action_s_s0028_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 16);
		EV_Wait(120);
		EV_CameraChase(player);
		EV_ClrAction(player);
		EV_MovePoint2(player, 1451.51f, 190.82001f, 872.013f, 0.40000001f, 1.0f);
		EV_Wait(160);
		EV_CameraAng(1, 5, 0x300, 0xE2F4, 0);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.60000002f, 0, 8);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 0.40000001f, 0, 20);
		EV_Wait(3);
		RumbleA(0, 0);
		EV_CameraAng(1, 5, 0xF700, 0xE2F4, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0x100, 0xE2F4, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xF900, 0xE2F4, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0, 0xE2F4, 0);
		EV_Wait(3);
		EV_CameraAng(1, 6, 0xFA00, 0xE2F4, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFF00, 0xE2F4, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFB00, 0xE2F4, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFE00, 0xE2F4, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFC00, 0xE2F4, 0);
		EV_Wait(5);
		EV_CameraChaseFree();
		EV_ClrAction(player);
		EV_Wait(30);
		EV_SetFace(player, "bbbbbbbbbbbb");
		EV_SetAction(player, &action_s_s0013_sonic, &SONIC_TEXLIST, 0.2f, 0, 16);
		EV_CameraPos(1, 0, 1461.0509f, 196.81358f, 868.36908f);
		EV_CameraAng(1, 0, 0x400, 0x5000, 0);
		EV_Wait(40);
		EV_ClrFace(player);
		seqVars[33] = 1; //MRVAR_TORNADE_CATAPALT1
		EventSe_Play(0, 1333, 1800);
		EventSe_Play(1, 1334, 1800);
		BGM_Play(MusicIDs_themiles);
		EV_CameraPos(1, 0, 1247.4388f, 239.8842f, 898.55316f);
		EV_CameraAng(1, 0, 0x100, 0xB600, 0);
		EV_CameraPos(1, 200, 1434.947f, 203.6006f, 840.14508f);
		EV_CameraAng(0, 200, 0x200, 0xA700, 0);
		EV_Wait(120);
		EventSe_Stop(0);
		EV_SetPos(tails, 1395.04f, 221.55f, 700.56f);
		EV_SetAng(tails, 0, 0x569C, 0);
		EV_Wait(1);
		seqVars[34] = 1; //MRVAR_TORNADE_CATAPALT2
		EventSe_Play(2, 1335, 1800);
		EventSe_Play(3, 1336, 1800);
		EV_Wait(80);
		EV_CameraPos(1, 0, 1780.7604f, 238.06544f, 1087.6016f);
		EV_CameraAng(1, 0, 0xFC00, 0x2B00, 0);
		EV_CameraPos(0, 150, 2176.6648f, 226.99632f, 1588.4918f);
		EV_CameraAng(0, 150, 0xF900, 0x2B00, 0);
		EV_Wait(200);
		EventSe_Stop(1);
		EV_CameraPos(1, 0, 1496.0791f, 311.10577f, 820.10883f);
		EV_CameraAng(1, 0, 0xC200, 0xB4F4, 0xFB00);
		EV_CameraPerspective(1, 1, 0x238E);
		EventSe_Stop(2);
		EV_SetAng(player, 0, 0x569C, 0);
		moveObject(PLANE, 1475.05f, 211.89999f, 779.59003f, 1529.0699f, 211.89999f, 857.48999f, 400);
		EV_Wait(150);
		EV_CameraPos(1, 0, 1510.6127f, 210.20572f, 833.85535f);
		EV_CameraAng(1, 0, 0xA00, 0x1800, 0);
		EV_CameraChase(PLANE);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(250);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, 1546.3781f, 224.242f, 857.76001f);
		EV_CameraAng(1, 0, 0xF100, 0x4000, 0x100);
		EV_SerifPlay(714);
		EV_MsgW(60, (msgTbl_ev000D[TextLanguage])[1]); //"\aSonic!   Hop in!"
		EV_Wait(10);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_PlayPad(0, &E000DSS);
		EV_CameraPos(1, 0, 1474.8199f, 193.45f, 843.83002f);
		EV_CameraAng(1, 0, 0x500, 0x58F4, 0);
		EV_CameraPerspective(1, 1, 0x471C);
		EV_CameraTargetObj(1, 38, player, 0.0f, 3.0f, 0.0f, 0);
		p_SonicObj_EV000D();
		EV_Wait(38);
		EV_CameraTargetFree();
		EV_Wait(60);
		EV_SetPos(player, 1322.12f, 234.0f, 471.20999f);
		EV_SetAng(player, 0xF800, 0x1400, 0);
		EV_Wait(30);
		EV_CameraPos(1, 0, 1556.4399f, 224.11f, 841.84003f);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_CameraTargetObj(0, 0, PLANE, 10.0f, 0.0f, 10.0f, 0);
		EV_Wait(80);
		EV_SerifPlay(715);
		EV_MsgW(60, (msgTbl_ev000D[TextLanguage])[2]); //"\aLet's go!"
		EV_CameraChase(PLANE);
		EV_SetAction(PLANE, action_tr1_s_t1_body, &EV_TR1_WITH_SONIC_TEXLIST, 1.0f, 1, 1);
		EV_Wait(1);
		EV_MsgClose();
		EventSe_Play(5, 1338, 1800);
		EV_SetPath(PLANE, &epathtag_E000DTR, 0.5f, 0);
		EventSe_Volume(5, -100, 160);
		EV_Wait(40);
		EV_CameraChaseFree();
		EV_Wait(40);
		EV_CameraTargetFree();
		EV_Wait(30);
		EventSe_Stop(3);
		EventSe_Play(4, 1337, 1800);
		EV_Wait(40);
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(80);
		EventSe_Stop(4);
		EventSe_Stop(5);
		EV_Wait(10);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		if(KURAYAMI){
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		p_SonicObj_EV000D();
		EV_ClrPath(PLANE);
		seqVars[34] = 0; //MRVAR_TORNADE_CATAPALT2
		seqVars[33] = 0; //MRVAR_TORNADE_CATAPALT1
		EV_FreeObject(&PLANE);
		EV_RemovePlayer(3);
		EV_InitPlayer(0);
		break;
	}
}