#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00BB[] = {
	(char*)("FROG"), &texlist_frog,
	(char*)("FROG1"), &texlist_frog1,
	(char*)("FROG2"), &texlist_frog2,
	(char*)("FROG3"), &texlist_frog3,
	(char*)("CAPTUREBEAM"), &CAPTUREBEAM_TEXLIST,
	(char*)("EV_E103_BODY"), &texlist_ev_e103_body,
	(char*)("EV_E104_BODY"), &texlist_ev_e104_body,
	(char*)("EV_E105_BODY"), &texlist_ev_e105_body
};

void ev00BB_e_deliverfrog(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		BLACK = 0;
		e103 = 0;
		e104 = 0;
		e105 = 0;
		Frog1 = 0;
		Frog2 = 0;
		Frog3 = 0;
		Frog4 = 0;
		cap1 = 0;
		cap2 = 0;
		cap3 = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(107);
		EventSe_Init(2);
		WHITE = COverlayCreate(1.0f, 0.1f, 1.0f, 1.0f, 1.0f);
		BGM_Play(MusicIDs_thee102);
		EV_CameraPerspective(1, 1, 0x3C72);
		EV_SetPos(player, -32.0f, -5.0999999f, -42.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_InitPlayer(0);
		EV_CreateObjectFunc(&e103, ev_e103, -11.0f, 8.0500002f, -42.0f, 0, 0x8000, 0);
		EV_CreateObjectFunc(&e104, ev_e104, 33.0f, -5.0999999f, -42.0f, 0, 0x8000, 0);
		EV_CreateObjectFunc(&e105, ev_e105, 11.0f, -5.0999999f, -42.0f, 0, 0x8000, 0);
		EV_CreatePlayer(6, Eggman, 0.0f, 6.6999998f, -193.0f, 0, 0, 0);
		EV_CreateObject(&Frog1,
			player->twp->pos.x,
			player->twp->pos.y + 10.5f,
			player->twp->pos.z - 3.5f, 0, 0, 0);
		EV_CreateObject(&Frog2, -11.0f, 0.0f, -50.5f, 0, 0, 0);
		EV_CreateObject(&Frog3, 21.0f, -5.0999999f, -50.5f, 0, 0, 0);
		EV_CreateObject(&Frog4, -1.0f, -5.0999999f, -50.5f, 0, 0, 0);
		EV_Wait(2);
		EV_SetMode(e103, 0);
		EV_SetMode(e104, 0);
		EV_SetMode(e105, 0);
		EV_SetMode(Frog1, 0);
		EV_SetMode(Frog2, 0);
		EV_SetMode(Frog3, 0);
		EV_SetMode(Frog4, 0);
		EV_SetPos(e103, -11.0f, 8.0500002f, -42.0f);
		EV_SetAng(e103, 0, 0x8000, 0);
		EV_SetPos(e104, 33.0f, 8.0500002f, -42.0f);
		EV_SetAng(e104, 0, 0x8000, 0);
		EV_SetPos(e105, 11.0f, 8.0500002f, -42.0f);
		EV_SetAng(e105, 0, 0x8000, 0);
		EV_SetPos(Frog1, -44.0f, -4.5999999f, -51.5f);
		EV_SetAng(Frog1, 0, 0x4700, 0);
		EV_SetPos(Frog2, -11.0f, 4.5999999f, -55.0f);
		EV_SetAng(Frog2, 0, 0x4800, -0x500);
		EV_SetPos(Frog3, 33.0f, 4.5999999f, -55.0f);
		EV_SetAng(Frog3, 0, 0x4800, -0x500);
		EV_SetPos(Frog4, 11.0f, 4.5999999f, -55.0f);
		EV_SetAng(Frog4, 0, 0x4800, -0x500);
		EV_SetAction(player, E102_ACTIONS[45], &E102_TEXLIST, 0.80000001f, 1, 0);
		EV_SetAction(Frog1, &_action_f_f0003_frog, &texlist_frog, 0.80000001f, 1, 0);
		EV_SetAction(e103, &action_e_hwait0_e103, &texlist_ev_e103_body, 0.80000001f, 1, 0);
		EV_SetMotion(Frog2, &object_f_frog1_f_frog1, &motion_ff_00001, &texlist_frog1, 1.6f, 1, 0);
		EV_SetAction(e104, &action_e_hwait0_e104, &texlist_ev_e104_body, 0.80000001f, 1, 0);
		EV_SetMotion(Frog3, &object_f_frog2_f_frog2, &motion_ff_00002, &texlist_frog2, 1.6f, 1, 0);
		EV_SetAction(e105, &action_e_hwait0_e105, &texlist_ev_e105_body, 0.80000001f, 1, 0);
		EV_SetMotion(Frog4, &object_f_frog3_f_frog3, &motion_ff_00003, &texlist_frog3, 1.6f, 1, 0);
		eggman = EV_GetPlayer(6);
		EV_SetAction(eggman, &action_g_g0002_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EventSe_Play(1, 760, 1800);
		EventSe_Volume(1, -120, 120);
		EV_SerifPlay(1223);
		EV_Wait(1);
		EV_SerifPlay(1224);
		EV_Wait(1);
		EV_SerifPlay(1225);
		EV_SetPos(player, 0.0f, 0.0f, 159.0f);
		EV_SetPos(Frog1, -12.0f, -0.5f, 149.5f);
		EV_CameraAng(1, 0, 0xE900, 0x8000, 0);
		EV_CameraPos(1, 0, 0.0f, 20.0f, 152.0f);
		EV_Wait(10);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -0.016666668f);
		}
		EV_Wait(50);
		EV_SetAction(player, E102_ACTIONS[45], &E102_TEXLIST, 0.1f, 1, 0);
		EV_Wait(30);
		EV_CameraAng(1, 0, 0x900, 0xB00, 0);
		EV_CameraPos(1, 0, 6.6999998f, 6.3000002f, 173.0f);
		EV_CameraPos(0, 70, 19.4f, 6.3000002f, 170.0f);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_ClrAction(Frog1);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 0.80000001f, 1, 0);
		moveObject(player, 0.0f, 0.0f, 159.0f, 0.0f, -4.0f, 0.0f, 80);
		EV_Wait(50);
		BLACK = COverlayCreate(0.050000001f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(20);
		stopObjectAll();
		EV_ClrAction(player);
		EV_SetPos(player, -32.0f, -5.0999999f, -42.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_SetPos(Frog1, -44.0f, -4.5999999f, -51.5f);
		EV_SetAng(Frog1, 0, 0x4700, 0);
		EV_SetAction(player, E102_ACTIONS[45], &E102_TEXLIST, 0.80000001f, 1, 0);
		EV_SetAction(Frog1, &_action_f_f0003_frog, &texlist_frog, 0.80000001f, 1, 0);
		EV_Wait(10);
		EV_CameraAng(1, 0, 0x1100, 0x7300, 0x100);
		EV_CameraPos(1, 0, -28.620001f, -3.5699999f, -72.900002f);
		if (BLACK)
		{
			COverlaySetSpeed(BLACK, -0.033333335f);
		}
		EV_Wait(30);
		EventSe_Stop(1);
		EV_CameraAng(1, 0, 0x1100, 0x7300, 0x100);
		EV_CameraPos(1, 0, -28.620001f, -3.5699999f, -72.900002f);
		EV_CameraPos(0, 90, -10.7f, -3.73f, -70.650002f);
		cap1 = CreateCaptureBeam(-6.0f, 23.0f, -42.0f, 0, 0, 0);
		cap2 = CreateCaptureBeam(38.0f, 23.0f, -42.0f, 0, 0, 0);
		cap3 = CreateCaptureBeam(16.0f, 23.0f, -42.0f, 0, 0, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.15000001f, 0.0f, 0.15000001f, 0.0f, 0.0f, 0);
		SetCaptureParam(cap2, 0.15000001f, 0.0f, 0.15000001f, 0.0f, 0.0f, 0);
		SetCaptureParam(cap3, 0.15000001f, 0.0f, 0.15000001f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.0f, 0.079999998f, 0);
		SetCaptureParam(cap2, 0.0f, 0.0f, 0.0f, 0.0f, 0.079999998f, 0);
		SetCaptureParam(cap3, 0.0f, 0.0f, 0.0f, 0.0f, 0.079999998f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		SetCaptureParam(cap2, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		SetCaptureParam(cap3, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(87);
		EV_CameraAng(1, 0, 0xFF00, 0xED00, 0x100);
		EV_CameraPos(1, 0, -4.1500001f, 8.1070004f, -185.2f);
		EV_CameraChase(eggman);
		EV_MovePoint2(eggman, 0.0f, 3.5f, -60.0f, 0.60000002f, 0.0f);
		EV_Wait(70);
		EV_CameraChaseFree();
		EV_CameraPos(0, 0, -10.7f, -3.73f, -70.650002f);
		EV_CameraAng(0, 0, 0x1100, 0x7300, 0x100);
		EV_CameraPos(0, 90, 10.79f, -3.73f, -70.650002f);
		EV_CameraAng(0, 90, 0x1100, 0x6C00, 0x100);
		EV_Wait(10);
		EV_WaitMove(eggman);
		EV_ClrAction(eggman);
		EV_Wait(30);
		EV_CameraTargetObj(1, 1, eggman, 0.0f, 8.0f, 0.0f, 0);
		EV_CameraAng(1, 0, 0xFE00, 0xF600, 0x100);
		EV_CameraPos(0, 200, 9.8199997f, -2.75f, -24.67f);
		EV_Wait(20);
		EV_CameraPerspective(1, 100, 0x31C7);
		EV_Wait(10);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0032_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(eggman, &action_g_g0032_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(eggman, &action_g_g0007_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 3);
		EV_Wait(20);
		EV_SerifPlay(1226);
		EV_Msg(msgTbl_ev00BB[TextLanguage][0]); //"\aArgggh! \nDummies, dummies, dummies, "...
		EV_Wait(20);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraTargetFree();
		EV_CameraAng(1, 0, 0xC00, 0xFC00, 0);
		EV_CameraPos(1, 0, 26.4f, -1.75f, -23.5f);
		EV_SetPos(eggman, 27.5f, -3.5f, -68.0f);
		EV_SetAng(eggman, 0, -0x4000, 0);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_0012_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_CameraChase(eggman);
		EV_MovePoint2(eggman, -20.0f, -3.5f, -68.0f, 0.30000001f, 0.5f);
		EV_SerifPlay(1227);
		EV_Msg(msgTbl_ev00BB[TextLanguage][1]); //"\aNone of you got the right one!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MoveFree(eggman);
		EV_MoveRotation(eggman, 0, 0x8000, 0);
		EV_Wait(15);
		EV_CameraChaseFree();
		EV_CameraAng(1, 0, 0xFB00, 0xAF00, 0x100);
		EV_CameraPos(1, 0, -49.682999f, 7.8060002f, -67.193001f);
		EV_CameraAng(1, 0, 0xFB00, 0xAF00, 0x100);
		EV_CameraPos(0, 110, -47.0f, 7.4400001f, -66.0f);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0020_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1228);
		EV_Msg(msgTbl_ev00BB[TextLanguage][2]); //"\aWe must find the frog \nwith Chaos' t"...
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraAng(1, 0, 0x300, 0xF500, 0);
		EV_CameraPos(1, 0, -27.677f, 9.0100002f, -24.65f);
		EV_ClrAction(eggman);
		EV_SerifPlay(1229);
		EV_Msg(msgTbl_ev00BB[TextLanguage][3]); //"\aThat same frog has also swallowed \na"...
		EV_CameraAng(1, 80, 0x300, 0xEE00, 0);
		EV_CameraPos(1, 80, -48.16f, 9.1800003f, -20.950001f);
		EV_CameraPerspective(1, 80, 0x3C72);
		EV_SetAction(eggman, &action_g_g0002_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_MovePoint2(eggman, -32.0f, 3.5f, -68.0f, 0.18000001f, 0.0f);
		EV_WaitMove(eggman);
		EV_MoveRotation(eggman, 0, 0x8000, 0);
		EV_SerifWait();
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0004_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_SerifPlay(1230);
		EV_Msg(msgTbl_ev00BB[TextLanguage][4]); //"\aHuh?"
		EV_WaitAction(eggman);
		EV_CameraPerspective(0, 120, 0x29F5);
		EV_CameraAng(0, 120, 0x140, 0xE700, 0);
		EV_CameraPos(0, 120, -48.200001f, 2.55f, -27.450001f);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_Wait(20);
		EV_MsgClose();
		EV_SetAction(eggman, &action_g_g0009_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(8);
		EV_SerifPlay(1231);
		EV_Msg(msgTbl_ev00BB[TextLanguage][5]); //"\aAh, there it is!  Right there!"
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0007_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_SerifPlay(1232);
		EV_Msg(msgTbl_ev00BB[TextLanguage][6]); //"\aI'm proud of you, Gamma!"
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraAng(1, 0, 64064, 0x5D00, 0);
		EV_CameraPos(1, 0, -13.46f, 19.190001f, -72.660004f);
		EV_CameraAng(1, 120, 0x340, 0x5F00, 0);
		EV_CameraPos(1, 120, -11.79f, 0.81999999f, -74.160004f);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 12);
		EV_SerifPlay(1233);
		EV_Msg(msgTbl_ev00BB[TextLanguage][7]); //"\aI knew you'd be of use to me!"
		EV_WaitAction(eggman);
		EV_SetAction(eggman, &action_g_g0006_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 16);
		EV_SetAction(player, E102_ACTIONS[45], &E102_TEXLIST, 3.0f, 1, 16);
		EV_SetAction(Frog1, &_action_f_f0003_frog, &texlist_frog, 3.0f, 1, 16);
		EV_Wait(30);
		EV_MsgClose();
		EV_Wait(30);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_ClrAction(player);
		EV_ClrAction(Frog1);
		EV_SetAction(Frog1, &_action_f_f0003_frog, &texlist_frog, 1.0f, 1, 0);
		EV_SetAction(player, E102_ACTIONS[45], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 70, 0xF440, 0x7800, 0);
		EV_CameraPos(1, 70, 4.3299999f, 21.4f, -93.650002f);
		EV_CameraPerspective(1, 70, 0x471C);
		EV_SerifPlay(1234);
		EV_Msg(msgTbl_ev00BB[TextLanguage][8]); //"\aAll you worthless hunks of junk, \nbe"...
		EV_Wait(18);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0031_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_Wait(25);
		EV_SerifWait();
		EV_MsgClose();
		ChgCaptureMod(cap1, 1);
		EV_Wait(1);
		ChgCaptureMod(cap2, 1);
		EV_Wait(1);
		ChgCaptureMod(cap3, 1);
		EventSe_Play(0, 1333, 1800);
		EventSe_Volume(0, -10, 1);
		EV_CameraAng(1, 0, 0x240, 0x8200, 0);
		EV_CameraPos(1, 0, 36.110001f, 6.7600002f, -68.720001f);
		EV_FreeObject(&Frog3);
		EV_FreeObject(&Frog4);
		EV_FreeObject(&Frog2);
		EV_SetPos(e103, -6.0f, 15.05f, -42.0f);
		EV_SetAction(e103, &action_e_e0010_e103, &texlist_ev_e103_body, 1.0f, 1, 8);
		EV_SetPos(e104, 38.0f, 14.55f, -42.0f);
		EV_SetAction(e104, &action_e_e0009_e104, &texlist_ev_e104_body, 1.0f, 1, 8);
		EV_SetPos(e105, 16.0f, 15.05f, -42.0f);
		EV_SetAction(e105, &action_e_e0011_e105, &texlist_ev_e105_body, 1.0f, 1, 8);
		EV_Wait(50);
		EV_SetPos(Frog1, -28.155001f, 5.23f, -69.0f);
		EV_SetAng(Frog1, 0, 0, 0);
		EV_SetAction(Frog1, &_action_f_f0001_frog, &texlist_frog, 1.0f, 1, 0);
		EV_MoveRotation(player, 0, 0x7600, 0);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.5f, 1, 8);
		EV_CameraPos(0, 120, -16.75f, 6.7600002f, -64.82f);
		deleteObject(&e104, 0, 0.1f, 2.5f, 0.1f, 30);
		EV_Wait(30);
		ChgCaptureMod(cap2, 2);
		EV_Wait(5);
		deleteObject(&e105, 1, 0.1f, 2.5f, 0.1f, 30);
		EV_Wait(30);
		ChgCaptureMod(cap3, 2);
		EV_Wait(20);
		EventSe_Stop(0);
		EV_CameraAng(0, 80, 0x540, 0xA300, 0xFE00);
		EV_CameraPos(0, 80, -38.0f, 9.243f, -59.056f);
		EV_Wait(30);
		EV_SetAng(e103, 0, 0x5000, 0);
		EV_SetAng(e104, 0, -0x7000, 0);
		EV_SetAng(e105, 0, -0x6500, 0);
		EV_Wait(50);
		EV_CameraPos(0, 110, -36.5f, 9.5f, -57.759998f);
		EV_Wait(10);
		deleteObject(&e103, 2, 0.1f, 2.5f, 0.1f, 30);
		EV_Wait(30);
		ChgCaptureMod(cap1, 2);
		EV_Wait(70);
		EV_SerifPlay(1235);
		EV_Msg(msgTbl_ev00BB[TextLanguage][9]); //"\aYou will get a new assignment!   \nTh"...
		EV_Wait(10);
		EV_CameraPerspective(1, 60, 0x31C7);
		EV_CameraAng(1, 90, 0xC40, 0x5900, 0);
		EV_CameraPos(1, 90, 1.37f, -3.5f, -79.199997f);
		EV_SetAction(player, &action_e_e0033_e102, &E102_TEXLIST, 1.0f, 0, 8);
		EV_WaitAction(player);
		EV_MoveRotation(player, 0, 0x8000, 0);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.80000001f, 1, 0);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraAng(0, 90, 0xFC41, 0x7700, 0);
		EV_CameraPos(0, 90, -18.799999f, 12.956f, -85.764999f);
		EV_Wait(60);
		EV_SerifPlay(1236);
		EV_Msg(msgTbl_ev00BB[TextLanguage][10]); //"\aGo to the room through that last door"...
		EV_SetAction(player, &action_e_e0007_e102, &E102_TEXLIST, 1.0f, 0, 8);
		EV_WaitAction(player);
		EV_MoveRotation(player, 0, 0x4000, 0);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 0.80000001f, 0, 0);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 0.80000001f, 1, 0);
		EV_Wait(10);
		EV_CameraAng(0, 210, 0x40, 0x8400, 0);
		EV_CameraPos(0, 210, -71.599998f, 10.0f, 21.4f);
		EV_CameraPerspective(0, 210, 0x1C72);
		EV_Wait(70);
		EV_SerifPlay(1237);
		EV_Msg(msgTbl_ev00BB[TextLanguage][11]); //"\aOnce there, you'll find a girl and\na"...
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrAction(eggman);
		EV_CameraAng(1, 0, 0xF40, 0x1A00, 0);
		EV_CameraPos(1, 0, -12.22f, -3.925f, -19.747999f);
		EV_FreeObject(&Frog1);
		EV_SetAction(eggman, &action_g_g0009_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 8);
		EV_SerifPlay(1238);
		EV_Msg(msgTbl_ev00BB[TextLanguage][12]); //"\aNow go!"
		EV_CameraAng(1, 0, 0xF40, 0x1A00, 0);
		EV_CameraPos(1, 0, -12.22f, -3.925f, -19.747999f);
		EV_CameraAng(0, 40, 0x640, 0x1600, 0x100);
		EV_CameraPos(0, 40, -3.5380001f, -1.83f, 5.25f);
		EV_Wait(30);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EventSe_Close();
		EV_InitPlayer(0);
		EV_RemovePlayer(6);
		DelObjTask_EV00BB(0);
		DelObjTask_EV00BB(1);
		DelObjTask_EV00BB(2);
		EV_FreeObject(&e103);
		EV_FreeObject(&e104);
		EV_FreeObject(&e105);
		EV_FreeObject(&Frog1);
		EV_FreeObject(&Frog2);
		EV_FreeObject(&Frog3);
		EV_FreeObject(&Frog4);
		light_delete(cap1);
		cap1 = 0;
		light_delete(cap2);
		cap2 = 0;
		light_delete(cap3);
		cap3 = 0;
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		break;
	}
}