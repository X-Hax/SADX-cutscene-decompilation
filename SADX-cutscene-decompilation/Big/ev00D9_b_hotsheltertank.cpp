#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

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
		EV_SetAng(player, 0, 7534, 0);
		EV_CreateObjectFunc(&Frog, SetEventFrog, 610.55603f, 21.02f, -852.35999f, 64025, 29124, 0);
		EV_Wait(1);
		EV_SetPos(Frog, 568.39001f, 26.23f, -820.03998f);
		EV_SetAng(Frog, 0, 58767, 0);
		EV_Wait(1);
		EV_SetMode(Frog, 0);
		EV_SetAction(Frog, &action_f_f0010_frog, &texlist_frog, 1.0f, 1, 0);
		moveObject(Frog, 568.39001f, 26.23f, -820.03998f, 556.44f, 36.610001f, -810.39001f, 150);
		EV_Wait(1);
		EV_CameraPos(0, 0, 555.98999f, 41.209999f, -831.28003f);
		EV_CameraAng(0, 0, 63232, 42436, 0);
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
		EV_CameraAng(0, 0, 3865, 35268, 0);
		stopObjectAll();
		EV_SetPos(Frog, 568.39001f, 26.23f, -820.03998f);
		EV_SetAng(Frog, 0, 58767, 0);
		EV_Wait(1);
		EV_WaitAction(player);
		EV_CameraPos(1, 0, 632.45001f, 25.83f, -755.40997f);
		EV_CameraAng(1, 0, 512, 8531, 0);
		moveObject(Frog, 568.39001f, 26.23f, -820.03998f, 556.44f, 36.610001f, -810.39001f, 150);
		BGM_Play(MusicIDs_shelter1);
		EV_SerifPlay(1344);
		EV_MsgW(1, msgTbl_ev00D9[TextLanguage][0]); //"\aAaaah! There's Froggy!"
		EV_SetPos(player, 717.07001f, 2.0f, -647.96002f);
		EV_SetAng(player, 0, 39726, 0);
		EV_Wait(1);
		EV_CameraPos(1, 50, 753.28998f, 17.290001f, -630.5f);
		EV_CameraAng(1, 50, 512, 8019, 0);
		EV_Wait(70);
		EV_CameraPos(0, 0, 704.90997f, 15.06f, -664.07001f);
		EV_CameraAng(0, 0, 25, 39108, 0);
		EV_CameraPos(0, 150, 707.19f, 15.07f, -660.78003f);
		EV_CameraAng(0, 150, 25, 39108, 0);
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
		EV_SetAng(player, 0, 39726, 0);
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}