#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0008_s_chaos1(int state)
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
		EV_CameraPerspective(1, 1, 12743);
		create_eggmoble(1045.3f, 155.5f, 888.0f, 0, 63232, 0);
		EV_Wait(3);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0028_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.1f, 1, 0);
		BROKEN_EGG2 = CObjSmoke_Create();
		BROKEN_EGG4 = CObjSmoke_Create();

		//I have no idea what all this data is but it makes the smoke work apparently 
		WriteData((float*)BROKEN_EGG2->Data1->LoopData, 4.0f);
		WriteData((float*)BROKEN_EGG4->Data1->LoopData, 2.5f);

		WriteData((float*)(BROKEN_EGG2->Data1->LoopData) + 11, 1.0f);
		WriteData((float*)(BROKEN_EGG2->Data1->LoopData) + 12, 0.9f);
		WriteData((float*)(BROKEN_EGG2->Data1->LoopData) + 13, 0.9f);
		WriteData((float*)(BROKEN_EGG2->Data1->LoopData) + 14, 0.9f);

		WriteData((float*)(BROKEN_EGG4->Data1->LoopData) + 11, 1.0f);
		WriteData((float*)(BROKEN_EGG4->Data1->LoopData) + 12, 0.9f);
		WriteData((float*)(BROKEN_EGG4->Data1->LoopData) + 13, 0.65f);
		WriteData((float*)(BROKEN_EGG4->Data1->LoopData) + 14, 0.65f);

		EV_SetPos(BROKEN_EGG2, 1054.3f, 144.5f, 871.0f);
		EV_SetPos(BROKEN_EGG4, 1046.3f, 147.5f, 898.5f);
		BROKEN_EGG2->Data1->Rotation.y = 4;
		BROKEN_EGG2->Data1->Rotation.x = 4;
		BROKEN_EGG4->Data1->Rotation.y = 5;
		BROKEN_EGG4->Data1->Rotation.x = 5;
		EV_SetPos(player, 981.0f, 126.4f, 868.79999f);
		EV_SetAng(player, 24, 6912, 62);
		EV_CreatePlayer(2, Tails_Main, 959.5f, 126.5f, 794.92999f, 65520, 6624, 84);
		EV_Wait(1);
		tails = EV_GetPlayer(2);
		EV_SetPos(tails, 973.29999f, 126.5f, 823.5f);
		EV_SetAng(tails, 24, 2816, 84);
		EV_CreateObject(&C_EME_P, 973.29999f, 126.5f, 823.5f, 65520, 6624, 84);
		EV_Wait(1);
		EV_SetMode(C_EME_P, 0);
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, 512, 20480, 8960, 140, 1);
		EV_CameraPos(1, 0, 1025.5f, 147.77f, 871.59998f);
		EV_CameraAng(1, 0, 256, 45824, 63232);
		EV_CameraPos(0, 70, 998.40002f, 142.7f, 883.79999f);
		EV_CameraAng(0, 70, 64256, 48640, 64512);
		EventSe_Play(3, 1112, 1800);
		EventSe_Volume(3, 115, 1);
		EV_Wait(70);
		EV_SetPos(BROKEN_EGG, 1030.3f, 129.5f, 874.59998f);
		EV_SetPos(BROKEN_EGG2, 1030.3f, 129.5f, 874.59998f);
		EV_CameraPos(0, 110, 957.40002f, 129.7f, 877.79999f);
		EV_CameraAng(0, 110, 2048, 49408, 65024);
		EventSe_Oneshot(25, -20, 0, 0);
		EV_Wait(110);
		EventSe_Oneshot(25, -20, 0, 0);
		EventSe_Volume(3, 80, 1);
		ChgEggMobleMod(5);
		EV_Wait(5);
		EV_Wait(5);
		EV_CameraPos(0, 80, 957.40002f, 127.7f, 872.59998f);
		EV_CameraAng(0, 80, 3072, 49152, 65024);
		EV_Wait(80);
		EV_CameraPos(1, 0, 989.96997f, 129.60001f, 876.95001f);
		EV_CameraAng(1, 0, 2076, 7828, 64736);
		EV_CameraPos(0, 80, 988.40002f, 130.2f, 873.09998f);
		EV_CameraAng(0, 80, 1564, 4244, 64768);
		EV_SetPos(tails, 973.29999f, 126.5f, 823.5f);
		EV_SetAng(tails, 24, 2816, 84);
		EV_SetPos(C_EME_P, 973.29999f, 126.5f, 823.5f);
		EV_SetAng(C_EME_P, 65520, 6624, 84);
		EV_Wait(1);
		EV_SetAction(C_EME_P, &action_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 1);
		EV_SetAction(tails, &action_m_m0136_miles, &MILES_TEXLIST, 1.0f, 1, 1);
		EV_MovePoint2(tails, 983.79999f, 126.5f, 848.70001f, 0.40000001f, 0.059999999f);
		EV_Wait(1);
		moveObjectOn(C_EME_P, 0.0f, 0.0f, 0.0f, -1, tails);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_ClrFace(player);
		EV_SetFace(player, "PCPDDP");
		EV_ClrFace(player);
		EV_SetFace(player, "CCCCCDCCCDE");
		EV_SerifPlay(442);
		EV_Msg(msgTbl_ev0008[TextLanguage][0]); //aWellThatWasnTSoHard
		EV_SetAction(player, &action_s_s0042_sonic, &SONIC_TEXLIST, 0.5f, 0, 4);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_Wait(20);
		EV_ClrFace(player);
		EV_ClrAction(eggmoble);
		EV_MsgClose();

		if(BROKEN_EGG2){
			FreeTask(BROKEN_EGG2);
			BROKEN_EGG2 = 0;
		}
		if(BROKEN_EGG4){
			FreeTask(BROKEN_EGG4);
			BROKEN_EGG4 = 0;
		}

		EV_CameraPos(1, 0, 1035.7f, 144.10001f, 889.5f);
		EV_CameraAng(1, 0, 59411, 2704, 61889);
		EV_CameraPos(1, 20, 1036.2f, 143.5f, 890.16998f);
		EV_CameraAng(1, 20, 62739, 2448, 62145);
		EV_Wait(25);
		EV_CameraPos(0, 3, 1036.15f, 141.7f, 889.70001f);
		EV_CameraAng(0, 3, 64019, 6288, 60609);

		suki1_obj = CSukiari_Create(0, &sukiari1, 4);
		CSukiari_Alpha(suki1_obj, 117, 6);
		suki2_obj = CSukiari_Create(0, &sukiari2, 4);
		CSukiari_Alpha(suki2_obj, 128, 6);

		EV_Msg(msgTbl_ev0008[TextLanguage][1]); //aAha
		EventSe_Oneshot(1333, 128, 0, 0);
		EV_SerifPlay(443);
		EV_Wait(10);
		EV_CameraPos(0, 2, 1033.7f, 139.95f, 891.70001f);
		EV_CameraAng(0, 2, 64019, 6288, 60609);
		EV_Wait(2);
		EV_CameraPos(0, 10, 989.70001f, 131.89999f, 858.40002f);
		EV_CameraAng(0, 10, 64531, 5008, 2241);
		CSukiari_Alpha(suki1_obj, 0, 16);
		CSukiari_Alpha(suki2_obj, 0, 16);
		EV_Wait(14);
		if(suki1_obj){
			FreeTask(suki1_obj);
			suki1_obj = 0;
		}
		if(suki2_obj){
			FreeTask(suki2_obj);
			suki2_obj = 0;
		}
		BGM_Play(MusicIDs_eggman);
		EventSe_Play(1, 1334, 1800);
		EventSe_Volume(1, 110, 1);
		EventSe_Pan(1, 20, 1);
		HAND_1 = mghand_init(1046.225f, 134.56f, 885.20001f, 0, 0, 40960);
		HAND_2 = mghand_init(1066.73f, 114.058f, 885.20001f, 0, 0, 0x2000);
		mghandsetspd(HAND_1, 4608, 4608);
		mghandsetspd(HAND_2, 4608, 4608);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 4);
		EV_CameraPos(1, 0, 1031.1f, 132.89999f, 900.09998f);
		EV_CameraAng(1, 0, 6163, 59280, 64193);
		EV_CameraPos(0, 20, 1031.51f, 129.89999f, 897.38f);
		EV_CameraAng(0, 20, 13331, 400, 60609);
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
		HAND_3 = mghand_init(990.0f, 138.0f, 866.0f, 4864, 20480, 61440);
		EV_CameraPos(1, 0, 990.0f, 138.0f, 866.0f);
		EV_CameraAng(1, 0, 4864, 20480, 61440);
		moveObject(HAND_3, 990.0f, 138.0f, 866.0f, 988.0f, 128.0f, 856.70001f, 7);
		EventSe_Volume(1, 100, 1);
		EventSe_Pan(1, -20, 1);
		EventSe_Pitch(1, -1214, 1);
		EV_CameraPos(1, 0, 990.64001f, 130.66f, 834.57001f);
		EV_CameraAng(1, 0, 2221, 39516, 62913);
		EV_CameraPos(0, 20, 984.66998f, 127.18f, 835.78003f);
		EV_CameraAng(0, 20, 2989, 36956, 62657);
		chgMghandMod(HAND_1, 1);
		EV_Wait(3);
		chgMghandMod(HAND_1, 2);
		EV_Wait(3);
		EventSe_Oneshot(1335, 118, 0, 0);
		RumbleA(0, 2);
		EV_SetAction(player, &action_s_s0038_sonic, &SONIC_TEXLIST, 0.5f, 1, 1);
		EV_SetAction(tails, &action_m_m0104_miles, &MILES_TEXLIST, 1.2f, 0, 1);
		EV_SetAction(tails, &action_m_m0137_miles, &MILES_TEXLIST, 1.2f, 0, 1);
		EV_SetAction(tails, &action_m_m0138_miles, &MILES_TEXLIST, 1.2f, 1, 1);
		EV_CameraPos(0, 15, 974.29999f, 128.10001f, 838.46997f);
		EV_CameraAng(0, 15, 2067, 40592, 60353);
		EventSe_Volume(1, 95, 1);
		EventSe_Pan(1, -20, 1);
		EventSe_Pitch(1, 1214, 1);
		EV_Wait(1);
		EventSe_Pitch(1, -1214, 110);
		EV_SetAction(player, &action_s_s0044_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 4);
		chgMghandMod(HAND_1, 1);
		EV_Wait(2);
		chgMghandMod(HAND_1, 2);
		EV_Wait(2);
		chgMghandMod(HAND_1, 1);
		EV_Wait(2);
		chgMghandMod(HAND_1, 2);
		EV_Wait(2);
		chgMghandMod(HAND_1, 1);
		EV_Wait(2);
		chgMghandMod(HAND_1, 1);
		EV_Wait(2);
		chgMghandMod(HAND_1, 2);
		EV_Wait(2);
		EV_CameraPos(0, 20, 962.67999f, 127.7f, 850.54999f);
		EV_CameraAng(0, 20, 2579, 46224, 1985);
		EV_SerifPlay(444);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 4);
		stopObject(C_EME_P);
		EV_ClrAction(C_EME_P);
		EV_SetAction(C_EME_P, &action_m_m0136d_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 1);
		moveObject(HAND_3, 987.5f, 131.8f, 857.90002f, 998.58002f, 170.42f, 887.77002f, 40);
		moveObjectOn(C_EME_P, -3.9400001f, 2.9100001f, -3.9200001f, 50, HAND_3);
		EV_SerifWait();
		EV_Wait(40);
		stopObject(C_EME_P);
		moveObject(HAND_1, 1006.39f, 174.5f, 885.20001f, 1046.225f, 134.56f, 885.20001f, 45);
		moveObject(HAND_2, 1046.225f, 134.56f, 885.20001f, 1066.73f, 114.058f, 885.20001f, 45);
		moveObjectOn(C_EME_P, -7.3499999f, 17.5f, -0.1f, 50, HAND_1);
		EV_CameraPos(0, 30, 957.52002f, 128.16f, 868.04999f);
		EV_CameraAng(0, 30, 2579, 50576, 1985);
		EV_Wait(50);
		stopObject(C_EME_P);
		EV_MsgClose();
		if(HAND_1){
			FreeTask(HAND_1);
			HAND_1 = 0;
		}
		if(HAND_2){
			FreeTask(HAND_2);
			HAND_2 = 0;
		}
		EV_SetPos(HAND_3, 1055.24f, 144.058f, 886.63f);
		EV_SetAng(HAND_3, 0, 20480, 0x8000);
		moveObjectAngle2(HAND_3, 1055.24f, 144.058f, 886.63f, 1055.24f, 115.058f, 886.63f, 0, 20480, 0x8000, 0, 53248, 0x8000, 120);
		EV_SetAction(eggmoble, &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.1f, 1, 0);
		EV_SetAng(player, 24, 13312, 62);
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, -512, -32768, -8960, 1, 1);
		EV_CameraPos(0, 0, 1046.0f, 156.17f, 875.54999f);
		EV_CameraAng(0, 0, 1277, 39167, 193);
		EventSe_Volume(1, 70, 1);
		EventSe_Pan(1, -20, 1);
		EventSe_Pitch(1, -1440, 1);
		EV_Wait(5);
		ChgEggMobleMod(5);
		EV_Wait(2);
		EV_SetAction(C_EME_P, &action_gm_gm0023cp_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.08f, 1, 0);
		EV_SetPos(C_EME_P, 1052.5f, 123.6f, 873.29999f);
		EV_SetAng(C_EME_P, 0, 0, 0);
		EV_CameraPos(1, 100, 1046.87f, 148.23f, 876.47998f);
		EV_CameraAng(1, 100, 1273, 35839, 193);
		EV_Wait(30);
		EventSe_Oneshot(1336, 128, 0, 0);
		EV_Wait(100);
		if(HAND_3){
			FreeTask(HAND_3);
			HAND_3 = 0;
		}
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 8);
		EventSe_Stop(1);
		EV_CameraPos(0, 0, 1046.23f, 143.45f, 881.0f);
		EV_CameraAng(0, 0, 3581, 28671, 193);
		EV_CameraPos(1, 90, 1046.12f, 143.78999f, 881.97998f);
		EV_CameraAng(1, 90, 3581, 31487, 193);
		EV_SerifPlay(445);
		EV_Msg(msgTbl_ev0008[TextLanguage][2]); //aComeOnChaosTimeToEat
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(20);
		CreateChaos0(1091.2f, 121.5f, 866.79999f, 0, 2048, 0, 80);
		EV_Wait(1);
		SetWaterChaos0();
		MoveChaos0(1096.2f, 126.3f, 864.79999f, 60);
		EV_CameraPos(0, 0, 971.79999f, 128.3f, 856.70001f);
		EV_CameraAng(0, 0, 2745, 43434, 705);
		EV_SerifPlay(446);
		EV_Msg(msgTbl_ev0008[TextLanguage][3]); //aChaos?
		EV_CameraPos(1, 50, 970.79999f, 128.7f, 860.5f);
		EV_CameraAng(1, 50, 2233, 47018, 961);
		EV_Wait(50);
		EV_MsgClose();
		MoveChaos0(1050.0f, 126.3f, 857.79999f, 90);
		EV_CameraPos(0, 0, 1035.2f, 157.3f, 896.70001f);
		EV_CameraAng(0, 0, 59425, 57100, 65473);
		EV_CameraPos(0, 70, 1026.2f, 157.60001f, 883.59998f);
		EV_CameraAng(0, 70, 59436, 55820, 65473);
		EV_Wait(70);
		EV_MsgClose();
		EV_CameraPos(1, 0, 1040.2f, 128.0f, 849.70001f);
		EV_CameraAng(1, 0, 1721, 40618, 62913);
		EV_CameraPos(1, 110, 1037.66f, 134.47f, 848.67999f);
		EV_CameraAng(1, 110, 4025, 39594, 62913);
		EventSe_Volume(2, 5, 70);
		ToHumanChaos0();
		EV_Wait(120);
		EV_CameraPos(1, 0, 975.20001f, 130.5f, 860.79999f);
		EV_CameraAng(1, 0, 1209, 48298, 65217);
		EV_CameraPos(1, 12, 968.65997f, 129.5f, 859.59998f);
		EV_CameraAng(1, 12, 1977, 47018, 65217);
		EV_SerifPlay(447);
		EV_Msg(msgTbl_ev0008[TextLanguage][4]); //aOhNoIsnTThatTheSameMonst
		EV_Wait(30);
		EV_Msg(msgTbl_ev0008[TextLanguage][5]); //aISawTheOtherDay___
		EV_Wait(40);
		EV_MsgClose();
		EV_CameraPos(1, 0, 1032.2f, 133.5f, 844.09998f);
		EV_CameraAng(1, 0, 953, 39850, 65217);
		EV_CameraPos(1, 80, 1006.66f, 134.89999f, 859.0f);
		EV_CameraAng(1, 80, 953, 48810, 65217);
		EV_SetAction(eggmoble, &action_gm_gm0024_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 8);
		moveObjectAngle2(C_EME_P, 1052.5f, 123.6f, 873.29999f, 1070.5f, 130.7f, 847.27002f, 0, 0, 0, 0, 0x4000, 12288, 55);
		EV_Wait(50);
		crushLightOn(1051.2f, 135.5f, 857.79999f, 3, 10, 0.40000001f, 2.0f, 0xFFFF64FF, 0xFF1EFF);
		EV_Wait(8);
		EventSe_Stop(2);
		EV_FreeObject(&C_EME_P);
		ToWaterChaos0();
		EventSe_Oneshot(1338, 128, 0, 0);
		FLASH = COverlayCreate(0.039999999f, 0.039999999f, 1.0f, 0.85000002f, 1.0f);
		EV_Wait(20);
		DeleteChaos0();
		CreateChaos1(1050.0f, 126.3f, 857.79999f, 0, 2048, 0, 80);
		EV_Wait(1);
		SetWaterChaos1();
		EV_Wait(1);
		ToHumanChaos1();
		EV_Wait(1);
		ChangeMotionSpeedChaos1(0.30000001f);
		EV_CameraPos(1, 0, 1039.2f, 126.0f, 867.70001f);
		EV_CameraAng(1, 0, 6841, 54954, 65217);
		EV_CameraPos(1, 100, 1035.66f, 130.39999f, 865.0f);
		EV_CameraAng(1, 100, 8633, 54186, 65217);
		EventSe_Play(2, 1337, 1800);
		EventSe_Volume(2, -25, 1);
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
		EV_CameraAng(1, 0, 1721, 36778, 65217);
		EV_SerifPlay(448);
		EV_Msg(msgTbl_ev0008[TextLanguage][6]); //aOooohYesItSJustAsTheSton
		EV_CameraPos(1, 40, 1042.9f, 144.60001f, 880.84003f);
		EV_CameraAng(1, 40, 3257, 36778, 65217);
		EV_SerifWait();
		EV_MsgClose();
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, 0, 17152, 0, 80, 1);
		EV_Wait(2);
		EV_CameraPos(1, 0, 961.20001f, 132.5f, 848.40002f);
		EV_CameraAng(1, 0, 697, 43946, 193);
		EV_CameraPos(0, 160, 957.65997f, 133.39999f, 865.0f);
		EV_CameraAng(0, 160, 697, 47530, 193);
		EV_SerifPlay(449);
		EV_SetAction(eggmoble, &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.75f, 1, 0);
		EV_Msg(msgTbl_ev0008[TextLanguage][7]); //aHaHaHaHaHa_0
		EV_Wait(80);
		ChgEggMobleMod(5);
		EV_Wait(2);
		EV_CameraPos(0, 0, 1036.2f, 156.67999f, 889.20001f);
		EV_CameraAng(0, 0, 59833, 61002, 193);
		EV_CameraPos(1, 120, 1040.26f, 154.2f, 892.70001f);
		EV_CameraAng(1, 120, 59833, 59978, 193);
		EV_SerifPlay(450);
		EV_Msg(msgTbl_ev0008[TextLanguage][8]); // aHisStrengthIncreasesEver
		EV_SerifWait();
		EV_CameraPos(1, 0, 1036.2f, 128.5f, 853.70001f);
		EV_CameraAng(1, 0, 8121, 45994, 62145);
		EV_CameraPos(1, 180, 1042.0f, 127.4f, 865.40002f);
		EV_CameraAng(1, 180, 9145, 59306, 63038);
		EV_SerifPlay(451);
		EV_Msg(msgTbl_ev0008[TextLanguage][9]); //aWithAll7EmeraldsInHimHeL
		EV_Wait(60);
		EV_Msg(msgTbl_ev0008[TextLanguage][10]); //aAndWorkForMe
		EV_Wait(30);
		EV_SerifWait();
		EV_SerifPlay(452);
		ChgEggMobleMod(5);
		EV_Wait(2);
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Msg(msgTbl_ev0008[TextLanguage][11]); //aTogetherWeLlDestroyStati
		EV_SerifWait();
		EV_CameraPos(1, 0, 1039.7f, 156.60001f, 894.56f);
		EV_CameraAng(1, 0, 59065, 57514, 0);
		EV_CameraPos(1, 100, 1036.8f, 147.17999f, 880.17999f);
		EV_CameraAng(1, 100, 3257, 40362, 0);
		EV_SerifPlay(453);
		EV_Msg(msgTbl_ev0008[TextLanguage][12]); //aAndOnItsRuinsILlBuildRob
		EV_Wait(130);
		EV_Msg(msgTbl_ev0008[TextLanguage][13]); //aWhereIWillRuleItAll
		EV_Wait(20);
		EV_SetAction(eggmoble, &action_gm_gm0022_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.89999998f, 0, 8);
		EV_SetAction(eggmoble, &action_gm_gm0021_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
		EV_SerifWait();
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.3f, 1, 0);
		EV_CameraPos(1, 0, 1009.0f, 133.39999f, 851.79999f);
		EV_CameraAng(1, 0, 1465, 44458, 64512);
		EV_SerifPlay(454);
		EV_Msg(msgTbl_ev0008[TextLanguage][14]); //aComeOnChaosLetSFindAnoth
		EV_CameraAng(1, 80, 1465, 43178, 64512);
		EV_Wait(30);
		eggmoble_moveandturn(1045.3f, 135.5f, 888.0f, 0, -8192, 0, 60, 0);
		EV_Wait(3);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(3);
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0026_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 0);
		EV_Wait(8);
		EV_CameraPos(1, 0, 1047.0f, 160.48f, 895.0f);
		EV_CameraAng(1, 0, 56761, 3754, 64512);
		EV_CameraPos(0, 30, 1055.22f, 161.037f, 890.35999f);
		EV_CameraAng(0, 30, 58809, 11178, 64512);
		EV_Wait(30);
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.3f, 1, 0);
		EV_CameraPos(1, 0, 1004.0f, 129.39999f, 873.40002f);
		EV_CameraAng(1, 0, 64441, 49066, 0);
		EV_CameraPos(1, 30, 972.59998f, 132.7f, 873.09998f);
		crushLightOn(1030.2f, 130.86f, 873.79999f, 4, 6, 0.80000001f, 2.5f, 0xFFFFFF96, 0xFFFFD2);
		EV_SetAction(player, &action_s_s0045_sonic, &SONIC_TEXLIST, 0.69999999f, 0, 0);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.89999998f, 1, 0);
		FLASH = COverlayCreate(0.1f, 0.050000001f, 1.0f, 1.0f, 0.89999998f);
		EV_Wait(5);
		EventSe_Oneshot(1339, 120, 0, 0);
		EV_Wait(30);
		crushLightOff();
		EV_CameraPos(1, 80, 966.53998f, 129.0f, 875.0f);
		EV_CameraAng(1, 80, 1977, 49834, 64768);
		EV_Wait(20);
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
		EV_CameraAng(1, 0, 777, 46762, 0);
		EV_SetPos(tails, 968.0f, 126.6f, 858.0f);
		EV_SetAng(tails, 0, 17920, 0);
		EV_CameraPos(1, 110, 967.0f, 147.5f, 855.59998f);
		EV_CameraAng(1, 110, 57865, 46506, 1024);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.0f, 1, 1);
		EV_SetAction(tails, MILES_ACTIONS[47], &MILES_TEXLIST, 1.0f, 1, 1);
		EV_MovePoint2(player, 1008.2f, 126.6f, 879.09998f, 1.0f, 0.1f);
		EV_MovePoint2(tails, 997.0f, 126.6f, 857.94f, 1.0f, 0.1f);
		EV_WaitMove(player);
		EV_WaitMove(tails);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 1);
		EV_Wait(20);
		EV_SetAng(player, 0, 10496, 0);
		EV_SetPos(tails, 1013.0f, 126.6f, 862.5f);
		EV_SetAng(tails, 0, 64768, 0);
		EV_CameraPos(1, 0, 1023.4f, 129.5f, 859.09998f);
		EV_CameraAng(1, 0, 2489, 20906, 768);
		EV_ClrFace(tails);
		EV_SetFace(tails, "CDECCDCCCDE0");
		EV_SerifPlay(455);
		EV_Msg(msgTbl_ev0008[TextLanguage][15]); //aSonic
		EV_Wait(10);
		EV_CameraPos(1, 80, 1024.2f, 129.35001f, 860.94f);
		EV_CameraAng(1, 80, 2233, 20650, 768);
		EV_ClrFace(tails);
		EV_SetFace(tails, "CDDDCDCCCDE");
		EV_SerifPlay(456);
		EV_Msg(msgTbl_ev0008[TextLanguage][16]); //aWeCanTLetHimGetAwayWithT
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_ClrFace(player);
		EV_SetFace(player, "CCCCCDCCCDE0");
		EV_SerifPlay(457);
		EV_Msg(msgTbl_ev0008[TextLanguage][17]); //aNoWayTails
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetAng(player, 0, 6400, 0);
		EV_CameraPos(1, 0, 1013.9f, 129.0f, 888.79999f);
		EV_CameraAng(1, 0, 5561, 4778, 65024);
		EV_CameraAng(1, 140, 3001, 4778, 65024);
		EV_ClrFace(tails);
		EV_SetFace(tails, "CDDDCBCCCDE0");
		EV_SerifPlay(458);
		EV_Msg(msgTbl_ev0008[TextLanguage][18]); //aWithoutMoreEmeraldsTheMo
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_SetFace(tails, "DEDDCDCCCDE0");
		EV_SerifPlay(459);
		EV_Msg(msgTbl_ev0008[TextLanguage][19]); //
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_Wait(40);
		stopObjectAll();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Stop(2);
		EventSe_Close();
		EV_InitPlayer(0);
		stopObjectAll();
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
		EV_SerifStop();
		EV_SetPos(player, 913.0f, 126.2f, 951.20001f);
		EV_SetAng(player, 0, 19456, 0);
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
		if(BROKEN_EGG2){
			FreeTask(BROKEN_EGG2);
			BROKEN_EGG2 = 0;
		}
		if(BROKEN_EGG4){
			FreeTask(BROKEN_EGG4);
			BROKEN_EGG4 = 0;
		}
		if(suki1_obj){
			FreeTask(suki1_obj);
			suki1_obj = 0;
		}
		if(suki2_obj){
			FreeTask(suki2_obj);
			suki2_obj = 0;
		}
		break;
	}
}