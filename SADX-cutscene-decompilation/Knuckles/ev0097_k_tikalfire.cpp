#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0097[] = { 0 };

void ev0097_k_tikalfire(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(117);
		EventSe_Init(2);
		EV_SetPos(player, -18.639999f, -11.09f, 496.32999f);
		EV_SetAng(player, 0x4F0, 0x83C8, 0);
		EV_CreatePlayer(2, Tikal, -15.8f, -4.1999998f, 434.39001f, 0x4F0, 0x4C00, 0);
		EV_Wait(1);
		tikal = EV_GetPlayer(2);
		EV_SetFace(tikal, "VVVVVVVVVVVVVV");
		EV_SetAction(player, &action_k_k0017_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(tikal, &action_j_j0008_tikal, &TIKAL_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -37.8866f, 28.458f, 479.70001f);
		EV_CameraAng(1, 0, 0xE800, 0xED00, 0);
		EV_CameraPos(1, 80, -29.1f, 14.58f, 464.92999f);
		moveObject(player, -11.0f, -10.45f, 496.0f, -18.74f, -4.9000001f, 442.0f, 55);
		EV_Wait(35);
		EV_SetAction(player, &action_k_k0007_knuckles, &KNUCKLES_TEXLIST, 0.80000001f, 1, 16);
		EV_CameraPos(1, 0, -19.854f, -0.71649998f, 428.12f);
		EV_CameraAng(1, 0, 0x200, 0x9200, 0x200);
		EV_CameraPos(0, 50, -19.7556f, -2.6654999f, 428.55801f);
		EV_CameraAng(0, 50, 0x900, 0x9200, 0x200);
		EV_SerifPlay(1137);
		EV_SetFace(player, "EAF");
		EV_Msg(msgTbl_ev0097[TextLanguage][0]); //"\aHey, what happened here?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(1, 0, -25.872999f, -3.23f, 437.53699f);
		EV_CameraAng(1, 0, 0xA00, 0xC300, 0x200);
		EV_CameraPos(0, 190, -27.440001f, -2.55f, 441.57999f);
		EV_CameraAng(0, 190, 0x400, 0xCA00, 0x200);
		EV_Wait(5);
		EV_SerifPlay(1138);
		EV_Msg(msgTbl_ev0097[TextLanguage][1]); //"\aI couldn't... stop them."
		EV_Wait(40);
		EV_SetAction(tikal, &action_j_j0009_tikal, &TIKAL_TEXLIST, 0.49000001f, 0, 4);
		EV_SerifWait();
		EV_Wait(5);
		EV_SetFace(tikal, "DE");
		EV_Msg(msgTbl_ev0097[TextLanguage][2]); //"\aThey came... and my father..."
		EV_SerifPlay(1139);
		EV_Wait(1);
		EV_Wait(50);
		EV_ClrFace(tikal);
		EV_WaitAction(tikal);
		EV_CameraPos(1, 0, -18.68f, -1.727f, 437.35001f);
		EV_CameraAng(1, 0, 0x1700, 0x9100, 0x400);
		EV_CameraAng(0, 170, 0x1700, 0x7F00, 0x400);
		EV_SetAng(tikal, 0x4F0, 0x7000, 0);
		EV_Msg(msgTbl_ev0097[TextLanguage][3]); //"\aI had no idea... \nhow bad this would"...
		EV_SerifPlay(1140);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(10);
		EventSe_Oneshot(1337, 0, 0, 0);
		EV_Wait(5);
		EV_SetAction(player, &action_k_k0008_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 4);
		EV_CameraPos(1, 10, -18.549999f, -1.636f, 436.10001f);
		EV_CameraAng(1, 10, 0x1200, 0x7F00, 0x300);
		EV_Msg(msgTbl_ev0097[TextLanguage][4]); //"\aI'm shocked."
		EV_SerifPlay(1141);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, -19.318001f, -1.4f, 428.4826f);
		EV_CameraAng(1, 0, 0xB00, 0x9000, 0x500);
		EV_SetAction(tikal, &action_j_j0010_tikal, &TIKAL_TEXLIST, 0.75f, 0, 0);
		EV_CameraPos(1, 90, -13.132f, -1.4f, 428.97601f);
		EV_CameraAng(1, 90, 0x1500, 0x72B0, 0x500);
		EV_WaitAction(tikal);
		EV_SetPos(player, -18.74f, -4.9000001f, 437.0f);
		EV_SetPos(tikal, -14.0f, -4.1999998f, 429.39999f);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0012_tikal, &TIKAL_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(0, 0, -14.88f, -2.0f, 456.0f);
		EV_CameraAng(0, 0, 0xBF0, 0xFDCC, 0x500);
		EV_CameraPos(0, 40, -10.0f, 28.0f, 356.0f);
		EV_CameraAng(0, 40, 0xAF0, 0, 0x300);
		EV_Wait(40);
		EV_CameraPos(0, 0, -5.0f, 55.0f, 267.0f);
		EV_CameraAng(0, 0, 0x9F0, 0, 0x200);
		EV_CameraPos(0, 40, 0.0f, 85.0f, 167.0f);
		EV_CameraAng(0, 40, 0x8F0, 0, 0);
		EV_Wait(50);
		EV_CameraPos(0, 0, -15.47f, -0.44999999f, 424.70001f);
		EV_CameraAng(0, 0, 0x5F0, 0x77CC, 0);
		EV_SerifPlay(1142);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "HE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "ID");
		}
		EV_Msg(msgTbl_ev0097[TextLanguage][5]); //"\aLook, it's the Emerald!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(10);
		EV_SetAction(tikal, &action_j_j0043_tikal, &TIKAL_TEXLIST, 1.0f, 1, 4);
		EV_Wait(10);
		EV_MovePoint2(tikal, -28.6f, -1.75f, 417.0f, 0.5f, 0.5f);
		EV_SerifPlay(1143);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "EAD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "E");
		}
		EV_Msg(msgTbl_ev0097[TextLanguage][6]); //"\aWait!"
		EV_LookObject(player, tikal, 0.0f, 2.5f, 0.0f);
		EV_Wait(1);
		EV_CameraPerspective(0, 70, 0x1C72);
		EV_CameraPos(0, 70, -15.86f, 0.0f, 426.63f);
		EV_CameraAng(0, 70, 0x750, 0x77CC, 0);
		EV_Wait(10);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		WHITE = COverlayCreate(0.014285714f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(30);
		EventSe_Stop(0);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_InitPlayer(0);
		EventSe_Stop(0);
		EV_RemovePlayer(2);
		EventSe_Close();
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		break;
	}
}