#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

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
		EV_CameraAng(1, 0, 7936, 1024, 0);
		EV_CameraPos(1, 0, 125.05f, 93.459999f, 295.10001f);
		EV_CameraAng(1, 240, 5120, 1024, 0);
		EV_Wait(120);
		EV_CameraAng(1, 0, 53504, 63488, 0x8000);
		EV_CameraPos(1, 0, 124.11f, 101.86f, 279.35999f);
		EV_CameraPos(0, 200, 121.11f, 136.60001f, 294.45999f);
		EV_CameraAng(0, 200, 53504, 63488, 0);
		EV_Wait(120);
		EV_CameraPos(1, 0, 116.86f, 81.93f, 285.16f);
		EV_CameraAng(1, 0, 61440, 60160, 0);
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
		EV_CameraAng(1, 0, 6144, 46848, 65024);
		EV_CameraAng(1, 200, 6400, 45824, 65024);
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
		EV_CameraAng(1, 0, 3584, 46848, 65024);
		EV_CameraAng(0, 60, 3584, 43520, 65024);
		EV_SetAction(player, &action_m_m0125_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(player);
		EV_CameraPos(1, 0, 120.62f, 74.959999f, 288.12f);
		EV_CameraAng(1, 0, 1792, 62140, 0);
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
		EV_CameraAng(1, 0, 1024, 2236, 0);
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