#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0054[] = {
	(char*)("EV_TR2CHANGE_WITH_SONIC"), &texlist_tr2b_s_tru2_body
};

void ev0054_t_eclanding(int state)
{
	switch(state){
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(85);
		EventSe_Init(2);
		BGM_Play(MusicIDs_scramble);
		EV_SetPos(player, 100.0f, 570.0f, -673.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_InitPlayer(0);
		EV_CameraAng(1, 0, 0xEA35, 0xA1E7, 0xFE00);
		EV_CameraPos(1, 0, -1145.26f, 1252.15f, -2293.4099f);
		EV_CreateObject(&TR2B,
			player->twp->pos.x,
			player->twp->pos.y + 12.0f,
			player->twp->pos.z,
			0, 0xD300, 0);
		EV_SetMode(TR2B, 0);
		EV_Wait(1);
		EV_SetAng(TR2B, -0x52B, 0x323D, -0xF04);
		EV_SetPos(TR2B, -1125.7914f, 1232.0996f, -2274.4431f);
		EV_SetAction(TR2B, &action_tr2b_s_tru2_body, &texlist_tr2b_s_tru2_body, 0.80000001f, 1, 8);
		EV_SetPath(TR2B, &epathtag_cube0029_2, 0.15000001f, 0);
		EV_CameraChase(TR2B);
		EV_Wait(30);
		EV_SerifPlay(826);
		EV_Msg(msgTbl_ev0054[TextLanguage][0]); //"\aComing in tight!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, -994.0f, 1207.84f, -2219.0f);
		EV_CameraAng(1, 0, 0xE935, 0xA4E7, 0xFC00);
		EV_CameraChase(TR2B);
		EV_Wait(10);
		EV_SerifPlay(827);
		EV_Msg(msgTbl_ev0054[TextLanguage][1]); //"\aTails!   We gotta land \non the Egg C"...
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgCls();
		EV_SerifPlay(828);
		EV_Msg(msgTbl_ev0054[TextLanguage][2]); //"\aOops..."
		EV_CameraChaseFree();
		EV_Wait(30);
		EV_SerifPlay(829);
		EV_Msg(msgTbl_ev0054[TextLanguage][3]); //"\aWe gotta problem here."
		EV_Wait(1);
		EV_SerifPlay(830);
		EV_Msg(msgTbl_ev0054[TextLanguage][4]); //"\aWhat now?"
		EV_CameraPos(1, 0, -480.07001f, 1029.05f, -1917.0f);
		EV_CameraAng(1, 0, 0xE935, 0x1FE7, 0xFE00);
		EV_CameraTargetObj(1, 1, TR2B, 0.0f, 0.0f, 0.0f, 0);
		EV_CameraPos(1, 150, -495.8887f, 1025.03f, -1782.9f);
		EV_SerifPlay(831);
		EV_Msg(msgTbl_ev0054[TextLanguage][5]); //"\aI forgot to put in \nthe landing gear"...
		EV_Wait(1);
		EV_SerifPlay(832);
		EV_Msg(msgTbl_ev0054[TextLanguage][6]); //"\aWhaaaa...........!"
		EV_Wait(1);
		EV_SerifWait();
		EV_CameraPos(1, 0, -65.480003f, 704.0f, -1116.462f);
		EV_CameraTargetObj(1, 1, TR2B, 0.0f, 2.2f, 0.0f, 0xFF00);
		EV_CameraPos(0, 147, -40.73f, 702.0f, -1127.2323f);
		EV_Wait(62);
		EventSe_Play(1, 1325, 1800);
		EventSe_Volume(1, 120, 1);
		EV_Wait(85);
		effect_create2(TR2B, 0, 0.0f, -13.0f, 0.0f, &ev_effect_list9);
		effect_color(0, 0.5f, 0.30000001f, 0.5f, 0.60000002f);
		RumbleA(0, 5);
		EV_CameraTargetFree();
		EV_CameraPos(0, 80, -16.9f, 713.0f, -1063.5f);
		EV_CameraAng(0, 80, 0x23B, 0x89CF, 0xFF00);
		EV_MsgClose();
		EventSe_Stop(1);
		effect_delete(0);
		EV_SetAction(TR2B, &action_tr2b_s_tru2_body, &texlist_tr2b_s_tru2_body, 0.1f, 1, 8);
		EV_Wait(70);
		EV_CameraPos(0, 50, -18.0f, 713.67999f, -1077.8f);
		EV_CameraAng(0, 50, 0x3B, 0x85CF, 0xFF00);
		EV_Wait(60);
		break;
    case 2:
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, 0.0f, 700.0f, -1078.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_ClrPath(TR2B);
		EV_FreeObject(&TR2B);
		effect_delete(0);
		EventSe_Close();
		break;
	}
}