#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00D1_b_stationsquare(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_s_square);
		EV_SetPos(player, 67.0f, 0.80000001f, 1452.13f);
		EV_SetAng(player, 0, 5120, 0);
		EV_CameraPos(1, 0, 91.0f, 40.029999f, 1490.67f);
		EV_CameraAng(1, 0, 2048, 5376, 0);
		EV_CameraPos(0, 60, 117.93f, 33.709999f, 1538.2f);
		EV_Wait(60);
		EV_CameraPos(0, 120, 114.48f, 33.189999f, 1532.12f);
		EV_CameraAng(1, 120, 63744, 5376, 0);
		EV_ClrAction(player);
		EV_PlayPad(0, &E00D1B);
		EV_CameraChase(player);
		EV_ClrFace(player);
		EV_SerifPlay(1323);
		EV_Msg(msgTbl_ev00D1[TextLanguage][0]); //"\aYoohoo!   Froggy!   "
		EV_Wait(30);
		EV_MsgCls();
		EV_SerifWait();
		EV_Wait(20);
		EV_SerifPlay(1324);
		EV_Msg(msgTbl_ev00D1[TextLanguage][1]); //"\aCome out, \ncome out, wherever you ar"...
		EV_Wait(90);
		EV_SerifWait();
		EV_MsgCls();
		EV_Wait(80);
		EV_CameraChaseFree();
		EV_CameraAng(1, 120, 63488, 6144, 0);
		EV_CameraPos(1, 120, 99.194f, 22.656f, 1513.755f);
		EV_ClrFace(player);
		EV_SerifPlay(1325);
		EV_Msg(msgTbl_ev00D1[TextLanguage][2]); //"\aOh man, where could my \nPollywog Pal"...
		EV_Wait(240);
		EV_MsgCls();
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, 78.388f, 0.0f, 1467.228f);
		EV_SetAng(player, 0, 2780, 0);
		EV_InitPlayer(0);
		break;
	}
}