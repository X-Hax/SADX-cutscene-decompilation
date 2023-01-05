#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0179[] = { 0 };

void ev0179_s_idcard(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_SetPos(player, -129.8f, -3.0f, 1594.0f);
		EV_CameraAng(1, 0, 0xE500, 0x9E00, 0);
		EV_CameraPos(1, 0, -57.0f, 27.0f, 1648.3f);
		BGM_Play(MusicIDs_item1);
		EV_Wait(85);
		break;
	case 2:
		EV_CameraAng(1, 0, 0xF200, 0xAA00, 0);
		EV_CameraPos(1, 0, 298.0f, 29.299999f, 1572.3f);
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, 353.0f, 0.0f, 1605.0f);
		EV_SetAng(player, 0, 0xC000, 0);
		break;
	}
}