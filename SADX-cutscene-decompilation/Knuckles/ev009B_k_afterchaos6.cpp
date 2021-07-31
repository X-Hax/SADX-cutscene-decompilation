#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev009B_k_afterchaos6(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		W_EME = 0;
		B_EME = 0;
		G_EME = 0;
		P_EME = 0;
		S_EME = 0;
		Y_EME = 0;
		B_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_SetPos(player, 0.0f, 745.38f, -224.35001f);
		EV_SetAng(player, 791, 32525, 281);
		EV_SetPos(player, 0.0f, 743.94f, -224.59f);
		EV_SetAng(player, 457, 32525, 0);
		EV_CreateObject(&W_EME, 32.16f, 773.75f, -231.89999f, 0, 0, 0);
		EV_CreateObject(&B_EME, 32.16f, 773.75f, -231.89999f, 0, 0, 0);
		EV_CreateObject(&G_EME, 32.16f, 773.75f, -231.89999f, 0, 0, 0);
		EV_CreateObject(&P_EME, 32.16f, 773.75f, -231.89999f, 0, 0, 0);
		EV_CreateObject(&S_EME, 32.16f, 773.75f, -231.89999f, 0, 0, 0);
		EV_CreateObject(&Y_EME, 32.16f, 773.75f, -231.89999f, 0, 0, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_SetMode(W_EME, 0);
		EV_SetMode(B_EME, 0);
		EV_SetMode(G_EME, 0);
		EV_SetMode(P_EME, 0);
		EV_SetMode(S_EME, 0);
		EV_SetMode(Y_EME, 0);
		EV_SetPos(W_EME,
			player->twp->pos.x,
			player->twp->pos.y + 5.0f,
			player->twp->pos.z - 45.0f);
		EV_SetAng(W_EME, 0, 0, 0);
		EV_SetPos(B_EME,
			player->twp->pos.x - 5.0f,
			player->twp->pos.y + 5.0f,
			player->twp->pos.z - 48.0f);
		EV_SetAng(B_EME, 0, 0, 0);
		EV_SetPos(G_EME,
			player->twp->pos.x + 7.0f,
			player->twp->pos.y + 5.0f,
			player->twp->pos.z - 42.0f);
		EV_SetAng(G_EME, 0, 0, 0);
		EV_SetPos(P_EME,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y + 5.0f,
			player->twp->pos.z - 44.0f);
		EV_SetAng(P_EME, 0, 0, 0);
		EV_SetPos(S_EME,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y + 5.0f,
			player->twp->pos.z - 52.0f);
		EV_SetAng(S_EME, 0, 0, 0);
		EV_SetPos(Y_EME,
			player->twp->pos.x + 6.0f,
			player->twp->pos.y + 5.0f,
			player->twp->pos.z - 50.0f);
		EV_SetAng(Y_EME, 0, 0, 0);
		EV_Wait(1);
		EV_SetAction(W_EME, &action_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(B_EME, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(G_EME, &action_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(P_EME, &action_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(S_EME, &action_m_em_green, &M_EM_SKY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(Y_EME, &action_m_em_purple, &M_EM_YELLOW_TEXLIST, 1.0f, 1, 0);
		BGM_Play(MusicIDs_egcarer1);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, -16.02f, 764.51001f, -289.14001f);
		EV_CameraAng(0, 0, 60700, 38926, 0);
		EV_CameraPos(0, 100, -21.49f, 769.42999f, -297.32001f);
		EV_Wait(90);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, -1.92f, 745.84003f, -234.45f);
		EV_CameraAng(0, 0, 5148, 38158, 0);
		EV_CameraPos(0, 300, -6.27f, 745.84003f, -231.98f);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CDECDE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CD0");
		}
		EV_SerifPlay(1159);
		EV_MsgW(30, msgTbl_ev009B[TextLanguage][0]); //"\aYeah! You're finished!"
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_Wait(25);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_MsgClose();
		EV_Wait(20);
		EV_ClrFace(player);
		EV_SetFace(player, "CDECDE");
		EV_SerifPlay(1160);
		EV_Msg(msgTbl_ev009B[TextLanguage][1]); //"\aWhat's left now is to return \nthe Ma"...
		EV_Wait(60);
		EV_Msg(msgTbl_ev009B[TextLanguage][2]); //"\asafely to my island."
		EV_Wait(20);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(50);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 0, 7.6599998f, 764.75f, -265.25f);
		EV_CameraAng(0, 0, 61980, 29198, 0);
		EV_Wait(1);
		EV_CameraPerspective(0, 200, 12743);
		EV_CameraPos(0, 300, 62.110001f, 839.58002f, -501.51001f);
		EV_CameraAng(0, 300, 63260, 30222, 0);
		EV_Wait(140);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		EV_InitObject(player);
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		EV_FreeObject(&W_EME);
		EV_FreeObject(&B_EME);
		EV_FreeObject(&G_EME);
		EV_FreeObject(&P_EME);
		EV_FreeObject(&S_EME);
		EV_FreeObject(&Y_EME);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}