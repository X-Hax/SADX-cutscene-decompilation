#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00F5[] = { 
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST 
};

void ev00F5_l_sonicfindsknuckles(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		BLACK = 0;
		tikal = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BLACK = COverlayCreate(1.0f, 0.1f, 0.0f, 0.0f, 0.0f);
		SetBankDir(77);
		EventSe_Init(2);
		BGM_Play(MusicIDs_evtbgm04);
		EV_SetPos(player, -244.944f, -247.10001f, 2515.8999f);
		EV_SetAng(player, 0xF800, 0x2C00, 0);
		EV_InitPlayer(0);
		EV_SetAction(player, SONIC_ACTIONS[6], &SONIC_TEXLIST, 2.5f, 1, 0);
		EV_CreatePlayer(2, MilesTalesPrower, -265.35999f, -247.08701f, 2518.8f, 0xF800, 0x2C00, 0);
		EV_InitPlayer(2);
		EV_CreatePlayer(3, Eggman, -33.747002f, -262.47f, 2623.1699f, 0, 0xB00, 0);
		EV_InitPlayer(3);
		EV_CreatePlayer(4, KnucklesTheEchidna, -45.57f, -262.47f, 2642.3301f, 0, 0x8000, 0);
		EV_InitPlayer(4);
		tikal = CTikalLight_Create(-2.5599999f, -145.623f, 2153.4199f);
		EV_Wait(1);
		tails = EV_GetPlayer(2);
		EV_SetAction(tails, MILES_ACTIONS[48], &MILES_TEXLIST, 1.9f, 1, 0);
		eggman = EV_GetPlayer(3);
		EV_SetAction(eggman, &action_g_g0023_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		knuckles = EV_GetPlayer(4);
		EV_SetAction(knuckles, &action_k_k0029_knuckles, &KNUCKLES_TEXLIST, 0.89999998f, 1, 0);
		if (BLACK)
		{
			COverlaySetSpeed(BLACK, -0.033333335f);
		}
		create_eggmoble(-19.969999f, -263.867f, 2682.6655f, 0x100, 0x96B0, 0);
		EV_CameraPos(1, 0, -234.68671f, -243.638f, 2518.9355f);
		EV_CameraAng(1, 0, 0x500, 0x3700, 0x300);
		EV_Wait(1);
		EV_CameraChase(player);
		EV_Wait(1);
		EV_MovePoint2(tails, -63.689999f, -263.89999f, 2627.7339f, 1.3f, 1.5f);
		EV_MovePoint2(player, -47.099998f, -261.0f, 2626.77f, 1.4f, 1.4f);
		EV_LookPoint(player, -42.299999f, -264.79999f, 2642.0f);
		EV_LookPoint(tails, -30.6658f, -261.79999f, 2627.0266f);
		EV_Wait(48);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, -22.1f, -260.39999f, 2650.5801f);
		EV_CameraAng(1, 0, 0x100, 0x2C00, 0);
		EV_CameraPos(1, 120, -18.346001f, -260.39999f, 2643.53f);
		EV_CameraAng(1, 120, 0x100, 0x2C00, 0);
		EV_Wait(77);
		EV_SetAction(player, SONIC_ACTIONS[7], &SONIC_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(tails, MILES_ACTIONS[67], &MILES_TEXLIST, 1.0f, 0, 8);
		EV_WaitAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 8);
		EV_LookPoint(player, -30.6658f, -261.79999f, 2627.0266f);
		EV_LookPoint(tails, -42.299999f, -264.79999f, 2642.0f);
		EV_SetAction(knuckles, &action_k_k0029_knuckles, &KNUCKLES_TEXLIST, 1.2f, 1, 8);
		EV_SerifPlay(1415);
		EV_SetFace(knuckles, "FFF");
		EV_Msg(msgTbl_ev00F5[TextLanguage][0]); //"\aSonic... uhhh, sorry!"
		EV_LookPoint(player, -42.299999f, -264.79999f, 2642.0f);
		EV_SerifWait();
		EV_LookFree(player);
		EV_SetAng(player, 0x800, 0xD00, 0);
		EV_CameraPos(1, 0, -35.126999f, -264.64001f, 2641.0f);
		EV_CameraAng(1, 0, 0xA00, 0x1F00, 0);
		EV_CameraPos(0, 150, -38.024399f, -264.64001f, 2643.74f);
		EV_SetAction(player, &action_s_s0003_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_SerifPlay(1416);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "DAAADAC");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DBDF");
		}
		EV_Msg(msgTbl_ev00F5[TextLanguage][1]); //"\aKnuckles!  And Eggman?  \nWhat happen"...
		EV_Wait(23);
		EV_SetAction(player, &action_s_s0004_sonic, &SONIC_TEXLIST, 0.75f, 0, 8);
		EV_LookObject(player, eggman, 0.0f, 0.0f, 0.0f);
		EV_WaitAction(player);
		EV_SetAction(player, &action_s_s0003_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_LookFree(player);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(knuckles, "UU");
		EV_MsgClose();
		EV_CameraPos(1, 0, -51.056801f, -260.89999f, 2636.7766f);
		EV_CameraAng(1, 0, 0xED00, 0xA300, 0);
		EV_SetAction(knuckles, &action_k_k0030_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(knuckles, &action_k_k0031_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1417);
		EV_SetFace(knuckles, "XDSE");
		EV_Msg(msgTbl_ev00F5[TextLanguage][2]); //"\aHe stole my Chaos Emeralds!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(knuckles);
		EV_Wait(25);
		EV_SerifPlay(1418);
		EV_SetFace(knuckles, "EAAAF");
		EV_Msg(msgTbl_ev00F5[TextLanguage][3]); //"\aAnd Chaos is still alive!"
		EV_Wait(1);
		if (tikal)
		{
			tikal->twp->scl.z = 3.5f;
		}
		EV_SetMode(tikal, 0);
		EV_SetPos(tails, -59.446999f, -262.27499f, 2625.8999f);
		EV_SetAng(tails, 0x800, 0x1F00, 0);
		EV_LookPoint(tails, -42.299999f, -260.0f, 2642.0f);
		EV_SerifWait();
		EV_SetAng(tails, 0x800, 0x1F00, 0);
		EV_CameraPos(1, 0, -45.282001f, -265.70999f, 2638.1658f);
		EV_CameraAng(1, 0, 0x1C00, 0x1AB0, 0xFE00);
		EV_CameraPos(1, 35, -43.624001f, -262.43701f, 2635.2451f);
		EV_SetAction(player, &action_s_s0003_sonic, &SONIC_TEXLIST, 1.5f, 0, 1);
		EV_SetAction(player, &action_s_s0003_sonic, &SONIC_TEXLIST, 0.15000001f, 1, 8);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_LookObject(tails, player, 0.0f, 4.0f, 0.0f);
		EV_SetFace(tails, "HNOOOO");
		EV_SerifPlay(1419);
		EV_SetFace(player, "E");
		EV_Msg(msgTbl_ev00F5[TextLanguage][4]); //"\aWhat?!"
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(10);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_CameraPos(1, 0, -22.9f, -262.263f, 2632.3f);
		EV_CameraAng(1, 0, 0xFF00, 0x29B0, 0xFE00);
		EV_SetAction(eggman, &action_g_g0024_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_CameraPos(0, 140, -24.028999f, -264.52399f, 2636.0481f);
		EV_CameraAng(0, 140, 0x1C00, 0x1EB0, 0xFE00);
		EV_Wait(40);
		EV_SerifPlay(1420);
		EV_Msg(msgTbl_ev00F5[TextLanguage][5]); //"\aAaarrgh!  \nHe's not gonna get away w"...
		EV_Wait(30);
		EV_SetAction(player, &action_s_s0004_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_LookObject(tails, eggman, 0.0f, 10.0f, 0.0f);
		EV_WaitAction(eggman);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 40);
		EV_MovePoint2(eggman, -21.629999f, -266.69f, 2659.7f, 1.5f, 2.3f);
		EV_SetAction(knuckles, &action_k_k0032_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(knuckles, 0, 0x5000, 0);
		EV_SetAng(tails, 0x800, 0xC00, 0);
		EV_Wait(10);
		EV_MsgClose();
		EV_SerifPlay(1421);
		EV_Msg(msgTbl_ev00F5[TextLanguage][6]); //"\aHey Eggman!  Wait up!"
		EV_Wait(30);
		EV_RemovePlayer(3);
		EV_ClrAction(player);
		EV_LookFree(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(1, 0, -62.360001f, -256.83499f, 2614.5879f);
		EV_CameraAng(1, 0, 0x100, 0x96B0, 0);
		EV_CameraPos(0, 100, -59.630001f, -260.5f, 2619.0f);
		EV_CameraAng(0, 100, 0xF00, 0x96B0, 0xFF00);
		EventSe_Play(0, 1337, 1800);
		eggmoble_moveandturn(-13.0f, -217.033f, 2676.6299f, 0x1000, -0x41B0, -0x1000, 60, 1);
		EV_Wait(22);
		EV_MsgClose();
		EV_Wait(20);
		ChgEggMobleSMod(1);
		EV_Wait(2);
		eggmoble_move_normal(123.0f, -277.60001f, 2903.8501f, 50);
		EventSe_Volume(0, -70, 50);
		EV_Wait(30);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(player);
		EV_Wait(10);
		delete_eggmoble();
		EventSe_Stop(0);
		EV_SetAng(tails, 0x884, 0x1600, 0x44);
		EV_LookFree(tails);
		EV_LookObject(tails, knuckles, 0.0f, 0.0f, 0.0f);
		EV_CameraPos(1, 0, -37.900002f, -264.8667f, 2646.8999f);
		EV_CameraAng(1, 0, 0xC00, 0x24B0, 0xFB00);
		EV_CameraPos(0, 100, -36.0f, -265.70001f, 2643.1001f);
		EV_CameraAng(0, 100, 0xC00, 0x28B0, 0xFB00);
		EV_SetAction(knuckles, &action_k_k0030_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(knuckles, &action_k_k0031_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(1422);
		EV_SetFace(knuckles, "EAAAF");
		EV_Msg(msgTbl_ev00F5[TextLanguage][7]); //"\aSonic... \nChaos is a fearsome beast!"
		EV_Wait(10);
		EV_CameraPos(0, 200, -37.900002f, -265.23419f, 2641.1001f);
		EV_CameraAng(0, 200, 0xC00, 0x29B0, 0xFB00);
		EV_LookObject(player, knuckles, 0.0f, 0.0f, 0.0f);
		EV_SerifWait();
		EV_ClrFace(knuckles);
		EV_Wait(20);
		EV_SerifPlay(1423);
		EV_SetFace(knuckles, "FFF");
		EV_Msg(msgTbl_ev00F5[TextLanguage][8]); //"\aIf he gets that last Chaos Emerald, "...
		EV_Wait(20);
		EV_SerifWait();
		EV_LookFree(player);
		EV_SetAction(player, &action_s_s0043_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		SONIC_OBJECTS[6]->sibling = &object_sonic_s_r_a5_01_s_r_a5_01; //Sonic's finger
		EV_SerifPlay(1424);
		EV_SetFace(player, "DE");
		EV_Msg(msgTbl_ev00F5[TextLanguage][9]); //"\aNo need to explain, we'll get on it!"
		EV_Wait(11);
		EV_SetAction(player, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.44999999f, 0, 1);
		EV_SerifWait();
		SONIC_OBJECTS[6]->sibling = SONIC_OBJECTS[5]; ////Reset Sonic's hand
		EV_ClrFace(player);
		EV_Wait(5);
		EV_SerifPlay(1425);
		EV_SetFace(player, "F");
		EV_Msg(msgTbl_ev00F5[TextLanguage][10]); //"\aTails!?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_ClrAction(player);
		EV_LookObject(tails, player, 0.0f, 0.0f, 0.0f);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 8);
		EV_SerifPlay(1426);
		EV_Msg(msgTbl_ev00F5[TextLanguage][11]); //"\aRight!"
		EV_Wait(1);
		EV_SerifWait();
		EV_CameraPos(0, 0, -42.200001f, -257.67999f, 2642.7f);
		EV_CameraAng(0, 0, 0x300, 0x2BB0, 0xFB00);
		EV_CameraPos(0, 90, -50.700001f, -263.32001f, 2635.73f);
		EV_CameraAng(0, 90, 0x1300, 0xEEB0, 0xFB00);
		EV_SetPath(tikal, &epathtag_cube00F5_1, 1.3f, 0);
		EventSe_Play(1, 760, 1800);
		EV_Wait(30);
		EV_LookObject(player, tikal, 0.0f, 0.0f, 0.0f);
		EV_SerifPlay(1427);
		EV_Msg(msgTbl_ev00F5[TextLanguage][12]); //"\aWha...?!"
		EV_Wait(50);
		EV_LookFree(player);
		EV_SetAction(player, &action_s_s0045_sonic, &SONIC_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(player, &action_s_s0049_sonic, &SONIC_TEXLIST, 0.5f, 1, 3);
		EV_Wait(5);
		WHITE = COverlayCreate(0.025f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_SerifPlay(464);
		EV_Msg(msgTbl_ev00F5[TextLanguage][13]); //"\aAw, Gee...!"
		EventSe_Volume(1, -90, 60);
		EV_Wait(20);
		EV_MsgClose();
		EV_Wait(20);
		EventSe_Stop(1);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SerifStop();
		SONIC_OBJECTS[6]->sibling = SONIC_OBJECTS[5]; //Reset Sonic's hand
		EV_ClrPath(tikal);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		if (tikal)
		{
			FreeTask(tikal);
			tikal = 0;
		}
		delete_eggmoble();
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		EventSe_Close();
		break;
	}
}
