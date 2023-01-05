#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev008D[] = { 0 };

void ev008D_k_lostpast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Tik = 0;
		WHITE = 0;
		EV_InitPlayer(0);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_tical);
		EV_SetPos(player, 7418.0f, -2192.0f, 1316.0f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_Wait(1);
		Tik = CTikalLight_Create(
			player->twp->pos.x + 12.703f,
			player->twp->pos.y + 19.99f,
			player->twp->pos.z + 12.31f);
		EV_SetMode(Tik, 0);
		EV_CameraPos(1, 0,
			player->twp->pos.x + 22.459999f,
			player->twp->pos.y + 11.4f,
			player->twp->pos.z + 0.70999998f);
		EV_CameraAng(1, 0,
			player->twp->ang.x - 0x800,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_CameraPos(1, 400,
			player->twp->pos.x + 40.312f,
			player->twp->pos.y + 19.030001f,
			player->twp->pos.z + 0.852f);
		EV_SetPath(Tik, &epathtag_e008DTK, 3.0f, 2);
		EV_Wait(80);
		EV_LookObject(player, Tik, 0.0f, 0.0f, 0.0f);
		EV_Wait(100);
		EventSe_Play(0, 760, 88);
		WHITE = COverlayCreate(0.016666668f, 0.0f, 1.0f, 1.0f, 1.0f);
		EV_Wait(90);
		EV_LookFree(player);
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		EV_ClrPath(Tik);
		if (Tik)
		{
			FreeTask(Tik);
			Tik = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}