#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00FA[] = {
	(char*)("TR2CRASH"), &texlist_tr2crash,
	(char*)("L_SIBUKI"), &L_SIBUKI_TEXLIST,
	0
};

void ev00FA_l_tornado2(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		BLACK = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(118);
		EventSe_Init(3);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_SetPos(player, 1114.53f, 100.866f, -1037.79f);
		EV_SetAng(player, 0xFD57, 0x2BB4, 0x280);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(2, MilesTalesPrower, 1109.3199f, 101.0f, -1032.6f, 0xFCE3, 0x7400, 0x287);
		EV_Wait(1);
		tails = EV_GetPlayer(2);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 0);
		createModel(
			1226.0f, 99.0f, -904.65997f,
			0x1000, 0xD000, 0x400,
			1.0f, 1.0f, 1.0f,
			&_object_tr2crash_tr2crash,
			&texlist_tr2crash,
			0);
		EV_CameraAng(1, 0, 0x300, 0x9000, 0xFE00);
		EV_CameraPos(1, 0, 1122.53f, 106.466f, -1043.3357f);
		EV_Wait(10);
		EV_CameraAng(1, 60, 0x300, 0x9500, 0xFE00);
		EV_CameraPos(1, 60, 1130.67f, 108.2f, -1039.86f);
		EV_MovePoint2(player, 1139.7f, 103.658f, -1019.255f, 1.0f, 1.0f);
		EV_MovePoint2(tails, 1132.87f, 103.04f, -1013.1f, 1.0f, 0.89999998f);
		EV_Wait(20);
		EV_SetAction(player, SONIC_ACTIONS[7], &SONIC_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(tails, MILES_ACTIONS[67], &MILES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(40);
		EV_CameraPos(1, 60, 1131.54f, 108.2f, -1040.355f);
		EV_SerifPlay(1459);
		EV_Msg(msgTbl_ev00FA[TextLanguage][0]); //"\aLook!  It's the Tornado 2!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		EV_CameraAng(1, 0, 0xF700, 0xAD00, 0);
		EV_CameraPos(1, 0, 1206.0873f, 98.186699f, -908.20001f);
		EV_CameraAng(0, 100, 0xF700, 0xBC00, 0);
		EV_CameraPos(0, 100, 1205.3f, 98.186699f, -901.21002f);
		EV_SerifPlay(1460);
		EV_Msg(msgTbl_ev00FA[TextLanguage][1]); //"\aYeah, so let's get the Chaos Emerald"...
		EV_ClrAction(player);
		EV_ClrAction(tails);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_MovePoint2(player, 1178.0f, 97.599998f, -968.27002f, 1.0f, 1.0f);
		EV_MovePoint2(tails, 1165.4399f, 99.599998f, -967.0f, 1.0f, 0.89999998f);
		EV_CameraAng(1, 0, 0xF400, 0x9A00, 0);
		EV_CameraPos(1, 0, 1123.15f, 120.487f, -1037.236f);
		EV_CameraAng(1, 60, 0x800, 0xA600, 0xFD00);
		EV_CameraPos(1, 60, 1166.96f, 99.466499f, -974.5f);
		EV_Wait(50);
		EventSe_Oneshot(1334, 100, 0, 0);
		WaterPillarOn(1228.74f, 90.0f, -909.40002f, 1.0f, 0.69999999f);
		EV_Wait(5);
		EV_SetAction(player, &action_s_s0049_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_SetAction(tails, &action_m_m9001_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_SerifPlay(1461);
		EV_Msg(msgTbl_ev00FA[TextLanguage][2]); //"\aWhat?"
		EV_CameraPerspective(1, 60, 0x382E);
		EV_CameraAng(1, 60, 0x1400, 0xA600, 0xFD00);
		EV_CameraPos(1, 60, 1171.59f, 98.440002f, -971.42999f);
		EV_Wait(50);
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_CameraAng(1, 0, 0xF600, 0x2300, 0xFE00);
		EV_CameraPos(1, 0, 1255.168f, 123.57f, -899.79999f);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0118_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_CameraAng(1, 0, 0x1100, 0x3000, 0x200);
		EV_CameraPos(1, 0, 1187.0601f, 97.540001f, -963.17499f);
		EV_Wait(10);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_SetAction(tails, &action_m_m0119_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(tails, &action_m_m0120_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(15);
		EV_SetFace(player, "FAEC");
		EV_SetFace(tails, "H");
		EV_SerifPlay(1462);
		EV_Msg(msgTbl_ev00FA[TextLanguage][3]); //"\aNo!  He's got the last Emerald!"
		EV_Wait(30);
		RemoveTornado2Emerald_EV00FA();
		EV_CameraPerspective(1, 1, 0x5C72);
		EV_CameraPos(0, 0, 1198.92f, 100.9f, -900.56f);
		EV_CameraAng(1, 0, 0xF300, 0xC200, 0x200);
		EV_Wait(1);
		EV_CameraPerspective(1, 35, 0x2000);
		EV_CameraPos(1, 35, 1206.5f, 98.400002f, -900.93402f);
		EV_SerifWait();
		EV_ClrAction(tails);
		EV_SetAng(tails, 0, 16128, 0);
		EV_Wait(10);
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_CameraAng(1, 0, 0xD00, 0x2900, 0x100);
		EV_CameraPos(1, 0, 1186.043f, 100.26f, -961.47998f);
		EV_SetFace(tails, "ENE");
		EV_SerifPlay(1463);
		EV_Msg(msgTbl_ev00FA[TextLanguage][4]); //"\aNow what do we do?"
		EV_Wait(1);
		EV_CameraAng(1, 0, 0xE77A, 0x20DA, 0x100);
		EV_CameraPos(1, 0, 1224.55f, 160.75f, -911.70001f);
		EV_CameraPerspective(1, 255, 0x3111);
		EV_CameraAng(0, 200, 0xE8FE, 0x2BDF, 0x100);
		EV_CameraPos(0, 200, 1467.97f, 487.98001f, -660.16998f);
		EV_Wait(40);
		BLACK = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(40);
		EV_MsgClose();
		WaterPillarOff();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, 1177.59f, 97.737f, -968.78998f);
		EV_SetAng(player, 0x2A7, 0x1AFA, 0xFD1A);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		deleteModel(0);
		WaterPillarOff();
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		EventSe_Close();
		break;
	}
}