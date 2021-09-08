#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00D2[] = {
	(char*)("FROG"), &texlist_frog
};

void ev00D2_b_car(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		SetBankDir(87);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_s_square);
		EV_SetPos(player, 484.97f, 0.0099999998f, 884.87f);
		EV_SetAng(player, 0, 55109, 0);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 32);
		EV_CameraPos(0, 0, 463.97f, 15.14f, 886.09998f);
		EV_CameraAng(0, 0, 0xFF19, 0xC0C4, 0);
		EV_CameraPos(0, 10, 468.95999f, 15.03f, 885.89001f);
		EV_CameraAng(0, 10, 0xFF19, 0xC0C4, 0);
		EV_Wait(15);
		EV_CreateObject(&Frog, 431.62f, 1.51f, 926.67999f, 0, 25989, 0);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetAction(Frog, &_action_f_f0001_frog, &texlist_frog, 1.0f, 1, 0);
		EV_CameraPos(0, 0, 501.45999f, 14.35f, 854.71997f);
		EV_CameraAng(0, 0, 0xFC19, 0x60C4, 0);
		EV_Wait(10);
		EV_CameraPos(0, 30, 449.67999f, 7.1799998f, 908.5f);
		EV_CameraAng(0, 30, 0xFC19, 0x60C4, 0);
		EV_Wait(40);
		EV_SetAction(Frog, &_action_f_f0002_frog, &texlist_frog, 1.0f, 1, 0);
		EV_Wait(50);
		EventSe_Oneshot(1334, 0, 0, 0);
		moveObject(Frog, 431.62f, 1.51f, 926.67999f, 344.70001f, 1.51f, 994.21002f, 300);
		EV_Wait(30);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(30);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(30);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(20);
		EV_CameraPos(0, 0, 469.22f, 15.12f, 882.45001f);
		EV_CameraAng(0, 0, 0xFC19, 0x60C4, 0);
		EV_SerifPlay(1326);
		EV_Msg(msgTbl_ev00D2[TextLanguage][0]); //"\aFroggy!  There you are!"
		EV_SerifWait();
		EV_MsgClose();
		stopObject(Frog);
		EV_FreeObject(&Frog);
		EV_MoveFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, BIG_ACTIONS[16], &BIG_TEXLIST, 1.0f, 1, 20);
		EV_Wait(2);
		EV_MovePoint2(player, 369.59f, 0.0099999998f, 1003.5f, 0.5f, 0.059999999f);
		EV_Wait(10);
		EV_CameraPos(0, 80, 469.22f, 15.12f, 882.45001f);
		EV_CameraAng(0, 80, 0xFC19, 0xB6C4, 0);
		EV_Wait(160);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 0);
		EV_Wait(13);
		EV_CameraPos(0, 0, 409.07999f, 39.91f, 960.88f);
		EV_CameraAng(0, 0, 0xE952, 0x5D33, 0);
		EV_SetPos(player, 369.64999f, 0.0099999998f, 1003.42f);
		EV_SetAng(player, 0, 0x7146, 0);
		EV_Wait(1);
		EV_SerifPlay(1327);
		EV_MsgW(0, msgTbl_ev00D2[TextLanguage][1]); //"\aWait, don't run away!"
		EV_SetAction(player, &action_b_b0004_big, &BIG_TEXLIST, 0.5f, 1, 30);
		EV_Wait(1);
		EV_CameraPos(0, 100, 409.26001f, 58.669998f, 915.85999f);
		EV_CameraAng(0, 100, 0xE3D3, 0x621F, 0);
		EV_Wait(30);
		EV_SerifPlay(1328);
		EV_MsgW(0, msgTbl_ev00D2[TextLanguage][2]); //"\aWhat cha' doin' under that car?   \nW"...
		EV_Wait(10);
		EV_SetAction(player, BIG_ACTIONS[23], &BIG_TEXLIST, 1.0f, 1, 32);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(1);
		break;
	case 2:
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_FreeObject(&Frog);
		EV_SetPos(player, 369.64999f, 0.0099999998f, 1003.42f);
		EV_SetAng(player, 0, 0x838E, 0);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}