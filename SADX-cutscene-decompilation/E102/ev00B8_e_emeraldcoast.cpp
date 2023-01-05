#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B8[] = {
	(char*)("BIG_KAERU"), &big_kaeru_TEXLIST,
	0
};

void ev00B8_e_emeraldcoast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		KOUKYU = 0;
		WHITE = 0;
		Frog = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Init(1);
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, 867.90997f, 80.199997f, 698.34998f);
		EV_SetAng(player, 0, 0, 0);
		KOUKYU = CTikalLight_Create(
			player->twp->pos.x - 20.2862f,
			player->twp->pos.y + 18.0f,
			player->twp->pos.z + 17.0f);
		EV_SetMode(KOUKYU, 0);
		EV_CreateObject(&Frog,
			player->twp->pos.x + 13.0f,
			player->twp->pos.y,
			player->twp->pos.z + 14.0f, 0, 0x8000, 0);
		EV_SetMode(Frog, 0);
		EV_Wait(1);
		EV_SetAng(Frog, 0, -0x4900, 0);
		EV_ClrAction(player);
		EV_ClrAction(Frog);
		EV_SetAction(player, E102_ACTIONS[45], &E102_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(Frog, &action_f_f0003_frog, &big_kaeru_TEXLIST, 1.0f, 1, 0);
		EV_CameraPos(1, 0,
			player->twp->pos.x,
			player->twp->pos.y + 16.497999f,
			player->twp->pos.z + 28.820999f);
		EV_CameraAng(1, 0, 0xF800, 0, 0);
		EV_SetPath(KOUKYU, &epathtag_E00B8TK, 0.60000002f, 2);
		EV_Wait(120);
		EV_CameraPos(1, 30,
			player->twp->pos.x,
			player->twp->pos.y + 15.717f,
			player->twp->pos.z + 24.9f);
		EventSe_Play(0, 760, 90);
		WHITE = COverlayCreate(0.016666668f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(90);
		break;
	case 2:
		EventSe_Close();
		EV_CameraOff();
		EV_PadOn();
		EV_FreeObject(&Frog);
		EV_InitPlayer(0);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_ClrPath(KOUKYU);
		if (KOUKYU)
		{
			FreeTask(KOUKYU);
			KOUKYU = 0;
		}
		break;
	}
}