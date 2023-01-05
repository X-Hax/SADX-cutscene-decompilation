#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00FB[] = { 0 };

void ev00FB_l_tikalwakesup(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_PadOff();
		EV_CanselOn();
		EV_SetPos(player, -21.0f, -5.3000002f, 441.0f);
		EV_SetAng(player, 0x4F0, 0x8100, 0);
		if (player->twp->mode != 2)
		{
			EV_Wait(60);
		}
		EV_CameraOn();
		BGM_Play(MusicIDs_tical);
		SetBankDir(117);
		EventSe_Init(5);
		EV_SetPos(player, -21.0f, -5.3000002f, 441.0f);
		EV_SetAng(player, 0x4F0, 0x8100, 0);
		EV_CreatePlayer(2, Tikal, -15.8f, -4.1999998f, 434.39001f, 0x4F0, 0x4C00, 0);
		EV_Wait(1);
		tikal = EV_GetPlayer(2);
		EV_SetFace(tikal, "VVV");
		EV_CameraPos(0, 100, -20.9f, -3.0f, 429.60001f);
		EV_CameraAng(0, 100, 0xA00, 0x8E00, 0x600);
		EV_SetAction(player, &action_s_s0015_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		EV_SetAction(tikal, &action_j_j0008_tikal, &TIKAL_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -15.84f, -1.77f, 429.64999f);
		EV_CameraAng(1, 0, 0, 0x8000, 0);
		EV_CameraPos(0, 100, -20.9f, -3.0f, 429.60001f);
		EV_CameraAng(0, 100, 0xA00, 0x8E00, 0x600);
		EV_SerifPlay(1464);
		EV_SetFace(player, "EAAFE");
		EV_Msg(msgTbl_ev00FB[TextLanguage][0]); //"\aHey, are you all right?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(0, 120, -22.753f, -2.7f, 430.29001f);
		EV_CameraAng(0, 120, 0xA00, 0x9600, 0);
		EV_SerifPlay(1465);
		EV_SetFace(tikal, "VWWX");
		EV_Msg(msgTbl_ev00FB[TextLanguage][1]); //"\aUh…"
		EV_Wait(30);
		EV_SetAction(tikal, &action_j_j0009_tikal, &TIKAL_TEXLIST, 0.40000001f, 0, 4);
		EV_SerifWait();
		EV_SetPos(player, -21.940001f, -4.8600001f, 443.60001f);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0034_tikal, &TIKAL_TEXLIST, 0.5f, 0, 4);
		EV_CameraAng(0, 0, 0xF200, 0xF000, 0x800);
		EV_CameraPos(0, 0, -19.5f, -0.33700001f, 441.08801f);
		EV_CameraAng(0, 90, 0xF200, 0xF000, 0x800);
		EV_CameraPos(0, 90, -19.867001f, 0.0f, 441.95801f);
		EV_SerifPlay(1466);
		EV_SetFace(tikal, "EAE");
		EV_Msg(msgTbl_ev00FB[TextLanguage][2]); //"\aI think so."
		EV_Wait(1);
		EV_WaitAction(tikal);
		EV_CameraPerspective(0, 1, 0x1C72);
		EV_SetAction(player, &action_s_s0015_sonic, &SONIC_TEXLIST, 0.30000001f, 1, 0);
		EV_CameraAng(0, 0, 0x135D, 0x6116, 0xAD);
		EV_CameraPos(0, 0, -13.84f, -4.6199999f, 436.87f);
		EV_CameraAng(0, 120, 0x145D, 0x8416, 0xAD);
		EV_CameraPos(0, 120, -22.959999f, -3.5699999f, 434.70001f);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_SerifPlay(1467);
		EV_SetFace(tikal, "DAEAAE");
		EV_Msg(msgTbl_ev00FB[TextLanguage][3]); //"\aOh my gosh!"
		EV_Wait(80);
		EV_MsgClose();
		EV_Wait(1);
		EventSe_Oneshot(1337, 0, 0, 0);
		EV_SerifPlay(1468);
		EV_Wait(6);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0016_sonic, &SONIC_TEXLIST, 0.5f, 1, 12);
		EV_CameraAng(1, 10, 0x25D, 0x8470, 0x445);
		EV_CameraPos(1, 10, -22.440001f, 1.48f, 436.9567f);
		EV_Msg(msgTbl_ev00FB[TextLanguage][4]); //"\aNo!... No!... No!..."
		EV_ClrAction(tikal);
		EV_Wait(15);
		EV_MsgClose();
		EV_SetAction(tikal, &action_j_j0010_tikal, &TIKAL_TEXLIST, 0.89999998f, 0, 0);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_CameraPos(1, 0, -10.647f, -1.3f, 428.70001f);
		EV_CameraAng(1, 0, 0x1600, 0x6A00, 0x200);
		EV_CameraPos(0, 50, -9.0f, -2.5680001f, 432.32001f);
		EV_CameraAng(0, 50, 0x1E00, 0x4D00, 0xFE00);
		EV_SetPos(player, -20.865f, -5.3000002f, 437.87f);
		EV_SetAng(player, 0x6A0, 0x6700, 0);
		EV_WaitAction(tikal);
		EV_SetPos(player, -18.74f, -4.9000001f, 437.0f);
		EV_SetAng(player, 0x4F0, 0x83C8, 0);
		EV_SetPos(tikal, -14.0f, -4.1999998f, 429.39999f);
		EV_SetAng(tikal, 0x4F0, 0x8600, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0012_tikal, &TIKAL_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_LookPoint(player, -20.6f, 6.3379998f, 412.66901f);
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
		EV_CameraPos(0, 90, -16.76f, 10.7f, 428.23599f);
		EV_CameraAng(0, 90, 0xDB90, 0x77CC, 0x600);
		EV_SetAction(tikal, &action_j_j0043_tikal, &TIKAL_TEXLIST, 1.0f, 1, 4);
		EV_Wait(10);
		EV_MovePoint2(tikal, -28.6f, -1.75f, 417.0f, 0.5f, 0.40000001f);
		EV_LookObject(player, tikal, 0.0f, 5.0f, 0.0f);
		EV_SetAction(player, &action_s_s0017_sonic, &SONIC_TEXLIST, 0.5f, 1, 5);
		EV_Wait(16);
		EV_SerifPlay(1469);
		EV_SetFace(player, "E");
		EV_Wait(1);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "F");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "D");
		}
		EV_Msg(msgTbl_ev00FB[TextLanguage][5]); //"\aWait up!"
		EV_SerifWait();
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(5);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_MsgClose();
		EV_Wait(10);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, -18.74f, -4.9000001f, 437.0f);
		EV_SetAng(player, 0x4F0, 0x83C8, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EventSe_Close();
		break;
	}
}