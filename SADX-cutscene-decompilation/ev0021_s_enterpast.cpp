#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0021_s_enterpast(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* white = 0;
	
	switch (state) {
	case 1:
		EV_InitPlayer(0);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Play(0, 760, 90);
		white = COverlayCreate(1.0f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_CameraPos(1, 0, 0.0f, -20.0f, 1058.215f);
		EV_CameraAng(1, 0, 0, 0, 0);
		EV_CameraPerspective(1, 1, 7282);
		EV_Wait(1);
		EV_CameraPerspective(0, 90, 12743);
		EV_SetPos(player, -0.88499999f, -71.0f, 1279.62f);
		EV_SetAng(player, 0, 31840, 0);
		EV_SetAction(player, &action_s_s0011_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		COverlaySetSpeed(white, -0.016666668f);
		EV_Wait(90);
		EV_CameraPos(1, 0, -0.12f, -65.32f, 1208.52f);
		EV_CameraAng(1, 0, 0, 0x8000, 0);
		EV_CameraPos(1, 60, -0.12f, -65.32f, 1250.52f);
		EV_CameraAng(1, 60, 0, 0x8000, 0);
		EV_Wait(50);
		EV_CameraPos(0, 60, -0.14f, -65.32f, 1264.515f);
		EV_CameraAng(0, 60, 0, 0x8000, 0);
		EV_Wait(60);
		EV_SetFace(player, (char*)"B");
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 0.80000001f, 1, 16);
		EV_Wait(30);
		EV_ClrFace(player);
		EV_SetFace(player, (char*)"FAAAED");
		EV_SerifPlay(593);
		EV_Msg(msgTbl_ev0021[TextLanguage][0]); //"\aWhat's this place?"
		EV_SetAction(player, &action_s_s0033_sonic, &SONIC_TEXLIST, 0.25f, 0, 8);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraAng(0, 0, 0, 51200, 0);
		EV_CameraAng(0, 200, 0, 14848, 0);
		EV_Wait(40);
		EV_SetFace(player, (char*)"DC");
		EV_SerifPlay(594);
		EV_Msg(msgTbl_ev0021[TextLanguage][1]); //"\aWhere am I?   \nThis is really weird."
		EV_Wait(50);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPos(1, 0, -1.92f, -56.32f, 1310.62f);
		EV_CameraAng(1, 0, 0, 0, 0);
		EV_CameraPos(0, 90, -1.92f, -44.932999f, 1324.853f);
		EV_CameraAng(0, 90, 64000, 0, 0);
		EV_Wait(100);
		break;
	case 2:
		EventSe_Close();
		EV_SetPos(player, -0.88499999f, -71.0f, 1279.62f);
		EV_SetAng(player, 0, 31840, 0);
		EV_InitPlayer(0);
		FreeTask(white);
		white = 0;
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}