#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev001D_s_afterchaos6(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* knuckles = 0;
	ObjectMaster* eggmoble = 0;

	ObjectMaster* SONIC_JUMP = 0;
	ObjectMaster* B_OUT = 0;

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		SetBankDir(77);
		BGM_Play(MusicIDs_egcarer1);
		EV_SetPos(player, -44.900002f, 745.65002f, -231.87f);
		EV_SetAng(player, 718, 29278, 281);
		EV_CreatePlayer(2, Knuckles_Main, -113.79f, 743.71997f, -510.44f, 64723, 62954, 0xFFFF);
		create_eggmoble(0.0f, 780.0f, -386.04001f, 0, 0x4000, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 0);
		knuckles = EV_GetPlayer(2);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		QueueSound_XYZ(1337, (EntityData1*)0xCB80001, 1, 100, 600, 0.0f, 780.0f, -386.04001f);
		EV_Wait(1);
		seteggmobleparam(0.5, 256);
		EV_CameraPos(0, 0, -24.51f, 754.06f, -310.82001f);
		EV_CameraAng(1, 0, 64714, 30949, 0);
		EV_CameraPerspective(0, 1, 7282);
		EV_Wait(10);
		EV_CameraPerspective(0, 100, 5461);
		EV_CameraPos(0, 100, -77.290001f, 749.42999f, -184.83f);
		EV_CameraTargetObj(1, 60, player, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(100);
		EV_CameraTargetFree();
		EV_CameraAng(1, 40, 970, 60389, 0);
		EV_CameraPos(1, 40, -82.480003f, 748.77002f, -176.33f);
		EV_Wait(45);
		EV_CameraPos(1, 0, -21.030001f, 780.5f, -342.64999f);
		EV_CameraAng(1, 0, 1994, 59565, 0);
		EV_CameraPos(1, 140, -27.75f, 780.5f, -346.98999f);
		EV_CameraAng(1, 140, 1994, 58789, 0);
		EV_SetPos(knuckles, 139.57001f, 743.65002f, -265.67999f);
		EV_SetAng(knuckles, 459, 49143, 64881);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.5f, 1, 0);
		EV_SerifPlay(577);
		EV_Msg((msgTbl_ev001D[TextLanguage])[0]); //"\aNo way!   \nI can't believe this!"
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 0.80000001f, 1, 8);
		EV_Wait(40);
		EV_MsgClose();
		EV_MovePoint2(knuckles, 21.969999f, 747.63f, -253.89999f, 1.75f, 0.059999999f);
		EV_Wait(30);
		dsStop_id(213385217);
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, knuckles, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraPos(0, 0, 116.31f, 752.71997f, -322.29999f);
		EV_SerifPlay(578);
		EV_MsgW(30, (msgTbl_ev001D[TextLanguage])[1]); //"\aSonic!"
		EV_MsgClose();
		EV_WaitMove(knuckles);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(knuckles, 791, 34674, 0);
		EV_LookPoint(knuckles, 0.0f, 803.0f, -387.04001f);
		EV_Wait(15);
		EV_LookObject(player, knuckles, 0.0f, 10.0f, 0.0f);
		EV_CameraTargetFree();
		EV_CameraPos(1, 15, 51.720001f, 751.31f, -278.45001f);
		EV_CameraAng(1, 15, 65360, 22491, 0);
		EV_Wait(30);
		EV_ClrFace(player);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, (char*)"DEC");
			break;
		case 1:
			EV_SetFace(player, (char*)"CBBBDF");
			break;
		}
		EV_Wait(10);
		EV_SerifPlay(579);
		EV_Msg((msgTbl_ev001D[TextLanguage])[2]); //"\aHey there, Knuckles."
		EV_Wait(35);
		if (!VoiceLanguage)  EV_ClrFace(player);
		EV_Wait(5);
		EV_CameraPos(1, 45, -27.59f, 750.82001f, -240.23f);
		EV_CameraAng(1, 45, 65104, 20699, 0);
		EV_Msg((msgTbl_ev001D[TextLanguage])[3]); //"\aGlad you finally made it! \nI thought"..
		if (!VoiceLanguage) EV_SetFace(player, (char*)"CEFD");
		EV_Wait(60);
		EV_ClrFace(player);
		EV_Wait(5);
		EV_SetFace(player, (char*)"CEFD");
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, (char*)"D");
		EV_Wait(15);
		EV_ClrFace(player);
		EV_Wait(30);
		EV_MsgClose();
		EV_Wait(5);
		ChgEggMobleMod(5);
		EV_Wait(5);
		EV_CameraPerspective(0, 1, 9102);
		EV_CameraPos(0, 0, 18.65f, 778.13f, -373.26001f);
		EV_CameraAng(0, 0, 3988, 11788, 64768);
		EV_CameraPos(0, 70, 69.360001f, 771.59003f, -342.66f);
		EV_CameraAng(0, 70, 3476, 11276, 64768);
		EV_LookFree(player);
		EV_SerifPlay(581);
		eggmoble_moveandturn(0.0f, 785.0f, -386.04001f, 0, -16384, 0, 50, 0);
		EV_MsgW(45, (msgTbl_ev001D[TextLanguage])[4]); //"\aUntil we meet again, Sonic!  "
		EV_MsgClose();
		EV_CameraPos(0, 35, 73.580002f, 769.95001f, -340.54001f);
		EV_CameraAng(0, 35, 3476, 11532, 64768);
		ChgEggMobleSMod(1);
		eggmoble_moveandturn(-300.0f, 755.0f, -400.0f, 0, 0, 0, 90, 1);
		dsPlay_oneshot_v(1341, 0, 0, 120, 0.0f, 780.0f, -386.04001f);
		EV_Wait(25);
		EV_CameraPerspective(0, 1, 12561);
		EV_CameraPos(0, 0, -35.049999f, 749.29999f, -230.52f);
		EV_CameraAng(0, 0, 404, 11020, 64768);
		EV_CameraPos(0, 70, -22.0f, 748.71997f, -223.14f);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.75f, 1, 0);
		EV_MovePoint2(player, -217.33f, 748.34003f, -350.01001f, 1.75f, 0.059999999f);
		EV_SerifPlay(580);
		EV_MsgW(45, (msgTbl_ev001D[TextLanguage])[5]); //"\aStop!  Come back here!"
		EV_MsgClose();
		EV_CameraPos(0, 0, -233.17999f, 750.09998f, -345.82999f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_SetPos(player, -175.42999f, 743.17999f, -321.23001f);
		EV_MovePoint2(player, -217.33f, 748.34003f, -350.01001f, 1.75f, 0.059999999f);
		EV_Wait(10);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV001D_S_JUMP);
		EV_Wait(40);
		eggmoble_moveandturn(-600.0f, 300.0f, -500.0f, 0, -1280, 0, 120, 1);
		EV_Wait(20);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -233.08f, 753.90997f, -382.20001f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 6.0f, 0.0f, 0);
		EV_SetPos(player, -217.33f, 748.34003f, -350.01001f);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV001D_S_JUMP);
		EV_Wait(60);
		EV_CameraTargetFree();
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -447.75f, 635.0f, -436.70001f);
		EV_CameraAng(0, 0, 56568, 12672, 0);
		SONIC_JUMP = CSkyWalk_create2(player, 600.0f);
		EV_SetPos(player, -400.0f, 600.0f, -420.0f);
		EV_SetAng(player, 0, 49152, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV001D_S_JUMP);
		EV_Wait(20);
		FreeTask(SONIC_JUMP);
		SONIC_JUMP = 0;
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		dsStop_all();
		FreeTask(SONIC_JUMP);
		SONIC_JUMP = 0;
		FreeTask(B_OUT);
		B_OUT = 0;
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		delete_eggmoble();
		EV_SetPos(player, -44.900002f, 745.65002f, -231.87f);
		EV_SetAng(player, 718, 29278, 281);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}
