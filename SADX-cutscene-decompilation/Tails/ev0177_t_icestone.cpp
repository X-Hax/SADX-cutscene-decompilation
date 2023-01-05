#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0177[] = { 0 };

void ev0177_t_icestone(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_SetPos(player, -528.0f, 0.0f, 1312.0f);
		EV_CameraAng(1, 0, 0xEB00, 0x7600, 0);
		EV_CameraPos(1, 0, -677.5f, 33.0f, 1268.72f);
		BGM_Play(MusicIDs_item1);
		EV_Wait(85);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}