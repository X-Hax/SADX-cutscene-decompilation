#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0120[] = { 0 };

void ev0120_k_ectransform1(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_egcarer1);
		EV_CameraPosORY(0, 0, player, 20.0f, 4.0f, 20.0f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 4.0f, 0.0f, 0);
		EV_Wait(4);
		EV_CameraTargetObj(0, 0, player, 0.0f, 2.0f, 0.0f, 0);
		EV_Wait(4);
		EV_CameraTargetObj(0, 0, player, 0.0f, 4.0f, 0.0f, 0);
		EV_Wait(4);
		EV_CameraTargetObj(0, 0, player, 0.0f, 2.0f, 0.0f, 0);
		EV_Wait(4);
		EV_CameraTargetObj(0, 0, player, 0.0f, 4.0f, 0.0f, 0);
		EV_Wait(4);
		EV_SerifPlay(1128);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "IBFFF");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "EBFFF");
		}
		EV_Msg(msgTbl_ev0120[TextLanguage][0]); //"\aUh!   What's going on?"
		EV_CameraPosORY(0, 120, player, 20.0f, 4.0f, 6.0f);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgCls();
		break;
	case 2:
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}