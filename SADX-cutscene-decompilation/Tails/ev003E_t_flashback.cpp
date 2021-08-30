#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev003E_t_flashback(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		equipment = GetPlayerWorkPtr(0)->equipment; //Store the player's upgrades
		eq_saved = 1;
		if (enableUnusedCode) {
			GetPlayerWorkPtr(0)->equipment &= ~Upgrades_JetAnklet; //Remove the Jet Anklet.
		}
		else {
			GetPlayerWorkPtr(0)->equipment &= ~Upgrades_RhythmBadge; //Remove the Rhythm badge (Vanilla).
		}
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CameraPerspective(1, 1, 12743);
		EV_Wait(1);
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_evtbgm00);
		BLACK = COverlayCreate(-0.001f, 0.80000001f, 0.0f, 0.0f, 0.0f);
		SEPIA = COverlayCreate(-1.0e-10f, 0.36000001f, 0.60000002f, 0.44f, 0.16f);

		/*idk if this visibly does anything but it's never run normally because this code is normally above COverlayCreate.
		It checks for BLACK and SEPIA before they've been created (and needs them to not crash, hence the move).*/
		if (enableUnusedCode) {
			COverlaySetPriority(BLACK, -1.0f);
			COverlaySetPriority(SEPIA, -1.1f);
		}

		EV_SetPos(player, -955.59998f, 9.8199997f, -181.60001f);
		EV_SetAng(player, 65472, 10240, 64759);
		EV_CreatePlayer(2, SonicTheHedgehog, -701.70001f, 4.0f, 100.1f, 0, 64000, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, -779.40002f, 1.21f, -106.77f);
		EV_SetAng(sonic, 0, 4169, 0);
		COverlaySetSpeed(BLACK, -0.0049999999f);
		EV_CameraPos(1, 0, -962.09998f, 13.22f, -187.0f);
		EV_CameraAng(1, 0, 1792, 41984, 768);
		EV_CameraPos(1, 80, -963.79999f, 12.6f, -189.75f);
		EV_CameraAng(1, 80, 2355, 41047, 768);
		EV_Wait(100);
		EV_SetAction(player, &action_m_m0121_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0, -947.70001f, 13.2f, -183.89999f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(5);
		EV_CameraTargetObj(1, 45, player, 0.0f, 3.5f, 0.0f, 64256);
		EV_MovePoint2(player, -892.5f, 12.4f, -153.0f, 0.31999999f, 0.079999998f);
		EV_Wait(60);
		EV_CameraPos(1, 0, -867.09998f, 38.450001f, -159.7f);
		EV_CameraAng(1, 0, 63663, 28823, 0);
		EV_CameraPos(1, 140, -867.09998f, 30.57f, -161.0f);
		EV_CameraAng(1, 140, 63663, 29591, 0);
		COverlaySetSpeed(SEPIA, 0.0020000001f);
		EV_Wait(50);
		COverlaySetSpeed(SEPIA, -0.0015f);
		EV_Wait(65);
		COverlaySetSpeed(SEPIA, -1.0e-11f);
		EV_Wait(20);
		EV_MoveFree(player);
		EV_CameraTargetFree();
		EV_SetPos(player, -805.20001f, 12.7f, 51.57f);
		EV_SetAng(player, 64768, 4616, 64512);
		EV_SetPos(sonic, -778.70001f, 13.77f, 105.55f);
		EV_SetAng(sonic, 2816, 59904, 0);
		EV_CameraPos(1, 0, -791.59998f, 14.0f, 108.0f);
		EV_CameraAng(1, 0, 1199, 2455, 0);
		EV_CameraPos(1, 160, -796.59998f, 16.700001f, 113.7f);
		EV_CameraAng(1, 160, 1199, 2199, 0);
		EV_MovePoint2(player, -799.70001f, 12.66f, 104.31f, 0.30000001f, 0.30000001f);
		COverlaySetSpeed(SEPIA, 0.0027000001f);
		EV_Wait(50);
		COverlaySetSpeed(SEPIA, -0.0015f);
		EV_Wait(60);
		COverlaySetSpeed(SEPIA, -1.0e-11f);
		EV_Wait(53);
		EV_SetAction(player, &action_m_m0122_miles, &MILES_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(player, &action_m_m0123_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(10);
		EventSe_Oneshot(738, 128, 0, 0);
		EV_MovePoint2(sonic, -825.40002f, 24.33f, 109.9f, 8.0f, 4.0f);
		EV_Wait(20);
		EV_ClrFace(player);
		EV_SetFace(player, "J");
		EV_Wait(40);
		EV_MoveFree(sonic);
		EV_SetPos(sonic, -839.70001f, 29.77f, 167.39999f);
		EV_SetAng(sonic, 64256, 51712, 0);
		EV_ClrFace(player);
		EV_CameraPos(1, 0, -791.47998f, 14.0f, 105.7f);
		EV_CameraAng(1, 0, 1694, 11266, 1536);
		EV_CameraPos(1, 90, -793.70001f, 20.299999f, 107.15f);
		EV_CameraAng(1, 90, 62366, 7426, 1536);
		EV_Wait(90);
		EV_SetAng(player, 0, 61440, 0);
		EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 0.40000001f, 1, 0);
		EV_CameraPos(1, 0, -784.20001f, 11.7f, 98.360001f);
		EV_CameraAng(1, 0, 2974, 23554, 1024);
		EV_CameraPos(1, 100, -788.20001f, 12.6f, 92.599998f);
		EV_CameraAng(1, 100, 2974, 23554, 1024);
		EV_MovePoint2(sonic, -1086.1801f, 131.7f, 373.89999f, 8.0f, 2.0f);
		COverlaySetSpeed(SEPIA, 0.003f);
		EV_Wait(50);
		COverlaySetSpeed(SEPIA, -0.003f);
		EV_Wait(50);
		COverlaySetSpeed(SEPIA, -1.0e-11f);
		EV_SetPos(sonic, -778.70001f, 13.77f, 105.55f);
		EV_SetAng(sonic, 2816, 59904, 0);
		EV_CameraPos(1, 0, -798.70001f, 18.0f, 109.78f);
		EV_CameraAng(1, 0, 2718, 2306, 768);
		EV_CameraPos(1, 90, -798.90002f, 18.299999f, 108.8f);
		EV_Wait(90);
		EV_CameraPos(1, 30, -793.59998f, 15.31f, 101.37f);
		EV_CameraAng(1, 30, 2462, 24066, 768);
		EV_ClrAction(player);
		EV_MovePoint2(player, -916.70001f, 100.66f, 240.5f, 1.0f, 0.2f);
		EV_Wait(30);
		EV_CameraTargetObj(1, 40, player, 0.0f, 4.5f, 0.0f, 0);
		EV_Wait(80);
		EV_MoveFree(player);
		EV_SetPos(player, -763.70001f, 9.1999998f, 107.3f);
		EV_SetAng(player, 64256, 55808, 0);
		EV_SetPos(sonic, -836.70001f, 24.77f, 144.89999f);
		EV_SetAng(sonic, 64256, 57344, 0);
		EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.2f, 1, 0);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 1.3f, 1, 0);
		EV_LookObject(player, sonic, 0.0f, 5.0f, 0.0f);
		EV_SetPos(player, -1317.6f, 78.0f, -717.34003f);
		EV_SetAng(player, 0, 36864, 0);
		EV_SetPath(sonic, &epathtag_EV003E_RUNNING, 0.60000002f, 0);
		EV_Wait(8);
		EV_SetPath(player, &epathtag_EV003E_RUNNING, 0.60000002f, 0);
		EV_LookFree(sonic);
		EV_CameraPos(1, 0,
			sonic->twp->pos.x - 5.0f,
			sonic->twp->pos.y + 7.0f,
			sonic->twp->pos.z + 28.0f);
		EV_CameraChase(sonic);
		EV_CameraTargetObj(1, 0, sonic, 0.0f, 5.0f, 0.0f, 0);
		EV_Wait(100);
		EV_CameraPos(1, 0,
			sonic->twp->pos.x + 6.0f,
			sonic->twp->pos.y + 8.0f,
			sonic->twp->pos.z - 10.0f);
		EV_CameraChase(sonic);
		COverlaySetSpeed(SEPIA, -0.0016f);
		EV_Wait(100);
		EV_ClrFace(player);
		EV_SetFace(player, "bbPPPbb");
		EV_CameraPos(1, 0,
			player->twp->pos.x + 1.0f,
			player->twp->pos.y + 5.5f,
			player->twp->pos.z - 10.0f);
		EV_CameraChase(player);
		EV_CameraTargetObj(1, 0, player, -2.0f, 5.0f, -2.5f, 0);
		EV_Wait(40);
		EV_CameraPos(1, 0,
			sonic->twp->pos.x - 4.0f,
			sonic->twp->pos.y + 5.0f,
			sonic->twp->pos.z - 8.0f);
		EV_CameraChase(sonic);
		EV_CameraTargetObj(1, 0, sonic, 0.0f, 5.0f, 0.0f, 0);
		EV_Wait(50);
		EV_CameraTargetFree();
		EV_CameraChaseFree();
		EV_ClrPath(sonic);
		EV_SetPos(sonic, -1055.3f, 1.0f, -1433.6f);
		COverlaySetColor(SEPIA, 1.0f, 1.0f, 1.0f);
		COverlaySetSpeed(SEPIA, 0.0020000001f);
		EV_CameraPos(1, 0, -1067.2f, 1.48f, -1423.27f);
		EV_CameraAng(1, 0, 3529, 54955, 0);
		EV_CameraPos(1, 160, -1078.6f, 0.80000001f, -1438.27f);
		EV_CameraAng(1, 160, 3017, 56491, 65280);
		EV_MovePoint2(player, -956.0f, 0.0f, -1595.8f, 0.89999998f, 0.2f);
		EV_MovePoint2(sonic, -963.45001f, 0.0f, -1598.66f, 0.69999999f, 0.02f);
		EV_Wait(190);
		COverlaySetSpeed(BLACK, 0.028000001f);
		EV_Wait(60);
		EV_CameraPerspective(1, 1, 12743);
		EV_Wait(1);
		break;
	case 2:
		if (eq_saved)
		{
			GetPlayerWorkPtr(0)->equipment = equipment;
			eq_saved = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		BGM_Stop();
		EV_InitPlayer(0);
		if(SEPIA){
			FreeTask(SEPIA);
			SEPIA = 0;
		}
		if(BLACK){
			FreeTask(BLACK);
			BLACK = 0;
		}
		EV_RemovePlayer(2);
		EV_ClrPath(player);
		EV_ClrPath(sonic);
		break;
	}
}