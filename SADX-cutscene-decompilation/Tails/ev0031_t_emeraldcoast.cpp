#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0031[] = { 0 };

void ev0031_t_emeraldcoast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CreateObjectFunc(&zan, ev_trzangai, 6893.9502f, 1.03f, -2203.1499f, 0, 0xC000, 0);
		EV_CreatePlayer(2, SonicTheHedgehog, 6420.0f, 1.33f, -2150.0f, 0, 0x4000, 0);
		EV_Wait(1);
		EV_SetPos(player, 6888.9502f, 1.03f, -2203.1499f);
		EV_SetAng(player, 0, 0xC000, 0);
		EV_SetAction(player, &action_m_m0118_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVV");
		sonic = EV_GetPlayer(2);
		EV_LookObject(sonic, player, 0.0f, -3.0f, 0.0f);
		EV_CameraPos(1, 0, 6852.0801f, 9.0f, -2203.845f);
		EV_CameraAng(1, 0, 0x1B1F, 0xBF3C, 0);
		EV_CameraAng(0, 160, 0xFD1F, 0xBF3C, 0);
		EV_CameraPos(0, 160, 6865.0298f, 8.0799999f, -2203.595f);
		SMOKE = CObjSmoke_Create();
		SMOKE->twp->ang.y = 10;
		SMOKE->twp->ang.x = 10;
		*(float*)SMOKE->twp->value.l = 1.2f;
		*(float*)(SMOKE->twp->value.l + 44) = 1.0f;
		*(float*)(SMOKE->twp->value.l + 48) = 0.2f;
		*(float*)(SMOKE->twp->value.l + 52) = 0.2f;
		*(float*)(SMOKE->twp->value.l + 56) = 0.2f;
		EV_Wait(1);
		EV_SetPos(SMOKE, 6888.9502f, 1.03f, -2203.1499f);
		EV_Wait(100);
		EV_CameraPos(1, 0, 6882.188f, 5.5500002f, -2199.1345f);
		EV_CameraAng(1, 0, 0xF71F, 0xE03C, 0);
		SMOKE->twp->ang.x = 0;
		SMOKE->twp->ang.y = 0;
		EV_ClrFace(player);
		EV_SetFace(player, "XB");
		EV_SetAction(player, &action_m_m0119_miles, &MILES_TEXLIST, 0.2f, 0, 8);
		EV_SetAction(player, &action_m_m0120_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		BGM_Play(MusicIDs_thesonic);
		EV_SetPos(sonic, 6880.5601f, 1.03f, -2203.3899f);
		EV_SetAng(sonic, 0, 0x4000, 0);
		EV_SetAction(sonic, &action_s_s0055_sonic, &SONIC_TEXLIST, 0.5f, 0, 8);
		EV_SetAction(sonic, &action_s_s0056_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_Wait(60);
		EV_CameraPos(1, 0, 6886.7368f, 3.1099999f, -2203.4399f);
		EV_CameraAng(1, 0, 0xF21F, 0x423C, 0);
		EV_CameraAng(0, 60, 0x91F, 0x423C, 0);
		EV_Wait(52);
		EV_CameraPos(1, 0, 6887.5718f, 3.335f, -2197.3f);
		EV_CameraAng(1, 0, 0xFF1F, 0x33C, 0);
		EV_CameraPos(1, 60, 6887.0718f, 3.335f, -2197.0f);
		EV_Wait(40);
		EV_CameraPos(1, 0, 6886.7368f, 3.1099999f, -2203.4399f);
		EV_CameraAng(1, 0, 0x91F, 0x423C, 0);
		EV_CameraAng(0, 60, 0x1E1F, 0x423C, 0);
		EV_Wait(80);
		EV_SetFace(sonic, "P");
		EV_Wait(30);
		if(SMOKE){
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		EV_CameraPos(1, 0, 6894.1201f, 17.92f, -2065.6699f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 3.0f, 0.0f, 0);
		KURAYAMI = (task*)COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(80);
		EV_CameraTargetFree();
		EV_Wait(10);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&zan);
		if(SMOKE){
			FreeTask(SMOKE);
			SMOKE = 0;
		}
		if(KURAYAMI){
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		break;
	}
}