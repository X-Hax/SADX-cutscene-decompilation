#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0013[] = {
	(char*)("AMY"), &AMY_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	(char*)("EGGROB"), &EGGROB_TEXLIST,
	0
};

void ev0013_s_beforetwinklepark(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		SetBankDir(78);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		seqVars[2] = 2; //SSVAR_TWINKLE_ELEVATOR
		EV_SetPos(player, 333.5f, 0.02f, 1550.8f);
		EV_SetAng(player, 0, 0xF900, 0);
		EV_CreatePlayer(2, AmyRose, 343.5f, 0.0099999998f, 1544.8f, 0, 0xFA00, 0);
		EV_Wait(1);
		amy = EV_GetPlayer(2);
		EV_SetPos(amy, 343.5f, 0.0099999998f, 1544.8f);
		EV_SetAng(amy, 0, 0xFA00, 0);
		EV_SetAction(amy, &action_a_a0121_amy, &AMY_TEXLIST, 1.0f, 1, 1);
		EV_SetAction(player, SONIC_ACTIONS[3], &SONIC_TEXLIST, 1.0f, 1, 1);
		EV_Wait(1);
		EV_FreeObject(&KOTORI);
		EV_Wait(1);
		KOTORI = SetEventBirdie0();
		EV_SetPos(KOTORI, amy->twp->pos.x + 5.0f,
			amy->twp->pos.y + 12.5f,
			amy->twp->pos.z + 5.5f);
		EV_SetAng(KOTORI, amy->twp->ang.x,
			0x4000 - amy->twp->ang.y,
			amy->twp->ang.z);
		EV_SetMode(KOTORI, 0);
		EV_SetAction(KOTORI, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 1);
		moveObjectOn(KOTORI, 2.5f, 5.0f, 2.0f, 900, amy);
		EV_Wait(1);
		EV_CameraPos(1, 0, 221.67f, 98.650002f, 1581.23f);
		EV_CameraAng(1, 0, 0xED00, 0xC000, 0);
		EV_MovePoint2(player, 333.5f, 0.02f, 1570.8f, 0.2f, 0.2f);
		EV_MovePoint2(amy, 343.5f, 0.0099999998f, 1564.8f, 0.2f, 0.2f);
		EV_CreatePlayer(7, EggrobForEvent0, 334.92999f, 12.0f, 1204.71f, 0, 0xF300, 0);
		EV_Wait(1);
		EV_CameraPos(1, 120, 182.03999f, 102.99f, 1606.22f);
		BGM_Play(MusicIDs_eggrobo);
		EV_Wait(30);
		zero = EV_GetPlayer(7);
		EV_MovePoint2(zero, 331.97f, 12.0f, 1473.61f, 0.5f, 0.0f);
		EV_CameraPos(1, 0, 336.47f, 12.25f, 1583.45f);
		EV_CameraAng(1, 0, 0xF000, 0, 0);
		EV_CameraPos(1, 120, 336.89999f, 24.530001f, 1605.22f);
		EV_ClrAction(player);
		EV_ClrAction(amy);
		EV_Wait(20);
		EV_LookObject(amy, player, 0.0f, 5.0f, 0.0f);
		EV_Wait(60);
		EV_CameraPos(1, 0, 336.5f, 5.5900002f, 1561.63f);
		EV_CameraAng(1, 0, 0, 0, 0);
		EV_LookFree(amy);
		EV_CameraPos(1, 30, 336.5f, 5.5900002f, 1450.63f);
		EV_Wait(40);
		EV_CameraPos(1, 0, 336.31f, 10.02f, 1330.0f);
		EV_CameraAng(1, 0, 0, 0, 0);
		EV_ClrFace(amy);
		EV_SetFace(amy, "MAM");
		EV_SerifPlay(870);
		EV_Msg(msgTbl_ev0013[TextLanguage][0]); //"\aAah, look!  \nEggman's Robot's on the"...
		EV_Wait(30);
		EV_SetAng(amy, 0, 0x8000, 0);
		EV_SetAng(KOTORI, 0, 0x8000, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 335.63f, 9.0699997f, 1591.34f);
		EV_CameraAng(1, 0, 0xF800, 0x300, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0004_sonic, &SONIC_TEXLIST, 0.2f, 0, 0);
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_CameraPos(1, 0, 345.94f, 4.8200002f, 1563.5f);
		EV_CameraAng(1, 0, 0X128, 0x51DC, 0);
		EV_CameraPos(1, 60, 343.5f, 4.9099998f, 1564.77f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_SetPos(amy, 348.60999f, 0.0f, 1598.77f);
		EV_SetAng(amy, 0, 0x5100, 0);
		EV_LookFree(amy);
		EV_LookPoint(amy, 363.10001f, 22.799999f, 1612.2f);
		EV_Wait(1);
		EV_FreeObject(&KOTORI);
		EV_Wait(1);
		KOTORI = SetEventBirdie0();
		EV_SetPos(KOTORI, amy->twp->pos.x,
			amy->twp->pos.y,
			amy->twp->pos.z);
		EV_SetAng(KOTORI, amy->twp->ang.x,
			0x4000 - amy->twp->ang.y,
			amy->twp->ang.z);
		EV_SetMode(KOTORI, 0);
		EV_SetAction(KOTORI, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 1);
		stopObjectAll();
		EV_Wait(1);
		moveObjectOn(KOTORI, 2.5f, 5.0f, 2.0f, 900, amy);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 0);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese) EV_SetFace(player, "DAEC");
		EV_SerifPlay(505);
		if (VoiceLanguage == Languages_English) EV_SetFace(player, "DAEC");
		EV_Msg((msgTbl_ev0013[TextLanguage])[1]); //"\aNo problem! He's just a chunk\nof che"...
		EV_Wait(90);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetPos(zero, 334.92999f, 0.0f, 1204.71f);
		EV_Wait(29);
		BGM_Stop();
		EventSe_Oneshot(1342, 0, 0, 0);
		EV_Wait(21);
		BGM_Play(MusicIDs_theamy);
		EV_LookPoint(amy, 366.57999f, 15.0f, 1587.15f);
		EV_SerifPlay(506);
		EV_Msg((msgTbl_ev0013[TextLanguage])[2]); //"\aWhoaaa!"
		EV_Wait(30);
		EV_SetAction(player, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.25f, 0, 16);
		EV_Wait(20);
		EV_ClrFace(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "E");
			break;
		case 1:
			EV_SetFace(player, "F");
			break;
		}
		EV_SerifPlay(507);
		EV_Msg((msgTbl_ev0013[TextLanguage])[3]); //"\aOh, now what?"
		EV_Wait(60);
		EV_MsgCls();
		EV_SetPos(zero, 334.92999f, 0.0f, 1204.71f);
		EV_Wait(1);
		EV_CameraPos(1, 0, 335.82001f, 5.7680001f, 1577.486f);
		EV_CameraAng(1, 0, 0x728, 0xA8C8, 0);
		EV_ClrAction(player);
		EV_CameraPos(0, 160, 302.37f, 5.9000001f, 1569.3f);
		EV_CameraAng(1, 160, 0xB28, 0xB1C8, 0);
		EV_SetAction(player, &action_s_s0017_sonic, &SONIC_TEXLIST, 1.0f, 0, 8);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAng(player, 0, 0x3000, 0);
		EV_LookPoint(player, 366.57999f, 15.0f, 1587.15f);
		EV_ClrFace(player);
		EV_SetFace(player, "E");
		EventSe_Oneshot(1341, 0, 0, 0);
		EV_SerifPlay(508);
		EV_Msg((msgTbl_ev0013[TextLanguage])[4]); //"\aHuh?"
		EV_Wait(1);
		EV_MsgClose();
		EV_Wait(40);
		stopObjectAll();
		EV_Wait(2);
		moveObjectOn(KOTORI, 2.5f, 5.0f, 2.0f, 900, amy);
		EV_Wait(1);
		EV_ClrFace(amy);
		EV_SetFace(amy, "MGAG");
		EV_SerifPlay(509);
		EV_Msg((msgTbl_ev0013[TextLanguage])[5]); //"\aLook here!   It says, \n'Cute couples"...
		EV_Wait(100);
		EV_ClrFace(player);
		EV_CameraPos(1, 60, 316.17001f, 4.5900002f, 1604.0699f);
		EV_CameraAng(1, 60, 0xFF28, 0xDBDC, 0);
		EV_LookFree(amy);
		EV_Wait(1);
		EV_LookObject(amy, player, 0.0f, 5.0f, 0.0f);
		EV_SetPos(zero, 334.92999f, 0.0f, 1204.71f);
		EV_Wait(1);
		EV_ClrFace(amy);
		EV_SetFace(amy, "EAG");
		EV_SerifPlay(510);
		EV_Msg((msgTbl_ev0013[TextLanguage])[6]); //"\aLet's go!"
		EV_Wait(90);
		EV_LookFree(amy);
		EV_MovePoint2(amy, 390.53f, 0.0f, 1610.5f, 0.0f, 0.0f);
		EV_Wait(30);
		EV_LookFree(player);
		EV_ClrFace(player);
		EV_SetFace(player, "FEFD");
		EV_MovePoint(player, 339.87f, 0.0099999998f, 1573.15f);
		EV_WaitMove(player);
		EV_SetAction(player, &action_s_s0017_sonic, &SONIC_TEXLIST, 0.25f, 0, 16);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 0, 16);
		EV_SerifPlay(511);
		EV_Msg((msgTbl_ev0013[TextLanguage])[7]); //"\aAmy!   Wai-wai-wai-wait!"
		EV_Wait(60);
		EV_WaitAction(player);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_WaitMove(amy);
		EV_Wait(20);
		stopObjectAll();
		EV_CameraPos(1, 0, 363.14001f, 4.0300002f, 1575.02f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		EV_Wait(20);
		EV_FreeObject(&KOTORI);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "CDC");
			break;
		case 1:
			EV_SetFace(player, "CBBCE");
			break;
		}
		EV_SerifPlay(0x200);
		EV_Msg((msgTbl_ev0013[TextLanguage])[8]); //"\aOh man... \nThat girl is such a pain!"
		EV_Wait(10);
		EV_SetAction(player, &action_s_s0013_sonic, &SONIC_TEXLIST, 0.25f, 0, 16);
		EV_Wait(1);
		EV_SerifWait();
		EV_WaitAction(player);
		EV_ClrFace(player);
		EV_RemovePlayer(2);
		EV_MsgClose();
		EV_MovePoint2(player, 393.89999f, 2.0f, 1619.3f, 2.0f, 2.0f);
		EV_WaitMove(player);
		EV_CameraTargetFree();
		EV_Wait(1);
		EV_Wait(60);
		EV_SetPos(player, 400.22f, 50.0f, 1649.67f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 394.60999f, 60.75f, 1600.67f);
		EV_CameraAng(1, 0, 0, 0x8000, 0);
		EV_CameraPos(0, 100, 402.0f, 60.5f, 1710.0f);
		EV_CameraPos(1, 0, 459.19f, 174.42f, 1611.12f);
		EV_CameraAng(1, 0, 0xDA00, 0x8000, 0);
		EV_ClrAction(player);
		EV_PlayPad(0, &E0013SS);
		EV_Wait(100);
		EV_CameraPos(1, 0, 456.0f, 66.75f, 1773.47f);
		EV_CameraAng(1, 0, 0, 0x4000, 0);
		EV_CameraPos(0, 40, 553.09998f, 70.5f, 1771.27f);
		EV_Wait(70);
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		stopObjectAll();
		EV_InitPlayer(0);
		EventSe_Close();
		EV_RemovePlayer(2);
		EV_RemovePlayer(7);
		EV_FreeObject(&KOTORI);
		if(KURAYAMI){
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		seqVars[2] = 0; //SSVAR_TWINKLE_ELEVATOR
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}