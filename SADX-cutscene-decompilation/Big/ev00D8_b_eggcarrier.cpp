#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00D8_b_eggcarrier(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_SetPos(player, 0.0f, 48.5f, -371.0f);
		EV_SetAng(player, 0, 65188, 281);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 8);
		BGM_Play(MusicIDs_egcarer1);
		EV_CameraPos(0, 0, -123.39f, 53.130001f, -384.26001f);
		EV_CameraAng(0, 0, 1612, 37120, 0);
		EV_CameraPos(0, 80, -63.07f, 54.860001f, -420.48001f);
		EV_CameraAng(0, 80, 1612, 37888, 0);
		EV_Wait(80);
		EV_CameraPos(0, 150, -56.900002f, 54.860001f, -423.78f);
		EV_Wait(30);
		EV_CameraPos(0, 0, -5.1500001f, 56.91f, -350.06f);
		EV_CameraAng(0, 0, 3148, 59136, 0);
		EV_CameraPos(0, 270, -8.4200001f, 56.900002f, -352.35999f);
		EV_CameraAng(0, 270, 3148, 59136, 0);
		EV_Wait(30);
		EV_SerifPlay(1339);
		EV_MsgW(60, msgTbl_ev00D8[TextLanguage][0]); //"\aFroggy?"
		EV_MsgClose();
		EV_SerifPlay(1340);
		EV_Wait(10);
		EV_MsgW(120, msgTbl_ev00D8[TextLanguage][1]); // "\aThis place doesn't look familiar to m"...
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(0, 0, -6.54f, 60.880001f, -361.70001f);
		EV_CameraAng(0, 0, 3660, 58624, 0);
		EV_CameraPos(0, 200, -8.5500002f, 60.880001f, -363.92001f);
		EV_CameraAng(0, 200, 3660, 55296, 0);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 3.0f, 1, 0);
		EV_SerifPlay(1341);
		EV_Wait(20);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 3.0f, 1, 0);
		EV_SerifPlay(1341);
		EV_Wait(20);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SerifPlay(1342);
		EV_MsgW(60, msgTbl_ev00D8[TextLanguage][2]); //"\aHmm, smells like Froggy's around\nsom"...
		EV_MsgClose();
		EV_CameraPos(0, 0, -16.290001f, 73.480003f, -436.13f);
		EV_CameraAng(0, 0, 63564, 33536, 0);
		EV_CameraPerspective(0, 1, 7282);
		EV_CameraPos(0, 135, -16.129999f, 85.260002f, -433.88f);
		EV_Wait(10);
		EV_SerifPlay(1343);
		EV_MsgW(60, msgTbl_ev00D8[TextLanguage][3]); //"\aThink I'll see what's behind this doo"...
		EV_MsgClose();
		EV_Wait(60);
		break;
	case 2:
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}