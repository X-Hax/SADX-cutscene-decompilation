#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev006C[] = { 0 };

void ev006C_a_exitpast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		W_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EventSe_Init(1);
		W_OUT = COverlayCreate(-0.0012000001f, 1.0f, 1.0f, 1.0f, 1.0f);
		EV_CameraPos(0, 0, 290.17001f, 15.8f, 1.76f);
		EV_CameraAng(0, 0, 0x200, 0xD690, 0);
		EV_SetPos(player, 295.23999f, 10.0f, 0.0f);
		EV_SetAng(player, 0, 0xC000, 0);
		EV_Wait(1);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(29);
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, -0.016000001f);
		}
		EV_CameraPos(0, 200, 277.57001f, 15.01f, 10.16f);
		EV_Wait(60);
		EventSe_Stop(0);
		EV_SetAction(player, &action_a_a0003_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(961);
		EV_ClrFace(player);
		EV_SetFace(player, "EEE");
		EV_Msg(msgTbl_ev006C[TextLanguage][0]); //"\aGee, what was that?"
		EV_Wait(40);
		EV_ClrFace(player);
		EV_Wait(40);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(15);
		EV_SerifPlay(962);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CDEE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DF");
		}
		EV_MsgW(100, msgTbl_ev006C[TextLanguage][1]); //"\aI wonder if I'm dreaming?"
		EV_ClrFace(player);
		EV_Wait(15);
		EV_CameraPos(0, 0, 303.16f, 26.02f, 17.450001f);
		EV_CameraAng(0, 0, 0xEE00, 0x1C90, 0);
		EV_CameraPos(0, 150, 319.48001f, 37.990002f, 36.799999f);
		EV_Wait(15);
		EV_SerifPlay(963);
		EV_SetFace(player, "ICCC");
		EV_MsgW(100, msgTbl_ev006C[TextLanguage][2]); //"\aOh my!   \nI need to get outta this p"...
		EV_ClrFace(player);
		EV_Wait(15);
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}