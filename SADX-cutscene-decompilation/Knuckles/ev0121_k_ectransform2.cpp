#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0121[] = { 0 };

void ev0121_k_ectransform2(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_egcarer1);
		EV_CameraPosORY(0, 0, player, 20.0f, 4.0f, 20.0f);
		EV_CameraTargetObj(0, 0, player, 0.0f, 4.0f, 0.0f, 0);
		EV_CameraPosORY(0, 120, player, 20.0f, 4.0f, 6.0f);
		EV_SerifPlay(1129);
		EV_SetFace(player, "EBCDDD");
		EV_Msg(msgTbl_ev0121[TextLanguage][0]); //"\aUgh!   This thing's always changing."
		EV_SerifWait();
		EV_ClrFace(player);
		break;
	case 2:
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}