#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev017A_s_angelislandwall(int state)
{
	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CameraAng(1, 0, 2304, 26112, 0);
		EV_CameraPos(1, 0, -173.35001f, 85.599998f, 691.45001f);
		EV_CameraAng(0, 130, 61440, 15872, 0);
		EV_CameraPos(0, 130, -121.0f, 207.77f, 901.94f);
		EV_Wait(130);
		BGM_Play(MusicIDs_item1);
		EV_Wait(85);
		break;
	case 2:
		EV_CameraAng(1, 0, 61383, 51194, 0);
		EV_CameraPos(1, 0, -65.0f, 244.0f, 1211.1f);
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}