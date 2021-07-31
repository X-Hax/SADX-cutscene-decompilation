#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00A0_k_eggmanhotel(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(101);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_eggman);
		EV_CameraPerspective(1, 1, 20025);
		EV_CreatePlayer(2, Eggman, -143.89f, 108.75f, 12.23f, 0, 42748, 0);
		EV_Wait(1);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, -368.29999f, 0.0f, 1666.12f);
		EV_SetAng(eggman, 0, 49812, 0);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_0011_eggman, &EGGMAN_TEXLIST, 1.3f, 1, 8);
		EV_SetPos(player, -342.29999f, 0.0f, 1653.25f);
		EV_SetAng(player, 0, 56630, 0);
		EV_CameraPos(0, 0, -329.04001f, 9.7200003f, 1658.38f);
		EV_CameraAng(0, 0, 64905, 17920, 0);
		EV_Wait(20);
		EV_CameraPos(0, 50, -355.72f, 8.0900002f, 1662.38f);
		EV_CameraAng(0, 50, 64905, 17920, 0);
		EV_Wait(60);
		EV_CameraPos(0, 0, -364.12f, 3.55f, 1670.98f);
		EV_CameraAng(0, 0, 649, 56832, 0);
		EV_CameraPerspective(1, 1, 12561);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0001_knuckles, &KNUCKLES_TEXLIST, 0.5f, 0, 0);
		EV_Wait(30);
		EV_SetAction(player, &action_k_k0002_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "D");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DE");
		}
		EV_SerifPlay(1167);
		EV_MsgW(1, msgTbl_ev00A0[TextLanguage][0]); //"\aHey, it's Dr. Eggman!"
		EV_Wait(60);
		EV_MovePoint2(eggman, -398.32001f, 0.0f, 1666.29f, 0.07f, 0.059999999f);
		EV_CameraPos(0, 0, -358.89001f, 16.17f, 1654.3199f);
		EV_CameraAng(0, 0, 0xF713, 0x5E1A, 0);
		EV_CameraPos(0, 100, -367.48001f, 17.0f, 1659.52f);
		EV_CameraAng(0, 100, 0xF59E, 0x4DE7, 0);
		EventSe_Play(0, 1335, 1800);
		crushLightOn(-374.0f, 13.29f, 1661.0f, 1, 5, 1.8f, 0.0049999999f, 0xB4FFFF91, 0xFFFF32u);
		EV_Wait(20);
		crushLightOff();
		EventSe_Stop(0);
		EV_SerifPlay(1168);
		EV_MsgW(1, msgTbl_ev00A0[TextLanguage][1]); //"\aWhat's he got there?"
		EV_Wait(70);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "D");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "DD");
		}
		EV_SerifPlay(1169);
		EV_MsgW(1, msgTbl_ev00A0[TextLanguage][2]); //"\aIt's gotta be a part of\nthe Master E"...
		EV_CameraPos(0, 0, -355.12f, 5.4499998f, 1665.17f);
		EV_CameraAng(0, 0, 531, 57626, 0);
		EV_Wait(1);
		EV_CameraPos(0, 10, -349.62f, 5.8600001f, 1659.37f);
		EV_CameraAng(0, 10, 531, 57626, 0);
		EV_Wait(60);
		EV_CameraPos(0, 0, -351.95001f, 12.08f, 1624.6801f);
		EV_CameraAng(0, 0, 64787, 25626, 0);
		EV_Wait(15);
		EV_ClrFace(player);
		EV_SetFace(player, "DE");
		EV_SerifPlay(1170);
		EV_MsgW(0, msgTbl_ev00A0[TextLanguage][3]); //"\aHold on!   Come back here!"
		EV_Wait(30);
		EV_RemovePlayer(2);
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[56], &KNUCKLES_TEXLIST, 2.0f, 1, 8);
		EV_Wait(1);
		EV_MovePoint2(player, -364.10001f, 0.0f, 1658.3f, 0.34999999f, 0.059999999f);
		EV_CameraPos(0, 0, -355.12f, 5.4499998f, 1665.17f);
		EV_CameraAng(0, 0, 531, 57626, 0);
		EV_Wait(5);
		EV_CameraPos(0, 30, -329.04001f, 9.7200003f, 1658.38f);
		EV_CameraAng(0, 30, 64905, 17920, 0);
		EV_Wait(40);
		EV_MsgClose();
		break;
	case 2:
		EventSe_Close();
		crushLightOff();
		EV_InitPlayer(0);
		EV_SetPos(player, -364.10001f, 0.0f, 1658.3f);
		EV_SetAng(player, 0, 50254, 0);
		EV_Wait(1);
		EV_RemovePlayer(2);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}