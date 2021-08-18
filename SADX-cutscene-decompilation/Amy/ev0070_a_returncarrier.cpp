#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0070_a_returncarrier(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_theamy);
		EV_CameraPos(0, 0, 30.35f, 8.4799995f, -172.77f);
		EV_CameraAng(0, 0, 63488, 14080, 0);
		EV_CameraPos(0, 40, 15.87f, 10.03f, -152.39999f);
		EV_CameraAng(0, 40, 62976, 6144, 0);
		bird = SetEventBirdie0();
		EV_SetPos(bird, 3.9000001f, 0.20999999f, -165.84f);
		EV_SetAng(bird, 0, 53, 0);
		EV_SetMode(bird, 0);
		EV_SetPos(bird, -1.78f, 13.0f, -180.50999f);
		EV_SetAng(bird, 0, 6104, 0);
		EV_ClrAction(bird);
		EV_SetAction(bird, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		moveObject(bird, -1.78f, 13.0f, -180.50999f, 2.52f, 7.0f, -167.72f, 60);
		EV_SetPos(player, 6.1900001f, 0.19f, -179.35001f);
		EV_SetAng(player, 0, 53, 0);
		EV_MovePoint2(player, 6.8299999f, 0.20999999f, -165.25999f, 1.0f, 0.059999999f);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.0f, 0, 0);
		EV_Wait(40);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_ClrFace(player);
		EV_SetFace(player, "SSSEDO");
		EV_SerifPlay(981);
		EV_MsgW(0, msgTbl_ev0070[TextLanguage][0]); //"\aWhew!   That was a close one!"
		EV_SetAction(player, &action_a_a0004_amy, &AMY_TEXLIST, 1.0f, 1, 16);
		EV_Wait(140);
		EV_SerifPlay(982);
		EV_ClrFace(player);
		EV_SetFace(player, "CDE");
		EV_MsgW(60, msgTbl_ev0070[TextLanguage][1]); //"\aI saw no sign of your relatives, bird"...
		EV_Wait(50);
		EV_CameraPos(0, 0, -1.99f, 4.4899998f, -174.22f);
		EV_CameraAng(0, 0, 1792, 40448, 0);
		EV_SetAction(player, &action_a_a0828_amy, &AMY_TEXLIST, 1.0f, 0, 8);
		EV_Wait(30);
		EV_SetAction(player, &action_a_a0829_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(40);
		EV_SetFace(player, "H");
		EV_Wait(45);
		EV_SetFace(player, "EDC");
		EV_SerifPlay(983);
		EV_MsgW(0, msgTbl_ev0070[TextLanguage][2]); //"\aOhhhhh!   \nYou escaped from the Egg "...
		EV_Wait(120);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "CDED");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CD");
		}
		EV_SerifPlay(984);
		EV_MsgW(0, msgTbl_ev0070[TextLanguage][3]); //"\aSo maybe your family's still in there"...
		EV_Wait(100);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_CameraPos(0, 0, 8.8800001f, 0.69f, -147.09f);
		EV_CameraAng(0, 0, 3328, 1536, 0);
		EV_Wait(10);
		EV_CameraPos(0, 10, 7.0700002f, 4.77f, -159.3f);
		EV_CameraAng(0, 10, 3328, 1536, 0);
		EV_Wait(10);
		EV_SetFace(player, "G");
		EV_SerifPlay(985);
		EV_MsgW(0, msgTbl_ev0070[TextLanguage][4]); //"\aLet's investigate.   Wanna?"
		EV_Wait(50);
		EV_MsgClose();
		EV_Wait(10);
		stopObject(bird);
		break;
	case 2:
		EV_InitPlayer(0);
		stopObject(bird);
		EV_FreeObject(&bird);
		EV_SetPos(player, 6.8299999f, 0.20999999f, -165.25999f);
		EV_SetAng(player, 0, 53, 0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}