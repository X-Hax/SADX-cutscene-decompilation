#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00F3_l_knuckles(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		KURAYAMI = 0;
		EV_InitPlayer(0);
		SetBankDir(113);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CameraPos(1, 0, -28.67f, 14.19f, 2386.76f);
		EV_CameraAng(1, 0, 0x700, 0xFC00, 0);
		EV_CameraAng(0, 120, 0xE600, 0xFC00, 0);
		createModel(
			-5.6999998f, -152.58f, 2169.71f,
			0x1900, 0x3000, 0x1000,
			1.0f, 1.0f, 1.0f,
			&EV_MODEL_EME_BLUE,
			&M_EM_BLUE_TEXLIST,
			0);
		createModel(
			-11.3f, -152.58f, 2168.5f,
			0x700, 0x7000, 0xE00,
			1.0f, 1.0f, 1.0f,
			&EV_MODEL_EME_GREEN,
			&M_EM_GREEN_TEXLIST,
			1);
		createModel(
			-15.2f, -152.58f, 2166.3999f,
			0x1200, 0x5000, 0xD00,
			1.0f, 1.0f, 1.0f,
			&EV_MODEL_EME_PURPLE,
			&M_EM_PURPLE_TEXLIST,
			2);
		createModel(
			0.80000001f, -152.58f, 2169.73f,
			0x1000, 0xB000, 0x1000,
			1.0f, 1.0f, 1.0f,
			&EV_MODEL_EME_SKY,
			&M_EM_SKY_TEXLIST,
			3);
		createModel(
			6.0f, -152.58f, 2168.6299f,
			0x1200, 0x9000, 0x300,
			1.0f, 1.0f, 1.0f,
			&EV_MODEL_EME_WHITE,
			&M_EM_WHITE_TEXLIST,
			4);
		createModel(
			10.8f, -152.58f, 2165.6299f,
			0xEF00, 0xB000, 0x600,
			1.0f, 1.0f, 1.0f,
			&EV_MODEL_EME_YELLOW,
			&M_EM_YELLOW_TEXLIST,
			5);
		EV_SetPos(player, 151.09f, -179.73f, 2154.8601f);
		EV_CreatePlayer(2, KnucklesTheEchidna, -2.96f, -157.08f, 2208.78f, 0, 0, 0);
		EV_CreatePlayer(5, Eggman, -38.049999f, -262.57999f, 2623.5601f, 0x884, 0x8000, 0x44);
		//eggman = EV_GetPlayer(5);
		//EV_SetMode(eggman, 0); //GetPlayer called too early, not used.
		create_eggmoble(-22.02f, -258.51999f, 2651.1499f, 0x884, 0xA000, 0x6000);
		EV_Wait(2);
		seqVars[37] = 3;
		eggman = EV_GetPlayer(5);
		EV_SetAction(eggman, &action_g_g0023_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		BGM_Play(MusicIDs_theknkls);
		ChgEggMobleMod(5);
		EV_Wait(118);
		EV_CameraPos(0, 180, -17.73f, -68.599998f, 2275.6201f);
		knuckles = EV_GetPlayer(2);
		EV_SetFace(knuckles, "FAFB");
		EV_Msg(msgTbl_ev00F3[TextLanguage][0]); //"\aThe Master Emerald is \nwhere it belo"...
		EV_SerifPlay(1396);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgCls();
		EV_ClrFace(knuckles);
		EV_Wait(30);
		EV_SetAction(knuckles, &action_k_k0022_knuckles, &KNUCKLES_TEXLIST, 0.30000001f, 0, 0);
		EV_SetAction(knuckles, &action_k_k0006_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -6.23f, -154.14f, 2215.1201f);
		EV_CameraAng(1, 0, 0xF100, 0xFA00, 0);
		EV_CameraPerspective(1, 1, 0x1C72);
		EV_Wait(1);
		EV_SetFace(knuckles, "CAFAFB");
		EV_Msg(msgTbl_ev00F3[TextLanguage][1]); //"\aBut Angel Island is still falling!"
		EV_SerifPlay(1397);
		EV_Wait(60);
		EV_CameraPos(0, 100, -3.3900001f, -150.72f, 2223.22f);
		EV_CameraAng(0, 100, 0, 0xFE00, 0);
		EV_CameraPerspective(1, 100, 0x3111);
		EV_SerifWait();
		EV_MsgCls();
		EV_ClrFace(knuckles);
		EV_Wait(30);
		EV_SetFace(knuckles, "CDEB");
		EV_SerifPlay(1398);
		EV_Msg(msgTbl_ev00F3[TextLanguage][2]); //"\aThis doesn't make any sense."
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgCls();
		EV_ClrFace(knuckles);
		EV_Wait(30);
		EV_SetAction(knuckles, &action_k_k0023_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(knuckles, &action_k_k0024_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetFace(knuckles, "AAED");
		EV_Msg(msgTbl_ev00F3[TextLanguage][3]); //"\aMaybe..."
		EV_SerifPlay(1399);
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(knuckles);
		EV_MsgCls();
		EV_Wait(30);
		EV_CameraPos(0, 0, -9.3800001f, -149.77f, 2179.6499f);
		EV_CameraAng(0, 0, 0, 0, 0);
		EV_CameraPos(0, 120, 7.6100001f, -149.77f, 2179.6499f);
		EV_ClrAction(knuckles);
		EV_MovePoint2(knuckles, -1.52f, -157.08f, 2180.3701f, 0.30000001f, 0.0f);
		EV_Wait(10);
		EV_Msg(msgTbl_ev00F3[TextLanguage][4]); //"\aThose Chaos Emeralds... \nthat I brou"...
		EV_SerifPlay(1400);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgCls();
		EV_WaitMove(knuckles);
		EV_Wait(10);
		EV_SetAction(knuckles, &action_k_k0027_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(0, 120, 20.08f, -149.77f, 2189.74f);
		EV_CameraAng(0, 120, 0, 0x2000, 0);
		EV_SetFace(knuckles, "ED");
		EV_Msg(msgTbl_ev00F3[TextLanguage][5]); //"\ahave something \nto do with what's ha"...
		EV_SerifPlay(1401);
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(knuckles);
		EV_MsgCls();
		EV_Wait(30);
		EV_SetFace(knuckles, "EADC");
		EV_Msg(msgTbl_ev00F3[TextLanguage][6]); //"\aI'll take them to Sonic for his advic"...
		EV_SerifPlay(1402);
		EV_Wait(60);
		EV_MsgCls();
		EV_Wait(50);
		EV_ClrFace(knuckles);
		EV_SetAction(knuckles, &action_k_k0025_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(knuckles, &action_k_k0026_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_CameraPos(0, 0, -20.23f, -124.58f, 2273.54f);
		EV_CameraAng(0, 0, 0xF100, 0x7E00, 0);
		EV_CameraPerspective(1, 60, 0x222);
		EV_Wait(60);
		EV_SetPos(knuckles, -4.3499999f, -157.08f, 2246.73f);
		EV_SetAng(knuckles, 0, 0, 0);
		EV_Wait(1);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, &action_k_k0027_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(40);
		EV_CameraPos(0, 0, -5.8200002f, -143.55f, 2277.51f);
		EV_CameraAng(0, 0, 0xF000, 0xFD00, 0);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		EV_SetAction(knuckles, &action_k_k0027_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(knuckles, "H");
		EV_Msg(msgTbl_ev00F3[TextLanguage][7]); //"\aEggman!"
		EV_SerifPlay(1403);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrAction(knuckles);
		EV_MovePoint2(knuckles, -1.0599999f, -239.57001f, 2398.72f, 3.0f, 3.0f);
		EV_Wait(20);
		EV_MoveFree(knuckles);
		EV_Wait(40);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraPos(0, 0, -16.915001f, -256.76999f, 2638.145f);
		EV_CameraAng(0, 0, 0xFE00, 0x2200, 0);
		EV_SetPos(knuckles, -19.959999f, -257.14001f, 2606.0f);
		EV_SetAng(knuckles, 0, 0xD000, 0);
		EV_SetAction(knuckles, KNUCKLES_ACTIONS[83], &KNUCKLES_TEXLIST, 0.80000001f, 1, 0);
		createChaos0_EV00F3(0, 12.58f, -264.70001f, 2644.47f);
		EV_Wait(1);
		EV_MovePoint2(knuckles, -29.0f, -260.60001f, 2614.1799f, 0.029999999f, 1.0f);
		EV_WaitMove(knuckles);
		EV_ClrAction(knuckles);
		EV_SetAction(knuckles, &action_k_k0027_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 8);
		EV_Wait(60);
		EV_Msg(msgTbl_ev00F3[TextLanguage][8]); //"\aThis is terrible!   \nCh- Chaos is..."...
		EV_SerifPlay(1404);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgCls();
		EV_Wait(10);
		EV_SetAction(knuckles, &action_k_k0028_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_SetFace(knuckles, "F");
		EV_Msg(msgTbl_ev00F3[TextLanguage][9]); //"\aIs what?"
		EV_SerifPlay(1405);
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgCls();
		EventSe_Play(0, 1335, 1800);
		EV_CameraPos(0, 90, 26.59f, -261.28f, 2653.96f);
		EV_CameraAng(0, 90, 0x100, 0x2900, 0);
		EV_CameraPerspective(0, 90, 0x1D28);
		EV_Wait(110);
		EV_MsgClose();
		EventSe_Stop(0);
		KURAYAMI = COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		EventSe_Oneshot(1334, 0, 0, 0);
		if (KURAYAMI)
		{
			COverlaySetSpeed(KURAYAMI, -1.0f);
		}
		EV_Wait(1);
		if (KURAYAMI)
		{
			COverlaySetSpeed(KURAYAMI, 1.0f);
		}
		EV_Wait(60);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_Wait(10);
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		break;
	case 2:
		EventSe_Close();
		delete_eggmoble();
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		deleteChaos0_EV00F3();
		deleteModel(0);
		deleteModel(1);
		deleteModel(2);
		deleteModel(3);
		deleteModel(4);
		deleteModel(5);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(5);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}