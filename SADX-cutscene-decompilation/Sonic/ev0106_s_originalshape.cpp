#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0106[] = { 0 };

void ev0106_s_originalshape(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_SetPos(player, 137.95f, 1519.77f, 2887.8501f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(0, 0, 259.0f, 2036.0f, 3712.0f);
		EV_CameraAng(0, 0, 0xF200, 0xFF45, 0xF400);
		EV_CameraPos(0, 100, 151.44f, 1530.22f, 2864.5701f);
		EV_CameraTargetObj(1, 120, player, 0.0f, 10.0f, 0.0f, 0xF400);
		EV_Wait(130);
		EV_CameraPos(0, 300, 151.44f, 1520.22f, 2864.5701f);
		EV_SerifPlay(1531);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "FCD");
			break;
		case 1:
			EV_SetFace(player, "FCDC");
			break;
		}
		EV_MsgW(100, msgTbl_ev0106[TextLanguage][0]); //"\aIf I'm to continue, I need to change "...
		EV_Wait(100);
		EV_ClrFace(player);
		EV_LookPoint(player, 102.0f, 1711.0f, 2870.0f);
		EV_SerifPlay(1532);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "CBCL");
			break;
		case 1:
			EV_SetFace(player, "CBBBCL");
			break;
		}
		EV_Msg(msgTbl_ev0106[TextLanguage][1]); //"\aThere must be a switch somewhere on "...
		EV_Wait(150);
		EV_ClrFace(player);
		EV_LookFree(player);
		EV_MsgCls();
		break;
	case 2:
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}