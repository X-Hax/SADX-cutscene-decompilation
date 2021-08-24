#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00DD_b_leavepast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		W_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EventSe_Init(1);
		SetBankDir(81);
		W_OUT = COverlayCreate(-0.0012000001f, 1.0f, 1.0f, 1.0f, 1.0f);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_SetPos(player, 0.0f, 0.0f, 197.5f);
		EV_SetAng(player, 0, 32633, 281);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_b0022_big, &BIG_TEXLIST, 1.0f, 1, 0);
		EV_CreateObject(&Frog,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetPos(Frog,
			player->twp->pos.x,
			player->twp->pos.y - 1.5f,
			player->twp->pos.z);
		EV_SetAng(Frog,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetAction(Frog, &action_f_f0007_frog, &texlist_frog, 1.0f, 1, 1);
		EV_CameraPos(0, 0, -5.1999998f, 11.12f, 180.49001f);
		EV_CameraAng(0, 0, 1412, 37007, 0);
		EV_Wait(30);
		if (W_OUT)
		{
			COverlaySetSpeed(W_OUT, -0.016000001f);
		}
		EV_CameraPos(0, 200, -15.38f, 7.6100001f, 156.82001f);
		EV_Wait(120);
		EventSe_Stop(0);
		EV_CameraPos(0, 0, -14.18f, 12.96f, 210.49001f);
		EV_CameraAng(0, 0, 65483, 59598, 0);
		EV_CameraPos(0, 180, -47.07f, 12.98f, 191.75f);
		EV_CameraAng(0, 180, 65483, 61134, 0);
		EV_SerifPlay(1363);
		EV_Wait(10);
		EV_MsgW(140, msgTbl_ev00DD[TextLanguage][0]); //"\aFroggy! I don't like \nthe looks of t"...
		EV_MsgClose();
		EV_CameraPos(0, 0, 27.690001f, 6.71f, 128.34f);
		EV_CameraAng(0, 0, 1227, 27027, 0);
		EV_Wait(30);
		EV_CameraPos(0, 160, 18.17f, 9.0500002f, 145.72f);
		dsPlay_oneshot_v(1333, 0, 0, 120, 0.0f, 0.0f, 197.5f);
		RumbleA(0, 3);
		EV_CameraAng(0, 5, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4811, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4811, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4811, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4811, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4811, 27027, 0);
		EV_Wait(3);
		dsPlay_oneshot_v(1333, 0, 0, 80, 0.0f, 0.0f, 197.5f);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 2507, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 2507, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		dsPlay_oneshot_v(1333, 0, 0, 30, 0.0f, 0.0f, 197.5f);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		dsPlay_oneshot_v(1333, 0, 0, 60, 0.0f, 0.0f, 197.5f);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_SerifPlay(1364);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1483, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		EV_Wait(3);
		EV_CameraAng(0, 4, 1227, 27027, 0);
		dsPlay_oneshot_v(1333, 0, 0, 20, 0.0f, 0.0f, 197.5f);
		EV_MsgW(120, msgTbl_ev00DD[TextLanguage][1]); //"\aIf something happens now... \nThere's"...
		EV_MsgClose();
		dsPlay_oneshot_v(1333, 0, 0, 10, 0.0f, 0.0f, 197.5f);
		EV_SerifPlay(1365);
		EV_MsgW(200, msgTbl_ev00DD[TextLanguage][2]); //"\aI don't know who would bother \nto sa"...
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, -19.450001f, 21.629999f, 222.64f);
		EV_CameraAng(0, 0, 62923, 60819, 0);
		EV_CameraPos(0, 120, -26.43f, 25.34f, 235.39999f);
		EV_SerifPlay(1366);
		EV_Wait(10);
		EV_MsgW(60, msgTbl_ev00DD[TextLanguage][3]); // "\aWe better get going, buddy!"
		EV_MsgClose();
		EV_Wait(30);
		break;
	case 2:
		dsStop_all();
		EventSe_Close();
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_InitPlayer(0);
		EV_FreeObject(&Frog);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}