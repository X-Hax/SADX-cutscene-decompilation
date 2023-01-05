#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00B3[] = { 0 };

//NOTE: This cutscene is unused.
void ev00B3_e_uselessmachine(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		B_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_thee102);
		EV_CameraPos(0, 0, 25.559999f, 144.56f, -102.07f);
		EV_CameraAng(0, 0, 0xED00, 0x7F2, 0);
		EV_SetPos(player, -1.77f, 108.68f, -173.03999f);
		EV_SetAng(player, 0, 0xFD7D, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -0.51999998f, 108.71f, -162.05f, 0.5f, 0.059999999f);
		EV_CreatePlayer(2, Eggman, -143.89f, 108.75f, 12.23f, 0, 42748, 0);
		EV_Wait(1);
		EV_InitPlayer(2);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, 34.34f, 108.73f, -140.86f);
		EV_SetAng(eggman, 0, 0xA700, 0);
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_0015_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_Wait(20);
		EV_MoveFree(player);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(1);
		EV_SetPos(player, 0.79000002f, 108.73f, -157.86f);
		EV_SetAng(player, 0xFFE0, 0x1EB8, 0);
		EV_CameraPos(0, 0, 19.280001f, 125.16f, -150.64f);
		EV_CameraAng(0, 0, 0xF800, 0xA7F2, 0);
		EV_SetAction(eggman, &action_g_0016_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_Wait(1);
		EV_SerifPlay(1183);
		EV_MsgW(0, msgTbl_ev00B3[TextLanguage][0]); //"\aWhat is this!?"
		EV_Wait(1);
		EV_CameraPos(0, 3, 26.610001f, 123.41f, -145.73f);
		EV_CameraAng(0, 3, 0xF800, 0xA7F2, 0);
		EV_Wait(3);
		EV_CameraPos(0, 3, 19.280001f, 125.16f, -150.64f);
		EV_CameraAng(0, 3, 0xF800, 0xA7F2, 0);
		EV_Wait(3);
		EV_CameraPos(0, 3, 26.610001f, 123.41f, -145.73f);
		EV_CameraAng(0, 3, 0xF800, 0xA7F2, 0);
		EV_Wait(3);
		EV_CameraPos(0, 3, 19.280001f, 125.16f, -150.64f);
		EV_CameraAng(0, 3, 0xF800, 0xA7F2, 0);
		EV_Wait(3);
		EV_SetAction(player, &action_e_e0015_e102, &E102_TEXLIST, 1.0f, 0, 0);
		EV_CameraPos(0, 0, 28.02f, 128.33f, -136.28999f);
		EV_CameraAng(0, 0, 0xF200, 0x22F2, 0);
		EV_Wait(5);
		EV_SerifPlay(1184);
		EV_MsgW(0, msgTbl_ev00B3[TextLanguage][1]); //"\aI'm so disappointed, you \nuseless ma"...
		EV_SetAction(eggman, &action_g_g0020_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 0, 26.610001f, 123.41f, -145.73f);
		EV_CameraAng(0, 0, 0xF800, 0xA7F2, 0);
		EV_Wait(10);
		EV_CameraPos(0, 10, 24.98f, 123.79f, -146.82001f);
		EV_CameraAng(0, 10, 0xF800, 0xA7F2, 0);
		EV_Wait(10);
		EV_CameraPos(0, 10, 26.610001f, 123.41f, -145.73f);
		EV_CameraAng(0, 10, 0xF800, 0xA7F2, 0);
		EV_Wait(10);
		EV_CameraPos(0, 10, 24.98f, 123.79f, -146.82001f);
		EV_CameraAng(0, 10, 0xF800, 0xA7F2, 0);
		EV_Wait(10);
		EV_CameraPos(0, 10, 26.610001f, 123.41f, -145.73f);
		EV_CameraAng(0, 10, 0xF800, 0xA7F2, 0);
		EV_Wait(10);
		EV_CameraPos(0, 10, 24.98f, 123.79f, -146.82001f);
		EV_CameraAng(0, 10, 0xF800, 0xA7F2, 0);
		EV_Wait(10);
		EV_MsgClose();
		EV_SetAction(player, &action_e_e0018_e102, &E102_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(0, 0, 28.02f, 128.33f, -136.28999f);
		EV_CameraAng(0, 0, 0xF200, 0x22F2, 0);
		EV_Wait(50);
		EV_SerifPlay(1185);
		EV_MsgW(0, msgTbl_ev00B3[TextLanguage][2]); //"\aAll right then, back to practice! \nG"...
		EV_Wait(10);
		EV_SetAction(eggman, &action_g_g0009_eggman, &EGGMAN_TEXLIST, 1.0f, 0, 0);
		EV_Wait(20);
		EV_CameraPos(0, 0, 18.040001f, 120.27f, -133.78f);
		EV_CameraAng(0, 0, 0xFC00, 0xDBF2, 0);
		EV_Wait(30);
		EV_MsgClose();
		EV_CameraPos(0, 20, 26.09f, 123.79f, -148.48f);
		EV_CameraAng(0, 20, 0xFF00, 0x2AF2, 0);
		EV_SetAction(player, &action_e_e0033_e102, &E102_TEXLIST, 0.5f, 0, 0);
		EV_Wait(40);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(10);
		EV_CameraPos(0, 0, -1.58f, 126.0f, -200.57001f);
		EV_CameraAng(0, 0, 0xFF00, 0x80F2, 0);
		EV_SetPos(player, 0.75f, 108.76f, -148.38f);
		EV_SetAng(player, 0, 0x7D24, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[4], &E102_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -1.05f, 108.67f, -192.56f, 0.5f, 0.059999999f);
		EV_Wait(50);
		break;
	case 2:
		if (B_OUT)
		{
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		EV_RemovePlayer(2);
		EV_InitPlayer(0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}