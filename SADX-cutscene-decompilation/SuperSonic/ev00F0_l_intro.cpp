#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00F0[] = {
	(char*)("TR2CRASH"), &texlist_tr2crash
};

void ev00F0_l_intro(int state)
{
	switch (state) {
	case 1:
		KURAYAMI = 0;
		SetBankDir(113);
		EventSe_Init(2);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_evtbgm04);
		createModel(
			1226.0f, 99.0f, -904.65997f,
			0x1000, 0xD000, 0x400,
			1.0f, 1.0f, 1.0f,
			&_object_tr2crash_tr2crash,
			&texlist_tr2crash,
			0);
		EV_Wait(1);
		EV_CameraPos(0, 0, 1159.26f, 108.24f, -944.16998f);
		EV_CameraAng(0, 0, 0x400, 0x9F00, 0);
		EV_Wait(120);
		EV_CameraPos(0, 60, 1209.636f, 95.400002f, -904.302f);
		EV_Wait(60);
		EV_CameraPos(0, 60, 1210.322f, 95.497002f, -903.58099f);
		KURAYAMI = COverlayCreate(0.011111111f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_Wait(80);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_Wait(20);
		EventSe_Oneshot(1334, 0, 0, 0);
		if (KURAYAMI)
		{
			COverlaySetSpeed(KURAYAMI, -1.0f);
		}
		EV_Wait(1);
		if (KURAYAMI)
		{
			COverlaySetSpeed(KURAYAMI, 1.0f);
		}
		EV_Wait(60);
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		deleteModel(0);
		break;
	case 2:
		deleteModel(0);
		if (KURAYAMI)
		{
			FreeTask(KURAYAMI);
			KURAYAMI = 0;
		}
		EV_InitPlayer(0);
		EventSe_Close();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}