#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00B7_e_fanfare(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		LIGHT_R = 0;
		LIGHT_L = 0;
		task_skywalk = 0;
		Frog = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(104);
		EventSe_Init(3);
		EV_CameraPerspective(0, 1, 11469);
		seqVars[391] = 1;
		seqVars[44] = 2;
		EV_SetPos(player, 10.5f, 8.1599998f, -210.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CreateObjectFunc(&e103, ev_e103, -10.5f, 8.1599998f, -210.0f, 0, 0x8000, 0);
		EV_CreateObjectFunc(&e104, ev_e104, -10.5f, 8.1599998f, -200.0f, 0, 0x8000, 0);
		EV_CreateObjectFunc(&e105, ev_e105, -0.5f, 8.1599998f, -200.0f, 0, 0x8000, 0);
		EV_Wait(2);
		EV_SetMode(e103, 0);
		EV_SetPos(e103, -10.5f, 21.66f, -210.0f);
		EV_SetAng(e103, 0, 0x8000, 0);
		EV_ClrAction(e103);
		EV_SetAction(e103, &action_e_wait0_e103, &texlist_ev_e103_body, 1.0f, 1, 0);
		EV_SetMode(e104, 0);
		EV_SetPos(e104, 32.5f, 24.66f, -210.0f);
		EV_SetAng(e104, 0, 0x8000, 0);
		EV_ClrAction(e104);
		EV_SetAction(e104, &action_e_wait0_e104, &texlist_ev_e104_body, 1.0f, 1, 0);
		EV_Wait(1);
		EV_SetMode(e105, 0);
		EV_SetPos(e105, -32.5f, 24.66f, -210.0f);
		EV_SetAng(e105, 0, 0x8000, 0);
		EV_ClrAction(e105);
		EV_SetAction(e105, &action_e_wait0_e105, &texlist_ev_e105_body, 1.0f, 1, 0);
		EV_CreatePlayer(6, Eggman, 0.0f, 55.0f, -320.44f, 0, 0, 0);
		EV_Wait(1);
		eggman = EV_GetPlayer(6);
		task_skywalk = CSkyWalk_create2(eggman, 55.0f);
		EV_CameraAng(1, 0, 3840, 23552, 0);
		EV_CameraPos(1, 0, 121.25f, 35.099998f, 32.200001f);
		EV_CameraPos(0, 205, 146.89999f, 14.32f, -215.39999f);
		BGM_Play(MusicIDs_evtbgm05);
		EV_Wait(140);
		EV_SetPos(eggman, 0.0f, 55.0f, -320.44f);
		EV_SetAng(eggman, 0, 0, 0);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		dark_on();
		EV_CameraAng(1, 0, 2048, 0, 0);
		EV_CameraPos(1, 0, 0.0f, 163.17f, -28.040001f);
		EV_CameraAng(0, 205, 2048, 0, 0);
		EV_CameraPos(0, 205, 0.0f, 4.29f, -59.639999f);
		EV_Wait(230);
		LIGHT_R = light_create(65.0f, 145.0f, -250.44f);
		LIGHT_L = light_create(-65.0f, 145.0f, -250.44f);
		EV_CameraAng(1, 150, 63744, 0, 0);
		EV_CameraPos(1, 130, 0.0f, 48.709999f, -144.78f);
		EV_Wait(150);
		EV_MsgClose();
		EV_CameraPerspective(1, 60, 12743);
		EV_CameraPos(1, 60, 0.0f, 57.700001f, -290.56f);
		EV_CameraAng(1, 60, 3328, 0, 0);
		EV_Wait(90);
		light_turn(LIGHT_R, 0.0f, 55.0f, -320.44f);
		light_turn(LIGHT_L, 0.0f, 55.0f, -320.44f);
		dark_off();
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(eggman);
		BGM_Stop();
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		BGM_Play(MusicIDs_thee102);
		EV_Wait(30);
		EV_MoveRotation(eggman, 0, -12288, 0);
		EV_SerifPlay(1200);
		EV_Msg(msgTbl_ev00B7[TextLanguage][0]); //"\aAh, hah...  Testing 1, 2, 3..."
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(1201);
		EV_Msg(msgTbl_ev00B7[TextLanguage][1]); //"\aAhem..."
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_MoveRotation(eggman, 0, -12800, 0);
		EV_Wait(15);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0007_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_CameraPos(0, 80, -0.56999999f, 3.45f, -149.7f);
		EV_CameraAng(0, 80, 5120, 65280, 0);
		EV_SerifPlay(1202);
		EV_Msg(msgTbl_ev00B7[TextLanguage][2]); //"\aYou, the elite Egg Carrier crew, \nar"...
		EV_Wait(25);
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(eggman);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraAng(0, 0, 4608, 2816, 512);
		EV_CameraPos(0, 0, 3.4333999f, 64.457001f, -311.66f);
		EV_CameraPos(0, 75, 3.5f, 65.360001f, -311.23999f);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0008_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_SerifPlay(1203);
		EV_Msg(msgTbl_ev00B7[TextLanguage][3]); //"\aTo hear a very special announcement."
		EV_Wait(10);
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0001_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_Wait(55);
		EV_MsgClose();
		EV_CameraAng(1, 0, 4608, 63744, 0);
		EV_CameraPos(1, 0, -16.379999f, 50.860001f, -278.95001f);
		EV_SerifPlay(1204);
		EV_Msg(msgTbl_ev00B7[TextLanguage][4]); //"\aBehold!   It's a tailed frog!   \nVer"...
		EV_Wait(1);
		EV_SerifWait();
		EventSe_Oneshot(1333, 0, 0, 0);
		frog_create();
		EV_Wait(25);
		EV_MsgClose();
		EV_CameraAng(0, 95, 6656, 0, 0);
		EV_CameraPos(0, 95, 0.0f, 86.300003f, -356.73999f);
		EV_SerifPlay(1205);
		EV_Msg(msgTbl_ev00B7[TextLanguage][5]); //"\aThis frog is absolutely vital \nto my"...
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraAng(1, 0, 60672, 24320, 0);
		EV_CameraPos(1, 0, -4.9499998f, 33.634998f, -234.74001f);
		EV_CameraPos(1, 180, 31.08f, 31.02f, -234.5f);
		EV_Wait(30);
		EV_SerifPlay(1206);
		EV_Msg(msgTbl_ev00B7[TextLanguage][6]); //"\aI command you to locate \nthis frog i"...
		EV_Wait(100);
		EV_SerifPlay(1207);
		EV_Msg(msgTbl_ev00B7[TextLanguage][7]); //"\aI don't care what it takes to get it."...
		EV_Wait(40);
		EV_CameraPos(1, 50, 37.48f, 35.950001f, -232.33f);
		EV_Wait(60);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 1.3f, 0, 16);
		EV_SetAction(e103, &action_e_wait1_e103, &texlist_ev_e103_body, 1.3f, 0, 16);
		EV_SetAction(e104, &action_e_wait1_e104, &texlist_ev_e104_body, 1.3f, 0, 16);
		EV_SetAction(e105, &action_e_wait1_e105, &texlist_ev_e105_body, 1.3f, 0, 16);
		EV_Wait(16);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 0.80000001f, 1, 16);
		EV_SetAction(e103, &action_e_wait2_e103, &texlist_ev_e103_body, 0.80000001f, 1, 16);
		EV_SetAction(e104, &action_e_wait2_e104, &texlist_ev_e104_body, 0.80000001f, 1, 16);
		EV_SetAction(e105, &action_e_wait2_e105, &texlist_ev_e105_body, 0.80000001f, 1, 16);
		EV_Wait(20);
		EV_MsgClose();
		EV_CameraAng(1, 0, 5120, 3840, 0);
		EV_CameraPos(1, 0, 30.65f, 9.3800001f, -172.96001f);
		EV_CameraPerspective(1, 60, 9102);
		EV_Wait(35);
		EV_SerifPlay(1208);
		EV_Msg(msgTbl_ev00B7[TextLanguage][8]); //"\aWe haven't got time to waste,"
		EV_Wait(20);
		EV_MsgClose();
		EV_CameraAng(1, 0, 3072, 0, 0);
		EV_CameraPos(1, 0, 0.0f, 66.0f, -303.82001f);
		EV_SetAction(eggman, &action_g_g0009_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Msg(msgTbl_ev00B7[TextLanguage][9]); //"\aSo come to attention!"
		EV_CameraPerspective(1, 70, 6372);
		EV_CameraAng(1, 75, 512, 0, 0);
		EV_CameraPos(1, 75, 0.0f, 18.799999f, -46.34f);
		EV_WaitAction(eggman);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0006_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_Wait(5);
		EV_ClrAction(player);
		EV_SetAction(player, &action_e_e0007_e102, &E102_TEXLIST, 1.0f, 0, 16);
		EV_ClrAction(e103);
		EV_SetAction(e103, &action_e_e0007_e103, &texlist_ev_e103_body, 1.0f, 0, 16);
		EV_ClrAction(e104);
		EV_SetAction(e104, &action_e_e0007_e104, &texlist_ev_e104_body, 1.0f, 0, 16);
		EV_ClrAction(e105);
		EV_SetAction(e105, &action_e_e0007_e105, &texlist_ev_e105_body, 1.0f, 0, 16);
		EV_Wait(40);
		EV_CameraPerspective(1, 1, 12743);
		EV_Wait(1);
		EV_CameraAng(1, 0, 60672, 32256, 0);
		EV_CameraPos(1, 0, 4.0500002f, 75.400002f, -330.20001f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetAng(e103, 0, 0, 0);
		EV_SetAng(e104, 0, 0, 0);
		EV_SetAng(e105, 0, 0, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 1.3f, 1, 16);
		EV_ClrAction(e103);
		EV_SetAction(e103, &action_e_run0_e103, &texlist_ev_e103_body, 1.3f, 1, 16);
		EV_ClrAction(e104);
		EV_SetAction(e104, &action_e_run0_e104, &texlist_ev_e104_body, 1.3f, 1, 16);
		EV_ClrAction(e105);
		EV_SetAction(e105, &action_e_run0_e105, &texlist_ev_e105_body, 1.3f, 1, 16);
		EV_Wait(16);
		moveObject(player, 10.5f, 8.1599998f, -210.0f, 10.0f, -5.0f, -34.0f, 80);
		moveObject(e104, 32.5f, 24.959999f, -210.0f, 30.0f, 8.1499996f, -34.0f, 80);
		moveObject(e103, -10.5f, 21.66f, -210.0f, -10.0f, 8.1499996f, -34.0f, 80);
		moveObject(e105, -32.5f, 24.959999f, -210.0f, -30.0f, 8.1499996f, -34.0f, 80);
		EV_Wait(10);
		BLACK = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_MsgClose();
		EV_Wait(60);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		if (task_skywalk)
		{
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		EV_InitPlayer(0);
		EV_FreeObject(&e103);
		EV_FreeObject(&e104);
		EV_FreeObject(&e105);
		EV_RemovePlayer(6);
		light_delete(LIGHT_R);
		light_delete(LIGHT_L);
		frog_delete();
		EventSe_Close();
		dark_off();
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		seqVars[391] = 0;
		break;
	}
}