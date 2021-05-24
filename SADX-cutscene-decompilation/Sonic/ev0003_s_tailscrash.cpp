#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"


void ev0003_s_tailscrash(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* BLACK = 0;

	switch (state) {
	case 1:
		task_tornado = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(74);
		EventSe_Init(3);
		BGM_Play(MusicIDs_s_square);
		BLACK = COverlayCreate(1.0f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_LookFree(player);
		EV_CameraPerspective(1, 1, 17294);
		EV_SetPos(player, -225.23199f, 0.30000001f, 1813.276f);
		EV_SetAng(player, 505, 414, 0);
		EV_SetAction(player, &action_s_s0031_sonic, &SONIC_TEXLIST, 0.69999999f, 1, 0);
		EV_CameraAng(1, 0, 3296, 29300, 64512);
		EV_CameraPos(1, 0, -251.89999f, 34.125999f, 1907.423f);
		EV_Wait(20);
		COverlaySetSpeed(BLACK, -0.025f);
		EV_Wait(10);
		EV_CameraAng(0, 105, 2816, 29440, 65280);
		EV_CameraPos(0, 105, -221.1626f, 6.3270001f, 1814.416f);
		EV_Wait(104);
		EV_CameraAng(0, 75, 4608, 26880, 65280);
		EV_CameraPos(0, 75, -218.39999f, 4.4661999f, 1809.5863f);
		EV_Wait(24);
		EV_SetFace(player, "VVVVVVVVVVVVVVVV");
		EV_Wait(50);
		EV_CameraAng(0, 60, 4608, 26880, 65280);
		EV_CameraPos(0, 60, -219.245f, 4.4439998f, 1809.0614f);
		EV_Wait(60);
		EV_CameraAng(1, 0, 55808, 3328, 64768);
		EV_CameraPos(1, 0, -222.39999f, 13.5f, 1820.92f);
		EV_CameraPos(0, 100, -223.19f, 10.4f, 1818.5f);
		EV_Wait(40);
		tornado_cons_EV0003();
		EventSe_Play(0, 1333, 1800);
		EventSe_Volume(0, -60, 1);
		EV_SetFace(player, "W");
		EV_Wait(1);
		EventSe_Volume(0, -10, 100);
		EV_Wait(29);
		EV_SetAction(player, &action_s_s0013_sonic, &SONIC_TEXLIST, 0.75f, 0, 0);
		EV_Wait(10);
		EV_WaitAction(player);
		EV_SetAction(player, &action_s_s0032_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 0);
		EV_SetFace(player, "BAX");
		EV_SerifPlay(402);
		EV_SetAction(player, &action_s_s0032_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 0);
		BGM_Stop();
		EV_Msg((msgTbl_ev0003[TextLanguage])[0]); // "\aHuh?"
		EV_Wait(15);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(player, -339.72f, -3.0f, 1867.1f);
		EV_SetAng(player, 0, 5120, 0);
		EV_LookPoint(player, -287.70001f, 65.356003f, 1967.818f);
		EV_CameraPerspective(1, 1, 12561);
		BGM_Play(MusicIDs_circuit);
		EV_CameraAng(0, 0, 1792, 39424, 0);
		EV_CameraPos(0, 0, -328.07001f, 2.086f, 1830.488f);
		EventSe_Pan(0, -128, 1);
		EV_CameraAng(0, 76, 3328, 35840, 0);
		EV_CameraPos(0, 76, -339.20999f, 2.086f, 1847.3459f);
		EV_Wait(1);
		EventSe_Pan(0, 0, 100);
		EV_Wait(46);
		EV_CameraPos(1, 100, -343.0376f, 2.086f, 1848.5065f);
		EV_Wait(65);
		EV_CameraPos(1, 0, -170.242f, 80.0f, 2219.4561f);
		EV_CameraTargetObj(1, 1, task_tornado, 0.0f, 1.0f, 0.0f, 0);
		EventSe_Volume(0, 0, 1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(player, "CD");
		EV_CameraChase(task_tornado);
		EV_SerifPlay(414);
		EV_Msg((msgTbl_ev0003[TextLanguage])[1]); // "\aWhat? Tails?"
		EV_LookFree(player);
		EV_LookPoint(player, -436.25f, 73.690002f, 1988.8666f);
		EV_SetAng(player, 0, 58880, 0);
		EV_Wait(33);
		EV_CameraChaseFree();
		EV_CameraAng(1, 28, 1280, 22784, 0);
		EV_Wait(23);
		EV_MsgClose();
		EV_CameraTargetFree();
		EventSe_Volume(0, -10, 1);
		EV_CameraAng(1, 0, 65024, 56308, 0);
		EV_CameraPos(1, 0, -350.32401f, 4.4499998f, 1875.6801f);
		EV_CameraAng(0, 50, 3840, 56308, 0);
		EV_CameraPos(0, 50, -345.14999f, 4.54f, 1871.4399f);
		EV_ClrFace(player);
		EV_SerifPlay(415);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "DJZZZZZZZZZZZZZZZZZZZ");
		}
		EV_Msg((msgTbl_ev0003[TextLanguage])[2]); // "\aWatch out!   \nYou're gonna crash!  A"...
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "DJ");
		}
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(player);
		EV_CameraAng(1, 0, 3072, 23552, 0);
		EV_CameraPos(1, 0, -320.29999f, 5.48f, 1854.9f);
		EventSe_Volume(0, -70, 120);
		EV_CameraAng(0, 110, 3072, 23552, 0);
		EV_CameraPos(0, 110, -321.20001f, 1.65f, 1855.636f);
		EV_Wait(105);
		EV_LookFree(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 0.5f, 1, 6);
		EV_ClrFace(player);
		EV_Wait(5);
		EventSe_Stop(0);
		RumbleA(0, 10);
		EV_CameraAng(0, 3, 5120, 23552, 0);
		EventSe_Play(1, 1335, 1800);
		EventSe_Volume(1, -20, 1);
		EV_Wait(2);
		EV_SetFace(player, "H");
		EV_CameraAng(0, 3, 1280, 23552, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 4864, 23552, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 768, 23552, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 4352, 23552, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 1792, 23552, 0);
		RumbleA(0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 4352, 23552, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 2304, 23552, 0);
		EV_Wait(2);
		EV_LookFree(player);
		EV_CameraAng(0, 3, 4096, 23552, 0);
		EV_Wait(2);
		EV_CameraAng(0, 3, 3072, 23552, 0);
		EventSe_Stop(1);
		EV_SerifPlay(416);
		EV_Msg((msgTbl_ev0003[TextLanguage])[3]); // "\aTails..."
		EV_Wait(25);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "EAACD");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "EC");
		}
		EV_Wait(20);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 5632, 55040, 512);
		EV_CameraPos(1, 0, -346.35001f, 5.0739999f, 1869.9399f);
		EV_Msg((msgTbl_ev0003[TextLanguage])[4]); // "\aWhat am I gonna do with you?"
		EV_CameraAng(0, 100, 6144, 54016, 65280);
		EV_CameraPos(0, 100, -345.26001f, 3.1600001f, 1869.9301f);
		EV_Wait(5);
		EV_SetAction(player, &action_s_s0033_sonic, &SONIC_TEXLIST, 0.2f, 0, 16);
		EV_WaitAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraAng(1, 0, 512, 52224, 0);
		EV_CameraPos(1, 0, -395.67001f, 1.1f, 1872.486f);
		EV_ClrAction(player);
		EV_CameraTargetObj(0, 40, player, 0.0f, 0.0f, 0.0f, 0);
		EV_PlayPad(0, &EV0003S);
		EV_Wait(103);
		break;
	case 2:
		EV_SetPos(player, -456.0f, 0.0f, 1963.0f);
		EV_SetAng(player, 0, 59600, 0);
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		tornado_dest_EV0003();
		EventSe_Close();
		FreeTask(BLACK);
		BLACK = 0;
		break;
	}
}
