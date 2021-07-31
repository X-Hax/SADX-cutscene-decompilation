#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0088_k_eggmantricksknuckles(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		KURAYAMI = 0;
		EV_InitPlayer(0);
		SetBankDir(100);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_eggman);
		EV_SetPos(player, 13.0f, 0.0f, 78.699997f);
		EV_SetAng(player, 0, 33280, 0);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 0.5f, 1, 0);
		EV_Wait(1);
		createChaos0_EV0088(12.0f, player->twp->pos.y, 65.0f, 0);
		EV_CreatePlayer(6, Eggman, 3.04f, 0.0f, 31.07f, 0, 1536, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 22.5f, 8.5500002f, 86.089996f);
		EV_CameraAng(1, 0, 6912, 2560, 65024);
		EV_CameraPos(1, 100, 22.5f, 8.5500002f, 86.089996f);
		EV_CameraAng(1, 100, 62976, 7936, 0);
		EV_Wait(120);
		eggman = EV_GetPlayer(6);
		EV_ClrFace(eggman);
		EV_SetFace(eggman, "F");
		EV_SerifPlay(1049);
		EV_MsgW(90, msgTbl_ev0088[TextLanguage][0]); //"\aBah!   So what \nif you won this time"...
		EventSe_Play(0, 1336, 1800);
		MoveChaosPuddle_EV0088(6.9400001f, 0.0f, 42.529999f, 120);
		EV_ClrFace(eggman);
		EV_MsgCls();
		EV_CameraPos(1, 0, 13.7f, 23.32f, 68.25f);
		EV_CameraAng(1, 0, 49408, 2304, 0);
		EV_CameraAng(1, 90, 64512, 2304, 0);
		EV_Wait(60);
		EventSe_Stop(0);
		EV_Wait(1);
		EV_SerifPlay(1050);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(eggman, &action_g_g0009_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 8);
		EV_MsgW(150, msgTbl_ev0088[TextLanguage][1]); //"\aYou have yet to see \nthe true powers"...
		EV_ClrFace(eggman);
		EV_Wait(20);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[83], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, 10.0f, 0.0f, 68.0f, 0.0f, 0.0f);
		deleteChaos0_EV0088();
		EV_Wait(10);
		EV_CameraPos(1, 0, 11.21f, 5.5f, 20.83f);
		EV_CameraAng(1, 0, 0, 30720, 0);
		EV_ClrAction(eggman);
		EV_CameraChase(player);
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_CameraChaseFree();
		EV_CameraPos(1, 300, 6.1399999f, 5.5f, 21.190001f);
		EV_SetAction(player, &action_k_k0001_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, &action_k_k0002_knuckles, &KNUCKLES_TEXLIST, 0.5f, 1, 0);
		EV_Wait(16);
		EV_SetFace(player, "FDE");
		EV_SerifPlay(1051);
		EV_Msg(msgTbl_ev0088[TextLanguage][2]); //"\aYeah yeah, that still doesn't\nfaze m"...
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(player);
		EV_Wait(30);
		EV_ClrFace(eggman);
		EV_SetFace(eggman, "GGAEDECDECCD");
		EV_SerifPlay(1052);
		EV_MsgW(60, msgTbl_ev0088[TextLanguage][3]); //"\aI know something that might."
		EV_SerifWait();
		EV_ClrFace(eggman);
		EV_MsgClose();
		EV_SerifPlay(1053);
		EV_Msg(msgTbl_ev0088[TextLanguage][4]); //"\aIt's about Sonic."
		EV_Wait(1);
		EV_SetPos(player, 13.0f, 0.0f, 78.699997f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(1, 0, 21.049999f, 3.8800001f, 69.360001f);
		EV_CameraAng(1, 0, 1280, 25856, 0);
		EV_Wait(20);
		EV_MsgCls();
		EV_Wait(1);
		EV_SerifWait();
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_ClrFace(player);
		EV_SetFace(player, "H");
		EV_SerifPlay(1054);
		EV_Msg(msgTbl_ev0088[TextLanguage][5]); //"\aWhat?"
		EV_ClrFace(player);
		EV_Wait(10);
		EV_MsgCls();
		EV_CameraPos(1, 0, 25.41f, 8.9099998f, 88.730003f);
		EV_CameraAng(1, 0, 63232, 7680, 0);
		EV_Wait(10);
		EV_SetAction(player, &action_k_k0012_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, &action_k_k0013_knuckles, &KNUCKLES_TEXLIST, 0.5f, 1, 0);
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, "FAFFF");
		EV_SerifPlay(1055);
		EV_Msg(msgTbl_ev0088[TextLanguage][6]); //"\aWhat about Sonic?"
		EV_Wait(90);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPos(1, 80, 40.150002f, 2.6300001f, 83.559998f);
		EV_CameraAng(1, 80, 2048, 9728, 0);
		EV_ClrFace(eggman);
		EV_SetFace(eggman, "EDEAGEGCG");
		EV_SerifPlay(1056);
		EV_MsgW(140, msgTbl_ev0088[TextLanguage][7]); //"\aHe's after the pieces of \nthe Master"...
		EV_ClrFace(eggman);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 0, 8);
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, "I");
		EV_SerifPlay(1057);
		EV_Msg(msgTbl_ev0088[TextLanguage][8]); //"\aWhat do you mean?"
		EV_ClrAction(eggman);
		EV_PlayPad(6, &E0088E);
		EV_Wait(50);
		EV_MsgClose();
		EV_Wait(30);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0006_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 32);
		EV_SerifPlay(1058);
		EV_MsgW(70, msgTbl_ev0088[TextLanguage][9]); //"\aYou're not the only one on\na wild go"...
		EV_MsgW(50, msgTbl_ev0088[TextLanguage][10]); //"\aWhy should I ruin your \nsurprise?"
		EventSe_Play(1, 1336, 60);
		EV_SerifPlay(1059);
		EV_Msg(msgTbl_ev0088[TextLanguage][11]); //"\aHa ha ha ha ha ha..."
		EV_CameraPos(1, 0, 31.469999f, 2.47f, 73.470001f);
		EV_CameraAng(1, 0, 768, 19456, 0);
		EV_CameraChase(player);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 0.69999999f, 1, 0);
		EV_MovePoint2(player, 9.5500002f, 0.0f, 46.650002f, 0.5f, 1.0f);
		EV_Wait(1);
		EV_SetAction(player, &action_k_k0017_knuckles, &KNUCKLES_TEXLIST, 0.80000001f, 1, 0);
		EV_MovePoint2(player, 9.5500002f, 0.0f, 46.650002f, 0.1f, 0.30000001f);
		EV_Wait(20);
		EV_MsgClose();
		EV_WaitMove(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 0, 8);
		EV_CameraChaseFree();
		EV_Wait(45);
		EventSe_Stop(1);
		EV_RemovePlayer(6);
		EV_LookPoint(player,
			player->twp->pos.x,
			player->twp->pos.y + 20.0f,
			player->twp->pos.z);
		EV_CameraPos(1, 0, 62.68f, 13.02f, 31.190001f);
		EV_CameraAng(1, 0, 0, 18432, 0);
		EV_CameraPos(1, 400, -14.62f, 33.720001f, -8.7200003f);
		EV_CameraAng(1, 400, 63488, 36352, 0);
		EV_ClrAction(player);
		EV_ClrFace(player);
		EV_SetFace(player, "EAAAAAAAAAAAAAAAAAAAAAAAD");
		EV_SerifPlay(1060);
		EV_Msg(msgTbl_ev0088[TextLanguage][12]); //"\aI wonder what he meant by that?\nI'd "...
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(player);
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		EV_InitPlayer(0);
		EV_RemovePlayer(6);
		deleteChaos0_EV0088();
		break;
	}
}