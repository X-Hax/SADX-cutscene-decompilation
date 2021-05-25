#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0100_s_ecafterlanding(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* tails = 0;

	switch (state) {
	case 1:
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_egcarer1);
		EV_CreatePlayer(2, Tails_Main, 12.8f, 699.25f, -1093.5f, 0, 63658, 0);
		EV_Wait(1);
		EV_SetPos(player, 23.389999f, 699.25f, -1083.27f);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraPos(1, 0, 29.860001f, 700.06f, -1065.27f);
		EV_CameraAng(1, 0, 2827, 3982, 0);
		EV_CameraPos(1, 150, -10.33f, 705.81f, -1066.96f);
		EV_CameraAng(1, 120, 255, 58230, 0);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "ICCCDDEEEEEEDDDDCCCDDD");
			break;
		case 1:
			EV_SetFace(player, "ECI");
			break;
		}
		tails = EV_GetPlayer(2);
		EV_SetFace(tails, "JBBLLL");
		EV_SerifPlay(1513);
		EV_Msg(msgTbl_ev0100[TextLanguage][0]); //"\aWow!  This thing is really huge!"
		EV_Wait(120);
		if (!VoiceLanguage) EV_ClrFace(player);
		EV_SetAction(tails, (NJS_ACTION*)0x3C84A48, &MILES_TEXLIST, 1.0f, 1, 0); //TODO: Label this tails action when I find which event has its name
		EV_Wait(40);
		EV_ClrAction(tails);
		EV_CameraPos(1, 0, 26.280001f, 703.27002f, -1201.03f);
		EV_CameraAng(1, 0, 1421, 28818, 0);
		EV_CameraPos(1, 120, 50.599998f, 707.20001f, -1191.9f);
		EV_CameraAng(1, 120, 1421, 29842, 0);
		EV_SerifPlay(1514);
		EV_Msg(msgTbl_ev0100[TextLanguage][1]); //"\aNo time to gawk now.  \nWe need to fi"...
		EV_Wait(85);
		EV_MsgClose();
		EV_MsgCls();
		EV_CameraPos(1, 0, 8.3299999f, 702.40002f, -1066.27f);
		EV_CameraAng(1, 0, 1771, 61810, 0);
		EV_CameraPos(1, 210, 29.860001f, 700.06f, -1065.27f);
		EV_CameraAng(1, 210, 2827, 3982, 0);
		EV_LookPoint(tails, 23.389999f, 699.25f, -1050.27f);
		EV_SetFace(tails, "T");
		EV_LookPoint(player, 12.8f, 699.25f, -1093.5f);
		EV_Wait(30);
		EV_SetFace(player, "R");
		EV_LookFree(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "CCFFFGGG");
			break;
		case 1:
			EV_SetFace(player, "CH");
			break;
		}
		EV_SerifPlay(1515);
		EV_Msg(msgTbl_ev0100[TextLanguage][2]); //"\aYou're right, my friend!  \nSo, here "...
		EV_Wait(30);
		EV_LookFree(tails);
		EV_SetFace(tails, "BB");
		EV_Wait(20);
		EV_SetAction(player, &action_s_s0005_sonic, &SONIC_TEXLIST, 0.69999999f, 0, 20);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 5);
		EV_Wait(40);
		EV_ClrFace(player);
		EV_MsgCls();
		EV_SerifWait();
		break;
	case 2:
		EV_InitObject(player);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}