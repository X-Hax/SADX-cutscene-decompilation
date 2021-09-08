#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0114[] = { 0 };

void ev0114_t_afterskydeck(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CreatePlayer(2, SonicTheHedgehog, -137.78999f, 160.0f, -163.36f, 0, 0x4000, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_CameraTargetObj(0, 0, sonic, 0.0f, 3.0f, 0.0f, 0);
		EV_CameraPos(0, 0, -125.0f, 95.669998f, -142.71001f);
		EV_SetPos(player, -151.22f, 175.0f, -173.36f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_Wait(1);
		TALES_STEP = CSkyWalk_create2(player, 174.8f);
		EV_Wait(80);
		EV_LookPoint(sonic, -170.22f, 175.0f, -143.36f);
		EV_Wait(20);
		EV_LookPoint(sonic, -136.22f, 80.0f, -191.36f);
		if(TALES_STEP){
			FreeTask(TALES_STEP);
			TALES_STEP = 0;
		}
		EV_SerifPlay(1548);
		EV_Msg(msgTbl_ev0114[TextLanguage][0]); //"\aAahh!  Is that it?"
		EV_SetAction(sonic, &action_s_s0065_sonic, &SONIC_TEXLIST, 1.5f, 0, 30);
		EV_LookFree(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 30);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(sonic, "DEC");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(sonic, "EBC");
		}
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -137.13f, 86.779999f, -176.17999f);
		EV_CameraAng(0, 0, 0xF6B9, 0x4AC5, 0);
		EV_CameraPos(0, 40, -126.66f, 89.489998f, -180.33f);
		EV_CameraAng(0, 40, 0xF6B9, 0x4EC5, 0);
		EV_SerifPlay(1549);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CCC");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CCEC");
		}
		EV_Msg(msgTbl_ev0114[TextLanguage][1]); //"\aSonic, we should check out the bridge"...
		EV_Wait(30);
		EV_LookObject(sonic, player, 0.0f, 4.0f, 0.0f);
		EV_Wait(30);
		EV_SetFace(sonic, "L");
		EV_LookFree(sonic);
		EV_CameraPos(0, 40, -142.2f, 95.239998f, -154.23f);
		EV_CameraAng(0, 40, 0xEAB9, 0xEAC5, 0);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(20);
		break;
	case 2:
		if(TALES_STEP){
			FreeTask(TALES_STEP);
			TALES_STEP = 0;
		}
		EV_SetPos(player, -151.22f, 80.0f, -173.36f);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}