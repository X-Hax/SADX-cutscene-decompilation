#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0014[] = { 0 };

void ev0014_s_aftertwinklepark(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, 798.95001f, 50.009998f, 1771.1899f);
		EV_SetAng(player, 0, 0xC345, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5f, 1, 0);
		EV_CameraPos(0, 0, 717.83002f, 87.25f, 1755.5f);
		EV_CameraAng(0, 0, 0xEEC5, 0xB626, 0);
		EV_CameraPos(0, 50, 708.98999f, 67.919998f, 1748.9f);
		EV_CameraAng(0, 50, 0xF9C5, 0xAD26, 0);
		EV_MovePoint2(player, 756.76001f, 50.0f, 1769.88f, 1.75f, 0.059999999f);
		EV_Wait(60);
		EV_SetAction(player, &action_s_s0027_sonic, &SONIC_TEXLIST, 0.15000001f, 1, 8);
		EV_Wait(20);
		EV_CameraPos(0, 0, 739.20001f, 58.09f, 1788.09f);
		EV_CameraAng(0, 0, 0xFBC5, 0xDC26, 0);
		EV_CameraPos(0, 270, 741.32001f, 55.09f, 1760.51f);
		EV_CameraAng(0, 270, 0xFDC5, 0xA83A, 0);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_English) EV_SetFace(player, "DBD");
		EV_SerifPlay(513);
		if (VoiceLanguage == Languages_Japanese) EV_SetFace(player, "DD");
		EV_Msg((msgTbl_ev0014[TextLanguage])[0]);
		EV_Wait(80);
		EV_ClrFace(player);
		EV_SerifPlay(514);
		EV_SetFace(player, "EC");
		EV_Msg((msgTbl_ev0014[TextLanguage])[1]);
		EV_Wait(25);
		EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.2f, 0, 4);
		EV_Wait(40);
		EV_ClrFace(player);
		EV_SetFace(player, "L");
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 0.5f, 0, 16);
		EV_Wait(30);
		EV_SerifPlay(515);
		EV_ClrFace(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "D");
			break;
		case 1:
			EV_SetFace(player, "DE");
			break;
		}
		EV_Msg((msgTbl_ev0014[TextLanguage])[2]);
		EV_Wait(40);
		EV_MsgClose();
		break;
	case 2:
		EV_SetPos(player, 756.76001f, 50.0f, 1769.88f);
		EV_SetAng(player, 0, 0xC345, 0);
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}