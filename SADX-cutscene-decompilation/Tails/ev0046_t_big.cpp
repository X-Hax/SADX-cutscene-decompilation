#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0046_t_big(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		SetBankDir(88);
		EventSe_Init(8);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Play(3, 760, 90);
		WHITE = COverlayCreate(1.0f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_CreateObject(&RED, 64.110001f, -16.658001f, 36.233002f, 0, 0, 0);
		EV_SetMode(RED, 0);
		EV_CreatePlayer(4, BigTheCat, -11.62f, 71.559998f, 395.14001f, 1363, 30559, 63890);
		EV_SetPos(player, 29.08f, 72.019997f, 177.28999f);
		EV_SetAng(player, 0, 1024, 0);
		EV_Wait(1);
		EV_SetAction(player, &action_m_m9004_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		big = EV_GetPlayer(4);
		EV_SetAction(big, &action_b_b0010_big, &BIG_TEXLIST, 1.0f, 1, 16);
		EV_CreateObject(&Frog, 29.08f, 72.019997f, 177.28999f, 0, 12805, 0);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetAction(Frog, &action_f_f0019_frog, &texlist_frog, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 33.799999f, 80.647003f, 197.53f);
		EV_CameraAng(1, 0, 63232, 2304, 0);
		EV_Wait(26);
		COverlaySetSpeed(WHITE, -0.016666668f);
		EV_Wait(60);
		EventSe_Stop(2);
		BGM_Play(MusicIDs_thebig);
		EV_Wait(30);
		EV_LookPoint(player, 33.799999f, 80.647003f, 197.53f);
		EV_Wait(30);
		EV_CameraPos(1, 0, 32.509998f, 80.279999f, 156.75999f);
		EV_CameraAng(1, 0, 64512, 30464, 512);
		EV_CameraPos(1, 400, 31.236f, 83.239998f, 168.30499f);
		EV_CameraAng(1, 200, 63488, 30464, 0);
		EV_LookFree(player);
		EV_Wait(60);
		EventSe_Play(0, 1333, 1800);
		EventSe_Volume(0, -50, 1);
		EV_Wait(1);
		EventSe_Volume(0, 0, 160);
		EV_ClrAction(big);
		EV_MovePoint2(big, 23.610001f, 72.860001f, 202.42f, 0.89999998f, 1.0f);
		EV_Wait(30);
		RumbleA(0, 12);
		EV_CameraAng(1, 12, 63744, 30464, 0);
		EV_Wait(10);
		EV_CameraAng(1, 12, 64768, 30464, 0);
		EV_Wait(10);
		EV_CameraAng(1, 12, 64000, 30464, 0);
		EV_Wait(10);
		EV_CameraAng(1, 10, 64768, 30464, 0);
		EV_Wait(8);
		EV_CameraAng(1, 10, 64000, 30464, 256);
		EV_Wait(8);
		EV_CameraAng(1, 6, 65024, 30464, 512);
		EV_Wait(5);
		EV_CameraAng(1, 6, 63744, 30464, 256);
		EV_Wait(5);
		EV_CameraAng(1, 6, 64768, 30464, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 64000, 30464, 256);
		EV_Wait(5);
		EV_CameraAng(1, 6, 65024, 30464, 512);
		EV_Wait(5);
		EV_CameraAng(1, 6, 63744, 30464, 256);
		EV_Wait(5);
		EV_CameraAng(1, 6, 64768, 30464, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 64000, 30464, 256);
		EV_Wait(5);
		EV_CameraAng(1, 6, 65024, 30464, 512);
		EV_Wait(5);
		EV_CameraAng(1, 6, 63744, 30464, 256);
		EV_Wait(5);
		EV_CameraAng(1, 6, 64768, 30464, 0);
		EV_Wait(5);
		EV_CameraAng(1, 4, 64000, 30464, 256);
		EV_Wait(3);
		EV_CameraAng(1, 4, 65024, 30464, 512);
		EV_Wait(3);
		EV_CameraAng(1, 4, 63744, 30464, 256);
		EV_Wait(3);
		EV_CameraAng(1, 4, 64768, 30464, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 63744, 30464, 256);
		EV_Wait(3);
		EV_CameraAng(1, 4, 64768, 30464, 0);
		EV_Wait(3);
		EV_CameraAng(1, 4, 63744, 30464, 256);
		EV_Wait(3);
		EV_CameraAng(1, 4, 64768, 30464, 0);
		EV_Wait(3);
		EventSe_Volume(0, -128, 1);
		EV_Wait(1);
		EV_SetAction(big, &action_b_b0003_big, &BIG_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(big, &action_b_b0004_big, &BIG_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(747);
		EV_Msg(msgTbl_ev0046[TextLanguage][0]); //"\aWaaaaaaa!"
		EV_Wait(20);
		EV_MsgClose();
		EventSe_Oneshot(1334, 0, 0, 0);
		moveObjectOn(Frog, 0.0f, 0.0f, 0.0f, -1, player);
		moveObject(player, 29.08f, 72.019997f, 177.28999f, 29.08f, 78.019997f, 177.28999f, 25);
		EV_CameraAng(1, 4, 64256, 30464, 512);
		EV_SerifPlay(748);
		EV_SetFace(player, "J");
		EV_Msg(msgTbl_ev0046[TextLanguage][1]); //"\aYiiiikes!"
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(1);
		EV_ClrAction(Frog);
		EV_ClrAction(player);
		EV_CameraPos(1, 0, -2.29f, 85.650002f, 210.39f);
		EV_CameraAng(1, 0, 62720, 53248, 0);
		EV_CameraAng(1, 40, 62720, 54016, 0);
		EV_SetAction(player, &action_m_m9007_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(Frog, &action_f_f0024_frog, &texlist_frog, 1.0f, 1, 0);
		moveObject(player, 29.08f, 72.019997f, 177.28999f, 29.08f, 72.019997f, 167.69f, 60);
		EV_Wait(33);
		EV_MsgClose();
		EV_Wait(27);
		stopObject(Frog);
		EV_ClrAction(Frog);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m9004_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(Frog, &action_f_f0019_frog, &texlist_frog, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 18.16f, 78.769997f, 157.46001f);
		EV_CameraAng(1, 0, 0, 37888, 0);
		EV_Wait(58);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m9005_miles, &MILES_TEXLIST, 1.0f, 1, 16);
		EV_Wait(1);
		EventSe_Oneshot(1336, 0, 0, 0);
		EV_ClrAction(Frog);
		moveObject(Frog, 28.58f, 72.019997f, 172.28999f, 27.879999f, 74.040001f, 177.33f, 30);
		EV_SetAction(Frog, &action_f_f0002_frog, &texlist_frog, 1.0f, 1, 0);
		EV_SetAng(Frog, 0, 512, 0);
		EV_Wait(32);
		moveObject(Frog, 27.879999f, 74.040001f, 177.33f, 24.879999f, 84.739998f, 196.33f, 24);
		EV_Wait(26);
		EventSe_Oneshot(1337, 0, 0, 0);
		moveObject(big, 23.469999f, 72.019997f, 203.17999f, 23.469999f, 74.019997f, 203.17999f, 1);
		EV_Wait(2);
		moveObject(Frog, 24.879999f, 84.739998f, 196.33f, 12.45f, 74.480003f, 243.92f, 48);
		EV_Wait(49);
		EV_SetMode(Frog, 0);
		EV_Wait(1);
		EV_ClrAction(Frog);
		EV_SetAction(Frog, &action_f_f0020_frog, &texlist_frog, 2.8f, 1, 0);
		EV_Wait(2);
		EventSe_Play(1, 1335, 1800);
		EventSe_Volume(1, -30, 100);
		moveObject(Frog, 12.45f, 74.480003f, 243.92f, 40.389999f, 73.300003f, 541.19f, 320);
		EV_Wait(20);
		EV_ClrAction(big);
		EV_CameraPos(1, 0, 16.9f, 115.94f, 234.52f);
		EV_CameraAng(1, 0, 60734, 33246, 0);
		EV_CameraPos(1, 100, 17.445f, 123.93f, 202.75999f);
		EV_CameraAng(1, 100, 57918, 33246, 0);
		EV_Wait(20);
		EventSe_Volume(0, 0, 1);
		EV_Wait(1);
		EventSe_Volume(0, -50, 100);
		EV_MovePoint2(big, 40.389999f, 73.300003f, 541.19f, 0.80000001f, 0.0f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0113_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(RED, &action_m_m0113c_m_em_red, &texlist_m_em_red, 1.0f, 1, 0);
		EV_Wait(40);
		EV_SerifPlay(749);
		EV_Msg(msgTbl_ev0046[TextLanguage][2]); //"\aWait for me!"
		EV_Wait(100);
		EV_MsgClose();
		if(WHITE){
			FreeTask(WHITE);
			WHITE = 0;
		}
		stopObject(Frog);
		EV_FreeObject(&Frog);
		EV_CameraPos(1, 0, 28.84f, 76.099998f, 173.8f);
		EV_CameraAng(1, 0, 4659, 65080, 0);
		EV_CameraPos(1, 90, 28.799999f, 75.699997f, 174.75999f);
		EV_CameraAng(1, 90, 4915, 65080, 0);
		EventSe_Stop(0);
		EventSe_Stop(1);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "D");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DD");
		}
		EV_SerifPlay(750);
		EV_Msg(msgTbl_ev0046[TextLanguage][3]); //"\aWeird!   Now, where was I?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(60);
		EV_SetFace(player, "EADC");
		EV_SerifPlay(751);
		EV_Msg(msgTbl_ev0046[TextLanguage][4]); //"\aOh yeah!   \nThe Chaos Emerald... Per"...
		EV_SetPos(RED, 25.98f, 72.32f, 168.49001f);
		EV_Wait(80);
		EV_ClrFace(player);
		EV_SetAction(player, &action_m_m0114_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_Wait(1);
		EV_SetAction(RED, &action_m_m0114c_m_em_red, &texlist_m_em_red, 1.0f, 0, 8);
		EV_SetAction(player, &action_m_m0115_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(RED, &action_m_m0115c_m_em_red, &texlist_m_em_red, 1.0f, 1, 8);
		EV_SerifWait();
		EV_Wait(60);
		EV_CameraPos(0, 60, 32.139999f, 76.099998f, 182.25f);
		EV_CameraAng(0, 60, 1024, 2304, 0);
		EV_Wait(40);
		EV_SetAction(player, &action_m_m0116_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(RED, &action_m_m0116c_m_em_red, &texlist_m_em_red, 1.0f, 0, 0);
		EV_SetAction(player, &action_m_m0117_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(RED, &action_m_m0117c_m_em_red, &texlist_m_em_red, 1.0f, 1, 0);
		EV_Wait(30);
		EV_CameraChaseRM(1, 200, player, 10.0f, 0, 0, 0, 10.0f, 0, 0x8000, 0, 20.0f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		EV_SetFace(player, "CDAECD");
		EV_Msg(msgTbl_ev0046[TextLanguage][5]); //"\aThis will get my Tornado 2 up\nand ra"...
		EV_SerifPlay(752);
		EV_Wait(70);
		EV_ClrFace(player);
		EV_SetPos(player, 163.37f, 40.0f, 439.70001f);
		EV_SetAng(player, 0, 10240, 0);
		EV_ClrAction(player);
		EV_Wait(1);
		EV_MovePoint2(player, 263.10001f, 25.4f, 471.45001f, 0.69999999f, 0.0f);
		EV_CameraTargetFree();
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, 174.2f, 41.189999f, 435.89999f);
		EV_CameraAng(1, 0, 64256, 42752, 0);
		EV_CameraPos(1, 70, 166.53f, 39.189999f, 448.60001f);
		EV_CameraAng(1, 70, 1536, 46592, 0);
		EV_Wait(110);
		break;
	case 2:
		EV_SetPos(player, 263.10001f, 25.4f, 471.45001f);
		EV_SetAng(player, 0, 10240, 0);
		EV_CameraPos(0, 1, 166.53f, 39.189999f, 448.60001f);
		EV_CameraAng(0, 1, 1536, 46592, 0);
		EV_Wait(1);
		EV_CameraTargetFree();
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(4);
		EV_FreeObject(&Frog);
		EV_FreeObject(&RED);
		RumbleA(0, 0);
		if(WHITE){
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}