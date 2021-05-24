#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0031_t_emeraldcoast(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* sonic;
	ObjectMaster* smoke = 0;
	ObjectMaster* zan = 0;
	ObjectMaster* KURAYAMI = 0;

	switch (state) {
	case 1:
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		LoadEventObject(&zan, (ObjectMaster * (*)(void))ptr_crashed, 6893.9502f, 1.03f, -2203.1499f, 0, 49152, 0);
		EV_CreatePlayer(2, Sonic_Main, 6420.0f, 1.33f, -2150.0f, 0, 0x4000, 0);
		EV_Wait(1);
		EV_SetPos(player, 6888.9502f, 1.03f, -2203.1499f);
		EV_SetAng(player, 0, 49152, 0);
		EV_SetAction(player, &action_m_m0118_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVV");
		sonic = EV_GetPlayer(2);
		EV_LookObject(sonic, player, 0.0f, -3.0f, 0.0f);
		EV_CameraPos(1, 0, 6852.0801f, 9.0f, -2203.845f);
		EV_CameraAng(1, 0, 6943, 48956, 0);
		EV_CameraAng(0, 160, 64799, 48956, 0);
		EV_CameraPos(0, 160, 6865.0298f, 8.0799999f, -2203.595f);

		//Smoke effect
		smoke = CObjSmoke_Create();
		smoke->Data1->Rotation.y = 10;
		smoke->Data1->Rotation.x = 10;
		WriteData((float*)smoke->Data1->LoopData, 1.2f);
		WriteData((float*)(smoke->Data1->LoopData) + 11, 1.0f);
		WriteData((float*)(smoke->Data1->LoopData) + 12, 0.2f);
		WriteData((float*)(smoke->Data1->LoopData) + 13, 0.2f);
		WriteData((float*)(smoke->Data1->LoopData) + 14, 0.2f);

		EV_Wait(1);
		EV_SetPos(smoke, 6888.9502f, 1.03f, -2203.1499f);
		EV_Wait(100);
		EV_CameraPos(1, 0, 6882.188f, 5.5500002f, -2199.1345f);
		EV_CameraAng(1, 0, 63263, 57404, 0);
		smoke->Data1->Rotation.x = 0;
		smoke->Data1->Rotation.y = 0;
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
		EV_CameraAng(1, 0, 61983, 16956, 0);
		EV_CameraAng(0, 60, 2335, 16956, 0);
		EV_Wait(52);
		EV_CameraPos(1, 0, 6887.5718f, 3.335f, -2197.3f);
		EV_CameraAng(1, 0, 65311, 828, 0);
		EV_CameraPos(1, 60, 6887.0718f, 3.335f, -2197.0f);
		EV_Wait(40);
		EV_CameraPos(1, 0, 6886.7368f, 3.1099999f, -2203.4399f);
		EV_CameraAng(1, 0, 2335, 16956, 0);
		EV_CameraAng(0, 60, 7711, 16956, 0);
		EV_Wait(80);
		EV_SetFace(sonic, "P");
		EV_Wait(30);
		FreeTask(smoke);
		smoke = 0;
		EV_CameraPos(1, 0, 6894.1201f, 17.92f, -2065.6699f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 3.0f, 0.0f, 0);
		KURAYAMI = (ObjectMaster*)COverlayCreate(0.016666668f, 0.0f, 0.0f, 0.0f, 0.0f);
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
		if (smoke)
		{
			FreeTask(smoke);
			smoke = 0;
		}
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		break;
	}
}