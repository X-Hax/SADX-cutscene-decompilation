#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev006D[] = {
	(char*)("VER1_WING"), &VER1_WING_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	(char*)("LOCKET"), &texlist_locket,
	(char*)("ICM006D"), &texlist_icm006D
};

void ev006D_a_savebirdsbros(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		//task_gattai_EV006D = 0;
		tikal_dispSwitch(0);
		EV_InitObject(player);
		SetBankDir(95);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		hoge1 = CIchimaie2_Create(&texlist_icm006D, 0);
		CIchimaie2_SetTextureId(hoge1, 0);
		CIchimaie2_SetPriority(hoge1, -5.0f);
		hoge2 = CIchimaie2_Create(&texlist_icm006D, 0);
		CIchimaie2_SetTextureId(hoge2, 1);
		CIchimaie2_SetPriority(hoge2, -3.0f);
		BGM_Play(MusicIDs_theamy);
		EV_CreatePlayer(3, MilesTalesPrower, 340.01001f, 0.0099999998f, 1650.25f, 0, 0x4300, 0);
		//tails = EV_GetPlayer(3);
		//EV_SetMode(tails, 0); //EV_GetPlayer(3) used too soon and tails is off-screen, so this line is useless.
		EV_SetPos(player, 340.01001f, 0.0099999998f, 1630.25f);
		EV_SetAng(player, 0, 0x7800, 0);
		KOTORI = SetEventBirdie0();
		EV_SetPos(KOTORI, 340.01001f, 0.0099999998f, 1630.25f);
		EV_SetAng(KOTORI,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_SetMode(KOTORI, 0);
		EV_SetAction(KOTORI, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_SetShadow(KOTORI, 0.5f);
		EV_Wait(1);
		throughplayer_on(player);
		EV_CameraPos(0, 0, -10.22f, 40.720001f, 1504.89f);
		EV_CameraAng(0, 0, 0xFE00, 0x7700, 0);
		tails->twp->timer.b[3] |= 4u;
		create_task_gattai_EV006D();
		EV_Wait(20);
		EV_SetMode(player, 0);
		EV_SetMode(tails, 0);
		EV_SetAction(player, &action_a_a0014_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(tails, &action_m_m0002_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetPath(tails, &epathtag_cube_006d_14, 0.2f, 0);
		EV_Wait(40);
		EV_SetPath(KOTORI, &epathtag_cube_006d_14, 0.2f, 0);
		EV_Wait(450);
		EV_ClrPath(tails);
		tails->twp->timer.b[3] &= ~4u;
		tails->twp->timer.b[3] &= ~0x10u;
		delete_task_gattai_EV006D();
		EV_ClrPath(KOTORI);
		EV_SetMode(player, 3);
		EV_SetPos(player, -18.4f, 0.0f, 1534.46f);
		EV_SetAng(player, 0, 0x7800, 0);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(tails, 3);
		EV_SetPos(tails, -11.85f, 0.0f, 1545.28f);
		EV_SetAng(tails, 0, 0x4300, 0);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0109_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_CreateObject(&KOTORI,
			-23.280001f, 9.0f, 1531.51f,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y,
			(int)player->twp->pos.z);
		EV_SetMode(KOTORI, 0);
		EV_SetAction(KOTORI, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_CameraPos(1, 0, -2.6199999f, 9.3000002f, 1473.1801f);
		EV_CameraAng(1, 0, 0xFE00, 0x7800, 0);
		EV_CameraPos(1, 120, -10.22f, 7.3800001f, 1511.38f);
		EV_SetAction(player, &action_a_a0827_amy, &AMY_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_SetAction(player, &action_a_a0828_amy, &AMY_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(player, &action_a_a0829_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EV_SetAction(tails, &action_m_m0139_miles, &MILES_TEXLIST, 0.80000001f, 0, 0);
		EV_SetAction(tails, &action_m_m0140_miles, &MILES_TEXLIST, 1.0f, 0, 0);
		EV_Wait(1);
		EV_WaitAction(tails);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(tails, 183.27f, 0.0f, 1405.26f, 0.40000001f, 0.0f);
		EV_Wait(15);
		EV_SetAction(player, &action_a_a0830_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(120);
		EV_SetFace(player, "G");
		EV_Wait(30);
		EV_ClrFace(player);
		EV_Wait(40);
		EV_CameraPos(1, 180, -15.93f, 2.9200001f, 1519.62f);
		EV_CameraAng(1, 180, 0x300, 0x7800, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0831_amy, &AMY_TEXLIST, 0.5f, 1, 32);
		EV_Wait(60);
		EV_SetFace(player, "CDE");
		EV_SerifPlay(964);
		EV_Msg(msgTbl_ev006D[TextLanguage][0]); //"\aI wonder what Sonic is doing..."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "DECDED");
		EV_SerifPlay(965);
		EV_Msg(msgTbl_ev006D[TextLanguage][1]); //"\aHe's always rescuing me, it seems."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_RemovePlayer(3);
		EV_Wait(1);
		moveObject(KOTORI, -23.280001f, 9.0f, 1531.51f, -16.4f, 4.0f, 1531.38f, 60);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "NNN");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FF");
		}
		EV_SerifPlay(966);
		EV_Msg(msgTbl_ev006D[TextLanguage][2]); //"\aI should be more independent."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0833_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_CreateObject(&KOTORI,
			-17.4f, 0.0f, 1533.46f,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y,
			(int)player->twp->pos.z);
		EV_ClrAction(KOTORI);
		EV_SetAction(KOTORI, &action_w_w0833_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, 115.86f, 0.0053099999f, 1522.62f, 0.2f, 0.1f);
		stopObject(KOTORI);
		moveObjectOn(KOTORI, 0.0f, 0.0f, 0.0f, 50, player);
		EV_Wait(40);
		EV_MsgClose();
		EV_Wait(10);
		stopObject(KOTORI);
		moveObjectOn(KOTORI, 0.0f, 1.0f, 0.0f, 480, player);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		EV_CameraPos(1, 0, 15.409f, 9.6499996f, 1541.035f);
		EV_CameraAng(1, 0, 0xFA00, 0x3D00, 0);
		EV_CameraChase(player);
		EV_Wait(40);
		EV_SetFace(player, "CDEDCDEC");
		EV_SerifPlay(967);
		EV_MsgW(100, msgTbl_ev006D[TextLanguage][3]); //"\aYou know, you sure surprised me...\nb"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraChaseFree();
		EV_Wait(30);
		EV_SetFace(player, "CDEDCDEC");
		EV_SerifPlay(968);
		EV_MsgW(100, msgTbl_ev006D[TextLanguage][4]); //"\aNo wonder they were after you,\nmy fe"...
		EV_ClrFace(player);
		EV_Wait(40);
		EV_CameraPos(1, 60, 86.919998f, 7.5500002f, 1535.65f);
		EV_Wait(60);
		EV_MoveFree(player);
		EV_SetAction(player, &action_a_a0836_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(KOTORI, &action_w_w0836_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		createModel(-109.708f, 10.005f, 1486.616f, 0, 0, 0, 1.0f, 1.0f, 1.0f, &object_locket_locket, &texlist_locket, 1);
		addmotModel(1, &action_locket, 0);
		EV_Wait(1);
		EV_SetFace(player, "H");
		EV_SerifPlay(969);
		EV_Msg(msgTbl_ev006D[TextLanguage][5]); //"\aHey!   A pendant, wow!"
		EV_Wait(10);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, -113.545f, 10.0f, 1486.52f);
		EV_CameraAng(1, 0, 0, 0xBF00, 0);
		EV_CameraPerspective(1, 1, 0x1C72);
		CIchimaie2_SetDstAlpha(hoge1, 1.0f, 1);
		playModel(1, 0, 0.0000099999997f, 1);
		EV_Wait(7);
		stopModel(1);
		EV_Wait(60);
		CIchimaie2_SetDstAlpha(hoge1, 0.80000001f, 40);
		EV_Wait(1);
		CIchimaie2_SetDstAlpha(hoge2, 1.0f, 40);
		EV_Wait(60);
		deleteModel(1);
		CIchimaie2_SetDstAlpha(hoge1, 0.0f, 40);
		EV_Wait(30);
		EV_CameraPos(0, 0, 102.383f, 7.5229998f, 1506.658f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		CIchimaie2_SetDstAlpha(hoge2, 0.0f, 40);
		EV_CameraPerspective(1, 30, 0x31C7);
		EV_Wait(1);
		EV_SetAction(KOTORI, &action_w_w0833_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, &action_a_a0833_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		stopObject(KOTORI);
		EV_MovePoint2(player, 115.86f, 0.0053099999f, 1522.62f, 0.1f, 2.0f);
		moveObjectOn(KOTORI, 0.0f, 0.5f, 0.0f, 490, player);
		EV_Wait(30);
		EV_SetFace(player, "CD");
		EV_SerifPlay(970);
		EV_Msg(msgTbl_ev006D[TextLanguage][6]); //"\aSo, I'll help you find your family."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "CDEDCDE");
		EV_SerifPlay(971);
		EV_Msg(msgTbl_ev006D[TextLanguage][7]); //"\aDoes Eggman have them captive now?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EventSe_Oneshot(1338, 0, 0, 0);
		EV_Msg(msgTbl_ev006D[TextLanguage][8]); //"\a........"
		EV_Wait(60);
		EV_MsgClose();
		EV_WaitMove(player);
		stopObject(KOTORI);
		EV_SetAng(player, 0, 0x1863, 0);
		EV_SetAng(KOTORI, 0, 0x1863, 0);
		moveObjectOn(KOTORI, 0.0f, 0.5f, 0.0f, 600, player);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, 121.319f, 9.6990004f, 1536.274f);
		EV_CameraAng(1, 0, 0xF59E, 0x10C0, 0);
		EV_SetAction(player, &action_a_a0837_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(KOTORI, &action_w_w0837_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(player, "CD");
		EV_SerifPlay(972);
		EV_Msg(msgTbl_ev006D[TextLanguage][9]); //"\aI bet he does!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "CD");
		EV_SerifPlay(973);
		EV_Msg(msgTbl_ev006D[TextLanguage][10]); //"\aSo, I'll help you find your family."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "EDCD");
		EV_SerifPlay(974);
		EV_Msg(msgTbl_ev006D[TextLanguage][11]); //"\aI've come this far. \nI may as well g"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "UXI");
		EV_Wait(1);
		EV_SetFace(player, "CDEDCD");
		EV_SerifPlay(975);
		EV_Msg(msgTbl_ev006D[TextLanguage][12]); //"\aThat robot said Dr. Eggman's base\nis"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgCls();
		EV_Wait(1);
		EV_CameraPos(1, 0, 157.75999f, 17.271f, 1566.0f);
		EV_CameraAng(1, 0, 0x600, 0x1A00, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0832_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_FreeObject(&KOTORI);
		EV_MovePoint2(player, 82.669998f, 0.0f, 1486.1851f, 0.30000001f, 0.30000001f);
		EV_SerifPlay(976);
		EV_Msg(msgTbl_ev006D[TextLanguage][13]); //"\aSo what d'ya say we check it out?"
		EV_Wait(1);
		EV_SerifWait();
		throughplayer_off(player);
		EV_Wait(60);
		break;
	case 2:
		tails = EV_GetPlayer(3);
		if (tails)
		{
			tails->twp->timer.b[3] &= ~4u;
			tails->twp->timer.b[3] &= ~0x10u;
		}
		EventSe_Close();
		if (hoge1)
		{
			FreeTask(hoge1);
			hoge1 = 0;
		}
		if (hoge2)
		{
			FreeTask(hoge2);
			hoge2 = 0;
		}
		EV_SetPos(player, 82.669998f, 0.0f, 1486.1851f);
		EV_SetMode(player, 3);
		EV_SetMode(tails, 3);
		delete_task_gattai_EV006D();
		EV_ClrPath(KOTORI);
		EV_ClrPath(tails);
		throughplayer_off(player);
		EV_InitPlayer(3);
		EV_InitPlayer(0);
		EV_RemovePlayer(3);
		stopObjectAll();
		deleteModel(1);
		EV_FreeObject(&KOTORI);
		EV_CameraOff();
		EV_PadOn();
		tikal_dispSwitch(1);
		break;
	}
}