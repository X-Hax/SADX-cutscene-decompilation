#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0102[] = { 0 };

void ev0102_s_ecaftertransforming(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CanselOn();
		EV_Wait(4);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CreatePlayer(2, MilesTalesPrower, -3.1099999f, 659.20001f, 29.84f, 0, 0, 0);
		BGM_Play(MusicIDs_egcarer1);
		EV_SetPos(player, 6.5599999f, 659.16998f, 40.52f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(1);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_LookPoint(player, 6.5599999f, 700.16998f, 50.52f);
		EV_CameraPos(1, 0, -3.1700001f, 661.82001f, 37.330002f);
		EV_CameraAng(1, 0, 0x13D7, 0x296, 0x2F);
		tails = EV_GetPlayer(2);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(tails, "ICDEE");
			break;
		case 1:
			EV_SetFace(tails, "ICDE");
			break;
		}
		EV_SerifPlay(1519);
		EV_Msg(msgTbl_ev0102[TextLanguage][0]); //"\aAhhh, wow!  It's changed shape.  \nDi"...
		EV_Wait(60);
		EV_LookPoint(tails, 6.5599999f, 659.16998f, 40.52f);
		EV_CameraPos(1, 90, 2.1800001f, 661.09003f, 59.299999f);
		EV_CameraAng(1, 90, 0xED7, 0x296, 0x2F);
		EV_LookObject(player, tails, 0.0f, 3.0f, 0.0f);
		EV_Wait(60);
		EV_SetFace(player, "T");
		EV_Wait(60);
		EV_LookPoint(player, 6.5599999f, 700.16998f, 50.52f);
		EV_SetFace(player, "FDDE");
		EV_SerifPlay(1520);
		EV_MsgW(60, msgTbl_ev0102[TextLanguage][1]); //"\aDarn!   This makes it harder for us "...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(tails, "OCCC");
		EV_SerifPlay(1521);
		EV_MsgW(60, msgTbl_ev0102[TextLanguage][2]); //"\aI hate it when he doesn't listen..."
		EV_ClrFace(tails);
		EV_CameraPos(1, 0, -287.82001f, 527.06f, -2888.0f);
		EV_CameraAng(1, 0, 0xFF4C, 0x88EC, 0xD00);
		EV_CameraPos(1, 180, 318.10999f, 937.39001f, -887.25f);
		EV_CameraAng(1, 180, 0xFF4C, 0x88EC, 0xD00);
		EV_SerifPlay(1522);
		EV_MsgW(60, msgTbl_ev0102[TextLanguage][3]); //"\aHa ha ha ha ha!   \nI bet you weren't"...
		EV_SerifPlay(1523);
		EV_MsgW(90, msgTbl_ev0102[TextLanguage][4]); //"\aThe only way you can get to me is \nt"...
		EV_CameraPos(1, 0, 318.10999f, 937.39001f, -887.25f);
		EV_CameraAng(1, 0, 0xFF4C, 0x88EC, 0xD00);
		EV_CameraPos(1, 240, -521.0f, 887.57001f, -554.83002f);
		EV_CameraAng(1, 240, 0xFF4C, 0x88EC, 0);
		EV_SerifPlay(1524);
		EV_MsgW(60, msgTbl_ev0102[TextLanguage][5]); //"\aI doubt if you can figure this one ou"...
		EV_SerifPlay(1525);
		EV_MsgW(60, msgTbl_ev0102[TextLanguage][6]); //"\aHa ha ha ha ha ha ha!"
		EV_LookFree(tails);
		EV_CameraPos(1, 0, 2.1800001f, 661.09003f, 59.299999f);
		EV_CameraAng(1, 0, 0xED7, 0x296, 0x2F);
		EV_SetAction(tails, &action_m_m0127_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 15);
		EV_SetFace(player, "FFPP");
		EV_SerifPlay(1526);
		EV_Msg(msgTbl_ev0102[TextLanguage][7]); //"\aOh yeah!  Well, I'll show YOU! \nBrin"...
		EV_LookFree(player);
		EV_SetAction(player, &action_s_s0065_sonic, &SONIC_TEXLIST, 0.5f, 0, 16);
		EV_SetAction(player, &action_s_s0067_sonic, &SONIC_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_LookObject(tails, player, 0.0f, 3.0f, 0.0f);
		EV_SetFace(tails, "J");
		EV_Wait(60);
		EV_LookFree(tails);
		EV_SetFace(tails, "N");
		EV_SerifWait();
		EV_CameraPos(0, 80, 14.0f, 661.0f, 27.83f);
		EV_CameraAng(0, 80, 0xDD7, 0x7596, 0);
		EV_ClrFace(player);
		EV_LookPoint(player, 6.5599999f, 700.16998f, 50.52f);
		EV_MsgClose();
		EV_Wait(60);
		break;
	case 2:
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}