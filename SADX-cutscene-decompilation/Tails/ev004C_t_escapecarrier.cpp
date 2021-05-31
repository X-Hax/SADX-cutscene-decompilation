#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev004C_t_escapecarrier(int state)
{
	/*This pointer is loaded but never used because PC 04
	does everything associated with it in different functions.*/ 
	//ObjectMaster* task_gattai = 0;

	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(81);
		EventSe_Init(5);
		EV_SetPos(player, -2.5999999f, 1525.718f, 3270.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetMode(player, 1);
		EV_Wait(1);
		EV_SetAng(player, 0, 0, 0);
		EV_CreatePlayer(4, Gamma_Main,
			player->Data1->Position.x,
			player->Data1->Position.y,
			player->Data1->Position.z + 122.0f,
			player->Data1->Rotation.x,
			0x4000 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EV_CreatePlayer(3, Sonic_Main, -91.199997f, 1533.6f, 3342.3999f, 0, 7390, 0);
		EV_Wait(1);
		EV_SetAng(player, 0, 0, 0);
		EV_SetAng(player,
			player->Data1->Rotation.x,
			0x4000 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		e102 = EV_GetPlayer(4);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 16);
		sonic = EV_GetPlayer(3);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(2, Amy_Main,
			e102->Data1->Position.x - 120.0f,
			e102->Data1->Position.y,
			e102->Data1->Position.z + 10.0f,
			e102->Data1->Rotation.x,
			e102->Data1->Rotation.y,
			e102->Data1->Rotation.z);
		Create_e102lightning(
			e102->Data1->Position.x,
			e102->Data1->Position.y,
			e102->Data1->Position.z,
			4);
		BGM_Play(MusicIDs_egcarer1);
		EV_CameraTargetFree();
		EV_CameraAng(1, 0, 57344, 32512, 0);
		EV_CameraPos(1, 0, -2.5f, 1555.8f, 3243.22f);
		EV_Wait(1);
		EV_SetAng(e102,
			player->Data1->Rotation.x,
			-16384 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		amy = EV_GetPlayer(2);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(9);
		EV_CameraAng(1, 85, 2192, 32512, 0);
		EV_CameraPos(1, 85, -2.256f, 1533.934f, 3233.24f);
		EV_ClrAction(e102);
		EV_SetAction(e102, &action_e_e0002_e102, &E102_TEXLIST, 1.1f, 1, 0);
		EventSe_Play(1, 1334, 1800);
		EV_Wait(50);
		EV_SetAction(e102, &action_e_e0003_e102, &E102_TEXLIST, 1.1f, 0, 16);
		EV_Wait(20);
		EventSe_Play(1, 1334, 1800);
		EV_Wait(20);
		EV_CameraAng(1, 0, 61696, 2816, 0);
		EV_CameraPos(1, 0, 10.655f, 1543.9f, 3403.8f);
		EV_SetAction(e102, &action_e_e0004_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EventSe_Oneshot(1335, 0, 0, 0);
		EV_Wait(5);
		EV_MovePoint2(amy, -1.6547f, 1526.0f, 3373.7f, 1.0f, 0.0f);
		EV_Wait(80);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 2.5f, 1, 0);
		EV_MovePoint2(player, -1.3380001f, 1526.0f, 3340.0f, 1.5f, 0.0f);
		EV_CameraAng(1, 70, 64680, 0, 0);
		EV_CameraPos(1, 70, -1.563f, 1533.0f, 3379.3777f);
		EV_WaitMove(amy);
		EV_MoveRotation(amy, 0, 33280, 0);
		EV_LookObject(amy, player, 0.0f, 4.0f, 0.0f);
		EV_Wait(1);
		EV_SetAction(amy, &action_a_a0002_amy, &AMY_TEXLIST, 0.80000001f, 0, 0);
		EventSe_Stop(1);
		Delete_e102lightning();
		EV_SerifPlay(780);
		EV_Msg(msgTbl_ev004C[TextLanguage][0]); //"\aPlease stop, Tails!"
		BGM_Stop();
		EV_Wait(15);
		EV_CameraAng(1, 0, 1448, 28928, 0);
		EV_CameraPos(1, 0, 7.3499999f, 1528.176f, 3329.5801f);
		EV_CameraPos(0, 120, 4.9899998f, 1528.73f, 3332.8999f);
		EV_SetAction(player, MILES_ACTIONS[67], &MILES_TEXLIST, 1.0f, 0, 0);
		EV_WaitAction(player);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 0.80000001f, 1, 8);
		EV_Wait(15);
		EV_SerifPlay(781);
		EV_SetFace(player, "FE");
		EV_Msg(msgTbl_ev004C[TextLanguage][1]); //"\aMove aside, Amy! \nGet out of the way"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetAction(amy, &action_a_a0002_amy, &AMY_TEXLIST, 0.80000001f, 0, 16);
		EV_SerifPlay(782);
		if (!VoiceLanguage)
		{
			EV_SetFace(amy, "F");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(amy, "D");
		}
		EV_Msg(msgTbl_ev004C[TextLanguage][2]); //"\aNo!"
		EV_WaitAction(amy);
		EV_ClrFace(amy);
		EV_SetAction(amy, &action_a_a0004_amy, &AMY_TEXLIST, 1.2f, 1, 16);
		EV_SerifPlay(783);
		EV_SetFace(amy, "ECDED");
		EV_Msg(msgTbl_ev004C[TextLanguage][3]); //"\aThis robot is my friend.\nHe helped m"...
		EV_SerifWait();
		EV_ClrFace(amy);
		EV_SerifPlay(784);
		EV_SetFace(amy, "EAD");
		EV_Msg(msgTbl_ev004C[TextLanguage][4]); //"\aDon't hurt him!"
		EV_SerifWait();
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_CameraAng(1, 0, 2216, 62976, 0);
		EV_CameraPos(1, 0, -3.74f, 1526.3f, 3353.79f);
		EV_SerifPlay(785);
		EV_SetFace(player, "E");
		EV_Msg(msgTbl_ev004C[TextLanguage][5]); //"\aHmm…"
		EV_Wait(10);
		EV_CameraTargetObj(1, 70, player, 0.0f, 7.0f, 0.0f, 0);
		EV_CameraPos(1, 70, 5.0f, 1529.77f, 3345.8799f);
		EV_SetPos(sonic, -44.0f, 1528.342f, 3344.2744f);
		EV_Wait(55);
		EV_MsgClose();
		EV_Wait(15);
		EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 0.5f, 1, 24);
		EV_LookObject(player, amy, 0.0f, -55.0f, 0.0f);
		EV_Wait(50);
		EV_SerifPlay(786);
		EV_SetFace(player, "EPDCE");
		EV_Msg(msgTbl_ev004C[TextLanguage][6]); //"\aOkay!   If you say so."
		EV_Wait(5);
		EV_LookFree(player);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SerifPlay(787);
		EV_SetFace(player, "AEDCE");
		EV_Msg(msgTbl_ev004C[TextLanguage][7]); //"\aYou have your reasons,\nI guess."
		EV_CameraTargetFree();
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EventSe_Play(0, 1333, 1800);
		EV_CameraAng(0, 5, 3511, 8926, 0);
		EV_Wait(3);
		RumbleA(0, 10);
		BGM_Play(MusicIDs_evtbgm01);
		EV_MsgClose();
		EV_CameraAng(0, 5, 439, 8926, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4535, 8926, 0);
		EV_Wait(3);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(0, 5, 439, 8926, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 4535, 8926, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 439, 8926, 0);
		EV_Wait(3);
		EV_SetAction(e102, &action_e_e0005_e102, &E102_TEXLIST, 1.0f, 1, 4);
		EV_SetAction(amy, &action_a_a0003_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 0, -13.45f, 1536.9f, 3325.6799f);
		EV_CameraAng(0, 0, 63159, 36830, 0);
		EV_CameraAng(0, 5, 61623, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 64951, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 61623, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 64951, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 61623, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 64951, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 61623, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 64439, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62135, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 64439, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62135, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 64439, 36830, 0);
		EV_Wait(3);
		EventSe_Volume(0, -30, 1);
		EV_CameraAng(0, 5, 62647, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 63671, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62647, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 63671, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62647, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 63671, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62647, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 63671, 36830, 0);
		EV_Wait(8);
		EventSe_Volume(0, -70, 21);
		EV_CameraAng(0, 5, 62903, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62391, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62903, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62391, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62903, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62391, 36830, 0);
		EV_Wait(3);
		EV_CameraAng(0, 5, 62903, 36830, 0);
		EV_Wait(3);
		EV_CameraPos(0, 0, -8.2720003f, 1527.8879f, 3351.6001f);
		EV_CameraAng(0, 0, 2743, 59102, 0);
		EV_CameraPerspective(0, 15, 10012);
		EV_SerifPlay(788);
		EV_SetFace(player, "FED");
		EV_Msg(msgTbl_ev004C[TextLanguage][8]); //"\aHey, this ship is losing \naltitude!"
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_LookObject(player, sonic, 0.0f, 3.0f, 0.0f);
		EV_CameraPos(0, 0, 7.9200001f, 1527.7758f, 3348.76f);
		EV_CameraAng(0, 0, 1975, 11998, 512);
		EV_Wait(1);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetMode(amy, 0);
		EV_SetPos(amy, -6.2350001f, 1531.0f, 3371.6001f);
		EV_SetAng(amy, 0, 38912, 0);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(e102, &action_e_e0004_e102, &E102_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(sonic, &action_s_s0038_sonic, &SONIC_TEXLIST, 1.2f, 1, 8);
		EV_Wait(20);
		EV_SerifPlay(789);
		if (!VoiceLanguage)
		{
			EV_SetFace(sonic, "FAEFD");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(sonic, "FEF");
		}
		EV_Msg(msgTbl_ev004C[TextLanguage][9]); //"\aHurry, Tails!   \nTake Amy and get ou"...
		EV_Wait(70);
		EV_ClrAction(sonic);
		EV_MovePoint2(sonic, -37.34f, 1525.7f, 3349.1599f, 0.80000001f, 4.0f);
		EV_CameraPos(1, 30, 11.29f, 1531.14f, 3331.29f);
		EV_CameraAng(1, 30, 65463, 24030, 512);
		EV_WaitMove(sonic);
		EV_SerifPlay(790);
		if (!VoiceLanguage)
		{
			EV_SetFace(amy, "E");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(amy, "EE");
		}
		EV_Msg(msgTbl_ev004C[TextLanguage][10]); //"\aWell, what about you?"
		EV_Wait(1);
		EV_SerifWait();
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.89999998f, 0, 8);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_SerifPlay(791);
		EV_SetFace(sonic, "FEDFE");
		EV_Msg(msgTbl_ev004C[TextLanguage][11]); //"\aI'll find Eggman and put \na stop to "...
		EV_SerifWait();
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_LookObject(player, amy, 0.0f, 4.0f, 0.0f);
		EV_LookObject(sonic, player, 0.0f, 4.0f, 0.0f);
		EV_SetAng(amy, 0, 31198, 0);
		EV_Wait(50);
		EV_CameraPos(0, 0, 7.9200001f, 1527.7758f, 3348.76f);
		EV_CameraAng(0, 0, 1975, 11998, 512);
		EV_LookFree(player);
		EV_LookFree(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 1.7f, 1, 8);
		EV_SetAction(player, MILES_ACTIONS[48], &MILES_TEXLIST, 1.3f, 1, 8);
		EV_LookFree(amy);
		EV_Wait(8);
		EV_MovePoint2(sonic, -44.599998f, 1530.46f, 3026.0f, 1.6f, 0.0f);
		EV_MovePoint2(player, -2.0754001f, 1530.46f, 3358.678f, 1.3f, 0.0f);
		EV_LookFree(player);
		EV_WaitMove(player);
		EV_SetPos(player, -3.8199999f, 1525.7f, 3319.0f);
		EV_SetPos(amy, -1.95f, 1531.0f, 3368.0f);
		EV_SetAng(amy, 0, 0x8000, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, -6.0f, 1552.5601f, 3298.0f);
		EV_CameraAng(1, 0, 64439, 32990, 0);
		EV_CameraTargetObj(1, 1, player, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		EV_CameraPos(1, 70, -1.227f, 1533.0f, 3350.3f);
		EV_SetMode(player, 0);
		EV_SetMode(e102, 0);
		SetE102Effect(
			e102->Data1->Position.x,
			e102->Data1->Position.y,
			e102->Data1->Position.z);
		throughplayer_on(player);
		throughplayer_on(amy);
		EV_SetPath(player, &epathtag_cube004c_14, 0.60000002f, 2);
		EV_SetPath(player, &epathtag_cube004c_22, 2.0f, 2);
		EV_Wait(40);
		EV_SetMotion(player, MILES_OBJECTS[1], ev_motion_m_m0002_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(amy, &action_a_a0014_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(6);
		playertwp[0]->Object.SByte[3] |= 4u; //Change Tails' tails.
		CreateTaskGattaiEV004C();
		EV_CameraTargetFree();
		EV_Wait(13);
		EV_CameraTargetObj(1, 1, player, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(17);
		EV_CameraTargetObj(1, 1, player, 0.0f, 0.0f, 0.0f, 0);
		EV_CameraPos(1, 0, -52.526699f, 1622.05f, 3364.5601f);
		EV_Wait(20);
		EV_CameraTargetFree();
		EV_CameraPos(0, 55, -93.029999f, 1635.66f, 3375.8f);
		EV_CameraTargetObj(1, 30, player, 0.0f, 4.0f, 0.0f, 0);
		EV_Wait(55);
		EV_CameraPos(1, 37, -142.16f, 1628.347f, 3386.73f);
		EV_Wait(25);
		EV_SetAction(e102, E102_ACTIONS[24], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(11);
		ChgEffectMod(1);
		EV_CameraTargetFree();
		EV_CameraPos(0, 45, -142.64999f, 1623.64f, 3364.0f);
		EV_CameraAng(0, 45, 60902, 46394, 0);
		EV_Wait(15);
		EV_SetPath(e102, &epathtag_cube004c_19, 0.69999999f, 2);
		EV_Wait(35);
		ChgEffectMod(0);
		EV_Wait(75);
		EV_CameraPerspective(0, 1, 14382);
		EV_Wait(1);
		EV_CameraPos(1, 0, -215.96001f, 1616.454f, 3405.1799f);
		EV_CameraAng(1, 0, 64742, 11066, 256);
		EV_RemovePlayer(4);
		EventSe_Stop(0);
		EV_Wait(140);
		BLACKOUT = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(60);
		FreeTaskGattaiEV004C();
		EV_Wait(1);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		playertwp[0]->Object.SByte[3] &= ~4u; //Reset Tails' tails
		playertwp[0]->Object.SByte[3] &= ~0x10u;
		FreeTaskGattaiEV004C();
		throughplayer_off(player);
		throughplayer_off(amy);
		EV_ClrPath(player);
		EV_ClrPath(amy);
		EV_ClrPath(e102);
		EV_SetPos(player, -2.5999999f, 1525.718f, 3270.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		DelE102Effect();
		Delete_e102lightning();
		if(BLACKOUT){
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		EventSe_Close();
		break;
	}
}