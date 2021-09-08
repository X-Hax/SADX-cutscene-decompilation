#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0034[] = {
	(char*)("M_EM_PURPLE"), &M_EM_PURPLE_TEXLIST,
	(char*)("EV_EGGMOBLE0"),&EV_EGGMOBLE0_TEXLIST,
	(char*)("MGHAND"),&MGHAND_TEXLIST,
	(char*)("CHAOS0"), BOSSCHAOS0_TEXLISTS[0],
	(char*)("EV_CHAOS1"), &EV_CHAOS1_TEXLIST,
	(char*)("EV_CHAOS0_MANJU"), &EV_CHAOS0_MANJU_TEXLIST,
	(char*)("CHAOS_SURFACE"), &CHAOS_SURFACE_TEXLIST
};

void ev0034_t_chaos1(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(76);
		EventSe_Init(4);
		EV_InitPlayer(0);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_Wait(1);
		create_eggmoble(1045.3f, 135.5f, 888.0f, 0, 0xF700, 0);
		EV_Wait(3);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0028_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.1f, 1, 0);
		BROKEN_EGG = CObjSmoke_Create();
		BROKEN_EGG2 = CObjSmoke_Create();
		BROKEN_EGG4 = CObjSmoke_Create();

		if (BROKEN_EGG)
			*(float*)BROKEN_EGG->twp->value.l = 2.5f;
		if (BROKEN_EGG2)
			*(float*)BROKEN_EGG2->twp->value.l = 4.0f;
		if (BROKEN_EGG4)
			*(float*)BROKEN_EGG4->twp->value.l = 2.5f;
		if (BROKEN_EGG2)
		{
			*(float*)(BROKEN_EGG2->twp->value.l + 44) = 1.0f;
			*(float*)(BROKEN_EGG2->twp->value.l + 48) = 0.89999998f;
			*(float*)(BROKEN_EGG2->twp->value.l + 52) = 0.89999998f;
			*(float*)(BROKEN_EGG2->twp->value.l + 56) = 0.89999998f;
		}
		if (BROKEN_EGG4)
		{
			*(float*)(BROKEN_EGG4->twp->value.l + 44) = 1.0f;
			*(float*)(BROKEN_EGG4->twp->value.l + 48) = 0.64999998f;
			*(float*)(BROKEN_EGG4->twp->value.l + 52) = 0.64999998f;
			*(float*)(BROKEN_EGG4->twp->value.l + 56) = 0.64999998f;
		}


		BROKEN_EGG2->twp->ang.y = 4;
		BROKEN_EGG2->twp->ang.x = 4;
		BROKEN_EGG4->twp->ang.y = 5;
		BROKEN_EGG4->twp->ang.x = 5;

		EV_SetPos(player, 981.0f, 126.4f, 868.79999f);
		EV_SetAng(player, 0x18, 0x2400, 0x3E);
		EV_CreatePlayer(2, SonicTheHedgehog, 981.0f, 126.4f, 868.79999f, 0x18, 0x1B00, 0x3E);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, 973.29999f, 126.5f, 823.5f);
		EV_SetAng(sonic, 0xFFF0, 0xCE0, 0x54);
		EV_CreateObject(&C_EME_P, 981.0f, 126.4f, 868.79999f, 0x18, 0x1B00, 0x3E);
		EV_Wait(1);
		EV_SetMode(C_EME_P, 0);
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, 0x200, 0x5000, 0x2300, 140, 1);
		EV_CameraPos(1, 0, 1025.5f, 147.77f, 871.59998f);
		EV_CameraAng(1, 0, 0x100, 0xB300, 0xF700);
		EV_CameraPos(0, 70, 998.40002f, 142.7f, 883.79999f);
		EV_CameraAng(0, 70, 0xFB00, 0xBE00, 0xFC00);
		EventSe_Play(3, 1112, 1800);
		EventSe_Volume(3, 115, 1);
		EV_Wait(30);
		EventSe_Oneshot(25, 90, 0, 0);
		EV_Wait(40);
		EventSe_Oneshot(25, 20, 0, 0);
		EV_SetPos(BROKEN_EGG, 1030.3f, 129.5f, 874.59998f);
		EV_SetPos(BROKEN_EGG2, 1030.3f, 129.5f, 874.59998f);
		EV_CameraPos(0, 110, 957.40002f, 129.7f, 877.79999f);
		EV_CameraAng(0, 110, 0x800, 0xC100, 0xFE00);
		EventSe_Oneshot(25, -20, 0, 0);
		EV_Wait(110);
		EventSe_Oneshot(25, -20, 0, 0);
		EventSe_Volume(3, 80, 1);
		ChgEggMobleMod(5);
		EV_Wait(30);
		EV_CameraPos(0, 80, 957.40002f, 127.7f, 872.59998f);
		EV_CameraAng(0, 80, 0xC00, 0xC000, 0xFE00);
		EV_Wait(80);
		EventSe_Volume(3, 60, 1);
		EV_CameraPos(1, 0, 989.96997f, 129.60001f, 876.95001f);
		EV_CameraAng(1, 0, 0x81C, 0x1E94, 0xFCE0);
		EV_CameraPos(0, 90, 992.40002f, 129.2f, 857.5f);
		EV_CameraAng(0, 90, 0x91C, 0x1C94, 0xFD00);
		EV_SetPos(player, 981.0f, 126.4f, 868.79999f);
		EV_SetAng(player, 0x18, 0x8858, 0x3E);
		EV_SetPos(C_EME_P, 981.0f, 126.4f, 868.79999f);
		EV_SetAng(C_EME_P, 0x18, 0x8858, 0x3E);
		EV_Wait(1);
		EV_SetAction(C_EME_P, &action_m_m0136d_m_em_purple, &M_EM_PURPLE_TEXLIST, 0.80000001f, 1, 0);
		EV_SetAction(player, &action_m_m0136_miles, &MILES_TEXLIST, 0.80000001f, 1, 0);
		EV_MovePoint2(player, 975.5f, 126.5f, 842.59998f, 0.2f, 0.059999999f);
		EV_Wait(1);
		moveObjectOn(C_EME_P, 0.0f, 0.0f, 0.0f, 160, player);
		EV_ClrFace(player);
		EV_SetFace(player, "PCPDDP");
		EV_SerifPlay(649);
		EV_MsgW(60, msgTbl_ev0034[TextLanguage][0]); //"\aThat was just too easy!"
		EV_Wait(1);
		EventSe_Volume(3, 40, 1);
		EV_ClrAction(eggmoble);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		if(BROKEN_EGG){
			FreeTask(BROKEN_EGG);
			BROKEN_EGG = 0;
		}
		if(BROKEN_EGG4){
			FreeTask(BROKEN_EGG4);
			BROKEN_EGG4 = 0;
		}
		EV_SetPos(player, 983.79999f, 126.5f, 848.70001f);
		EV_SetAng(player, 0x18, 0x8750, 0x3E);
		EV_SetPos(sonic, 981.0f, 126.4f, 868.79999f);
		EV_SetAng(player, 0x18, 0x1B00, 0x3E);
		EV_CameraPos(1, 0, 1035.7f, 144.10001f, 889.5f);
		EV_CameraAng(1, 0, 0xE813, 0xA90, 0xF1C1);
		EV_CameraPos(1, 20, 1036.2f, 143.5f, 890.16998f);
		EV_CameraAng(1, 20, 0xF513, 0x990, 0xF2C1);
		EventSe_Stop(3);
		EV_Wait(25);
		EV_CameraPos(0, 3, 1036.15f, 141.7f, 889.70001f);
		EV_CameraAng(0, 3, 0xFA13, 0x1890, 0xECC1);
		suki1_point = CSukiari_Create(0, &sukiari1, 4);
		CSukiari_Alpha(suki1_point, 117, 6);
		suki2_point = CSukiari_Create(0, &sukiari2, 4);
		CSukiari_Alpha(suki2_point, 128, 6);
		EV_Msg(msgTbl_ev0034[TextLanguage][1]); //"\aGotcha!  "
		EventSe_Oneshot(1333, 128, 0, 0);
		EV_SerifPlay(650);
		EV_Wait(10);
		EV_CameraPos(0, 2, 1033.7f, 139.95f, 891.70001f);
		EV_CameraAng(0, 2, 0xFA13, 0x1890, 0xECC1);
		EV_Wait(2);
		EV_CameraPos(0, 10, 989.70001f, 131.89999f, 858.40002f);
		EV_CameraAng(0, 10, 0xFC13, 0x1390, 0x8C1);
		CSukiari_Alpha(suki1_point, 0, 16);
		CSukiari_Alpha(suki2_point, 0, 16);
		EV_Wait(14);
		if(suki1_point){
			FreeTask(suki1_point);
			suki1_point = 0;
		}
		if(suki2_point){
			FreeTask(suki2_point);
			suki2_point = 0;
		}
		BGM_Play(MusicIDs_eggman);
		EV_Wait(20);
		EventSe_Play(1, 1334, 1800);
		EventSe_Volume(1, 115, 1);
		EventSe_Pan(1, 20, 1);
		HAND_1 = mghand_init(1046.225f, 134.56f, 885.20001f, 0, 0, 0xA000);
		HAND_2 = mghand_init(1066.73f, 114.058f, 885.20001f, 0, 0, 0x2000);
		mghandsetspd(HAND_1, 0x1200, 0x1200);
		mghandsetspd(HAND_2, 0x1200, 0x1200);
		EV_SetPos(C_EME_P, 984.0f, 126.4f, 868.79999f);
		EV_SetAng(C_EME_P, 0x18, 0x8858, 0x3E);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 4);
		EV_SetPos(player, 983.79999f, 126.5f, 848.70001f);
		EV_SetAng(player, 0x18, 0x750, 0x3E);
		EV_SetPos(C_EME_P, 983.79999f, 126.5f, 848.70001f);
		EV_SetAng(C_EME_P, 0x18, 0x750, 0x3E);
		EV_CameraPos(1, 0, 1031.1f, 132.89999f, 900.09998f);
		EV_CameraAng(1, 0, 0x1813, 0xE790, 0xFAC1);
		EV_CameraPos(0, 20, 1031.51f, 129.89999f, 897.38f);
		EV_CameraAng(0, 20, 0x3413, 0x190, 0xECC1);
		moveObject(HAND_1, 1046.225f, 134.56f, 885.20001f, 1006.39f, 174.5f, 885.20001f, 25);
		moveObject(HAND_2, 1066.73f, 114.058f, 885.20001f, 1046.225f, 134.56f, 885.20001f, 25);
		chgMghandMod(HAND_1, 1);
		EV_Wait(3);
		chgMghandMod(HAND_1, 2);
		EV_Wait(3);
		chgMghandMod(HAND_1, 1);
		EV_Wait(3);
		chgMghandMod(HAND_1, 2);
		EV_Wait(3);
		chgMghandMod(HAND_1, 1);
		EV_Wait(3);
		chgMghandMod(HAND_1, 2);
		EV_Wait(3);
		chgMghandMod(HAND_1, 1);
		EV_Wait(3);
		chgMghandMod(HAND_1, 2);
		EV_Wait(1);
		BROKEN_EGG2->twp->ang.y = 0;
		BROKEN_EGG2->twp->ang.x = 0;
		EV_SetPos(C_EME_P, 981.79999f, 130.5f, 852.70001f);
		EV_SetAng(C_EME_P, 0x18, 0x3000, 62);
		HAND_3 = mghand_init(990.0f, 138.0f, 866.0f, 0x1300, 0x5000, 0xF000);
		EV_CameraPos(1, 0, 990.0f, 138.0f, 866.0f);
		EV_CameraAng(1, 0, 0x1300, 0x5000, 0xF000);
		moveObject(HAND_3, 990.0f, 138.0f, 866.0f, 988.0f, 128.0f, 856.70001f, 7);
		EventSe_Volume(1, 105, 1);
		EventSe_Pan(1, -20, 1);
		EventSe_Pitch(1, -1214, 1);
		EV_CameraPos(1, 0, 990.64001f, 130.66f, 834.57001f);
		EV_CameraAng(1, 0, 0x8AD, 0x9A5C, 0xF5C1);
		EV_CameraPos(0, 12, 984.66998f, 127.18f, 835.78003f);
		EV_CameraAng(0, 12, 0xBAD, 0x905C, 0xF4C1);
		chgMghandMod(HAND_1, 1);
		EV_Wait(3);
		chgMghandMod(HAND_1, 2);
		EV_Wait(3);
		EventSe_Oneshot(1335, 118, 0, 0);
		RumbleA(0, 2);
		EV_SetAction(sonic, &action_s_s0038_sonic, &SONIC_TEXLIST, 0.5f, 1, 1);
		EV_SetAction(player, &action_m_m0104_miles, &MILES_TEXLIST, 1.2f, 0, 1);
		EV_SetAction(player, &action_m_m0137_miles, &MILES_TEXLIST, 1.2f, 0, 1);
		EV_SetAction(player, &action_m_m0138_miles, &MILES_TEXLIST, 1.2f, 1, 1);
		EventSe_Volume(1, 95, 1);
		EventSe_Pan(1, -20, 1);
		EventSe_Pitch(1, 1214, 1);
		EV_Wait(1);
		EventSe_Pitch(1, -1214, 110);
		EV_ClrAction(C_EME_P);
		EV_SetAction(C_EME_P, &action_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 1);
		stopObject(C_EME_P);
		moveObjectOn(C_EME_P, -3.9400001f, 2.9100001f, -3.9200001f, -1, HAND_3);
		EV_CameraPos(0, 15, 974.29999f, 128.10001f, 838.46997f);
		EV_CameraAng(0, 15, 0x813, 0x9E90, 0xEBC1);
		chgMghandMod(HAND_1, 1);
		EV_Wait(2);
		chgMghandMod(HAND_1, 2);
		EV_CameraPos(0, 20, 962.67999f, 127.7f, 850.54999f);
		EV_CameraAng(0, 20, 0xA13, 0xB490, 0x7C1);
		EV_SetAction(sonic, &action_s_s0044_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 4);
		EV_SerifPlay(651);
		EV_Msg(msgTbl_ev0034[TextLanguage][2]); //"\aHey!   He snagged it!"
		EV_SetAction(sonic, &action_s_s0044_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 4);
		moveObject(HAND_3, 987.5f, 131.8f, 857.90002f, 998.58002f, 170.42f, 887.77002f, 40);
		EV_ClrAction(C_EME_P);
		EV_SetAction(C_EME_P, &action_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 1);
		stopObject(C_EME_P);
		moveObjectOn(C_EME_P, -3.9400001f, 2.9100001f, -3.9200001f, -1, HAND_3);
		EV_SerifWait();
		EV_Wait(40);
		stopObject(C_EME_P);
		moveObject(HAND_1, 1006.39f, 174.5f, 885.20001f, 1046.225f, 134.56f, 885.20001f, 45);
		moveObject(HAND_2, 1046.225f, 134.56f, 885.20001f, 1066.73f, 114.058f, 885.20001f, 45);
		moveObjectOn(C_EME_P, -7.3499999f, 17.5f, -0.1f, 55, HAND_1);
		EV_CameraPos(0, 30, 957.52002f, 128.16f, 868.04999f);
		EV_CameraAng(0, 30, 0xA13, 0xC590, 0x7C1);
		EV_Wait(50);
		EV_MsgClose();
		stopObject(C_EME_P);
		EV_SetAction(C_EME_P, &action_gm_gm0023cp_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.08f, 1, 0);
		if(HAND_1){
			FreeTask(HAND_1);
			HAND_1 = 0;
		}
		if(HAND_2){
			FreeTask(HAND_2);
			HAND_2 = 0;
		}
		EV_SetPos(HAND_3, 1055.24f, 144.058f, 886.63f);
		EV_SetAng(HAND_3, 0, 0x5000, 0x8000);
		moveObjectAngle2(
			HAND_3,
			1055.24f, 144.058f, 886.63f,
			1055.24f, 115.058f, 886.63f,
			0, 0x5000, 0x8000,
			0, 0xD000, 0x8000,
			120);
		EV_SetAction(eggmoble, &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.1f, 1, 0);
		EV_SetAng(sonic, 0x18, 0x3400, 62);
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, -0x200, -0x8000, -0x2300, 1, 1);
		EV_SetPos(C_EME_P, 1052.5f, 123.6f, 873.29999f);
		EV_SetAng(C_EME_P, 0, 0, 0);
		EV_CameraPos(0, 0, 1046.0f, 156.17f, 875.54999f);
		EV_CameraAng(0, 0, 0x4FD, 0x98FF, 0xC1);
		EventSe_Volume(1, 70, 1);
		EventSe_Pan(1, -20, 1);
		EventSe_Pitch(1, -1440, 1);
		EV_Wait(5);
		ChgEggMobleMod(5);
		EV_Wait(2);
		EV_CameraPos(1, 100, 1046.87f, 148.23f, 876.47998f);
		EV_CameraAng(1, 100, 0x4F9, 0x8BFF, 0xC1);
		EV_Wait(30);
		EventSe_Oneshot(1336, 128, 0, 0);
		EV_Wait(100);
		if(HAND_3){
			FreeTask(HAND_3);
			HAND_3 = 0;
		}
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 8);
		EventSe_Stop(1);
		EV_CameraPos(0, 0, 1046.23f, 143.45f, 881.0f);
		EV_CameraAng(0, 0, 0xDFD, 0x6FFF, 0xC1);
		EV_CameraPos(1, 90, 1046.12f, 143.78999f, 881.97998f);
		EV_CameraAng(1, 90, 0xDFD, 0x7AFF, 0xC1);
		EV_SerifPlay(652);
		EV_Msg(msgTbl_ev0034[TextLanguage][3]); //"\aChaos could use a little snack!"
		EV_SerifWait();
		EV_ClrAction(player);
		EV_SetPos(player, 981.0f, 126.4f, 868.79999f);
		EV_SetAng(player, 0x18, 0x3400, 0x3E);
		EV_SetPos(sonic, 980.0f, 126.4f, 843.79999f);
		EV_SetAng(sonic, 0x18, 0x3400, 0x3E);
		EV_Wait(20);
		EventSe_Play(2, 1337, 1800);
		EventSe_Volume(2, 20, 1);
		CreateChaos0(1091.2f, 121.5f, 866.79999f, 0, 0x800, 0, 80);
		SetWaterChaos0();
		EventSe_Volume(2, 30, 80);
		MoveChaos0(1096.2f, 126.3f, 864.79999f, 60);
		EV_CameraPos(0, 0, 971.79999f, 128.3f, 856.70001f);
		EV_CameraAng(0, 0, 0xAB9, 0xA9AA, 0x2C1);
		EV_SerifPlay(653);
		EV_Msg(msgTbl_ev0034[TextLanguage][4]); //"\aWho's Chaos?"
		EV_CameraPos(1, 50, 970.79999f, 128.7f, 860.5f);
		EV_CameraAng(1, 50, 0x8B9, 0xB7AA, 0x3C1);
		EV_Wait(50);
		EV_MsgClose();
		MoveChaos0(1050.0f, 126.3f, 857.79999f, 90);
		EV_CameraPos(0, 0, 1035.2f, 157.3f, 896.70001f);
		EV_CameraAng(0, 0, 0xE821, 0xDF0C, 0xFFC1);
		EV_CameraPos(0, 70, 1026.2f, 157.60001f, 883.59998f);
		EV_CameraAng(0, 70, 0xE82C, 0xDA0C, 0xFFC1);
		EventSe_Volume(2, 0, 70);
		EV_Wait(70);
		EV_MsgClose();
		EV_CameraPos(1, 0, 1040.2f, 128.0f, 849.70001f);
		EV_CameraAng(1, 0, 0x6B9, 0x9EAA, 0xF5C1);
		EV_CameraPos(1, 110, 1037.66f, 134.47f, 848.67999f);
		EV_CameraAng(1, 110, 0xFB9, 0x9AAA, 0xF5C1);
		EventSe_Volume(2, 5, 70);
		ToHumanChaos0();
		EV_Wait(120);
		EV_CameraPos(1, 0, 987.20001f, 130.5f, 877.5f);
		EV_CameraAng(1, 0, 0x3B9, 0xAAA, 0xFEC1);
		EV_CameraPos(1, 80, 987.0f, 130.8f, 876.59998f);
		EV_CameraAng(1, 80, 0x4B9, 0x16AA, 0xFEC1);
		EV_LookPoint(player, 1052.5f, 148.60001f, 863.87f);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 1.0f, 0, 1);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 1);
		EV_SerifPlay(654);
		EV_Msg(msgTbl_ev0034[TextLanguage][5]); //"\aThat's the monster \nI saw the other "...
		EV_Wait(40);
		EV_MsgClose();
		EV_ClrFace(player);
		EV_SetFace(player, "ABAAAAAAAABAAAAABAAAAAAB");
		EV_SerifPlay(655);
		EV_SetFace(player, "AB");
		EV_Msg(msgTbl_ev0034[TextLanguage][6]); //"\aUh, Monster?"
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "BBABB");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "CCCCC");
		}
		EV_Wait(40);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(20);
		EV_LookFree(player);
		EV_CameraPos(1, 0, 1032.2f, 133.5f, 844.09998f);
		EV_CameraAng(1, 0, 0x3B9, 0x9BAA, 0xFEC1);
		EV_CameraPos(1, 80, 1006.66f, 134.89999f, 859.0f);
		EV_CameraAng(1, 80, 0x3B9, 0xBEAA, 0xFEC1);
		EV_SetAction(eggmoble, &action_gm_gm0024_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
		moveObjectAngle2(C_EME_P, 1052.5f, 123.6f, 873.29999f, 1070.5f, 130.7f, 847.27002f, 0, 0, 0, 0, 0x4000, 0x3000, 55);
		EV_Wait(50);
		crushLightOn(1051.2f, 136.0f, 857.79999f, 3, 10, 0.40000001f, 2.0f, 0xFFFF64FF, 0xFF1EFF);
		EV_Wait(8);
		EV_FreeObject(&C_EME_P);
		EventSe_Stop(2);
		ToWaterChaos0();
		EventSe_Oneshot(1338, 125, 0, 0);
		FLASH = COverlayCreate(0.039999999f, 0.039999999f, 1.0f, 0.85000002f, 1.0f);
		EV_Wait(16);
		DeleteChaos0();
		CreateChaos1(1050.0f, 126.3f, 857.79999f, 0, 0x800, 0, 80);
		EV_Wait(1);
		SetWaterChaos1();
		EV_Wait(1);
		ToHumanChaos1();
		EV_Wait(1);
		ChangeMotionSpeedChaos1(0.30000001f);
		EV_CameraPos(1, 0, 1039.2f, 127.0f, 867.70001f);
		EV_CameraAng(1, 0, 0x1AB9, 0xD6AA, 0xFEC1);
		EV_CameraPos(1, 100, 1033.26f, 127.45f, 866.25f);
		EV_CameraAng(1, 100, 0x21B9, 0xD3AA, 0xFEC1);
		EventSe_Play(2, 1337, 1800);
		EventSe_Volume(2, -20, 1);
		EV_Wait(30);
		crushLightOff();
		COverlaySetSpeed(FLASH, -0.02f);
		EV_Wait(110);
		if(FLASH){
			FreeTask(FLASH);
			FLASH = 0;
		}
		EV_SetAction(eggmoble, &action_gm_gm0025_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(eggmoble, &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.2f, 1, 8);
		EV_CameraPos(1, 0, 1042.9f, 144.60001f, 880.84003f);
		EV_CameraAng(1, 0, 0x6B9, 0x8FAA, 0xFEC1);
		EV_CameraPos(1, 40, 1042.9f, 144.60001f, 880.84003f);
		EV_CameraAng(1, 40, 0xCB9, 0x8FAA, 0xFEC1);
		EV_SerifPlay(656);
		EV_Msg(msgTbl_ev0034[TextLanguage][7]); //"\aYes, yes, yes!   \nIt's really happen"...
		EV_Wait(40);
		EV_Msg(msgTbl_ev0034[TextLanguage][8]); //"\aJust as the stone tablets \nsaid it w"...
		EV_Wait(40);
		EV_MsgClose();
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, 0, 0x4300, 0, 80, 1);
		EV_Wait(2);
		EV_CameraPos(1, 0, 961.20001f, 132.5f, 848.40002f);
		EV_CameraAng(1, 0, 0x2B9, 0xABAA, 0xC1);
		EV_CameraPos(0, 160, 957.65997f, 133.39999f, 865.0f);
		EV_CameraAng(0, 160, 0x2B9, 0xB9AA, 0xC1);
		EV_SerifPlay(657);
		EV_SetAction(eggmoble, &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.75f, 1, 0);
		EV_Msg(msgTbl_ev0034[TextLanguage][9]); //"\aHa ha ha ha!  \nHear this, Sonic!"
		EV_Wait(80);
		ChgEggMobleMod(5);
		EV_Wait(2);
		EV_CameraPos(0, 0, 1036.2f, 156.67999f, 889.20001f);
		EV_CameraAng(0, 0, 0xE9B9, 0xEE4A, 0xC1);
		EV_CameraPos(1, 120, 1040.26f, 154.2f, 892.70001f);
		EV_CameraAng(1, 120, 0xE9B9, 0xEA4A, 0xC1);
		EV_SerifPlay(658);
		EV_Msg(msgTbl_ev0034[TextLanguage][10]); //"\aChaos' strength increases every time"...
		EV_SerifWait();
		EV_CameraPos(1, 0, 1036.2f, 128.5f, 853.70001f);
		EV_CameraAng(1, 0, 0x1EB9, 0xB3AA, 0xF2C1);
		EV_CameraPos(1, 180, 1041.8f, 126.91f, 868.34003f);
		EV_CameraAng(1, 180, 0x23B9, 0xECAA, 0xF63E);
		EV_SerifPlay(659);
		EV_Msg(msgTbl_ev0034[TextLanguage][11]); //"\aAll he needs is 7 Emeralds\nto become"...
		EV_SerifWait();
		EV_SerifPlay(660);
		ChgEggMobleMod(5);
		EV_Wait(2);
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Msg(msgTbl_ev0034[TextLanguage][12]); //"\aThen he will turn Station Square\nint"...
		EV_SerifWait();
		EV_CameraPos(1, 0, 1039.7f, 156.60001f, 894.56f);
		EV_CameraAng(1, 0, 0xE6B9, 0xE0AA, 0);
		EV_CameraPos(1, 100, 1036.8f, 147.17999f, 880.17999f);
		EV_CameraAng(1, 100, 0xCB9, 0x9DAA, 0);
		EV_SerifPlay(661);
		EV_Msg(msgTbl_ev0034[TextLanguage][13]); //"\aUpon which I will build \nthe ultimat"...
		EV_SetAction(eggmoble, &action_gm_gm0022_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.89999998f, 0, 8);
		EV_SetAction(eggmoble, &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
		EV_SerifWait();
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.3f, 1, 0);
		EV_CameraPos(1, 0, 1009.0f, 133.39999f, 851.79999f);
		EV_CameraAng(1, 0, 0x5B9, 0xADAA, 0xFC00);
		EV_CameraAng(1, 80, 0x5B9, 0xAAAA, 0xFC00);
		EV_SerifPlay(662);
		EV_Msg(msgTbl_ev0034[TextLanguage][14]); //"\aHa ha ha ha!  \nYou ready, Chaos?"
		EV_Wait(45);
		EV_Msg(msgTbl_ev0034[TextLanguage][15]); //"\aLet's go find the next Emerald.\nCome"...
		EV_Wait(20);
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, 0, -0x2000, 0, 60, 0);
		EV_Wait(3);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(3);
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0026_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 0);
		EV_Wait(8);
		EV_CameraPos(1, 0, 1047.0f, 160.48f, 895.0f);
		EV_CameraAng(1, 0, 0xDDB9, 0xEAA, 0xFC00);
		EV_CameraPos(0, 30, 1055.22f, 161.037f, 890.35999f);
		EV_CameraAng(0, 30, 0xE5B9, 0x2BAA, 0xFC00);
		EV_Wait(30);
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.3f, 1, 0);
		EV_CameraPos(1, 0, 1004.0f, 129.39999f, 873.40002f);
		EV_CameraAng(1, 0, 0xFBB9, 0xBFAA, 0);
		EV_CameraPos(1, 30, 972.59998f, 132.7f, 873.09998f);
		crushLightOn(1030.2f, 130.86f, 873.79999f, 4, 6, 0.80000001f, 2.5f, 0xFFFFFF96, 0xFFFFD2);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.89999998f, 1, 0);
		FLASH = COverlayCreate(0.1f, 0.050000001f, 1.0f, 1.0f, 0.89999998f);
		EV_Wait(5);
		EventSe_Oneshot(1339, 120, 0, 0);
		EV_Wait(30);
		crushLightOff();
		EV_CameraPos(1, 80, 966.53998f, 129.0f, 875.0f);
		EV_CameraAng(1, 80, 0x7B9, 0xC2AA, 0xFD00);
		EV_Wait(50);
		delete_eggmoble();
		DeleteChaos1();
		COverlaySetSpeed(FLASH, -0.039999999f);
		EV_Wait(50);
		if(FLASH){
			FreeTask(FLASH);
			FLASH = 0;
		}
		EV_Wait(10);
		EventSe_Stop(2);
		EV_CameraPos(1, 0, 970.59998f, 155.39999f, 855.59998f);
		EV_CameraAng(1, 0, 0x309, 0xB6AA, 0);
		EV_SetPos(sonic, 968.0f, 126.6f, 858.0f);
		EV_SetAng(sonic, 0, 0x4600, 0);
		EV_CameraPos(1, 110, 967.0f, 147.5f, 855.59998f);
		EV_CameraAng(1, 110, 0xE209, 0xB5AA, 0x400);
		EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.0f, 1, 1);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 1);
		EV_MovePoint2(sonic, 1008.2f, 126.6f, 879.09998f, 1.0f, 0.1f);
		EV_MovePoint2(player, 997.0f, 126.6f, 857.94f, 1.0f, 0.1f);
		EV_WaitMove(sonic);
		EV_WaitMove(player);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 0, 4);
		EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 1);
		EV_Wait(20);
		EV_SetAng(sonic, 0, 0x5C00, 0);
		EV_SetPos(player, 1013.0f, 126.6f, 862.5f);
		EV_SetAng(player, 0, 0xFD00, 0);
		EV_CameraPos(1, 0, 1023.4f, 129.5f, 859.09998f);
		EV_CameraAng(1, 0, 0x9B9, 0x51AA, 0x300);
		EV_SerifPlay(663);
		EV_Msg(msgTbl_ev0034[TextLanguage][16]); //"\aThank goodness they're gone.\nGood ri"...
		EV_Wait(10);
		EV_CameraPos(1, 80, 1024.2f, 129.35001f, 860.94f);
		EV_CameraAng(1, 80, 0x8B9, 0x50AA, 0x300);
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "CDDDCDCCCDE");
		EV_SerifPlay(664);
		EV_Msg(msgTbl_ev0034[TextLanguage][17]); //"\aWe can't let that monster get\nany bi"...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_SetAng(sonic, 0, 0x1900, 0);
		EV_CameraPos(1, 0, 1012.0f, 132.5f, 885.79999f);
		EV_CameraAng(1, 0, 0x1B9, 0xAAA, 0xFE00);
		EV_CameraPos(1, 140, 1013.4f, 132.39999f, 890.5f);
		EV_ClrFace(player);
		EV_SetFace(player, "CCDDCDCCCDE");
		EV_SerifPlay(665);
		EV_Msg(msgTbl_ev0034[TextLanguage][18]); //"\aYou're right, \nChaos must be stopped"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetFace(player, "CDEDCDCCCDE");
		EV_SerifPlay(666);
		EV_Msg(msgTbl_ev0034[TextLanguage][19]); //"\aAnd he can be if we keep him\naway fr"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraPos(1, 0, 1019.15f, 128.17999f, 874.40002f);
		EV_CameraAng(1, 0, 0xAB9, 0x15AA, 0xFE00);
		EV_CameraPos(1, 120, 1017.7f, 129.0f, 871.90002f);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "DEEDCDCCCDE");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DEDDE");
		}
		EV_SerifPlay(667); 
		EV_MsgW(50, msgTbl_ev0034[TextLanguage][20]); //"\aSo what do you say, Sonic?"
		EV_MsgW(120, msgTbl_ev0034[TextLanguage][21]); //"\aLet's find the Chaos Emeralds \nbefor"...
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(20);
		stopObjectAll();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		delete_eggmoble();
		EV_FreeObject(&C_EME_P);
		DeleteChaos0();
		DeleteChaos1();
		crushLightOff();
		if(FLASH){
			FreeTask(FLASH);
			FLASH = 0;
		}
		if(BROKEN_EGG){
			FreeTask(BROKEN_EGG);
			BROKEN_EGG = 0;
		}
		if(BROKEN_EGG2){
			FreeTask(BROKEN_EGG2);
			BROKEN_EGG2 = 0;
		}
		if(BROKEN_EGG4){
			FreeTask(BROKEN_EGG4);
			BROKEN_EGG4 = 0;
		}
		if(HAND_1){
			FreeTask(HAND_1);
			HAND_1 = 0;
		}
		if(HAND_2){
			FreeTask(HAND_2);
			HAND_2 = 0;
		}
		if(HAND_3){
			FreeTask(HAND_3);
			HAND_3 = 0;
		}
		EV_SerifStop();
		if(suki1_point){
			FreeTask(suki1_point);
			suki1_point = 0;
		}
		if(suki2_point){
			FreeTask(suki2_point);
			suki2_point = 0;
		}
		break;
	}
}
