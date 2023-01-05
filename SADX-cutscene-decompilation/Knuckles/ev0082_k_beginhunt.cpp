#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0082[] = { 0 };

void ev0082_k_beginhunt(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_s_square);
		EV_SetPos(player, 63.290001f, 0.050000001f, 1495.52f);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraAng(1, 0, 0x900, 0x9300, 0);
		EV_CameraPos(1, 0, 58.540001f, 4.6100001f, 1488.2f);
		EV_CameraPos(0, 100, 53.27f, 1.98f, 1477.8f);
		EV_Wait(60);
		EV_CameraPos(0, 0,
			player->twp->pos.x + 10.0f,
			player->twp->pos.y + 8.0f,
			player->twp->pos.z + 23.0f);
		EV_CameraAng(0, 0, 0xFB00, 0x1100, 0);
		EV_CameraPos(0, 480,
			player->twp->pos.x + 5.46f,
			player->twp->pos.y + 6.5999999f,
			player->twp->pos.z + 12.8f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0003_knuckles, &KNUCKLES_TEXLIST, 0.5f, 0, 8);
		EV_SetAction(player, &action_k_k0004_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_ClrFace(player);
		EV_SetFace(player, "CEDECED"); //Originally checked for language but used the same face for both results.
		EV_SerifPlay(1017);
		EV_Msg(msgTbl_ev0082[TextLanguage][0]); //"\aIt's up to me to find the \nmissing p"...
		EV_Wait(40);
		EV_Msg(msgTbl_ev0082[TextLanguage][1]); //"\aof the Master Emerald."
		EV_Wait(20);
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(player);
		}
		EV_Wait(15);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(player);
		}
		EV_MsgClose();
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(10);
		EV_LookFree(player);
		EV_Wait(2);
		EV_LookPoint(player, 53.029999f, 4.3099999f, 1551.04f);
		EV_Wait(1);
		EV_LookPoint(player, 44.919998f, 4.3099999f, 1549.01f);
		EV_Wait(2);
		EV_LookPoint(player, 32.34f, 7.2600002f, 1543.0601f);
		EV_Wait(2);
		EV_LookPoint(player, 44.919998f, 6.52f, 1549.01f);
		EV_Wait(1);
		EV_LookPoint(player, 53.029999f, 5.7800002f, 1551.04f);
		EV_Wait(1);
		EV_LookPoint(player, 64.339996f, 5.04f, 1551.86f);
		EV_Wait(2);
		EV_LookPoint(player, 75.199997f, 4.3099999f, 1550.5f);
		EV_Wait(1);
		EV_LookPoint(player, 83.209999f, 4.3099999f, 1548.0699f);
		EV_Wait(1);
		EV_LookPoint(player, 93.160004f, 4.3099999f, 1543.0601f);
		EV_Wait(2);
		EV_LookPoint(player, 83.209999f, 4.3099999f, 1548.0699f);
		EV_Wait(1);
		EV_LookPoint(player, 75.199997f, 4.3099999f, 1550.5f);
		EV_Wait(1);
		EV_LookPoint(player, 64.339996f, 4.3099999f, 1551.86f);
		EV_Wait(1);
		EV_LookPoint(player, 53.029999f, 4.3099999f, 1551.04f);
		EV_Wait(1);
		EV_LookPoint(player, 44.919998f, 4.3099999f, 1549.01f);
		EV_Wait(2);
		EV_LookPoint(player, 32.34f, 4.3099999f, 1543.0601f);
		EV_Wait(2);
		EV_LookPoint(player, 44.919998f, 4.3099999f, 1549.01f);
		EV_Wait(1);
		EV_LookPoint(player, 53.029999f, 4.3099999f, 1551.04f);
		EV_Wait(1);
		EV_LookPoint(player, 64.339996f, 4.3099999f, 1551.86f);
		EV_Wait(1);
		EV_LookPoint(player, 75.199997f, 4.3099999f, 1550.5f);
		EV_Wait(1);
		EV_LookPoint(player, 83.209999f, 4.3099999f, 1548.0699f);
		EV_Wait(1);
		EV_LookPoint(player, 93.160004f, 4.3099999f, 1543.0601f);
		EV_Wait(1);
		EV_LookPoint(player, 83.209999f, 4.3099999f, 1548.0699f);
		EV_Wait(1);
		EV_LookPoint(player, 75.199997f, 4.3099999f, 1550.5f);
		EV_Wait(1);
		EV_LookPoint(player, 64.339996f, 4.3099999f, 1551.86f);
		EV_Wait(1);
		EV_LookPoint(player, 53.029999f, 4.3099999f, 1551.04f);
		EV_Wait(1);
		EV_LookPoint(player, 44.919998f, 4.3099999f, 1549.01f);
		EV_Wait(2);
		EV_LookPoint(player, 32.34f, 4.3099999f, 1543.0601f);
		EV_Wait(2);
		EV_LookPoint(player, 44.919998f, 4.3099999f, 1549.01f);
		EV_Wait(1);
		EV_LookPoint(player, 53.029999f, 4.3099999f, 1551.04f);
		EV_Wait(1);
		EV_LookPoint(player, 64.339996f, 4.3099999f, 1551.86f);
		EV_Wait(1);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "EAAAAADEDAAAAAACD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "EDED");
		}
		EV_SerifPlay(1018);
		EV_Msg(msgTbl_ev0082[TextLanguage][2]); //"\aIt won't be easy."
		EV_Wait(30);
		EV_Msg(msgTbl_ev0082[TextLanguage][3]); //"\aPieces flew off everywhere."
		EV_Wait(50);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(20);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "ED");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "EDDD");
		}
		EV_SerifPlay(1019);
		EV_MsgW(60, msgTbl_ev0082[TextLanguage][4]); //"\aGuess I'd better start \nlooking anyw"...
		EV_ClrFace(player);
		EV_Wait(60);
		break;
	case 2:
		EV_SetPos(player, 63.290001f, 0.050000001f, 1495.52f);
		EV_SetAng(player, 0, 0, 0);
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}