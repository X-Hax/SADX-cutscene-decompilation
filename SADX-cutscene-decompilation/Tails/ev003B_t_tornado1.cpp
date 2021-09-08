#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev003B[] = {
	(char*)("EV_TR1_WITH_SONIC"), &EV_TR1_WITH_SONIC_TEXLIST
};

void ev003B_t_tornado1(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		SetBankDir(78);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CreateObjectFunc(&PLANE, object_tr1_s_t1_body_s_t1_body, 1475.05f, 209.89999f, 779.59003f, 0, 0x6600, 0);
		EV_SetMode(PLANE, 0);
		EV_SetAction(PLANE, action_tr1_s_t1_body, &EV_TR1_WITH_SONIC_TEXLIST, 0.001f, 1, 1);
		g_SonicObj_EV003B();
		g_SonicOrgObj_p_EV003B();
		EV_CreatePlayer(3, SonicTheHedgehog, 1385.0f, 190.81f, 878.06f, 0, 0x6E00, 0);
		EV_SetPos(player, 1418.05f, 201.8f, 844.42999f);
		EV_SetAng(player, 0, 0x7A00, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 1434.64f, 211.19f, 839.28003f);
		EV_CameraAng(1, 0, 0xF700, 0x4F00, 0);
		EV_MovePoint2(player, 1412.85f, 201.8f, 819.40002f, 0.40000001f, 2.0f);
		EV_CameraAng(1, 80, 0xFF00, 0x1100, 0);
		seqVars[33] = 1;
		EV_Wait(60);
		EV_WaitMove(player);
		sonic = EV_GetPlayer(3);
		EV_LookObject(player, sonic, 0.0f, 4.0f, 0.0f);
		EV_SetFace(player, "EDC");
		EV_SerifPlay(713);
		EV_Msg(msgTbl_ev003B[TextLanguage][0]); //"\aSonic, wait here for a second..."
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(player);
		EV_LookFree(player);
		EV_SetPos(player, 1434.1f, 201.8f, 796.22998f);
		EV_SetAng(player, 0, 0x654E, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 1430.46f, 209.28f, 798.78998f);
		EV_CameraAng(1, 0, 0xFF00, 0xD500, 0);
		EV_CameraPerspective(1, 1, 0x58E4);
		KURAYAMI = COverlayCreate(0.00076923077f, 0.5f, 0.0f, 0.0f, 0.0f);
		EV_Wait(1);
		EV_CameraPerspective(1, 60, 0x31C7);
		EV_ClrAction(player);
		EV_PlayPad(0, &E003BT);
		EV_Wait(25);
		EventSe_Play(0, 1336, 1800);
		COverlaySetSpeed(KURAYAMI, 0.033333335f);
		EV_Wait(40);
		EV_SetPos(player, 1395.04f, 221.55f, 701.0f);
		EV_SetAng(player, 0, 0x1612, 0);
		EV_CameraPos(1, 0, 1449.16f, 216.60001f, 768.89001f);
		EV_CameraAng(1, 0, 0xFC00, 0xA800, 0);
		EV_SetPos(sonic, 1445.6801f, 190.82001f, 866.08002f);
		EV_SetAng(sonic, 0, 0x6600, 0);
		EV_Wait(1);
		EV_ClrAction(PLANE);
		EV_Wait(1);
		g_SonicOrgObj_p_initializer_EV003B();
		EV_SetAction(PLANE, action_tr1_s_t1_body, &EV_TR1_WITH_SONIC_TEXLIST, 0.69999999f, 1, 1);
		BGM_Play(MusicIDs_themiles);
		EventSe_Play(1, 1335, 1800);
		seqVars[34] = 1;
		COverlaySetSpeed(KURAYAMI, -0.0049999999f);
		EV_CameraPos(1, 190, 1462.85f, 219.505f, 763.10999f);
		EV_CameraAng(1, 190, 0xF600, 0x9A00, 0);
		EV_Wait(320);
		EventSe_Stop(1);
		EventSe_Play(2, 1338, 1800);
		moveObject(PLANE, 1475.05f, 211.89999f, 779.59003f, 1529.0699f, 211.89999f, 857.48999f, 360);
		EV_LookObject(sonic, PLANE, 0.0f, 10.0f, 0.0f);
		EV_Wait(80);
		EV_CameraPos(1, 0, 1516.095f, 287.17499f, 825.56f);
		EV_CameraAng(1, 0, 0xD100, 0x1E00, 0);
		EV_CameraChase(PLANE);
		EV_Wait(180);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, 1540.63f, 222.12f, 849.62f);
		EV_CameraAng(1, 0, 0xF700, 0x4E00, 0x100);
		EV_CameraPos(1, 130, 1541.01f, 218.075f, 856.15002f);
		EV_CameraAng(1, 130, 0xF700, 0x4F00, 0);
		EV_LookFree(sonic);
		EV_SetAng(sonic, 0, 0x4000, 0);
		EV_Wait(1);
		EV_SerifPlay(714);
		EventSe_Volume(2, -100, 100);
		EV_MsgW(60, msgTbl_ev003B[TextLanguage][1]); //"\aSonic!  Hop in!"
		EV_Wait(60);
		EV_MsgCls();
		EV_ClrAction(sonic);
		EV_PlayPad(3, &E003BSS);
		EV_Wait(80);
		g_SonicObj_initializer_EV003B();
		EV_SetPos(sonic, 1395.04f, 221.55f, 700.56f);
		EV_Wait(30);
		EV_SerifPlay(715);
		EV_MsgW(60, msgTbl_ev003B[TextLanguage][2]); //"\aLet's go!"
		EV_SetPos(sonic, 1395.04f, 221.55f, 700.56f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_CameraPos(1, 0, 1556.4399f, 224.11f, 841.84003f);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraTargetObj(0, 0, PLANE, 0.0f, 0.0f, 0.0f, 0);
		EV_SetAction(PLANE, action_tr1_s_t1_body, &EV_TR1_WITH_SONIC_TEXLIST, 1.0f, 1, 1);
		EV_Wait(1);
		EV_CameraChase(PLANE);
		EV_MsgClose();
		EventSe_Volume(2, 0, 1);
		EV_SetPath(PLANE, &epathtag_E000DTR, 0.5f, 0);
		EV_Wait(40);
		EventSe_Volume(2, -200, 160);
		EV_CameraChaseFree();
		EV_Wait(40);
		EV_CameraTargetFree();
		EV_Wait(20);
		EventSe_Stop(0);
		EventSe_Play(3, 1337, 100);
		EventSe_Volume(3, -200, 100);
		EV_Wait(50);
		COverlaySetSpeed(KURAYAMI, 0.016666668f);
		EV_Wait(80);
		EventSe_Stop(2);
		EventSe_Stop(3);
		EV_Wait(10);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		stopObjectAll();
		if(KURAYAMI){
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		seqVars[34] = 0;
		seqVars[33] = 0;
		g_SonicOrgObj_p_initializer_EV003B();
		g_SonicObj_initializer_EV003B();
		EV_ClrPath(PLANE);
		EV_FreeObject(&PLANE);
		EV_RemovePlayer(3);
		EV_InitPlayer(0);
		break;
	}
}