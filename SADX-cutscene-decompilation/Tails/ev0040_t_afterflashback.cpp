#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0040[] = { 0 };

void ev0040_t_afterflashback(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		player->twp->timer.b[3] |= 0x10u; //Disable tail animations
		EV_SetPos(player, 125.92f, 72.639999f, 267.89999f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 0, 0);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVVVVVVVVVVVVVV");
		EV_SetAction(player, &action_m_m0124_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 0x1F00, 0x400, 0);
		EV_CameraPos(1, 0, 125.05f, 93.459999f, 295.10001f);
		EV_CameraAng(1, 240, 0x1400, 0x400, 0);
		EV_Wait(120);
		EV_CameraAng(1, 0, 0xD100, 0xF800, 0x8000);
		EV_CameraPos(1, 0, 124.11f, 101.86f, 279.35999f);
		EV_CameraPos(0, 200, 121.11f, 136.60001f, 294.45999f);
		EV_CameraAng(0, 200, 0xD100, 0xF800, 0);
		EV_Wait(120);
		EV_CameraPos(1, 0, 116.86f, 81.93f, 285.16f);
		EV_CameraAng(1, 0, 0xF000, 0xEB00, 0);
		EV_CameraPos(1, 100, 120.95f, 78.480003f, 277.92001f);
		EV_Wait(72);
		EV_ClrFace(player);
		EV_SetFace(player, "XBB");
		EV_Wait(158);
		EV_SetFace(player, "GE");
		EV_SerifPlay(718);
		EV_Msg(msgTbl_ev0040[TextLanguage][0]); //"\aHmm, wow... That dream \nbrought back"...
		EV_Wait(120);
		EV_CameraPos(1, 0, 121.74f, 74.449997f, 266.76001f);
		EV_CameraAng(1, 0, 0x1800, 0xB700, 0xFE00);
		EV_CameraAng(1, 200, 0x1900, 0xB300, 0xFE00);
		EV_SetFace(player, "EDE");
		EV_SerifPlay(719);
		EV_Msg(msgTbl_ev0040[TextLanguage][1]); //"\aI owe so much to Sonic."
		EV_Wait(120);
		EV_ClrFace(player);
		EV_SetFace(player, "EH");
		EV_SerifPlay(720);
		EV_Msg(msgTbl_ev0040[TextLanguage][2]); //"\aSonic!"
		EV_Wait(80);
		EV_ClrFace(player);
		EV_CameraPos(1, 0, 113.59f, 75.25f, 265.07999f);
		EV_CameraAng(1, 0, 0xE00, 0xB700, 0xFE00);
		EV_CameraAng(0, 60, 0xE00, 0xAA00, 0xFE00);
		EV_SetAction(player, &action_m_m0125_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(player);
		EV_CameraPos(1, 0, 120.62f, 74.959999f, 288.12f);
		EV_CameraAng(1, 0, 0x700, 0xF2BC, 0);
		player->twp->timer.b[3] &= ~4u;	//Reset Tails' tails.
		player->twp->timer.b[3] &= ~0x10u;
		EV_SetPos(player, 126.23f, 72.639999f, 272.26001f);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0126_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_SetAction(player, &action_m_m0127_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(player);
		EV_CameraPos(1, 160, 118.72f, 73.93f, 293.72f);
		EV_SetAction(player, &action_m_m0128_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_Wait(20);
		EV_SetAction(player, &action_m_m0129_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_SetFace(player, "ONO");
		EV_SerifPlay(721);
		EV_Msg(msgTbl_ev0040[TextLanguage][3]); //"\aHmmm, wonder where he went?\nSure hop"...
		EV_Wait(80);
		EV_ClrFace(player);
		EV_Wait(20);
		EV_CameraPos(1, 0, 133.14999f, 75.050003f, 299.91f);
		EV_CameraAng(1, 0, 0x400, 0x8BC, 0);
		EV_CameraPos(1, 500, 130.39999f, 76.330002f, 287.26999f);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 0.5f, 1, 16);
		EV_SetFace(player, "FHAFF");
		EV_SerifPlay(722);
		EV_Msg(msgTbl_ev0040[TextLanguage][4]); //"\aThe Tornado's not powerful enough."
		EV_Wait(80);
		EV_ClrFace(player);
		EV_Wait(50);
		EV_SetFace(player, "FDEAADEFDEAAF");
		EV_SerifPlay(723);
		EV_Msg(msgTbl_ev0040[TextLanguage][5]); //"\aIf I'm gonna get that Egg Carrier,\nI"...
		EV_Wait(150);
		EV_ClrFace(player);
		EV_Wait(10);
		EV_SetFace(player, "EAAFF");
		EV_SerifPlay(724);
		EV_Msg(msgTbl_ev0040[TextLanguage][6]); //"\aIt needs a Chaos Emerald \nto work!"
		EV_Wait(80);
		EV_ClrFace(player);
		EV_Wait(20);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0130_miles, &MILES_TEXLIST, 1.0f, 0, 10);
		EV_SetAction(player, &action_m_m0131_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(40);
		EV_SetFace(player, "FFF");
		EV_SerifPlay(725);
		EV_Msg(msgTbl_ev0040[TextLanguage][7]); //"\aLooks like I'd better \nfind one, fas"...
		EV_Wait(40);
		EV_ClrFace(player);
		EV_Wait(72);
		EV_ClrAction(player);
		break;
	case 2:
		EV_SetPos(player, 126.23f, 72.639999f, 272.26001f);
		EV_SetAng(player, 0, 0, 0);
		EV_InitPlayer(0);
		player->twp->timer.b[3] &= ~4u;	//Reset Tails' tails.
		player->twp->timer.b[3] &= ~0x10u;
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}