#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0002_s_chaos0defeated(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* eggman = 0;

	ObjectMaster* BLACK = 0; //Fade overlay
	ObjectMaster* task_skywalk = 0; //Temp ground collision for Eggman
	ObjectMaster* p_Chaos0Task = 0; //Chaos puddle

	switch (state) {
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(73);
		EventSe_Init(5);
		EV_CameraPerspective(0, 1, 11833);
		EV_CreatePlayer(2, Eggman_Main, 380.0f, 0.0f, 353.0f, 0, 25056, 0);
		EV_SetPos(player, 266.25f, 3.0f, 263.0f);
		EV_SetAng(player, 0, 63897, 0);
		EV_InitPlayer(0);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 6912, 21325, 0);
		EV_CameraPos(1, 0, 275.79999f, 3.4300001f, 262.60001f);
		EV_Wait(30);
		initElemChaos0Task_EV0002(271.09f, 2.2f, 306.28f, 0);
		EV_Wait(1);
		EV_CameraPerspective(0, 90, 12743);
		EV_CameraAng(1, 100, 3328, 4689, 0);
		EV_CameraPos(1, 100, 276.22f, 3.97f, 281.20001f);
		EV_Wait(93);
		EV_CameraAng(0, 116, 64512, 5529, 0);
		EV_CameraPos(0, 116, 280.0f, 7.1700001f, 317.76999f);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, 100.66f, 122.8f, 421.42001f);
		EV_SetAng(eggman, 0, 19712, 0);
		EV_Wait(1);
		task_skywalk = CSkyWalk_create2(eggman, 122.8f);
		EV_Wait(145);
		MoveChaosPuddle_EV0002(217.2f, 0.0f, 387.60001f, 100);
		EventSe_Play(0, 1345, 1800);
		EventSe_Volume(0, -30, 1);
		EV_Wait(10);
		EV_CameraAng(1, 0, 59136, 5006, 0);
		EV_CameraPos(1, 0, 279.14999f, 34.200001f, 337.89999f);
		EV_CameraAng(0, 100, 59136, 1024, 0);
		EV_CameraPos(0, 100, 225.10001f, 28.4f, 417.17999f);
		EV_SetAction(player, &action_s_s0029_sonic, &SONIC_TEXLIST, 0.89999998f, 0, 4);
		EV_ClrFace(player);
		EV_SetFace(player, "CE");
		EV_SerifPlay(411);
		EV_Msg(*msgTbl_ev0002[TextLanguage]); //"\aCome on ya big drip! Where ya goin'?"
		EV_WaitAction(player);
		EV_SetAction(player, SONIC_ACTIONS[5], &SONIC_TEXLIST, 1.7f, 1, 1);
		EV_MovePoint2(player, 233.0f, 0.0f, 359.60001f, 1.1f, 0.0f);
		EV_Wait(50);
		EV_MsgClose();
		EV_CameraAng(1, 60, 56832, 2816, 0);
		EV_CameraPos(1, 60, 219.22f, 7.1999998f, 394.79999f);
		EV_Wait(60);
		Chaos0_EnterDrain_EV0002(50);
		EventSe_Volume(0, -100, 60);
		EV_Wait(65);
		EV_ClrAction(player);
		EV_MovePoint2(player, 223.24001f, 0.0f, 381.45001f, 0.89999998f, 0.0f);
		EV_SetAction(player, SONIC_ACTIONS[3], &SONIC_TEXLIST, 0.89999998f, 1, 1);
		EV_Wait(62);
		EV_ClrAction(player);
		EV_MoveRotation(player, 0, 60160, 0);
		EV_ClrFace(player);
		EV_LookPoint(player, 216.0f, -8.8999996f, 390.5f);
		EV_Wait(40);
		EV_CameraPerspective(0, 1, 10559);
		EV_CameraAng(1, 0, 491, 62725, 336);
		EV_CameraPos(1, 0, 218.7f, 0.64999998f, 390.87f);
		EV_Wait(21);
		EV_CameraAng(1, 90, 5376, 62725, 336);
		EV_CameraPos(1, 90, 219.77f, 3.5999999f, 389.59f);
		EV_Wait(120);
		EV_CameraPos(1, 85, 214.35001f, 20.200001f, 398.29999f);
		EV_CameraAng(1, 85, 55044, 63237, 1616);
		EV_Wait(81);
		EV_CameraPerspective(0, 140, 12561);
		EV_CameraPos(0, 150, 103.5f, 135.60001f, 426.62f);
		EV_CameraAng(0, 150, 55047, 55301, 1615);
		EV_Wait(149);
		EV_CameraPos(0, 80, 99.919998f, 139.3f, 427.535f);
		EV_CameraAng(0, 80, 55044, 55045, 1616);
		EV_Wait(30);
		EV_SerifPlay(412);
		EV_Msg(msgTbl_ev0002[TextLanguage][1]); //"\aYou know nothing, fool! It's Chaos! The God Of Destruction." 
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0006_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 5127, 18181, 1280);
		EV_CameraPos(1, 0, 117.0f, 128.11f, 421.0f);
		EV_CameraPos(0, 50, 104.9677f, 135.535f, 422.3887f);
		EV_CameraAng(0, 50, 4615, 15109, 65024);
		EV_SerifPlay(413);
		EV_Msg(msgTbl_ev0002[TextLanguage][2]); //"\aHa ha ha ha ha ha ha ha ha ha ha!"
		EV_Wait(70);
		BLACK = COverlayCreate(0.016666668f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(40);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		FreeTask(task_skywalk);
		task_skywalk = 0;
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		FreeTask(BLACK);
		BLACK = 0;
		EventSe_Close();
		FreeTask(p_Chaos0Task);
		p_Chaos0Task = 0;
		break;
	}
}