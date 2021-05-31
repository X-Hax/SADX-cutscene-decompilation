#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0022_s_pastaltar(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		SetBankDir(83);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		LoadEventObject(&CHA, EV_Alife, -37.632999f, 1.0f, 404.72299f, 0x2000, 0, 0);
		LoadEventObject(&CHA2, EV_Alife, 43.805f, 1.023f, 460.18201f, 0, 0x4000, 0);
		LoadEventObject(&CHA3, EV_Alife, 44.573002f, 1.023f, 322.83499f, 0, 0, 0);
		LoadEventObject(&CHA4, EV_Alife, -32.632999f, 1.0f, 399.72299f, 0, 49152, 0);
		LoadEventObject(&CHA5, EV_Alife, 38.805f, 1.023f, 463.18201f, 0, 5632, 0);
		LoadEventObject(&CHA6, EV_Alife, 37.573002f, 1.023f, 315.83499f, 0, 0, 0);
		LoadEventObject(&CHA7, EV_Alife, -40.632999f, 1.0f, 400.72299f, 0, 12288, 0);
		LoadEventObject(&CHA8, EV_Alife, 50.805f, 1.023f, 450.18201f, 0, 61440, 0);
		LoadEventObject(&CHA9, EV_Alife, 47.573002f, 1.023f, 325.83499f, 40960, 0, 0);
		LoadEventObject(&CHA10, EV_Alife, -30.632999f, 1.0f, 395.72299f, 12288, 0, 0);
		EV_Wait(1);
		EV_SetAction(CHA, *ADV03_ACTIONS, *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA2, ADV03_ACTIONS[1], *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA3, ADV03_ACTIONS[2], *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA4, ADV03_ACTIONS[1], *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA5, *ADV03_ACTIONS, *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA6, ADV03_ACTIONS[1], *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA7, *ADV03_ACTIONS, *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA8, ADV03_ACTIONS[1], *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA9, *ADV03_ACTIONS, *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetAction(CHA10, *ADV03_ACTIONS, *ADV03_TEXLISTS, 0.0099999998f, 1, 4);
		EV_SetPos(player, -2.7720001f, -48.863998f, 674.89099f);
		EV_SetAng(player, 1280, 39552, 65424);
		EV_CreatePlayer(2, Tikal_Main, -15.8f, -4.1999998f, 434.39001f, 0, 0x8000, 0);
		EV_Wait(1);
		tikal = EV_GetPlayer(2);
		EV_SetPos(tikal, -15.8f, -4.1999998f, 434.39001f);
		EV_SetAng(tikal, 0, 0x8000, 0);
		BGM_Play(MusicIDs_evtbgm04);
		EventSe_Play(0, 1333, 1800);
		EventSe_Volume(0, -16, 0);
		EventSe_Play(1, 1334, 1800);
		EV_SetAction(player, &action_s_s0011_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_SetAction(tikal, &action_j_j0012_tikal, &TIKAL_TEXLIST, 1.0f, 1, 4);
		EV_CameraPos(1, 0, 3.5599999f, 1.068f, 472.07401f);
		EV_CameraAng(1, 0, 1280, 44544, 0);
		EV_CameraPos(1, 200, 15.1068f, 1.06864f, 447.66599f);
		EV_Wait(160);
		EV_CameraPos(1, 0, 90.947578f, 16.578421f, 357.992f);
		EV_CameraAng(1, 0, 65024, 2560, 0);
		EV_CameraPos(0, 100, 56.507511f, 14.13921f, 358.29428f);
		EV_Wait(80);
		EV_CameraPos(0, 100, 42.914082f, 16.136801f, 361.64899f);
		EV_CameraAng(0, 100, 65024, 64000, 0);
		EV_Wait(80);
		EV_CameraPos(1, 0, -29.4228f, 2.8709099f, 415.43176f);
		EV_CameraAng(1, 0, 0, 3072, 0);
		EV_CameraPos(0, 180, -17.521099f, 2.8709099f, 454.66629f);
		EV_Wait(160);
		EV_CameraPos(0, 160, -14.14f, 2.6600001f, 451.116f);
		EV_CameraAng(0, 160, 768, 1280, 0);
		EV_Wait(60);
		EV_SerifPlay(589);
		EV_Msg(msgTbl_ev0022[TextLanguage][0]); //"\aWhy?"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(60);
		EV_SetAction(tikal, &action_j_j0020_tikal, &TIKAL_TEXLIST, 0.80000001f, 0, 4);
		EV_Wait(10);
		EV_SerifPlay(590);
		EV_SetFace(tikal, "CAD");
		EV_Msg(msgTbl_ev0022[TextLanguage][1]); //"\aWhy did this have to happen?"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(tikal);
		EventSe_Volume(0, -100, 80);
		EventSe_Volume(1, -100, 80);
		EV_CameraPos(1, 0, -13.607f, -39.803001f, 669.815f);
		EV_CameraAng(1, 0, 63744, 43776, 0);
		EV_ClrAction(tikal);
		EV_CameraPos(1, 160, -8.4630003f, -40.828999f, 672.72803f);
		EV_SetAng(tikal, 0, 0, 0);
		EV_Wait(100);
		EV_CameraPos(1, 0, -17.837f, 4.4289999f, 448.62201f);
		EV_CameraAng(1, 0, 64000, 63744, 0);
		EV_SerifPlay(591);
		EV_SetFace(tikal, "D");
		EV_Msg(msgTbl_ev0022[TextLanguage][2]); //"\aIt's terrible!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(tikal);
		EventSe_Oneshot(1335, 0, 0, 0);
		EV_Wait(30);
		EV_SetAction(tikal, &action_j_j0023_tikal, &TIKAL_TEXLIST, 0.60000002f, 0, 8);
		EV_SetFace(tikal, "FAD");
		EV_SerifPlay(592);
		EV_Msg(msgTbl_ev0022[TextLanguage][3]); //"\aI must stop this now!"
		EV_CameraAng(0, 30, 1280, 63744, 0);
		EV_Wait(16);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_Wait(1);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0007_tikal, &TIKAL_TEXLIST, 0.80000001f, 0, 0);
		EV_Wait(20);
		EV_ClrAction(tikal);
		EV_CameraPos(1, 0, -9.6899996f, 4.796f, 427.15302f);
		EV_CameraAng(1, 0, 62976, 25600, 0);
		EV_SetAng(tikal, 0, 0x8000, 0);
		EV_Wait(30);
		EV_MovePoint(tikal, 0.0f, 91.0f, 46.73f);
		EV_Wait(20);
		EV_SetPos(player, -5.2600002f, 7.5f, 253.037f);
		EV_Wait(10);
		EV_CameraPos(1, 0, 1.974f, 108.45f, 107.15f);
		EV_CameraAng(1, 0, 60928, 0, 0);
		EV_CameraPerspective(1, 100, 18204);
		EV_SetPos(tikal, 1.85f, 91.0f, 89.983002f);
		EV_SetAng(tikal, 0, 0x8000, 0);
		EV_CameraChase(tikal);
		EV_WaitMove(tikal);
		EV_ClrAction(tikal);
		EV_Wait(30);
		EV_CameraChaseFree();
		EV_Wait(30);
		EV_SetPos(player, -2.7720001f, -48.863998f, 674.89099f);
		EV_SetAng(player, 1280, 39552, 65424);
		EV_CameraPos(1, 0, -33.125f, -31.933001f, 648.80103f);
		EV_CameraAng(1, 0, 62976, 41472, 0);
		EV_CameraPos(0, 120, -9.4060001f, -39.951f, 670.29797f);
		EV_CameraPerspective(0, 110, 12743);
		EV_Wait(50);
		EventSe_Stop(0);
		EventSe_Stop(1);
		EventSe_Play(0, 760, 88);
		WHITE = COverlayCreate(0.016666668f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_RemovePlayer(2);
		EV_Wait(90);
		break;
	case 2:
		dsStop_all();
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		EV_FreeObject(&CHA);
		EV_FreeObject(&CHA2);
		EV_FreeObject(&CHA3);
		EV_FreeObject(&CHA4);
		EV_FreeObject(&CHA5);
		EV_FreeObject(&CHA6);
		EV_FreeObject(&CHA7);
		EV_FreeObject(&CHA8);
		EV_FreeObject(&CHA9);
		EV_FreeObject(&CHA10);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if(WHITE){
			FreeTask(WHITE);
			WHITE = 0;
		}
		break;
	}
}