#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0067_a_past(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		W_OUT = 0;
		obj_decoy = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(97);
		EventSe_Init(3);
		EV_InitPlayer(0);
		EV_CreateObject(&obj_decoy, 0.0f, 10.0f, 1371.7f, 0, 0, 0);
		EV_Wait(1);
		EV_SetMode(obj_decoy, 0);
		EV_SetPos(obj_decoy, 0.0f, 10.0f, 1371.7f);
		EV_SetAng(obj_decoy, 0, 0, 0);
		EventSe_Play(1, 760, 90);
		W_OUT = COverlayCreate(-0.0012000001f, 1.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(30);
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, -0.016000001f);
		}
		EV_SetPos(player, 0.0f, 10.0f, 1396.5f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_LookObject(player, obj_decoy, 0.0f, 0.0f, 0.0f);
		EV_CameraPos(1, 0, 21.799999f, 12.0f, 1375.7f);
		EV_CameraAng(1, 0, 3840, 25344, 768);
		EV_CameraPos(1, 140, 3.4000001f, 10.2f, 1358.97f);
		EV_CameraAng(1, 140, 3840, 32256, 64768);
		EV_Wait(140);
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_CameraPos(1, 0, 0.68000001f, 13.1f, 1381.7f);
		EV_CameraAng(1, 0, 3840, 32256, 64768);
		EV_CameraPos(1, 100, 0.44999999f, 14.3f, 1385.89f);
		EV_CameraAng(1, 100, 3840, 0x8000, 64768);
		moveObject(obj_decoy, 0.0f, -42.0f, 1371.7f, 20.0f, -42.0f, 1378.0f, 10);
		EV_Wait(12);
		moveObject(obj_decoy, 20.0f, -42.0f, 1378.0f, 0.0f, -42.0f, 1371.7f, 8);
		EV_Wait(8);
		moveObject(obj_decoy, 0.0f, -42.0f, 1371.7f, -20.0f, -42.0f, 1378.0f, 10);
		EV_Wait(12);
		moveObject(obj_decoy, -20.0f, -42.0f, 1378.0f, 0.0f, -42.0f, 1371.7f, 8);
		EV_Wait(8);
		moveObject(obj_decoy, 0.0f, -42.0f, 1371.7f, 20.0f, -42.0f, 1378.0f, 10);
		EV_ClrFace(player);
		EV_SetFace(player, "MCC");
		EV_SerifPlay(917);
		EV_Msg(msgTbl_ev0067[TextLanguage][0]); //"\aHuh?"
		EV_Wait(22);
		moveObject(obj_decoy, 20.0f, -42.0f, 1378.0f, 0.0f, -42.0f, 1371.7f, 8);
		EV_Wait(8);
		EV_LookFree(player);
		EV_CameraPos(1, 0, -11.5f, 20.700001f, 1429.2f);
		EV_CameraAng(1, 0, 1792, 64256, 64768);
		EV_CameraPos(1, 130, 10.3f, 20.299999f, 1431.6f);
		EV_CameraAng(1, 130, 1792, 512, 64768);
		EV_Wait(130);
		EV_LookObject(player, obj_decoy, 0.0f, 0.0f, 0.0f);
		moveObject(obj_decoy, 0.0f, -25.0f, 1326.0f, 0.0f, -25.0f, 1326.0f, 30);
		EV_CameraPos(1, 0, 11.4f, 40.950001f, 1380.2f);
		EV_CameraAng(1, 0, 56832, 26112, 64768);
		EV_CameraPos(1, 90, -5.9000001f, 18.9f, 1381.0f);
		EV_CameraAng(1, 90, 62976, 37120, 64768);
		EV_ClrFace(player);
		EV_SetFace(player, "NOOOOOO");
		EV_SerifPlay(918);
		EV_Msg(msgTbl_ev0067[TextLanguage][1]); //"\aWhat's this place?"
		EV_Wait(190);
		EV_ClrFace(player);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_SerifStop();
		break;
	}
}