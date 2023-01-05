#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00D3[] = {
	(char*)("FROG"), &texlist_frog,
	0
};

void ev00D3_b_tails(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		EV_InitPlayer(0);
		SetBankDir(88);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_thebig);
		EV_SetPos(player, -65.580002f, 45.91f, 525.96002f);
		EV_SetAng(player, 0x553, 0x815F, 0xF992);
		EV_Wait(1);
		EV_SetAction(player, BIG_ACTIONS[24], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(3, MilesTalesPrower, 29.08f, 72.019997f, 177.28999f, 0, 0x400, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_SetAction(tails, &action_m_m9004_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CreateObjectFunc(&Frog, SetEventFrog, 29.08f, 72.019997f, 177.28999f, 0, 12805, 0);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetAction(Frog, &action_f_f0019_frog, &texlist_frog, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -85.07f, 55.959999f, 557.09003f);
		EV_CameraAng(1, 0, 0xFE00, 0xE800, 0);
		EV_CameraChase(player);
		EventSe_Play(0, 1333, 1800);
		EV_MovePoint2(player, -11.62f, 50.0f, 395.14001f, 0.80000001f, 0.0f);
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_CameraChaseFree();
		EV_Wait(60);
		EV_CameraPos(1, 0, -15.31f, 100.75f, 375.76999f);
		EV_CameraAng(1, 0, 0xFB00, 0xF700, 0);
		EV_CameraPos(1, 60, 25.67f, 77.910004f, 193.25f);
		EV_Wait(60);
		EV_SerifPlay(1329);
		EV_MsgW(90, msgTbl_ev00D3[TextLanguage][0]); //"\aOh no, he's got my little buddy!"
		EV_MsgClose();
		EV_CameraPos(1, 0, 30.120001f, 79.360001f, 159.34f);
		EV_CameraAng(1, 0, 0xFB00, 0x7D00, 0);
		EV_CameraPerspective(1, 1, 0x1555);
		EV_SetAction(player, BIG_ACTIONS[16], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, 23.610001f, 72.860001f, 202.42f, 0.89999998f, 1.0f);
		EV_Wait(35);
		RumbleA(0, 10);
		EV_CameraChase(player);
		EV_CameraPos(1, 0, -5.3200002f, 84.269997f, 354.34f);
		EV_CameraAng(1, 0, 0xFE00, 0xF600, 0x200);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xF900, 0xF600, 0xFF00);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFD00, 0xF600, 0xFE00);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFA00, 0xF600, 0xFF00);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFD00, 0xF600, 0);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFA00, 0xF600, 0x100);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFE00, 0xF600, 0x200);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xF900, 0xF600, 0x100);
		EV_Wait(5);
		EV_CameraAng(1, 6, 0xFD00, 0xF600, 0);
		EV_Wait(5);
		EV_CameraAng(1, 5, 0xFA00, 0xF600, 0x100);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFE00, 0xF600, 0x200);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xF900, 0xF600, 0x100);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFD00, 0xF600, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFA00, 0xF600, 0x100);
		EV_CameraAng(1, 5, 0xFE00, 0xF600, 0x200);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xF900, 0xF600, 0x100);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFD00, 0xF600, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFA00, 0xF600, 0x100);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFE00, 0xF600, 0x200);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xF900, 0xF600, 0x100);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFD00, 0xF600, 0);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFA00, 0xF600, 0x100);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFE00, 0xF600, 0x200);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xF900, 0xF600, 0x100);
		EV_Wait(3);
		EV_CameraAng(1, 5, 0xFB00, 0xF600, 0);
		EV_CameraChaseFree();
		EV_Wait(3);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		EV_CameraPos(1, 0, 30.120001f, 79.360001f, 159.34f);
		EV_CameraAng(1, 0, 0xFB00, 0x7D00, 0);
		EV_SetFace(tails, "ZZZZZZZZZZZZZ");
		EV_Wait(23);
		EventSe_Stop(0);
		EV_SetAction(player, &action_b_b0003_big, &BIG_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_b_b0004_big, &BIG_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1330);
		EV_Msg(msgTbl_ev00D3[TextLanguage][1]); //"\aWaaaaaaahhhhh!"
		EV_Wait(42);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_MsgClose();
		EV_CameraAng(1, 4, 0xF900, 0x7D00, 0);
		EV_Wait(3);
		moveObjectOn(Frog, 0.0f, 0.0f, 0.0f, 200, tails);
		moveObject(tails, 29.08f, 72.019997f, 177.28999f, 29.08f, 78.019997f, 177.28999f, 25);
		EV_CameraAng(1, 4, 0xFB00, 0x7D00, 0);
		EV_Msg(msgTbl_ev00D3[TextLanguage][2]); //"\aUgh! Ugh!"
		EV_SerifPlay(1331);
		EV_Wait(2);
		EV_CameraPos(1, 0, -2.29f, 85.650002f, 210.39f);
		EV_CameraAng(1, 0, 0xF500, 0xD000, 0);
		EV_CameraAng(1, 40, 0xF500, 0xD300, 0);
		EV_SetAction(tails, &action_m_m9007_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(Frog, &action_f_f0024_frog, &texlist_frog, 1.0f, 1, 0);
		moveObject(tails, 29.08f, 72.019997f, 177.28999f, 29.08f, 72.019997f, 167.69f, 60);
		EV_Wait(33);
		EV_MsgClose();
		EV_Wait(30);
		EV_SetAction(tails, &action_m_m9004_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(Frog, &action_f_f0019_frog, &texlist_frog, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 26.549999f, 76.400002f, 183.41f);
		EV_CameraAng(1, 0, 0xF000, 0x7A00, 0);
		EV_CameraAng(0, 100, 0x700, 0x7A00, 0);
		EV_Wait(60);
		EV_SerifPlay(1332);
		EV_Msg(msgTbl_ev00D3[TextLanguage][3]); //"\aGlad I found you!"
		EV_Wait(58);
		EV_MsgClose();
		EV_CameraPos(1, 0, 29.93f, 78.830002f, 175.89999f);
		EV_CameraAng(1, 0, 0x700, 0x400, 0);
		EV_CameraAng(1, 60, 0xF000, 0x400, 0);
		EV_SerifPlay(1333);
		EV_Msg(msgTbl_ev00D3[TextLanguage][4]); //"\aOops!"
		EV_Wait(70);
		EV_CameraPos(1, 0, 7.0300002f, 79.849998f, 170.03f);
		EV_CameraAng(1, 0, 0, 0xAE00, 0);
		EV_ClrAction(Frog);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m9005_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(Frog, &action_f_f0002_frog, &texlist_frog, 0.60000002f, 1, 0);
		EV_Wait(1);
		EventSe_Oneshot(1336, 0, 0, 0);
		EV_ClrAction(Frog);
		moveObject(Frog, 28.58f, 72.019997f, 172.28999f, 27.879999f, 74.040001f, 177.33f, 30);
		EV_SetAction(Frog, &action_f_f0002_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(30);
		moveObject(Frog, 27.879999f, 74.040001f, 177.33f, 24.879999f, 84.739998f, 196.33f, 24);
		EV_Wait(26);
		EventSe_Oneshot(1337, 0, 0, 0);
		moveObject(player, 23.469999f, 72.019997f, 203.17999f, 23.469999f, 74.019997f, 203.17999f, 1);
		EV_Wait(2);
		moveObject(Frog, 24.879999f, 84.739998f, 196.33f, 12.45f, 70.480003f, 243.92f, 48);
		EV_Wait(49);
		EV_SetMode(Frog, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 26.43f, 84.510002f, 181.45f);
		EV_CameraAng(1, 0, 0xE63E, 0x7D00, 0);
		EV_SerifPlay(1334);
		EV_Msg(msgTbl_ev00D3[TextLanguage][5]); //"\aAwwwww, now what am I gonna do?"
		EV_ClrAction(Frog);
		EV_SetAction(Frog, &action_f_f0020_frog, &texlist_frog, 2.8f, 1, 0);
		EV_Wait(2);
		EV_CameraPos(1, 0, 27.4f, 94.529999f, 176.61f);
		EV_CameraAng(1, 0, 0xE700, 0x7A00, 0);
		EV_CameraPos(0, 800, 32.200001f, 117.56f, 144.25999f);
		EV_SetPos(Frog, 12.45f, 74.480003f, 243.92f);
		EV_SetAng(Frog, 0, 0, 0);
		EV_SetMode(Frog, 0);
		EV_SetColli(Frog, 2.0f);
		EV_Wait(20);
		moveObject(Frog, 12.45f, 74.480003f, 243.92f, 40.389999f, 73.300003f, 541.19f, 420);
		EV_Wait(10);
		EV_ClrFace(tails);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(100);
		EV_FreeObject(&Frog);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		EV_SetPos(player, 23.47002f, 72.019478f, 203.18013f);
		EV_SetAng(player, 0, 0x78A9, 0);
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(3);
		EV_FreeObject(&Frog);
		RumbleA(0, 0);
		break;
	}
}