#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0075_a_kidnapped2(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		BLACKOUT = 0;
		egg_amy = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, -588.0f, 0.0f, 1110.0f);
		EV_CreatePlayer(2, SonicTheHedgehog, -427.0f, -2.8f, 1113.3f, 0, 0x8000, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, -409.0f, 0.0f, 1060.3f);
		EV_SetAng(sonic, 0, 0x8000, 0);
		BLACKOUT = COverlayCreate(1.0e-32f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_CreateObjectFunc(&egg_amy, set_amy, -115.0f, 90.0f, 1242.8f, 0, 1792, 61184);
		EV_Wait(1);
		EV_SetMode(egg_amy, 0);
		setamyparam(1.1f);
		BGM_Play(MusicIDs_eggrobo);
		EV_CameraPos(1, 0, -261.5f, 176.0f, 1291.0f);
		EV_CameraAng(1, 0, 61200, 50976, 64768);
		EV_CameraPos(0, 70, -266.5f, 156.39999f, 1313.5f);
		EV_CameraAng(0, 70, 61898, 51152, 64768);
		moveObject(egg_amy, -110.0f, 103.0f, 1247.0f, -226.60001f, 143.0f, 1304.7f, 64);
		EV_Wait(64);
		stopObject(egg_amy);
		EV_SetPos(egg_amy, -330.0f, 182.0f, 1245.8f);
		EV_SetAng(egg_amy, 0, 0x4000, 0);
		EV_CameraPos(1, 0, -300.5f, 187.8f, 1227.0f);
		moveObject(egg_amy, -330.0f, 182.0f, 1245.8f, -740.0f, 181.0f, 1248.0f, 290);
		EV_CameraTargetObj(1, 0, egg_amy, -3.0f, 22.0f, -35.0f, 0);
		EV_CameraChase(egg_amy);
		EV_CameraPerspective(1, 60, 5461);
		EV_Wait(60);
		EV_CameraTargetObj(1, 35, sonic, 0.0f, 5.0f, 0.0f, 0);
		EV_SerifPlay(884);
		EV_Msg(msgTbl_ev0075[TextLanguage][0]); //"\aHelp!   Son-ic!"
		EV_Wait(15);
		EV_SetAction(sonic, SONIC_ACTIONS[122], &SONIC_TEXLIST, 1.7f, 0, 8);
		EV_WaitAction(sonic);
		EV_SetAng(sonic, 0, 53760, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 0.89999998f, 1, 8);
		EV_LookObject(sonic, egg_amy, 0.0f, 5.0f, 0.0f);
		EV_MovePoint2(sonic, -421.79999f, 1.0f, 1068.0f, 2.5f, 1.1f);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "EEEEE");
		EV_Wait(63);
		EV_ClrFace(sonic);
		EV_SetAng(sonic, 0, 53248, 0);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.2f, 1, 12);
		EV_CameraTargetFree();
		EV_CameraChaseFree();
		EV_CameraPos(1, 160, -666.5f, 150.0f, 1273.0f);
		EV_CameraAng(1, 50, 64783, 49184, 256);
		EV_MsgClose();
		if (BLACKOUT)
		{
			COverlaySetSpeed(BLACKOUT, 0.025f);
		}
		EV_Wait(90);
		EV_ClrFace(player); //Why is this here? Does nothing because amy isn't doing any face animations.
		stopObjectAll();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_RemovePlayer(2);
		stopObjectAll();
		EV_FreeObject(&egg_amy);
		if (BLACKOUT)
		{
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		EV_CameraPerspective(1, 0, 12561);
		break;
	}
}