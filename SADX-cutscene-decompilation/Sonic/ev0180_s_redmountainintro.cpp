#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0180_s_redmountainintro(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetClip_0500(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EventSe_Init(4);
		SetBankDir(78);
		createModelEC(-3857.7f, 2400.6001f, -2000.0f,0, 4096, 0, 0.1f, 0.1f, 0.1f, &object_ecff_bf_s_fbody_bf_s_fbody, &texlist_ec_light, 0);
		addmotModel(0, &action_ecff_bf_s_fbody, 0);
		playModel(0, 0, 1.0f, -1);
		moveObject(getobjModel(0), -1283.7f, 1020.6f, 240.39999f, -1478.5f, 1200.5f, -1035.6801f, 500);
		EventSe_Play(1, 1344, 1800);
		EventSe_Volume(1, 106, 1);
		EV_Wait(1);
		EV_SetPos(player, -45.0f, 643.0f, 503.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_CameraPos(1, 0, -184.0f, 510.60001f, 699.59998f);
		EV_CameraAng(1, 0, 4062, 10277, 0);
		EV_CameraPos(1, 400, -33.0f, 672.59998f, 589.59998f);
		EV_CameraAng(1, 400, 2270, 10021, 0);
		EV_Wait(420);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		EV_InitPlayer(0);
		stopObjectAll();
		deleteModel(0);
		EV_SetPos(player, 18.0f, 38.0f, 636.0f);
		EV_SetAng(player, 0, 0, 0);
		EV_Wait(1);
		SetClip_0500(ClipLevel);
		break;
	}
}