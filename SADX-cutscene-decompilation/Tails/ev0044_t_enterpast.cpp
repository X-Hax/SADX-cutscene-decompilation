#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0044_t_enterpast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(78);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, -11.58f, 9.9899998f, 1354.12f);
		EV_SetAng(player, 0, 32800, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, -13.38f, 14.09f, 1345.51f);
		EV_CameraAng(1, 0, 1792, 37340, 0);
		EV_CameraPos(1, 250, -15.19f, 14.09f, 1346.36f);
		EV_CameraAng(1, 250, 1792, 37340, 0);
		EV_FadeToWhite(0, 30, 60);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_Wait(50);
		EV_ClrFace(player);
		EV_SetFace(player, "EAELBC");
		EV_Wait(7);
		EV_SerifPlay(729);
		EV_MsgW(1, msgTbl_ev0044[TextLanguage][0]); //"\aUh oh. \nI thought I was in the deser"...
		EV_Wait(140);
		EventSe_Stop(0);
		EV_MsgClose();
		EV_CameraPos(1, 0, -1.63f, 24.15f, 1318.76f);
		EV_CameraAng(1, 0, 1792, 65500, 0);
		EV_CameraPos(1, 100, -1.85f, 13.04f, 1382.74f);
		EV_CameraAng(1, 100, 1792, 65500, 0);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0127_miles, &MILES_TEXLIST, 0.2f, 1, 0);
		EV_SerifPlay(730);
		EV_MsgW(0, msgTbl_ev0044[TextLanguage][1]); //"\aI wonder where I am?"
		EV_Wait(90);
		EV_MsgClose();
		EV_MsgClose();
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		EV_FreeFadeToWhite();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}