#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev009D_k_restoreme(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		FLASH = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(103);
		EventSe_Init(3);
		seqVars[37] = 2;
		EV_InitPlayer(0);
		EV_SetPos(player, -3.4000001f, -247.0f, 2469.6001f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		BGM_Play(MusicIDs_mstcln);
		EV_CameraPos(1, 0, -5.4499998f, -246.39999f, 2460.3f);
		EV_CameraAng(1, 0, 1394, 35251, 65280);
		EV_CameraAng(1, 80, 5234, 35251, 65280);
		EV_Wait(100);
		EV_CameraPos(1, 0, -3.7f, -241.89999f, 2480.0f);
		EV_CameraAng(1, 0, 61776, 64880, 0);
		EV_CameraPos(1, 120, -4.0700002f, -243.5f, 2499.8999f);
		EV_CameraAng(0, 100, 3152, 65136, 0);
		EV_Wait(60);
		EV_MovePoint2(player, -2.5f, -157.0f, 2239.3999f, 1.8f, 0.5f);
		EV_Wait(40);
		EV_CameraPos(1, 90,
			player->Data1->Position.x - 0.69999999f,
			player->Data1->Position.y + 8.0f,
			player->Data1->Position.z + 18.6f);
		EV_CameraTargetObj(1, 40, player, 0.0f, 6.0f, 0.0f, 0);
		EV_CameraChase(player);
		EV_Wait(95);
		EV_CameraChaseFree();
		EV_Wait(15);
		EV_CameraTargetFree();
		EV_CameraPos(1, 0, -39.200001f, -156.39999f, 2138.8999f);
		EV_CameraAng(1, 0, 1440, 38021, 0);
		EV_CameraPos(1, 90, -39.599998f, -149.5f, 2138.0f);
		EV_Wait(100);
		EV_SetAction(player, KNUCKLES_ACTIONS[83], &KNUCKLES_TEXLIST, 0.5f, 1, 0);
		EV_CameraPos(1, 0, -7.3699999f, -156.0f, 2234.3f);
		EV_CameraAng(1, 0, 928, 43141, 0);
		EV_CameraTargetObj(1, 40, player, 0.0f, 6.0f, 0.0f, 0);
		EV_MovePoint2(player, -2.8699999f, -158.0f, 2201.8999f, 0.34999999f, 0.059999999f);
		EV_Wait(40);
		EV_CameraPos(1, 70, -3.3699999f, -156.0f, 2234.6699f);
		EV_CameraAng(1, 70, 1269, 65121, 0);
		EV_WaitMove(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[82], &KNUCKLES_TEXLIST, 0.80000001f, 1, 16);
		EV_CameraTargetFree();
		EV_CameraPos(1, 110, -3.1900001f, -155.39999f, 2229.6699f);
		EV_Wait(110);
		EV_ClrAction(player);
		EV_SetAction(player, &action_k_k0009_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(player, -2.8699999f, -158.0f, 2204.8999f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(1, 0, -7.4499998f, -153.60001f, 2195.7f);
		EV_CameraAng(1, 0, 64079, 39802, 65280);
		EV_CameraPos(0, 90, -5.5700002f, -150.67f, 2194.76f);
		EV_CameraAng(0, 90, 64591, 36474, 0);
		EV_Wait(90);
		EV_CameraPos(0, 100, -6.5999999f, -150.39999f, 2192.0f);
		EV_CameraAng(0, 100, 64591, 36474, 0);
		EV_SetAction(player, &action_k_k0009_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_Wait(20);
		MemeCreate(3);
		EV_Wait(15);
		crushLightOn(-2.8699999f, -151.0f, 2197.8999f, 1, 10, 0.40000001f, 1.2f, 0xFF50DC50, 0x325A32u);
		EV_Wait(45);
		EventSe_Oneshot(1335, 128, 0, 0);
		EV_Wait(20);
		EV_SetAction(player, &action_k_k0010_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, &action_k_k0011_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(25);
		crushLightOff();
		EV_Wait(20);
		EventSe_Play(2, 1334, 1800);
		EventSe_Volume(2, -10, 1);
		EV_Wait(1);
		EventSe_Volume(2, 90, 220);
		EV_CameraPos(0, 40, -34.599998f, -147.60001f, 2162.5f);
		EV_CameraAng(0, 40, 2127, 43642, 0);
		EV_Wait(40);
		EV_CameraPos(0, 60, -55.57f, -155.60001f, 2156.5f);
		EV_CameraAng(0, 60, 10319, 45434, 3584);
		EV_SetAction(player, &action_k_k0010_knuckles, &KNUCKLES_TEXLIST, 1.0f, 0, 16);
		EV_SetAction(player, &action_k_k0011_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(60);
		EV_CameraAng(0, 40, 8683, 49594, 3584);
		EV_Wait(40);
		EV_CameraPos(1, 0, 44.57f, -20.4f, 2195.7f);
		EV_CameraAng(1, 0, 54607, 7802, 0);
		EV_CameraPos(1, 120, -17.450001f, -150.89999f, 2223.0f);
		EV_CameraAng(1, 120, 1103, 62842, 0);
		EV_CameraPerspective(0, 30, 9102);
		EV_Wait(40);
		EV_CameraPerspective(0, 60, 12743);
		EV_Wait(60);
		EventSe_Stop(2);
		EventSe_Oneshot(1335, 128, 0, 0);
		EventSe_Oneshot(1334, 128, 0, 0);
		crushLightOn(-3.52f, -136.0f, 2151.0f, 2, 12, 2.0f, 5.0f, 0xFF50DC50, 0x325A32u);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, 0.028000001f);
		}
		EV_Wait(40);
		seqVars[37] = 3;
		EV_Wait(20);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.022f);
		}
		EV_Wait(20);
		crushLightOff();
		EV_SetPos(player, -2.45f, -158.0f, 2192.3999f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(1, 0, -15.1f, -149.7f, 2188.0f);
		EV_CameraAng(1, 0, 2895, 62330, 0);
		EV_CameraPos(1, 100, -17.4f, -154.89999f, 2207.7f);
		EV_CameraAng(1, 100, 3663, 61941, 0);
		EV_SetAction(player, &action_k_k0005_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 16);
		EV_ClrFace(player);
		EV_SetFace(player, "BCEK0");
		EV_SerifPlay(1161);
		EV_Msg(msgTbl_ev009D[TextLanguage][0]); //"\aThis should do it!  Perfect.\nAll is "...
		EV_SerifWait();
		EV_Wait(10);
		EV_ClrFace(player);
		EV_Wait(60);
		EV_CameraPos(0, 0, 3.7f, -153.89999f, 2181.7f);
		EV_CameraAng(0, 0, 2895, 27514, 0);
		EV_ClrFace(player);
		if (!VoiceLanguage)
		{
			EV_SetFace(player, "BCEKKCEECKKKK0");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(player, "DDEEKK0");
		}
		EV_SerifPlay(1162);
		EV_Msg(msgTbl_ev009D[TextLanguage][1]); //"\aThe Master Emerald and \nthe island h"...
		EV_CameraPos(0, 90, 1.37f, -152.5f, 2185.8999f);
		EV_Wait(90);
		EV_CameraPos(0, 80, 0.44f, -152.0f, 2187.6001f);
		EV_Wait(90);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_SetAction(player, KNUCKLES_ACTIONS[83], &KNUCKLES_TEXLIST, 0.55000001f, 1, 0);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraPos(1, 0, -5.1799998f, -155.2f, 2206.5f);
		EV_CameraAng(1, 0, 1615, 64491, 0);
		EV_MovePoint2(player, -2.74f, 158.0f, 2246.5f, 0.15000001f, 0.079999998f);
		EV_CameraChase(player);
		EV_Wait(80);
		crushLightOn(-3.52f, -136.0f, 2151.0f, 1, 4, 1.0f, 3.0f, 0xFF50DC50, 0x325A32u);
		EV_Wait(20);
		EV_CameraChaseFree();
		EV_CameraPos(0, 200, -2.55f, -155.92f, 2280.0f);
		EV_CameraAng(0, 200, 3919, 65402, 0);
		crushLightOff();
		crushLightOn(-3.52f, -136.0f, 2151.0f, 1, 8, 1.0f, 6.0f, 0xFF28AA28, 0x145014u);
		EV_Wait(30);
		FLASH = COverlayCreate(0.02f, 0.02f, 0.69999999f, 1.0f, 0.69999999f);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, 0.0049999999f);
		}
		EV_Wait(70);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, -0.0099999998f);
		}
		crushLightOff();
		crushLightOn(-3.52f, -136.0f, 2151.0f, 1, 8, 1.3f, 7.0f, 0xFF28AA28, 0x145014u);
		EV_Wait(20);
		if (FLASH)
		{
			COverlaySetSpeed(FLASH, 0.0099999998f);
		}
		EV_Wait(110);
		crushLightOff();
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EventSe_Close();
		EV_SerifStop();
		crushLightOff();
		if (FLASH)
		{
			FreeTask(FLASH);
			FLASH = 0;
		}
		MemeDelete();
		break;
	}
}