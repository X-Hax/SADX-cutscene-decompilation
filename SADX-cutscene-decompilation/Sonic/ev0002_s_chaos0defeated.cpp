#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0002[] = {
	(char*)("EV_CHAOS0_MANJU"), &EV_CHAOS0_MANJU_TEXLIST,
	(char*)("CHAOS_SURFACE"), &CHAOS_SURFACE_TEXLIST,
	0
};

void ev0002_s_chaos0defeated(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(73);
		EventSe_Init(5);
		EV_CameraPerspective(0, 1, 0x2E39);
		EV_CreatePlayer(2, Eggman, 380.0f, 0.0f, 353.0f, 0, 25056, 0);
		EV_SetPos(player, 266.25f, 3.0f, 263.0f);
		EV_SetAng(player, 0, 0xF999, 0);
		EV_InitPlayer(0);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 0x1B00, 0x534D, 0);
		EV_CameraPos(1, 0, 275.79999f, 3.4300001f, 262.60001f);
		EV_Wait(30);
		initElemChaos0Task_EV0002(271.09f, 2.2f, 306.28f, 0);
		EV_Wait(1);
		EV_CameraPerspective(0, 90, 0x31C7);
		EV_CameraAng(1, 100, 0xD00, 4689, 0);
		EV_CameraPos(1, 100, 276.22f, 3.97f, 281.20001f);
		EV_Wait(93);
		EV_CameraAng(0, 116, 0xFC00, 0x1599, 0);
		EV_CameraPos(0, 116, 280.0f, 7.1700001f, 317.76999f);
		eggman = EV_GetPlayer(2);
		EV_SetPos(eggman, 100.66f, 122.8f, 421.42001f);
		EV_SetAng(eggman, 0, 0x4D00, 0);
		EV_Wait(1);
		task_skywalk = CSkyWalk_create2(eggman, 122.8f);
		EV_Wait(145);
		MoveChaosPuddle_EV0002(217.2f, 0.0f, 387.60001f, 100);
		EventSe_Play(0, 1345, 1800);
		EventSe_Volume(0, -30, 1);
		EV_Wait(10);
		EV_CameraAng(1, 0, 0xE700, 0x138E, 0);	
		EV_CameraPos(1, 0, 279.14999f, 34.200001f, 337.89999f);
		EV_CameraAng(0, 100, 0xE700, 0x400, 0);
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
		EV_CameraAng(1, 60, 0xDE00, 0xB00, 0);
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
		EV_MoveRotation(player, 0, 0xEB00, 0);
		EV_ClrFace(player);
		EV_LookPoint(player, 216.0f, -8.8999996f, 390.5f);
		EV_Wait(40);
		EV_CameraPerspective(0, 1, 0x293F);
		EV_CameraAng(1, 0, 0x1EB, 0xF505, 0x150);
		EV_CameraPos(1, 0, 218.7f, 0.64999998f, 390.87f);
		EV_Wait(21);
		EV_CameraAng(1, 90, 0x1500, 0xF505, 0x150);
		EV_CameraPos(1, 90, 219.77f, 3.5999999f, 389.59f);
		EV_Wait(120);
		EV_CameraPos(1, 85, 214.35001f, 20.200001f, 398.29999f);
		EV_CameraAng(1, 85, 0xD704, 0xF705, 0x650);
		EV_Wait(81);
		EV_CameraPerspective(0, 140, 0x3111);
		EV_CameraPos(0, 150, 103.5f, 135.60001f, 426.62f);
		EV_CameraAng(0, 150, 0xD707, 0xD805, 0x64F);
		EV_Wait(149);
		EV_CameraPos(0, 80, 99.919998f, 139.3f, 427.535f);
		EV_CameraAng(0, 80, 0xD704, 0xD705, 0x650);
		EV_Wait(30);
		EV_SerifPlay(412);
		EV_Msg(msgTbl_ev0002[TextLanguage][1]); //"\aYou know nothing, fool! It's Chaos! The God Of Destruction." 
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrAction(eggman);
		EV_SetAction(eggman, &action_g_g0006_eggman, &EGGMAN_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 0x1407, 0x4705, 0x500);
		EV_CameraPos(1, 0, 117.0f, 128.11f, 421.0f);
		EV_CameraPos(0, 50, 104.9677f, 135.535f, 422.3887f);
		EV_CameraAng(0, 50, 0x1207, 0x3B05, 0xFE00);
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
		if(task_skywalk){
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if(BLACK){
			FreeTask(BLACK);
			BLACK = 0;
		}
		EventSe_Close();
		if(p_Chaos0Task){
			FreeTask(p_Chaos0Task);
			p_Chaos0Task = 0;
		}
		break;
	}
}