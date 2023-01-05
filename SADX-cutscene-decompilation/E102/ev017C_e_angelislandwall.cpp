#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev017C[] = { 0 };

void ev017C_e_angelislandwall(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CameraAng(1, 0, 0x900, 0x6600, 0);
		EV_CameraPos(1, 0, -173.35001f, 85.599998f, 691.45001f);
		EV_CameraAng(0, 130, 0xF000, 0x3E00, 0);
		EV_CameraPos(0, 130, -121.0f, 207.77f, 901.94f);
		EV_Wait(130);
		BGM_Play(MusicIDs_item1);
		EV_Wait(85);
		break;
	case 2:
		EV_CameraAng(1, 0, 0xF100, 0x6F00, 0);
		EV_CameraPos(1, 0, 651.0f, 94.0f, -188.10001f);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}