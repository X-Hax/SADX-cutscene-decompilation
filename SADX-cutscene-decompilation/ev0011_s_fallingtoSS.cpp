#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0011_s_fallingtoSS(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);

	ObjectMaster* GIRL = 0;
	ObjectMaster* B_OUT = 0;

	switch (state) {
	case 1:
		SetBankDir(78);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_SetPos(player, -673.78003f, 1000.75f, 2131.0f);
		EV_SetAng(player, 63232, 45424, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.5f, 1, 0);
		EventSe_Play(0, 1339, 1800);
		EventSe_Pitch(0, 8000, 1);
		EventSe_Volume(0, -30, 1);
		EV_Wait(1);
		EventSe_Pitch(0, -8000, 200);
		EV_CameraPos(0, 0, -658.09003f, 861.51001f, 2361.8f);
		EV_CameraAng(0, 0, 768, 691, 0);
		EV_Wait(80);
		EV_CameraPos(0, 0, -318.22f, 5.71f, 1933.21f);
		EV_CameraAng(0, 0, 9851, 21636, 0);
		EV_CameraPos(0, 100, -318.22f, 5.71f, 1933.21f);
		EV_CameraAng(0, 100, 4731, 21636, 0);
		EV_Wait(100);
		EV_SetPos(player, -1073.92f, 14000.8f, 2005.61f);
		EV_SetAng(player, 63488, 17080, 0);
		EV_CameraPos(0, 0, -611.57001f, 379.98999f, 2143.6001f);
		EV_CameraAng(0, 0, 48128, 512, 0);
		EV_CameraPos(0, 100, -620.31f, -1.97f, 2125.26f);
		EV_CameraAng(0, 100, 48128, 25088, 0);
		EventSe_Volume(0, 100, 1);
		EventSe_Pitch(0, 8000, 1);
		EV_Wait(1);
		EventSe_Pitch(0, -8000, 100);
		EV_Wait(100);
		EventSe_Stop(0);
		RumbleA(0, 3);
		B_OUT = COverlayCreate(1.0f, 0.2f, 0.0f, 0.0f, 0.0f);
		EventSe_Oneshot(1340, 100, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1340, 100, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1340, 100, 0, 0);
		EV_Wait(5);
		EV_CreateObject(&GIRL, -643.07001f, -3.0999999f, 2146.6399f, 0, 35853, 0);
		EV_Wait(1);
		EV_SetMode(GIRL, 0);
		EV_ClrAction(GIRL);
		EV_SetMotion(GIRL, MODEL_SS_PEOPLE_OBJECTS[8], MODEL_SS_PEOPLE_MOTION[12],
			ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetPos(player, -673.09003f, 75.0f, 2134.0601f);
		EV_SetAng(player, 0, 21089, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0026_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(40);
		EV_Msg((msgTbl_ev0011[TextLanguage])[0]); //"\aTails?"
		EV_SerifPlay(493);
		EV_Wait(45);
		EV_Msg((msgTbl_ev0011[TextLanguage])[1]); //"\aTails?"
		EV_SerifPlay(494);
		EV_Wait(70);
		FreeTask(B_OUT);
		B_OUT = 0;
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraTargetObj(1, 0, player, 0.0f, 0.0f, 0.0f, 0);
		EV_CameraChaseRM(0, 600, player, 15.0f, 0, 0x4000, 0, 80.0f, 0, 0x8000, 0, 80.0f);
		EV_SetAction(player, &action_s_s0024_sonic, &SONIC_TEXLIST, 1.0f, 0, 0);
		EV_Wait(30);
		EV_SetAction(player, &action_s_s0026_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_Wait(65);
		EV_MsgClose();
		EV_CameraChaseFree();
		EV_CameraTargetFree();
		EV_CameraPos(0, 0, -685.09998f, -8.6999998f, 2129.3999f);
		EV_CameraAng(0, 0, 3443, 47428, 0);
		EV_CameraAng(0, 10, 3955, 47428, 0);
		EV_SetAction(player, &action_s_s0025_sonic, &SONIC_TEXLIST, 0.69999999f, 0, 0);
		EV_Wait(25);
		EventSe_Oneshot(1340, 100, 0, 0);
		EV_Wait(40);
		EV_CameraPos(1, 0, -650.76001f, 15.64f, 2128.23f);
		EV_CameraAng(1, 0, 8051, 19456, 0);
		EV_CameraPos(1, 100, -660.5f, -8.1000004f, 2123.7f);
		EV_CameraAng(1, 100, 3955, 22084, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0042_sonic, &SONIC_TEXLIST, 0.2f, 1, 8);
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetFace(player, (char*)"G");
		EV_SerifPlay(495);
		EV_Msg((msgTbl_ev0011[TextLanguage])[2]); //"\aYou're not \nwho I'm looking for."
		EV_Wait(70);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0027_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 8);
		EV_MsgClose();
		EV_Wait(10);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.0f, 1, 8);
		EV_Wait(30);
		EV_MovePoint2(player, -612.21002f, -10.0f, 2106.8799f, 2.0f, 0.059999999f);
		EV_Wait(30);
		EV_CameraPos(0, 0, -603.44f, -2.3599999f, 2122.05f);
		EV_CameraAng(0, 0, 63948, 16230, 0);
		EV_CameraPos(0, 70, -603.44f, -2.3599999f, 2122.05f);
		EV_CameraAng(0, 70, 63948, 5222, 0);
		EV_Wait(25);
		EV_SerifPlay(496);
		EV_Msg((msgTbl_ev0011[TextLanguage])[3]); //"\aOh, I wonder if he's okay?"
		EV_ClrFace(player);
		EV_SetFace(player, (char*)"D");
		EV_SetAng(GIRL, 0, 21965, 0);
		EV_Wait(1);
		EV_SetPos(player, -556.66998f, -9.9799995f, 2105.26f);
		EV_SetAng(player, 0, 23208, 0);
		EV_CameraPos(0, 0, -661.44f, 0.25999999f, 2141.0601f);
		EV_CameraAng(0, 0, 64768, 52019, 0);
		EV_CameraPos(0, 150, -661.58002f, -1.73f, 2141.1001f);
		EV_CameraAng(0, 150, 64768, 52019, 0);
		EV_MovePoint2(player, -438.19f, -0.0099999998f, 1990.77f, 1.5f, 0.059999999f);
		EV_Wait(50);
		EV_MsgClose();
		EV_Wait(120);
		EV_InitPlayer(0);
		break;
	case 2:
		EV_InitPlayer(0);
		EventSe_Close();
		FreeTask(B_OUT);
		B_OUT = 0;
		EV_SetPos(player, -438.19f, -0.0099999998f, 1990.77f);
		EV_SetAng(player, 0, 26077, 0);
		EV_Wait(1);
		EV_FreeObject(&GIRL);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}