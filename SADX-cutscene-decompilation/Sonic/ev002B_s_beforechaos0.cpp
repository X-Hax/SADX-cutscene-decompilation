#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"


void ev002B_s_beforechaos0(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* ev_chaos0;

	ObjectMaster* PL_NOR_01 = 0;
	ObjectMaster* PL_NOR_02 = 0;
	ObjectMaster* PL_NOR_03 = 0;
	ObjectMaster* PL_NOR_04 = 0;
	ObjectMaster* PL_NOR_05 = 0;
	ObjectMaster* PL_NOR_07 = 0;
	ObjectMaster* PL_NOR_08 = 0;
	ObjectMaster* TAMA_01 = 0;
	ObjectMaster* TAMA_02 = 0;
	ObjectMaster* TAMA_03 = 0;
	ObjectMaster* TAMA_04 = 0;
	ObjectMaster* TAMA_05 = 0;
	ObjectMaster* TAMA_06 = 0;
	ObjectMaster* TAMA_07 = 0;
	ObjectMaster* TAMA_08 = 0;
	ObjectMaster* TAMA_09 = 0;
	ObjectMaster* TAMA_10 = 0;
	ObjectMaster* TAMA_11 = 0;
	ObjectMaster* TAMA_12 = 0;
	ObjectMaster* TAMA_13 = 0;
	ObjectMaster* TAMA_14 = 0;
	ObjectMaster* TAMA_15 = 0;
	ObjectMaster* TAMA_16 = 0;
	ObjectMaster* TAMA_17 = 0;
	ObjectMaster* TAMA_18 = 0;
	ObjectMaster* TAMA_19 = 0;
	ObjectMaster* TAMA_20 = 0;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		pause_flg = 1;
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(73);
		EV_SetPos(player, 411.70999f, 1.14f, 398.54999f);
		EV_SetAng(player, 0, 26561, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		CreateChaos0(271.60999f, 490.14999f, 180.0f, 0, 0x4000, 0, 0); // Event Actor
		EV_Wait(1);
		StgChaos0CtrlOn(407.91f, 1.0f, 432.54999f, 0, 0x4000, 0, 60); // Boss
		EV_CreateObject(&PL_NOR_01, 339.60001f, 10.5895f, 329.38f, 243, 38863, 65374);
		EV_CreateObject(&PL_NOR_02, 336.45999f, 9.4595003f, 380.69f, 0, 39499, 0);
		EV_CreateObject(&PL_NOR_03, 279.14999f, 9.4595003f, 399.42999f, 259, 35809, 65485);
		EV_CreateObject(&PL_NOR_04, 301.14999f, 9.4595003f, 398.41f, 0, 35044, 0);
		EV_CreateObject(&PL_NOR_05, 236.89f, 11.0395f, 330.35999f, 264, 29292, 52);
		EV_CreateObject(&PL_NOR_07, 339.60001f, 10.5895f, 329.38f, 243, 38863, 65374);
		EV_CreateObject(&PL_NOR_08, 336.45999f, 9.4595003f, 380.69f, 0, 39499, 0);
		EV_CreateObject(&TAMA_01, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_02, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_03, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_04, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_05, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_06, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_07, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_08, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_09, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_10, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_11, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_12, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_13, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_14, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_15, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_16, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_17, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_18, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_19, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_CreateObject(&TAMA_20, 268.0f, 11.7f, 300.0f, 0, 0x4000, 0);
		EV_Wait(1);
		EV_SetMode(PL_NOR_01, 0);
		EV_SetMode(PL_NOR_02, 0);
		EV_SetMode(PL_NOR_03, 0);
		EV_SetMode(PL_NOR_04, 0);
		EV_SetMode(PL_NOR_05, 0);
		EV_SetMode(PL_NOR_07, 0);
		EV_SetMode(PL_NOR_08, 0);
		EV_SetMode(TAMA_01, 0);
		EV_SetMode(TAMA_02, 0);
		EV_SetMode(TAMA_03, 0);
		EV_SetMode(TAMA_04, 0);
		EV_SetMode(TAMA_05, 0);
		EV_SetMode(TAMA_06, 0);
		EV_SetMode(TAMA_07, 0);
		EV_SetMode(TAMA_08, 0);
		EV_SetMode(TAMA_09, 0);
		EV_SetMode(TAMA_10, 0);
		EV_SetMode(TAMA_11, 0);
		EV_SetMode(TAMA_12, 0);
		EV_SetMode(TAMA_13, 0);
		EV_SetMode(TAMA_14, 0);
		EV_SetMode(TAMA_15, 0);
		EV_SetMode(TAMA_16, 0);
		EV_SetMode(TAMA_17, 0);
		EV_SetMode(TAMA_18, 0);
		EV_SetMode(TAMA_19, 0);
		EV_SetMode(TAMA_20, 0);
		EV_Wait(1);
		EV_SetPos(PL_NOR_01, 379.45999f, 9.4595003f, 353.04001f);
		EV_SetAng(PL_NOR_01, 0, 39173, 0);
		EV_SetPos(PL_NOR_02, 313.10001f, 9.4595003f, 408.84f);
		EV_SetAng(PL_NOR_02, 0, 39499, 0);
		EV_SetPos(PL_NOR_03, 275.89001f, 9.4595003f, 423.5f);
		EV_SetAng(PL_NOR_03, 0, 32793, 0);
		EV_SetPos(PL_NOR_04, 256.0f, 9.4595003f, 401.10999f);
		EV_SetAng(PL_NOR_04, 0, 31664, 0);
		EV_SetPos(PL_NOR_05, 220.3f, 9.4595003f, 393.95001f);
		EV_SetAng(PL_NOR_05, 0, 29803, 0);
		EV_SetPos(PL_NOR_07, 330.45001f, 9.4595003f, 372.67999f);
		EV_SetAng(PL_NOR_07, 243, 36007, 65374);
		EV_SetPos(PL_NOR_08, 196.91f, 9.4595003f, 376.54001f);
		EV_SetAng(PL_NOR_08, 259, 27699, 173);
		EV_Wait(1);
		EV_SetAction(PL_NOR_01, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_02, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_03, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_04, &action_mp_10002_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_05, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_07, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_08, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_Wait(1);
		EV_SetShadow(PL_NOR_01, 0.80000001f);
		EV_SetShadow(PL_NOR_02, 0.80000001f);
		EV_SetShadow(PL_NOR_03, 0.80000001f);
		EV_SetShadow(PL_NOR_04, 0.80000001f);
		EV_SetShadow(PL_NOR_05, 0.80000001f);
		EV_SetShadow(PL_NOR_07, 0.80000001f);
		EV_SetShadow(PL_NOR_08, 0.80000001f);
		pause_flg = 0;
		EV_CameraPerspective(0, 1, 10923);
		EV_CameraPos(0, 0, 285.38f, 4.98f, 483.48999f);
		EV_CameraAng(0, 0, 4169, 2560, 65024);
		EV_CameraPerspective(0, 100, 14564);
		EV_CameraPos(0, 80, 286.29001f, 3.76f, 487.12f);
		EV_CameraAng(0, 80, 5222, 2560, 65024);
		EV_Wait(70);
		Jump2Chaos0(271.60999f, 280.0f, 202.0f, 30.0f, 1);
		EV_Wait(1);
		Jump2Chaos0(271.60999f, 58.849998f, 227.0f, 30.0f, 90);
		EV_CameraPerspective(0, 1, 7282);
		EV_CameraPos(0, 0, 289.04999f, 301.38f, 201.36f);
		EV_CameraAng(0, 0, 52224, 24320, 0);
		EV_CameraPos(0, 50, 298.51001f, 344.44f, 192.35001f);
		EV_Wait(15);
		BGM_Play(MusicIDs_evtbgm01);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, 282.10999f, 49.0f, 246.92999f);
		EV_CameraAng(0, 0, 12327, 0x2000, 0);
		EV_CameraPos(0, 60, 283.95001f, 53.119999f, 248.77f);
		EV_CameraAng(0, 60, 6144, 0x2000, 0);
		EV_Wait(46);
		dsPlay_oneshot_v(1342, 0, 0, 100, 271.60999f, 58.849998f, 227.0f);
		EV_CameraAng(0, 3, 5968, 0x2000, 0);
		EV_Wait(1);
		RumbleA(0, 1);
		EV_Wait(2);
		EV_CameraAng(0, 2, 6144, 0x2000, 0);
		EV_Wait(1);
		EV_CameraAng(0, 1, 5888, 0x2000, 0);
		EV_Wait(1);
		EV_CameraAng(0, 2, 6144, 0x2000, 0);
		EV_Wait(1);
		EV_CameraAng(0, 1, 5888, 0x2000, 0);
		EV_Wait(1);
		EV_CameraAng(0, 2, 6144, 0x2000, 0);
		EV_Wait(1);
		EV_CameraAng(0, 1, 5968, 0x2000, 0);
		EV_Wait(1);
		EV_CameraAng(0, 2, 6144, 0x2000, 0);
		EV_Wait(1);
		EV_CameraPos(0, 90, 278.66f, 58.119999f, 243.48f);
		EV_Wait(60);
		EV_CameraPerspective(0, 1, 5461);
		EV_CameraPos(0, 0, 210.2f, 83.519997f, 210.38f);
		EV_CameraAng(0, 0, 60160, 33024, 0);
		EV_CameraPos(0, 160, 324.09f, 83.519997f, 206.2f);
		EV_ClrAction(PL_NOR_08);
		EV_SetAction(PL_NOR_08, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		moveObject(PL_NOR_08, 196.91f, 9.4595003f, 376.54001f, 221.05f, 10.5795f, 334.09f, 30);
		QueueSound_XYZ(1339, (EntityData1*)0xCB80001, 1, 100, 30, 221.05f, 10.5795f, 334.09f);
		EV_Wait(10);
		EV_Msg((msgTbl_ev002B[TextLanguage])[0]); //"\aYou are completely surrounded!"
		EV_SerifPlay(404);
		EV_SetAction(PL_NOR_05, &action_mp_10011_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 6);
		EV_SetAction(PL_NOR_05, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_ClrAction(PL_NOR_03);
		EV_SetAction(PL_NOR_03, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		moveObject(PL_NOR_03, 275.89001f, 9.4595003f, 423.5f, 280.98999f, 9.4595003f, 381.94f, 50);
		QueueSound_XYZ(1339, (EntityData1*)0xCB80002, 1, 120, 50, 280.98999f, 9.4595003f, 381.94f);
		EV_SetAction(PL_NOR_08, &action_mp_10003_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 2);
		EV_SetAction(PL_NOR_08, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		dsPlay_oneshot_v(1343, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(20);
		stopObject(PL_NOR_08);
		EV_SetAction(PL_NOR_04, &action_mp_10011_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 6);
		EV_SetAction(PL_NOR_04, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		dsPlay_oneshot_v(1343, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(25);
		EV_SetAction(PL_NOR_02, &action_mp_10011_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 6);
		EV_SetAction(PL_NOR_02, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_03, &action_mp_10003_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 2);
		EV_SetAction(PL_NOR_03, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_Msg((msgTbl_ev002B[TextLanguage])[1]); //"\aSurrender yourself!"
		EV_SerifPlay(405);
		moveObject(PL_NOR_07, 330.45001f, 9.4595003f, 372.67999f, 318.64999f, 10.679501f, 339.67001f, 45);
		QueueSound_XYZ(1339, (EntityData1*)0xCB80003, 1, 100, 45, 318.64999f, 10.679501f, 339.67001f);
		dsPlay_oneshot_v(1343, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(15);
		EV_SetAction(PL_NOR_04, &action_mp_10003_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 2);
		EV_SetAction(PL_NOR_04, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		stopObject(PL_NOR_03);
		dsPlay_oneshot_v(1343, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(20);
		EV_SetAction(PL_NOR_07, &action_mp_10003_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 2);
		EV_SetAction(PL_NOR_07, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		moveObject(PL_NOR_01, 379.45999f, 9.4595003f, 353.04001f, 353.32999f, 9.4595003f, 348.79999f, 30);
		QueueSound_XYZ(1339, (EntityData1*)0xCB80004, 1, 80, 30, 353.32999f, 9.4595003f, 348.79999f);
		dsPlay_oneshot_v(1343, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(10);
		stopObject(PL_NOR_07);
		EV_Wait(10);
		dsPlay_oneshot_v(1343, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_CameraPos(0, 100, 331.09f, 83.519997f, 206.02f);
		EV_SetAction(PL_NOR_01, &action_mp_10011_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 2);
		EV_SetAction(PL_NOR_01, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_Wait(10);
		dsPlay_oneshot_v(1343, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		stopObject(PL_NOR_01);
		EV_Wait(10);
		EV_SerifStop();
		EV_MsgClose();
		EV_SerifStop();
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 10923);
		EV_CameraPos(0, 0, 264.70001f, 6.6199999f, 408.23999f);
		EV_CameraAng(0, 0, 1787, 8862, 0);
		EV_Wait(1);
		EV_CameraPerspective(0, 100, 12561);
		EV_CameraPos(0, 90, 331.79001f, 6.8800001f, 347.37f);
		EV_Wait(90);
		EV_CameraPos(0, 60, 335.09f, 6.8800001f, 343.62f);
		EV_Wait(30);
		Jump2Chaos0(268.0f, 3.1499996f, 300.0f, 120.0f, 60);
		ev_chaos0 = GetChaos0();
		EV_CameraTargetObj(1, 30, ev_chaos0, 0.0f, 2.0f, 0.0f, 0);
		EV_CameraPos(0, 60, 293.88f, 9.3900003f, 277.17001f);
		EV_CameraPerspective(0, 60, 9102);
		EV_SetAng(PL_NOR_01, 0, 42240, 0);
		EV_SetAng(PL_NOR_05, 0, 28672, 0);
		EV_SetAng(PL_NOR_07, 259, 42496, 173);
		EV_SetAng(PL_NOR_08, 259, 23808, 173);
		EV_SetAction(PL_NOR_04, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_Wait(60);
		EV_CameraTargetFree();
		EV_CameraAng(0, 15, 232, 26140, 0);
		dsPlay_oneshot_v(1342, 0, 0, 100, 268.0f, 3.1499996f, 300.0f);
		RumbleA(0, 1);
		EV_Wait(15);
		EV_CameraPos(0, 100, 296.70999f, 11.05f, 253.35001f);
		EV_CameraAng(0, 100, 708, 28456, 0);
		EV_Wait(20);
		EV_Msg((msgTbl_ev002B[TextLanguage])[2]); //"\aLock on target, men!   \nReady?... FIRE!"
		EV_SerifPlay(407);
		EV_Wait(22);
		EV_SetAction(PL_NOR_04, &action_mp_10003_POLICE, &texlist_mp_10000_POLICE, 1.0, 1, 0);
		EV_SetAction(PL_NOR_04, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0, 1, 0);
		dsPlay_oneshot_v(1343, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(57);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 7282);
		EV_CameraTargetObj(1, 0, ev_chaos0, 0.0f, -5.0f, 0.0f, 64768);
		EV_CameraChaseRM(0, 100, ev_chaos0, 15.0f, 0, 10923, 0, 160.0f, 0, -10922, 0, 100.0f);
		EV_SetAction(PL_NOR_01, &action_mp_10005_POLICE, &texlist_mp_10000_POLICE, 2.0f, 1, 0);
		EV_SetAction(PL_NOR_01, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		effect_create2(PL_NOR_01, 0, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(0, 0.18000001f, 0.18000001f);
		EV_SetAction(PL_NOR_07, &action_mp_10005_POLICE, &texlist_mp_10000_POLICE, 2.0f, 1, 0);
		dsPlay_oneshot_v(1341, 0, 0, 280, 9.4595003f, 381.94f, 100.0f);
		effect_create2(PL_NOR_07, 1, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(1, 0.18000001f, 0.18000001f);
		EV_Wait(5);
		EV_SetAction(PL_NOR_01, &action_mp_10013_POLICE, &texlist_mp_10000_POLICE, 2.0f, 1, 0);
		effect_create2(PL_NOR_01, 2, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(2, 0.18000001f, 0.18000001f);
		EV_Wait(5);
		EV_SetAction(PL_NOR_02, &action_mp_10013_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		dsPlay_oneshot_v(1341, 1, 0, 280, 9.4595003f, 381.94f, 100.0f);
		effect_create2(PL_NOR_02, 3, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(3, 0.18000001f, 0.18000001f);
		EV_Wait(5);
		EV_SetAction(PL_NOR_03, &action_mp_10005_POLICE, &texlist_mp_10000_POLICE, 1.8f, 1, 0);
		dsPlay_oneshot_v(1341, 2, 0, 280, 9.4595003f, 381.94f, 100.0f);
		effect_create2(PL_NOR_03, 4, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(4, 0.18000001f, 0.18000001f);
		EV_Wait(5);
		EV_SetAction(PL_NOR_04, &action_mp_10005_POLICE, &texlist_mp_10000_POLICE, 1.5f, 1, 0);
		effect_create2(PL_NOR_04, 5, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(5, 0.18000001f, 0.18000001f);
		EV_Wait(5);
		EV_SetAction(PL_NOR_05, &action_mp_10013_POLICE, &texlist_mp_10000_POLICE, 4.0f, 1, 0);
		dsPlay_oneshot_v(1341, 3, 0, 280, 9.4595003f, 381.94f, 100.0f);
		effect_create2(PL_NOR_05, 6, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(6, 0.18000001f, 0.18000001f);
		EV_Wait(5);
		EV_SetAction(PL_NOR_08, &action_mp_10005_POLICE, &texlist_mp_10000_POLICE, 2.5f, 1, 0);
		EV_SerifStop();
		effect_create2(PL_NOR_08, 7, 9.1999998f, 0.75f, 1.0f, &efname_eff_regular);
		effect_scl(7, 0.18000001f, 0.18000001f);
		EV_Wait(5);
		dsPlay_oneshot_v(1341, 4, 0, 280, 9.4595003f, 381.94f, 100.0f);
		EV_Wait(10);
		dsPlay_oneshot_v(1341, 5, 0, 280, 9.4595003f, 381.94f, 100.0f);
		EV_Wait(10);
		EV_Wait(5);
		dsPlay_oneshot_v(1341, 6, 0, 280, 9.4595003f, 381.94f, 100.0f);
		EV_Wait(10);
		dsPlay_oneshot_v(1341, 7, 0, 280, 9.4595003f, 381.94f, 100.0f);
		EV_Wait(10);
		EV_Wait(5);
		dsPlay_oneshot_v(1341, 8, 0, 280, 9.4595003f, 381.94f, 100.0f);
		EV_Wait(10);
		dsPlay_oneshot_v(1341, 9, 0, 280, 9.4595003f, 381.94f, 100.0f);
		EV_Wait(5);
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_Wait(1);
		effect_delete(0);
		effect_delete(1);
		effect_delete(2);
		effect_delete(3);
		effect_delete(4);
		effect_delete(5);
		effect_delete(6);
		effect_delete(7);
		DeleteChaos0(); //Delete the event actor
		StgChaos0SetPos(268.0f, 3.1499996f, 300.0f); //Use the actual boss now
		StgChaos0SetAng(0, 0x4000, 0);
		EV_CameraPos(0, 0, 250.48f, 7.27f, 344.57999f);
		EV_CameraAng(0, 0, 922, 61130, 2304);
		EV_Wait(10);
		EV_CameraPerspective(0, 1, 5461);
		EV_CameraPos(0, 0, 287.23999f, 7.8299999f, 327.20999f);
		EV_CameraAng(0, 0, 1434, 7624, 63744);
		EV_Wait(10);
		EV_CameraPos(0, 0, 269.37f, 21.02f, 328.67999f);
		EV_CameraAng(0, 0, 62618, 456, 63488);
		EV_CameraPos(0, 30, 269.04001f, 18.809999f, 320.98999f);
		EV_Wait(30);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 271.04999f, 4.73f, 313.5f);
		EV_CameraAng(0, 0, 64768, 3840, 0);
		EV_CameraPos(0, 90, 273.92001f, 5.3099999f, 320.94f);
		EV_SetPos(TAMA_01, 267.0f, 2.51f, 303.0f);
		EV_SetAng(TAMA_01, 0, 45056, 0);
		EV_SetPos(TAMA_02, 267.0f, 2.51f, 304.0f);
		EV_SetAng(TAMA_02, 0, 40960, 0);
		EV_SetPos(TAMA_03, 268.0f, 2.51f, 301.5f);
		EV_SetAng(TAMA_03, 0, 47360, 0);
		EV_SetPos(TAMA_04, 268.0f, 2.51f, 302.5f);
		EV_SetAng(TAMA_04, 0, 46336, 0);
		EV_SetPos(TAMA_05, 267.5f, 2.51f, 301.0f);
		EV_SetAng(TAMA_05, 0, 49152, 0);
		EV_SetPos(TAMA_06, 268.10001f, 2.51f, 303.0f);
		EV_SetAng(TAMA_06, 0, 51200, 0);
		EV_SetPos(TAMA_07, 268.14999f, 2.51f, 302.0f);
		EV_SetAng(TAMA_07, 0, 51712, 0);
		EV_SetPos(TAMA_08, 268.20001f, 2.51f, 301.0f);
		EV_SetAng(TAMA_08, 0, 53248, 0);
		EV_SetPos(TAMA_09, 268.29999f, 2.51f, 300.0f);
		EV_SetAng(TAMA_09, 0, 51456, 0);
		EV_SetPos(TAMA_10, 268.5f, 2.51f, 300.0f);
		EV_SetAng(TAMA_10, 0, 49152, 0);
		EV_SetPos(TAMA_11, 272.0f, 2.51f, 307.0f);
		EV_SetAng(TAMA_11, 0, 45056, 0);
		EV_SetPos(TAMA_12, 271.5f, 2.51f, 306.0f);
		EV_SetAng(TAMA_12, 0, 40960, 0);
		EV_SetPos(TAMA_13, 271.0f, 2.51f, 305.5f);
		EV_SetAng(TAMA_13, 0, 53248, 0);
		EV_SetPos(TAMA_14, 271.0f, 2.51f, 307.0f);
		EV_SetAng(TAMA_14, 0, 46336, 0);
		EV_SetPos(TAMA_15, 272.0f, 2.51f, 305.0f);
		EV_SetAng(TAMA_15, 0, 49152, 0);
		EV_SetPos(TAMA_16, 264.0f, 2.51f, 308.0f);
		EV_SetAng(TAMA_16, 0, 51200, 0);
		EV_SetPos(TAMA_17, 267.0f, 2.51f, 307.0f);
		EV_SetAng(TAMA_17, 0, 51712, 0);
		EV_SetPos(TAMA_18, 264.5f, 2.51f, 306.0f);
		EV_SetAng(TAMA_18, 0, 53248, 0);
		EV_SetPos(TAMA_19, 264.0f, 2.51f, 306.0f);
		EV_SetAng(TAMA_19, 0, 51456, 0);
		EV_SetPos(TAMA_20, 264.0f, 2.51f, 305.5f);
		EV_SetAng(TAMA_20, 0, 49152, 0);
		EV_FreeObject(&PL_NOR_01);
		EV_FreeObject(&PL_NOR_05);
		EV_SetAction(TAMA_14, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_18, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_19, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_09, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_02, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_Wait(5);
		EV_SetAction(TAMA_08, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_04, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_Wait(2);
		EV_SetAction(TAMA_16, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_17, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_05, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(3);
		EV_SetAction(TAMA_12, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_13, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_03, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_07, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(2);
		EV_SetAction(TAMA_06, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_15, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_11, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(5);
		EV_SetAction(TAMA_20, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_01, &action_yak_02_bullet, &texlist_bullet, 1.3f, 1, 0);
		EV_SetAction(TAMA_10, &action_yak_04_bullet, &texlist_bullet, 1.3f, 1, 0);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(2);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(3);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(2);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(3);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(3);
		dsPlay_oneshot_v(1344, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(2);
		dsPlay_oneshot_v(1344, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(3);
		dsPlay_oneshot_v(1344, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(2);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(3);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(2);
		dsPlay_oneshot_v(1344, 0, 0, 110, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(2);
		dsPlay_oneshot_v(1344, 0, 0, 100, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(3);
		dsPlay_oneshot_v(1344, 0, 0, 120, 280.98999f, 9.4595003f, 381.94f);
		EV_Wait(5);
		EV_Wait(40);
		EV_FreeObject(&TAMA_01);
		EV_FreeObject(&TAMA_02);
		EV_FreeObject(&TAMA_03);
		EV_FreeObject(&TAMA_04);
		EV_FreeObject(&TAMA_05);
		EV_FreeObject(&TAMA_06);
		EV_FreeObject(&TAMA_07);
		EV_FreeObject(&TAMA_08);
		EV_FreeObject(&TAMA_09);
		EV_FreeObject(&TAMA_10);
		EV_FreeObject(&TAMA_11);
		EV_FreeObject(&TAMA_12);
		EV_FreeObject(&TAMA_13);
		EV_FreeObject(&TAMA_14);
		EV_FreeObject(&TAMA_15);
		EV_FreeObject(&TAMA_16);
		EV_FreeObject(&TAMA_17);
		EV_FreeObject(&TAMA_18);
		EV_FreeObject(&TAMA_19);
		EV_FreeObject(&TAMA_20);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 267.59f, 4.4499998f, 349.87f);
		EV_CameraAng(0, 0, 2112, 35040, 0);
		EV_CameraPos(0, 180, 262.64001f, 1.78f, 327.48001f);
		EV_CameraAng(0, 180, 2112, 35040, 0);
		EV_SetAction(PL_NOR_02, &action_mp_10012_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_04, &action_mp_10004_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetAction(PL_NOR_03, &action_mp_10016_POLICE, &texlist_mp_10000_POLICE, 1.0f, 0, 6);
		EV_SetAction(PL_NOR_03, &action_mp_10015_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 6);
		QueueSound_XYZ(1340, (EntityData1*)0xCB80005, 1, 80, 60, 280.98999f, 9.4595003f, 381.94f);
		EV_Msg((msgTbl_ev002B[TextLanguage])[3]); //"\aOh no!   \nOur weapons are useless!"
		EV_Wait(10);
		EV_SerifPlay(408);
		EV_Wait(20);
		moveObject(PL_NOR_03, 280.98999f, 9.4595003f, 382.94f, 280.98999f, 9.4595003f, 393.0f, 45);
		EV_ClrAction(PL_NOR_02);
		EV_SetAction(PL_NOR_02, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.2f, 1, 0);
		EV_SetPath(PL_NOR_02, &epathtag_EV002B_02NR, 0.1f, 0);
		EV_ClrAction(PL_NOR_04);
		EV_SetAction(PL_NOR_04, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 0);
		EV_SetPath(PL_NOR_04, &epathtag_EV002B_04NR, 0.2f, 0);
		EV_SerifPlay(409);
		EV_Wait(25);
		dsStop_id(213385221);
		EV_Msg((msgTbl_ev002B[TextLanguage])[4]); //"\aRetreat!   All personnel, fall back!"
		EV_Wait(20);
		EV_ClrPath(PL_NOR_04);
		EV_FreeObject(&PL_NOR_04);
		EV_ClrAction(PL_NOR_07);
		EV_SetAction(PL_NOR_07, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.2f, 1, 0);
		EV_SetPath(PL_NOR_07, &epathtag_EV002B_07NR, 0.1f, 0);
		stopObject(PL_NOR_03);
		EV_SetAction(PL_NOR_03, &action_mp_10018_POLICE, &texlist_mp_10000_POLICE, 2.0f, 0, 6);
		EV_SetAction(PL_NOR_03, &action_mp_10018_POLICE, &texlist_mp_10000_POLICE, 2.0f, 0, 6);
		EV_SetAction(PL_NOR_03, &action_mp_10015_POLICE, &texlist_mp_10000_POLICE, 1.0f, 1, 6);
		EV_Wait(30);
		dsPlay_oneshot_v(1341, 0, 0, 280, 9.4595003f, 381.94f, 100.0f);
		effect_create2(PL_NOR_03, 0, 9.1999998f, 4.25f, 1.0f, &efname_eff_regular);
		effect_scl(0, 0.18000001f, 0.18000001f);
		EV_Wait(10);
		effect_delete(0);
		dsPlay_oneshot_v(1341, 1, 0, 280, 9.4595003f, 381.94f, 100.0f);
		effect_create2(PL_NOR_03, 1, 9.1999998f, 4.25f, 1.0f, &efname_eff_regular);
		effect_scl(1, 0.18000001f, 0.18000001f);
		EV_CameraPos(0, 50, 248.06f, 8.0900002f, 261.60999f);
		EV_CameraAng(0, 50, 1088, 35040, 0);
		EV_ClrAction(PL_NOR_08);
		EV_SetAction(PL_NOR_08, &action_mp_10001_POLICE, &texlist_mp_10000_POLICE, 1.2f, 1, 0);
		EV_SetPath(PL_NOR_08, &epathtag_EV002B_08NR, 0.1f, 0);
		EV_Wait(20);
		effect_delete(1);
		moveObject(PL_NOR_03, 280.98999f, 9.4595003f, 393.0f, 280.98999f, 9.4595003f, 403.0f, 20);
		EV_Wait(20);
		EV_SerifStop();
		EV_MsgClose();
		EV_ClrPath(PL_NOR_02);
		EV_FreeObject(&PL_NOR_02);
		EV_ClrPath(PL_NOR_07);
		EV_FreeObject(&PL_NOR_07);
		stopObject(PL_NOR_03);
		EV_SetAction(PL_NOR_03, &action_mp_10016_POLICE, &texlist_mp_10000_POLICE, 2.0f, 1, 6);
		EV_CameraPos(0, 90, 246.34f, 7.25f, 253.84f);
		EV_Wait(30);
		EV_ClrPath(PL_NOR_08);
		EV_FreeObject(&PL_NOR_08);
		EV_SetPos(player, 289.66f, 50.0f, 435.25f);
		EV_SetAng(player, 0, 33723, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 279.76001f, 19.530001f, 433.17999f);
		EV_CameraAng(0, 0, 65072, 1101, 0);
		EV_FreeObject(&PL_NOR_03);
		EV_SerifPlay(406);
		EV_CameraPos(0, 35, 283.16f, 21.459999f, 465.94f);
		EV_Wait(30);
		EV_SerifPlay(410);
		EV_Msg((msgTbl_ev002B[TextLanguage])[5]); // "\aAh, yeah!  This could be fun!"
		EV_CameraPos(0, 60, 283.89001f, 21.639999f, 473.89999f);
		EV_ClrFace(player);
		EV_SetFace(player, "EEGE");
		EV_Wait(30);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 265.07001f, 3.8199999f, 389.01999f);
		EV_CameraAng(0, 0, 3093, 38582, 64256);
		EV_CameraPerspective(0, 20, 10923);
		EV_CameraPos(0, 20, 282.59f, 16.889999f, 426.82999f);
		EV_CameraAng(0, 20, 4117, 39862, 64256);
		EV_CameraPos(0, 120, 284.91f, 18.43f, 429.70001f);
		EV_Wait(25);
		EV_ClrFace(player);
		EV_Wait(20);
		EV_MsgClose();
		EV_CameraTargetObj(1, 20, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 40, 267.92001f, 5.1900001f, 379.60999f);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV002B_S_JUMP);
		EV_Wait(30);
		EV_CameraPos(0, 60, 252.02f, 17.26f, 397.67001f);
		EV_Wait(30);
		EV_CameraTargetFree();
		EV_CameraAng(0, 60, 63256, 61681, 0);
		EV_Wait(20);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(0, 120, 248.14f, 19.65f, 407.67999f);
		EV_CameraAng(0, 120, 63256, 61681, 0);
		EV_Wait(45);
		EV_CameraPerspective(0, 1, 4551);
		EV_CameraPos(0, 0, 236.00999f, 10.18f, 225.98f);
		EV_CameraAng(0, 0, 280, 36081, 0);
		EV_SetPos(player, 268.0f, 0.0f, 377.0f);
		EV_SetAng(player, 521, 33082, 0);
		EV_CameraPos(0, 60, 239.75f, 10.5f, 237.37f);
		EV_Wait(60);
		EV_CameraPos(0, 30, 260.31f, 6.6700001f, 354.5f);
		EV_CameraAng(0, 30, 65048, 36593, 0);
		EV_Wait(30);
		EV_CameraPos(0, 90, 262.45999f, 6.4000001f, 360.09f);
		EV_Wait(60);
		break;
	case 2:
		stopObjectAll();
		EV_SetPos(player, 268.0f, 0.0f, 363.0f);
		EV_SetAng(player, 521, 33082, 0);
		EV_Wait(1);
		EV_InitPlayer(0);
		DeleteChaos0();
		StgChaos0CtrlOff();
		EV_FreeObject(&PL_NOR_01);
		EV_FreeObject(&PL_NOR_02);
		EV_FreeObject(&PL_NOR_03);
		EV_FreeObject(&PL_NOR_04);
		EV_FreeObject(&PL_NOR_05);
		EV_FreeObject(&PL_NOR_07);
		EV_FreeObject(&PL_NOR_08);
		EV_ClrPath(PL_NOR_02);
		EV_ClrPath(PL_NOR_04);
		EV_ClrPath(PL_NOR_07);
		EV_ClrPath(PL_NOR_08);
		EV_FreeObject(&TAMA_01);
		EV_FreeObject(&TAMA_02);
		EV_FreeObject(&TAMA_03);
		EV_FreeObject(&TAMA_04);
		EV_FreeObject(&TAMA_05);
		EV_FreeObject(&TAMA_06);
		EV_FreeObject(&TAMA_07);
		EV_FreeObject(&TAMA_08);
		EV_FreeObject(&TAMA_09);
		EV_FreeObject(&TAMA_10);
		EV_FreeObject(&TAMA_11);
		EV_FreeObject(&TAMA_12);
		EV_FreeObject(&TAMA_13);
		EV_FreeObject(&TAMA_14);
		EV_FreeObject(&TAMA_15);
		EV_FreeObject(&TAMA_16);
		EV_FreeObject(&TAMA_17);
		EV_FreeObject(&TAMA_18);
		EV_FreeObject(&TAMA_19);
		EV_FreeObject(&TAMA_20);
		effect_delete(0);
		effect_delete(1);
		effect_delete(2);
		effect_delete(3);
		effect_delete(4);
		effect_delete(5);
		effect_delete(6);
		effect_delete(7);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}