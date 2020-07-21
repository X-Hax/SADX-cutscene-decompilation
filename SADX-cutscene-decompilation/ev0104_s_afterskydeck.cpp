#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0104_s_afterskydeck(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* tails = 0;
	ObjectMaster* TALES_STEP = 0;

	switch (state) {
	case 1:
		EV_InitPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CreatePlayer(2, Tails_Main, -151.22f, 175.0f, -173.36f, 0, 0x4000, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(2);
		EV_SetPos(tails, -151.22f, 175.0f, -173.36f);
		EV_SetAng(tails, 0, 0x4000, 0);
		TALES_STEP = CSkyWalk_create2(tails, 174.8f); //Used to delay Tails's fall.
		EV_CameraTargetObj(0, 0, player, 0.0f, 3.0f, 0.0f, 0);
		EV_CameraPos(0, 0, -125.0f, 95.669998f, -142.71001f);
		EV_SetPos(player, -137.78999f, 160.0f, -163.36f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_Wait(80);
		EV_LookPoint(player, -170.22f, 175.0f, -143.36f);
		EV_Wait(20);
		EV_LookPoint(player, -136.22f, 80.0f, -191.36f);
		FreeTask(TALES_STEP);
		TALES_STEP = 0;
		EV_SerifPlay(1528);
		EV_SetFace(player, (char*)"CED");
		EV_Msg(msgTbl_ev0104[TextLanguage][0]); //"\aIs that it?"
		EV_SetAction(player, &action_s_s0065_sonic, &SONIC_TEXLIST, 0.75f, 0, 30);
		EV_LookFree(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 20);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -137.13f, 86.779999f, -176.17999f);
		EV_CameraAng(0, 0, 63161, 19141, 0);
		EV_CameraPos(0, 40, -126.66f, 89.489998f, -180.33f);
		EV_CameraAng(0, 40, 63161, 20165, 0);
		EV_SerifPlay(1529);
		EV_SetFace(tails, (char*)"CCC");
		EV_Msg(msgTbl_ev0104[TextLanguage][1]); //"\aIt might be.  \nBut let's check out t"...
		EV_Wait(30);
		EV_LookObject(player, tails, 0.0f, 4.0f, 0.0f);
		EV_Wait(30);
		EV_SetFace(player, (char*)"L");
		EV_LookFree(player);
		EV_CameraPos(0, 40, -142.2f, 95.239998f, -154.23f);
		EV_CameraAng(0, 40, 60089, 60101, 0);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgClose();
		EV_Wait(20);
		break;
	case 2:
		FreeTask(TALES_STEP);
		TALES_STEP = 0;
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}