#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0083_k_casinopolis(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EventSe_Init(1);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, 227.61f, -199.95f, -203.73f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_Wait(1);
		KOUKYU = CTikalLight_Create(
			player->Data1->Position.x + 8.2600002f,
			player->Data1->Position.y + 16.993999f,
			player->Data1->Position.z - 24.889f);
		EV_SetMode(KOUKYU, 0);
		EV_CameraPos(1, 0,
			player->Data1->Position.x + 22.459999f,
			player->Data1->Position.y + 11.4f,
			player->Data1->Position.z + 0.70999998f);
		EV_CameraAng(1, 0,
			player->Data1->Rotation.x - 0x800,
			0x3F00 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EventSe_Play(0, 760, 260);
		EV_SetPath(KOUKYU, &epathtag_e0083TK, 1.0f, 2);
		EV_Wait(50);
		EV_LookObject(player, KOUKYU, 0.0f, 0.0f, 0.0f);
		EV_Wait(80);
		EV_CameraPos(1, 0,
			player->Data1->Position.x + 1.33f,
			player->Data1->Position.y + 7.5999999f,
			player->Data1->Position.z + 2.9000001f);
		EV_CameraTargetObj(1, 0, KOUKYU, 0.0f, 0.0f, 0.0f, 0);
		EV_SetAng(player, 0, 0x2000, 0);
		EV_Wait(29);
		EV_CameraTargetFree();
		EV_Wait(1);
		EV_SetAction(player, &action_k_k0003_knuckles, &KNUCKLES_TEXLIST, 0.5f, 0, 8);
		EV_SetAction(player, &action_k_k0004_knuckles, &KNUCKLES_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0,
			player->Data1->Position.x + 22.459999f,
			player->Data1->Position.y + 11.4f,
			player->Data1->Position.z + 0.70999998f);
		EV_CameraAng(1, 0,
			player->Data1->Rotation.x - 0x800,
			0x5F00 - player->Data1->Rotation.y,
			player->Data1->Rotation.z);
		EV_CameraPerspective(1, 30, 5461);
		EV_Wait(30);
		WHITE = COverlayCreate(0.016666668f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(89);
		EV_CameraPerspective(1, 1, 12743);
		EV_LookFree(player);
		EV_Wait(1);
		break;
	case 2:
		EV_InitPlayer(0);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EventSe_Close();
		EV_ClrPath(KOUKYU);
		if (KOUKYU)
		{
			FreeTask(KOUKYU);
			KOUKYU = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}