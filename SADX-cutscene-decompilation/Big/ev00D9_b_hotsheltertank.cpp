#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00D9[] = {
	(char*)("FROG"), &texlist_frog
};

void ev00D9_b_hotsheltertank(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		Frog = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, 704.29999f, 2.0f, -649.95001f);
		EV_SetAng(player, 0, 0x1D6E, 0);
		EV_CreateObjectFunc(&Frog, SetEventFrog, 610.55603f, 21.02f, -852.35999f, 64025, 29124, 0);
		EV_Wait(1);
		EV_SetPos(Frog, 568.39001f, 26.23f, -820.03998f);
		EV_SetAng(Frog, 0, 0xE58F, 0);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetAction(Frog, &action_f_f0010_frog, &texlist_frog, 1.0f, 1, 0);
		moveObject(Frog, 568.39001f, 26.23f, -820.03998f, 556.44f, 36.610001f, -810.39001f, 150);
		EV_Wait(1);
		EV_CameraPos(0, 0, 555.98999f, 41.209999f, -831.28003f);
		EV_CameraAng(0, 0, 0xF700, 0xA5C4, 0);
		EV_Wait(30);
		EventSe_Oneshot(757, 0, 0, 0);
		EV_Wait(30);
		EventSe_Oneshot(757, 0, 0, 0);
		EV_Wait(30);
		EventSe_Oneshot(757, 0, 0, 0);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_SetAction(player, &action_b_b0029_big, &BIG_TEXLIST, 0.80000001f, 0, 16);
		EV_CameraPos(0, 0, 696.65997f, 9.5200005f, -667.69f);
		EV_CameraAng(0, 0, 0xF19, 0x89C4, 0);
		stopObjectAll();
		EV_SetPos(Frog, 568.39001f, 26.23f, -820.03998f);
		EV_SetAng(Frog, 0, 0xE58F, 0);
		EV_Wait(1);
		EV_WaitAction(player);
		EV_CameraPos(1, 0, 632.45001f, 25.83f, -755.40997f);
		EV_CameraAng(1, 0, 0x200, 0x2153, 0);
		moveObject(Frog, 568.39001f, 26.23f, -820.03998f, 556.44f, 36.610001f, -810.39001f, 150);
		BGM_Play(MusicIDs_shelter1);
		EV_SerifPlay(1344);
		EV_MsgW(1, msgTbl_ev00D9[TextLanguage][0]); //"\aAaaah! There's Froggy!"
		EV_SetPos(player, 717.07001f, 2.0f, -647.96002f);
		EV_SetAng(player, 0, 0x9B2E, 0);
		EV_Wait(1);
		EV_CameraPos(1, 50, 753.28998f, 17.290001f, -630.5f);
		EV_CameraAng(1, 50, 0x200, 0x1F53, 0);
		EV_Wait(70);
		EV_CameraPos(0, 0, 704.90997f, 15.06f, -664.07001f);
		EV_CameraAng(0, 0, 0x19, 0x98C4, 0);
		EV_CameraPos(0, 150, 707.19f, 15.07f, -660.78003f);
		EV_CameraAng(0, 150, 0x19, 0x98C4, 0);
		EV_SerifPlay(1345);
		EV_MsgW(0, msgTbl_ev00D9[TextLanguage][1]); //"\aLooks like he needs my help!"
		stopObjectAll();
		EV_FreeObject(&Frog);
		EV_Wait(70);
		EV_MsgClose();
		break;
	case 2:
		stopObjectAll();
		EV_FreeObject(&Frog);
		EV_SetPos(player, 717.07001f, 2.0f, -647.96002f);
		EV_SetAng(player, 0, 0x9B2E, 0);
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}