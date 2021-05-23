#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev000D_s_tornado1(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* tails = 0;

	ObjectMaster* KURAYAMI = 0;
	ObjectMaster* PLANE = 0;

	switch (state) {
	case 1:
		EV_InitPlayer(0);
		SetBankDir(78);
		EventSe_Init(9);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_SetPos(player, 1385.0f, 190.81f, 878.06f);
		EV_SetAng(player, 0, 28160, 0);
		EV_Wait(1);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(3, Tails_Main, 1418.05f, 201.80896f, 844.42999f, 0, 31277, 0);
		EV_Wait(1);
		LoadEventObject(&PLANE, object_tr1_s_t1_body_s_t1_body, 1475.05f, 211.89999f, 779.59003f, 0, 26112, 0);
		EV_SetMode(PLANE, 0);
		EV_Wait(1);
		EV_SetAction(PLANE, action_tr1_s_t1_body, &EV_TR1_WITH_SONIC_TEXLIST, 0.69999999f, 1, 1);
		p_SonicObj_initializer_EV000D();
		EV_CameraPos(1, 0, 1370.45f, 195.86f, 883.60999f);
		EV_CameraAng(1, 0, 768, 54772, 512);
		tails = EV_GetPlayer(3);
		EV_MovePoint2(tails, 1412.85f, 201.8f, 819.40002f, 0.40000001f, 2.0f);
		EV_Wait(60);
		EV_CameraPos(1, 120, 1372.23f, 201.92999f, 892.45001f);
		EV_CameraAng(1, 120, 62720, 58100, 0);
		EV_WaitMove(tails);
		EV_LookObject(tails, player, 0.0f, 4.0f, 0.0f);
		EV_SetFace(tails, (char*)"ED");
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
		EV_CameraAng(1, 5, 768, 58100, 0);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.60000002f, 0, 8);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 0.40000001f, 0, 20);
		EV_Wait(3);
		RumbleA(0, 0);
		EV_CameraAng(1, 5, 63232, 58100, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 256, 58100, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 63744, 58100, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0, 58100, 0);
		EV_Wait(3);
		EV_CameraAng(1, 6, 64000, 58100, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 65280, 58100, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 64256, 58100, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 65024, 58100, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 64512, 58100, 0);
		EV_Wait(5);
		EV_CameraChaseFree();
		EV_ClrAction(player);
		EV_Wait(30);
		EV_SetFace(player, (char*)"bbbbbbbbbbbb");
		EV_SetAction(player, &action_s_s0033_sonic, &SONIC_TEXLIST, 0.2f, 0, 16);
		EV_CameraPos(1, 0, 1461.0509f, 196.81358f, 868.36908f);
		EV_CameraAng(1, 0, 1024, 20480, 0);
		EV_Wait(40);
		EV_ClrFace(player);
		seqVars[33] = 1; //MRVAR_TORNADE_CATAPALT1
		EventSe_Play(0, 1333, 1800);
		EventSe_Play(1, 1334, 1800);
		BGM_Play(MusicIDs_themiles);
		EV_CameraPos(1, 0, 1247.4388f, 239.8842f, 898.55316f);
		EV_CameraAng(1, 0, 256, 46592, 0);
		EV_CameraPos(1, 200, 1434.947f, 203.6006f, 840.14508f);
		EV_CameraAng(0, 200, 512, 42752, 0);
		EV_Wait(120);
		EventSe_Stop(0);
		EV_SetPos(tails, 1395.04f, 221.55f, 700.56f);
		EV_SetAng(tails, 0, 22172, 0);
		EV_Wait(1);
		seqVars[34] = 1; //MRVAR_TORNADE_CATAPALT2
		EventSe_Play(2, 1335, 1800);
		EventSe_Play(3, 1336, 1800);
		EV_Wait(80);
		EV_CameraPos(1, 0, 1780.7604f, 238.06544f, 1087.6016f);
		EV_CameraAng(1, 0, 64512, 11008, 0);
		EV_CameraPos(0, 150, 2176.6648f, 226.99632f, 1588.4918f);
		EV_CameraAng(0, 150, 63744, 11008, 0);
		EV_Wait(200);
		EventSe_Stop(1);
		EV_CameraPos(1, 0, 1496.0791f, 311.10577f, 820.10883f);
		EV_CameraAng(1, 0, 49664, 46324, 64256);
		EV_CameraPerspective(1, 1, 9102);
		EventSe_Stop(2);
		EV_SetAng(player, 0, 22172, 0);
		moveObject(PLANE, 1475.05f, 211.89999f, 779.59003f, 1529.0699f, 211.89999f, 857.48999f, 400);
		EV_Wait(150);
		EV_CameraPos(1, 0, 1510.6127f, 210.20572f, 833.85535f);
		EV_CameraAng(1, 0, 2560, 6144, 0);
		EV_CameraChase(PLANE);
		EV_CameraPerspective(1, 1, 12743);
		EV_Wait(250);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, 1546.3781f, 224.242f, 857.76001f);
		EV_CameraAng(1, 0, 61696, 0x4000, 256);
		EV_SerifPlay(714);
		EV_MsgW(60, (msgTbl_ev000D[TextLanguage])[1]); //"\aSonic!   Hop in!"
		EV_Wait(10);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_PlayPad(0, &E000DSS);
		EV_CameraPos(1, 0, 1474.8199f, 193.45f, 843.83002f);
		EV_CameraAng(1, 0, 1280, 22772, 0);
		EV_CameraPerspective(1, 1, 18204);
		EV_CameraTargetObj(1, 38, player, 0.0f, 3.0f, 0.0f, 0);
		p_SonicObj_EV000D();
		EV_Wait(38);
		EV_CameraTargetFree();
		EV_Wait(60);
		EV_SetPos(player, 1322.12f, 234.0f, 471.20999f);
		EV_SetAng(player, 63488, 5120, 0);
		EV_Wait(30);
		EV_CameraPos(1, 0, 1556.4399f, 224.11f, 841.84003f);
		EV_CameraPerspective(1, 1, 12561);
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
		FreeTask(KURAYAMI);
		KURAYAMI = 0;
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