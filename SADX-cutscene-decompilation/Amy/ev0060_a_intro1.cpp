#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0060[] = {
	(char*)("FPACK"), &texlist_fpack,
	(char*)("EV_S_MSBODY"), &texlist_ev_s_msbody,
	(char*)("ICM0060"), &texlist_icm0060,
	0
};

void ev0060_a_intro1(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SMOKE = 0;
		SMOKE2 = 0;
		m_sonic = 0;
		p_fpack1 = 0;
		p_fpack2 = 0;
		fatman_b = 0;
		ol1 = 0;
		oy1 = 0;
		oy2 = 0;
		boy1 = 0;
		girl1 = 0;
		shadow = 0;
		task_frame = 0;
		task_recollect0 = 0;
		task_recollect1 = 0;
		task_skywalk_3 = 0;
		task_skywalk2 = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(93);
		EventSe_Init(5);
		if (!SMOKE)
		{
			SMOKE = CObjSmoke_Create();
		}
		if (!SMOKE2)
		{
			SMOKE2 = CObjSmoke_Create();
		}
		EV_SetPos(player, 127.0f, 0.0f, 868.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_LookFree(player);
		EV_InitPlayer(0);
		EV_CreateObject(&m_sonic, 130.0f, 0.0f, 850.0f, 0, 0, 0);
		EV_CreateObject(&p_fpack1, 130.0f, 0.0f, 850.0f, 0, 0, 0);
		EV_Wait(1);
		EV_SetMode(p_fpack1, 0);
		EV_SetMode(m_sonic, 0);
		EV_SetPos(SMOKE, 2847.0f, 252.0f, 820.59998f);
		EV_SetPos(SMOKE2, 2868.0f, 259.0f, 848.0f);
		if (SMOKE)
		{
			*(float*)SMOKE->twp->value.l = 6.0f;
			*(float*)(SMOKE->twp->value.l + 8) = 0.30000001f;
			*(float*)(SMOKE->twp->value.l + 4) = 0.30000001f;
			*(float*)(SMOKE->twp->value.l + 4) = 0.30000001f;
		}
		if (SMOKE2)
		{
			*(float*)SMOKE2->twp->value.l = 2.0f;
			*(float*)(SMOKE2->twp->value.l + 8) = 0.30000001f;
		}
		EV_SetPos(p_fpack1,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_SetAng(p_fpack1, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_ClrAction(p_fpack1);
		EV_SetAction(player, &action_a_a0100_amy, &AMY_TEXLIST, 1.1f, 1, 0);
		EV_SetAction(p_fpack1, &action_fp_0100_fpack, &texlist_fpack, 1.1f, 1, 0);
		EV_CreatePlayer(2, SonicTheHedgehog, 142.0f, 20.0f, 400.0f, 0, 0, 0);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, 120.123f, 227.10001f, 792.17603f);
		EV_CameraAng(0, 0, 0xFA00, 0xC100, 0);
		EV_CameraPos(0, 210, 106.7f, 7.5100002f, 792.96503f);
		EV_CameraAng(0, 210, 0, 0xC100, 0);
		EV_CreateObject(&fatman_b, 129.7f, 0.0f, 840.78003f, 0, 0x8000, 0);
		EV_CreateObject(&ol1, 116.0f, 0.0f, 707.0f, 0, 0, 0x8000);
		EV_CreateObject(&oy1, 116.0f, 0.0f, 707.0f, 0, 0, 0x8000);
		EV_CreateObject(&oy2, 412.5f, 0.0f, 929.0f, 0, 0x528C, 0);
		EV_CreateObject(&boy1, 292.70001f, 0.0f, 729.70001f, 0, 0x3B98, 0);
		EV_CreateObject(&girl1, 292.70001f, 0.0f, 729.70001f, 0, 0x3B98, 0);
		EV_Wait(1);
		EV_SetMode(fatman_b, 0);
		EV_SetMode(ol1, 0);
		EV_SetMode(oy1, 0);
		EV_SetMode(oy2, 0);
		EV_SetMode(boy1, 0);
		EV_SetMode(girl1, 0);
		EV_Wait(1);
		EV_SetShadow(fatman_b, 1.0f);
		EV_SetShadow(ol1, 1.0f);
		EV_SetShadow(oy1, 1.0f);
		EV_SetShadow(oy2, 1.0f);
		EV_SetShadow(boy1, 1.0f);
		EV_SetShadow(girl1, 1.0f);
		EV_Wait(8);
		EV_SetPos(fatman_b, 129.7f, 5.0f, 840.78003f);
		EV_SetAng(fatman_b, 0, 0x8000, 0);
		EV_SetMotion(fatman_b, MODEL_SS_PEOPLE_OBJECTS[15], MODEL_SS_PEOPLE_MOTIONS[20], ADV00_TEXLISTS[6], 1.0f, 1, 0);
		EV_SetPos(ol1, 116.0f, 0.0f, 707.0f);
		EV_SetAng(ol1, 0, 0, 0);
		EV_SetMotion(ol1, MODEL_SS_PEOPLE_OBJECTS[4], MODEL_SS_PEOPLE_MOTIONS[5], ADV00_TEXLISTS[6], 1.0f, 1, 0);
		EV_SetPos(oy1, 284.39999f, 8.5f, 697.70001f);
		EV_SetAng(oy1, 0, 0x4300, 0);
		EV_SetMotion(oy1, MODEL_SS_PEOPLE_OBJECTS[0], MODEL_SS_PEOPLE_MOTIONS[1], ADV00_TEXLISTS[6], 1.0f, 1, 0);
		EV_SetPos(oy2, 412.5f, 8.5f, 929.0f);
		EV_SetAng(oy2, 0, 0x528C, 0);
		EV_SetMotion(oy2, MODEL_SS_PEOPLE_OBJECTS[0], MODEL_SS_PEOPLE_MOTIONS[0], ADV00_TEXLISTS[6], 1.0f, 1, 0);
		EV_SetPos(boy1, 240.60001f, 5.5f, 778.09998f);
		EV_SetAng(boy1, 0, 0xB871, 0);
		EV_SetMotion(boy1, MODEL_SS_PEOPLE_OBJECTS[17], MODEL_SS_PEOPLE_MOTIONS[25], ADV00_TEXLISTS[6], 1.0f, 1, 0);
		EV_SetPos(girl1, 232.48f, 5.5f, 650.73297f);
		EV_SetAng(girl1, 0, 0x45D, 0);
		EV_SetMotion(girl1, MODEL_SS_PEOPLE_OBJECTS[8], MODEL_SS_PEOPLE_MOTIONS[11], ADV00_TEXLISTS[6], 1.5f, 1, 0);
		moveObject(oy2, 412.5f, 9.0f, 929.0f, 563.66998f, 9.0f, 858.0f, 350);
		EV_Wait(190);
		moveObject(ol1, 116.0f, 10.0f, 757.0f, 116.5f, 10.0f, 850.0f, 300);
		moveObject(fatman_b, 129.7f, 8.5f, 840.78003f, 129.7f, 8.5f, 700.78003f, 300);
		moveObject(girl1, 232.48f, 5.5f, 660.73297f, 240.0f, 5.5f, 763.53003f, 193);
		EV_Wait(10);
		moveObject(player, 127.0f, 0.0f, 868.0f, 127.0f, 0.0f, 740.0f, 320);
		moveObjectOn(p_fpack1, 0.0f, 0.0f, 0.0f, 320, player);
		EV_Wait(70);
		BGM_Play(MusicIDs_theamy);
		EV_Wait(123);
		EV_SetAng(boy1, 0, 0x8000, 0);
		EV_SetMotion(girl1, MODEL_SS_PEOPLE_OBJECTS[8], MODEL_SS_PEOPLE_MOTIONS[12], ADV00_TEXLISTS[6], 1.0f, 1, 0);
		EV_CameraPos(0, 185, 105.4f, 7.5359998f, 717.79999f);
		stopObject(fatman_b);
		EV_FreeObject(&fatman_b);
		stopObject(ol1);
		EV_FreeObject(&ol1);
		stopObject(oy2);
		EV_FreeObject(&oy2);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, 271.5f, 3.5f, 273.5f);
		EV_Wait(127);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0101_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(p_fpack1, &action_fp_0101_fpack, &texlist_fpack, 1.0f, 0, 0);
		EV_SetAction(player, &action_a_a0102_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(p_fpack1, &action_fp_0102_fpack, &texlist_fpack, 1.0f, 1, 0);
		EV_Wait(12);
		EV_CameraPos(1, 6, 105.97f, 7.5359998f, 740.79999f);
		EV_SetPos(p_fpack1,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_Wait(14);
		EV_ClrFace(player);
		EV_SetFace(player, "T");
		EV_CameraPos(0, 0, 123.57f, 16.757f, 735.26001f);
		EV_CameraAng(0, 0, 0xD600, 0x9C00, 0xFF00);
		EV_CameraPos(0, 125, 120.4f, 12.04f, 731.12598f);
		EV_CameraAng(0, 125, 0xE700, 0x9C00, 0xFF00);
		EV_Wait(30);
		EV_ClrFace(player);
		EV_SetFace(player, "DI");
		EV_SerifPlay(833);
		EV_Msg(msgTbl_ev0060[TextLanguage][0]); //"\aGee, I'm bored."
		EV_Wait(78);
		EV_CameraPos(0, 0, 125.8f, 7.4000001f, 736.03003f);
		EV_CameraAng(0, 0, 0xF00, 0xD900, 0);
		EV_CameraAng(0, 60, 0xF00, 0xCA8F, 0);
		EV_SerifPlay(834);
		EV_Msg(msgTbl_ev0060[TextLanguage][1]); //"\aEvery day's the same old thing..."
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(17);
		EV_CameraPos(0, 0, 126.6863f, 7.8000002f, 738.0f);
		EV_CameraAng(0, 0, 0xA00, 0x1700, 0);
		EV_CameraAng(0, 50, 0xA00, 0x2700, 0);
		EV_SerifPlay(835);
		EV_Msg(msgTbl_ev0060[TextLanguage][2]); //"\aSame place, different day..."
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(17);
		EV_CameraPos(0, 0, 118.14f, 6.3870001f, 734.31702f);
		EV_CameraAng(0, 0, 0x400, 0xA700, 0);
		EV_CameraPos(0, 105, 121.4836f, 6.3870001f, 732.08002f);
		EV_CameraAng(0, 105, 0x400, 0x9A00, 0);
		EV_ClrAction(player);
		EV_ClrAction(p_fpack1);
		EV_SetAction(player, &action_a_a0103_amy, &AMY_TEXLIST, 0.69999999f, 0, 0);
		EV_SetAction(p_fpack1, &action_fp_0103_fpack, &texlist_fpack, 0.69999999f, 0, 0);
		EV_SetAction(player, &action_a_a0104_amy, &AMY_TEXLIST, 0.60000002f, 1, 0);
		EV_SetAction(p_fpack1, &action_fp_0104_fpack, &texlist_fpack, 0.60000002f, 1, 0);
		EV_Wait(20);
		EV_ClrFace(player);
		EV_SetFace(player, "CE");
		EV_SerifPlay(836);
		EV_Msg(msgTbl_ev0060[TextLanguage][3]); //"\aI miss the good old days."
		EV_Wait(40);
		EV_SerifWait();
		EV_CameraPos(0, 0, 122.487f, 4.54f, 734.87f);
		EV_CameraAng(0, 0, 0xE00, 0x9F00, 0);
		EV_CameraPos(0, 95, 124.37f, 4.54f, 734.20001f);
		EV_CameraAng(0, 95, 0xE00, 0x8E00, 0);
		EV_SetFace(player, "DEDC");
		EV_SerifPlay(837);
		EV_Msg(msgTbl_ev0060[TextLanguage][4]); //"\aHangin' out with my hero, Sonic..."
		EV_Wait(20);
		throughplayer_on(player);
		throughplayer_on(sonic);
		EV_SetMode(player, 0);
		EV_SetMode(sonic, 0);
		EV_Wait(40);
		EV_MsgClose();
		EV_CameraPos(0, 75, 123.5753f, 11.15f, 732.0f);
		EV_CameraAng(0, 75, 0xE00, 0x8E00, 0);
		task_frame = CIchimaie2_Create(&texlist_icm0060, 0);
		CIchimaie2_SetBlendingMode(task_frame, 0, 8);
		CIchimaie2_SetBlendingMode(task_frame, 1, 10);
		CIchimaie2_SetDstAlpha(task_frame, 1.0f, 60);
		task_recollect0 = CIchimaie2_Create(&texlist_icm0060, 0);
		CIchimaie2_SetTextureId(task_recollect0, 1);
		CIchimaie2_SetPriority(task_recollect0, -1.1f);
		CIchimaie2_SetDstAlpha(task_recollect0, 1.0f, 60);
		EV_Wait(60);
		CIchimaie2_SetPriority(task_recollect0, -200.0f);
		task_skywalk_3 = CSkyWalk_create2(player, 250.0f);
		task_skywalk2 = CSkyWalk_create2(sonic, 250.0f);
		stopObject(p_fpack1);
		EV_FreeObject(&p_fpack1);
		EV_SetAction(player, &action_a_a0099_amy, &AMY_TEXLIST, 2.0f, 1, 0);
		EV_SetAction(sonic, &action_s_s0076_sonic, &SONIC_TEXLIST, 2.0f, 1, 0);
		EV_SetFace(player, "JJ");
		EV_CameraAng(1, 0, 0xFF00, 0x2A25, 0xF900);
		EV_CameraPos(1, 0, 2868.8999f, 257.48001f, 850.32849f);
		EV_SetPath(player, &epathtag_cube0060_1, 0.34999999f, 0);
		EV_SetPath(sonic, &epathtag_cube0060_1, 0.34999999f, 0);
		EV_SerifPlay(838);
		EV_Msg(msgTbl_ev0060[TextLanguage][5]); //"\aChasing bad guys..."
		EV_SetPath(m_sonic, &epathtag_cube0060ms1, 0.50999999f, 0);
		EV_SetAng(m_sonic, 0, 0x2700, 0x4000);
		EV_SetAction(m_sonic, &action_ev_s_msbody, &texlist_ev_s_msbody, 1.0f, 1, 0);
		EV_Wait(22);
		task_recollect1 = CIchimaie2_Create(&texlist_icm0060, 0);
		CIchimaie2_SetTextureId(task_recollect1, 2);
		CIchimaie2_SetPriority(task_recollect1, -201.0f);
		CIchimaie2_SetDstAlpha(task_recollect1, 1.0f, 62);
		EV_Wait(6);
		if (SMOKE2)
		{
			SMOKE2->twp->ang.y = 1;
			SMOKE2->twp->ang.x = 1;
		}
		effect_create2(player, 3, 3.0f, 3.0f, 3.0f, &ev_effect_list2);
		effect_scl(3, 0.5f, 0.40000001f);
		EV_Wait(2);
		EV_SetPos(SMOKE2, 100.0f, 10.0f, 10.0f);
		EV_Wait(6);
		effect_delete(3);
		EV_Wait(44);
		EV_SerifPlay(839);
		if (SMOKE)
		{
			SMOKE->twp->ang.y = 1;
			SMOKE->twp->ang.x = 1;
		}
		effect_create2(0, 2, 2846.5f, 252.0f, 820.0f, &ev_effect_list2);
		effect_scl(2, 1.5f, 1.5f);
		EV_Wait(2);
		EV_SetPos(SMOKE, 0.0f, 0.0f, 0.0f);
		EV_Wait(8);
		effect_delete(2);
		EV_Wait(10);
		EV_ClrAction(m_sonic);
		if (task_recollect0)
		{
			FreeTask(task_recollect0);
			task_recollect0 = 0;
		}
		EV_ClrPath(player);
		EV_ClrPath(sonic);
		EV_CameraAng(1, 0, 0, 0x1025, 0);
		EV_CameraPos(1, 0, 2845.0f, 263.0f, 861.0f);
		EV_CameraAng(0, 80, 0x300, 0x1025, 0xFD00);
		EV_CameraPos(0, 80, 2855.1001f, 254.0f, 856.0f);
		EV_SetPath(player, &epathtag_cube0060_2, 0.34f, 0);
		EV_SetPath(sonic, &epathtag_cube0060_2, 0.34f, 0);
		EV_Msg(msgTbl_ev0060[TextLanguage][6]); // "\aAnd blowing them away - ha hah!"
		EV_Wait(10);
		EV_SetPath(m_sonic, &epathtag_cube0060ms1, 0.63999999f, 0);
		EV_SetAng(m_sonic, 0x8000, 0x8000, 0x4000);
		EV_SetAction(m_sonic, &action_ev_s_msbody, &texlist_ev_s_msbody, 1.0f, 1, 0);
		EV_SetPos(SMOKE2, 2704.0f, 255.0f, 658.0f);
		effect_create2(0, 0, 2704.0f, 255.0f, 658.0f, &ev_effect_list2);
		effect_scl(0, 0.5f, 0.5f);
		EV_Wait(2);
		EV_SetPos(SMOKE2, 0.0f, 10.0f, 0.0f);
		EV_Wait(6);
		effect_delete(0);
		EV_Wait(40);
		EV_SetPos(SMOKE, 2830.0f, 253.0f, 825.59998f);
		effect_create2(0, 1, 2830.0f, 252.0f, 825.59998f, &ev_effect_list2);
		effect_scl(1, 1.5f, 1.5f);
		EV_Wait(2);
		EV_SetPos(SMOKE, 10.0f, 10.0f, 10.0f);
		EV_Wait(6);
		effect_delete(1);
		EV_Wait(9);
		CIchimaie2_SetDstAlpha(task_frame, 0.0f, 60);
		CIchimaie2_SetDstAlpha(task_recollect1, 0.0f, 60);
		EV_InitPlayer(0);
		if (task_skywalk_3)
		{
			FreeTask(task_skywalk_3);
			task_skywalk_3 = 0;
		}
		if (task_skywalk2)
		{
			FreeTask(task_skywalk2);
			task_skywalk2 = 0;
		}
		EV_SetFace(player, "BBBBBBB");
		EV_LookPoint(player, 127.0f, 11.0f, 720.0f);
		EV_CreateObject(&p_fpack2, 130.0f, 0.0f, 850.0f, 0, 0, 0);
		EV_Wait(1);
		EV_SetMode(p_fpack2, 0);
		EV_SetPos(player, 127.0f, 0.0f, 740.0f);
		EV_SetPos(p_fpack2, 127.0f, 0.0f, 740.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_SetAng(p_fpack2, 0, 0x8000, 0);
		EV_CameraPos(0, 0, 123.5753f, 11.15f, 732.0f);
		EV_CameraAng(0, 0, 0xE00, 0x8E00, 0);
		EV_SetMode(player, 0);
		EV_ClrAction(player);
		EV_ClrAction(p_fpack2);
		EV_SetAction(player, &action_a_a0102_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(p_fpack2, &action_fp_0102_fpack, &texlist_fpack, 1.0f, 1, 0);
		throughplayer_off(player);
		throughplayer_off(sonic);
		if (SMOKE)
		{
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		if (SMOKE2)
		{
			FreeTask(SMOKE2);
			SMOKE2 = 0;
		}
		EV_CameraPos(0, 55, 127.05f, 5.0840001f, 732.35999f);
		EV_CameraAng(0, 55, 0xA00, 0x7F00, 0);
		EV_MsgClose();
		EV_Wait(35);
		if (task_frame)
		{
			FreeTask(task_frame);
			task_frame = 0;
		}
		if (task_recollect1)
		{
			FreeTask(task_recollect1);
			task_recollect1 = 0;
		}
		EV_LookFree(player);
		EV_ClrFace(player);
		EV_SetFace(player, "T");
		EV_Wait(5);
		EV_ClrAction(player);
		EV_ClrAction(p_fpack2);
		EV_SetAction(player, &action_a_a0100_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(p_fpack2, &action_fp_0100_fpack, &texlist_fpack, 1.0f, 1, 0);
		moveObject(player, 127.0f, 0.0f, 740.0f, 127.0f, 0.0f, 695.0f, 135);
		moveObjectOn(p_fpack2, 0.0f, 0.0f, 0.0f, 135, player);
		EV_CameraPos(0, 0, 124.83f, 9.1599998f, 751.28699f);
		EV_CameraAng(0, 0, 0xF300, 0xF500, 0);
		EV_CameraPos(0, 180, 127.36f, 8.8000002f, 701.966f);
		EV_CameraAng(0, 180, 0xF400, 0xFE00, 0);
		EV_RemovePlayer(2);
		EV_SerifPlay(840);
		EV_Msg(msgTbl_ev0060[TextLanguage][7]); //"\aBut now he's gone.\nAnd there's nothi"...
		EV_Wait(120);
		EV_SetAction(player, &action_a_a0109_amy, &AMY_TEXLIST, 1.3f, 0, 0);
		EV_SetAction(p_fpack2, &action_fp_0109_fpack, &texlist_fpack, 1.3f, 0, 0);
		EV_Wait(18);
		EV_CameraPos(0, 8, 127.36f, 9.3870001f, 703.87701f);
		EV_WaitAction(p_fpack2);
		EV_SetPos(player, 127.72f, 0.0f, 695.0f);
		EV_SetPos(p_fpack2, 127.72f, 0.0f, 695.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetAng(p_fpack2, 0, 0, 0);
		EV_SetAction(player, &action_a_a0101_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(p_fpack2, &action_fp_0101_fpack, &texlist_fpack, 1.0f, 0, 0);
		EV_SetAction(player, &action_a_a0102_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(p_fpack2, &action_fp_0102_fpack, &texlist_fpack, 1.0f, 1, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "AEACADEACVVVVVVV");
		EV_SerifPlay(841);
		EV_MsgW(120, msgTbl_ev0060[TextLanguage][8]); //"\abut shop 'til I drop.\nThere was alwa"...
		EV_Msg(msgTbl_ev0060[TextLanguage][9]); //"\awith Sonic around. \nI really miss hi"...
		EV_CameraPerspective(0, 160, 0x1C72);
		EV_CameraPos(0, 160, 134.0f, 8.5f, 702.90002f);
		EV_CameraAng(0, 160, 0xF800, 0x1C00, 0);
		EV_Wait(20);
		EV_LookFree(player);
		EV_LookPoint(player, 127.0f, 11.0f, 720.0f);
		EV_SerifWait();
		shadow = COverlayCreate(0.0f, 0.40000001f, 0.0f, 0.0f, 0.0f);
		EV_Wait(1);
		BGM_Stop();
		EV_Wait(25);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "HEFE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "HEFEFF");
		}
		EV_CameraPos(0, 140, 140.0f, 6.4000001f, 701.0f);
		EV_CameraAng(0, 140, 0x200, 0x2E00, 0x200);
		EV_Wait(16);
		EV_SerifPlay(842);
		EV_Msg(msgTbl_ev0060[TextLanguage][10]); //"\aHey, what's going on here?\nIs there "...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_SetAction(player, &action_a_a0104_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(p_fpack2, &action_fp_0104_fpack, &texlist_fpack, 1.0f, 1, 0);
		EV_CameraPos(1, 0, 131.89999f, 9.6599998f, 690.27002f);
		EV_CameraAng(1, 0, 0xF800, 0x5E00, 0);
		EV_CameraPos(1, 180, 132.62f, 5.7680001f, 689.63702f);
		EV_CameraAng(1, 180, 0x200, 0x5E00, 0);
		EV_SetFace(player, "FEFFL");
		EV_SerifPlay(843);
		EV_Msg(msgTbl_ev0060[TextLanguage][11]); //"\aNobody forecast a storm or anything.."...
		EV_Wait(10);
		EV_SetAction(player, &action_a_a0105_amy, &AMY_TEXLIST, 0.30000001f, 0, 0);
		EV_SetAction(p_fpack2, &action_fp_0105_fpack, &texlist_fpack, 0.30000001f, 0, 0);
		EventSe_Play(0, 1333, 1800);
		EventSe_Volume(0, -40, 1);
		EV_SetAction(player, &action_a_a0106_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(p_fpack2, &action_fp_0106_fpack, &texlist_fpack, 1.0f, 1, 0);
		EV_Wait(1);
		EventSe_Volume(0, 80, 90);
		EV_SerifWait();
		EV_Wait(5);
		EV_ClrFace(player);
		EV_SetFace(player, "JZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ");
		EV_Wait(40);
		EV_CameraAng(0, 50, 0xF300, 0x5E00, 0);
		EV_CameraPos(0, 50, 132.60001f, 8.75f, 689.66998f);
		EV_SetAction(player, &action_a_a0107_amy, &AMY_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(p_fpack2, &action_fp_0107_fpack, &texlist_fpack, 1.0f, 0, 0);
		EventSe_Oneshot(1335, 40, 0, 0);
		EV_SetAction(player, &action_a_a0108_amy, &AMY_TEXLIST, 0.30000001f, 1, 0);
		EV_SetAction(p_fpack2, &action_fp_0108_fpack, &texlist_fpack, 0.30000001f, 1, 0);
		EV_Wait(40);
		EV_CameraPos(0, 65, 203.64f, 40.439999f, 625.26001f);
		EV_Wait(40);
		EventSe_Stop(0);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EventSe_Close();
		if (task_skywalk_3)
		{
			FreeTask(task_skywalk_3);
			task_skywalk_3 = 0;
		}
		if (task_skywalk2)
		{
			FreeTask(task_skywalk2);
			task_skywalk2 = 0;
		}
		throughplayer_off(player);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&p_fpack1);
		EV_FreeObject(&p_fpack2);
		EV_FreeObject(&fatman_b);
		EV_FreeObject(&ol1);
		EV_FreeObject(&oy1);
		EV_FreeObject(&oy2);
		EV_FreeObject(&boy1);
		EV_FreeObject(&girl1);
		EV_FreeObject(&m_sonic);
		fadein_delete(); //Not sure if this is used because it's for an object that doesn't seem to be referenced outside this function.
		if (task_frame)
		{
			FreeTask(task_frame);
			task_frame = 0;
		}
		if (task_recollect0)
		{
			FreeTask(task_recollect0);
			task_recollect0 = 0;
		}
		if (task_recollect1)
		{
			FreeTask(task_recollect1);
			task_recollect1 = 0;
		}
		effect_delete(0);
		effect_delete(1);
		effect_delete(2);
		effect_delete(3);
		if (SMOKE)
		{
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		if (SMOKE2)
		{
			FreeTask(SMOKE2);
			SMOKE2 = 0;
		}
		if (shadow)
		{
			FreeTask(shadow);
			shadow = 0;
		}
		break;
	}
}