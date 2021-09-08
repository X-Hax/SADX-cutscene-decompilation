#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0035[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("CAPTUREBEAM"), &CAPTUREBEAM_TEXLIST,
	(char*)("M_EM_WHITE"), &M_EM_WHITE_TEXLIST
};

void ev0035_t_aftercasinopolis(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(77);
		EventSe_Init(5);
		BGM_Play(MusicIDs_eggman);
		EV_SetPos(player, -626.33398f, 0.0f, 905.67999f);
		EV_SetAng(player, 0, 0x1F9C, 0);
		EV_InitPlayer(0);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(2, SonicTheHedgehog, -615.5f, 0.0f, 897.25598f, 0, 8264, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CameraAng(1, 0, 0x102, 0xB500, 0);
		EV_CameraPos(1, 0, -626.92999f, 5.4000001f, 918.19f);
		create_eggmoble(-409.0f, 285.0f, 1091.1f, -0x1500, -0x500, 0x3500);
		EV_Wait(2);
		ChgEggMobleMod(0);
		EV_Wait(1);
		EV_CreateObject(&emerald, -550.33002f, 1.5f, 973.90002f, 0, 0, 0);
		EV_SetMode(emerald, 0);
		EV_ClrAction(player);
		EV_SetAction(player, MILES_ACTIONS[47], &MILES_TEXLIST, 1.2f, 1, 0);
		EV_MovePoint2(player, -577.34998f, -2.5f, 953.70001f, 1.0f, 1.5f);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.3f, 1, 0);
		EV_MovePoint2(sonic, -560.10999f, -2.5f, 952.78399f, 0.8999999f, 0.8999999f);
		EV_Wait(5);
		EV_CameraAng(1, 95, 0x246, 0x9FF4, 0);
		EV_CameraPos(1, 95, -593.5f, 1.6f, 936.72998f);
		EV_Wait(30);
		cap1 = CreateCaptureBeam(-584.0f, -134.0f, 958.01001f, 0, 0, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.039999999f, 0.0f, 0.039999999f, 0.0f, 0.0f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.0049999999f, 0.0f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0049999999f, 0);
		EV_Wait(1);
		SetCaptureParam(cap1, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0);
		EV_Wait(21);
		EV_CameraPerspective(1, 100, 0x1555);
		EV_WaitMove(player);
		EV_SetAction(player, MILES_ACTIONS[67], &MILES_TEXLIST, 1.5f, 0, 4);
		EV_SetAction(sonic, SONIC_ACTIONS[20], &SONIC_TEXLIST, 1.0f, 0, 4);
		EV_Wait(25);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.5f, 1, 8);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.5f, 1, 8);
		EV_Wait(25);
		ChgEggMobleSMod(1);
		EV_LookFree(player);
		EV_LookFree(sonic);

		/*Leftover from the 1998 JP release version of Sonic's story (EV0009).
		Commented out because it does nothing without a text box to close.*/
		//EV_MsgClose();

		EV_CameraPerspective(1, 1, 0x3111);
		EventSe_Play(0, 1333, 1800);
		EV_CameraAng(1, 0, 0xCB51, 0x380E, 0);
		EV_CameraPos(1, 0, -404.79999f, 321.04001f, 1083.5f);
		EV_LookFree(player);
		EV_LookFree(sonic);
		eggmoble_move_normal(-406.04999f, 17.530001f, 1078.7f, 80);
		EV_CameraAng(1, 80, 0xC975, 0x2C0B, 0);
		EV_CameraPos(1, 80, -394.0f, 52.0f, 1072.0f);
		EV_Wait(50);
		EventSe_Volume(0, -40, 1);
		EV_CameraAng(1, 0, 0x200, 0xA100, 0);
		EV_CameraPos(1, 0, -590.84399f, -0.0164f, 939.70001f);
		EV_CameraAng(1, 70, 0x200, 0xA800, 0);
		EV_CameraPos(1, 70, -593.59998f, -0.0164f, 942.59998f);
		EV_Wait(32);
		EventSe_Stop(0);
		EventSe_Play(1, 1337, 1800);
		EventSe_Volume(1, -50, 1);
		eggmoble_turn(0x1500, -0x1500, -0x3000, 5, 0);
		EV_Wait(1);
		EventSe_Volume(1, 0, 30);
		EV_Wait(6);
		eggmoble_moveandturn(-619.5f, 15.5f, 936.41699f, 0, -0x500, -0x500, 33, 0);
		EV_Wait(5);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV0035m);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 2.0f, 1, 0);
		EV_MovePoint2(sonic, -541.84998f, 3.53f, 945.20001f, 1.7f, 1.0f);
		EV_CameraAng(1, 25, 0x27D4, 0xA800, 0);
		EV_SerifPlay(668);
		EV_Msg(msgTbl_ev0035[TextLanguage][0]); //"\aWhat's that?"
		EV_SetPos(emerald, -575.34998f, 15.0f, 951.70001f);
		EV_Wait(1);
		EV_SetAction(emerald, &action_ce_0001_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 0, 0);
		moveObject(emerald, -575.34998f, 15.0f, 951.70001f, -560.34998f, 5.0f, 951.70001f, 16);
		EV_Wait(14);
		EV_CameraTargetFree();
		EV_Wait(2);
		EventSe_Stop(0);
		EV_MsgClose();
		EV_ClrAction(emerald);
		EV_CameraAng(1, 0, 0xCD00, 0x8600, 0);
		EV_CameraPos(1, 0, -565.40002f, 13.13f, 962.28998f);
		EV_SetAng(emerald, 0, -0x4900, 0);
		EV_SetAction(emerald, &action_ce_0001_m_em_white, &M_EM_WHITE_TEXLIST, 1.5f, 0, 0);
		EV_SetAction(emerald, &action_ce_0002_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 1, 0);
		moveObject(emerald, -550.0f, 3.0f, 986.0f, -564.40002f, -2.5f, 966.65002f, 9);
		EV_Wait(5);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_SetPos(player, -531.367f, -2.46f, 982.25769f);
		EV_SetAng(player, 0, 0xAF00, 0);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(sonic, -520.65997f, 0.5f, 947.21802f);
		EV_SetAng(sonic, 0, 0xCF00, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.5f, 1, 0);
		EV_Wait(20);
		EV_CameraAng(1, 75, 0xF221, 0xB8E5, 0);
		EV_CameraPos(1, 75, -580.70001f, 7.8699999f, 964.29999f);
		EV_Wait(60);
		EV_ClrFace(player);
		EV_SetFace(player, "CE");
		EV_SerifPlay(670);
		EV_Msg(msgTbl_ev0035[TextLanguage][1]); //"\aThe Chaos Emerald!"
		eggmoble_turn(0, -0x7400, 0, 1, 0);
		EV_Wait(10);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0105_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_MovePoint2(player, -558.78003f, -2.5f, 969.59998f, 0.60000002f, 1.1f);
		EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.3f, 1, 1);
		EV_Wait(8);
		EV_MovePoint2(sonic, -549.29999f, -2.5f, 957.44f, 0.69999999f, 0.0f);
		eggmoble_move_normal(-584.0f, 13.0f, 958.01001f, 30);
		EV_MsgClose();
		EV_Wait(2);
		EV_SetPos(emerald, -584.0f, -2.5f, 958.01001f);
		EV_CameraPos(1, 0, -549.5f, -1.0599999f, 982.354f);
		EV_CameraAng(1, 0, 0xD00, 0x2000, 0xFE00);
		EV_CameraPos(1, 80, -550.7887f, -0.96700001f, 983.90002f);
		EV_CameraAng(1, 80, 0xD00, 0x1C00, 0xFE00);
		EV_ClrAction(sonic);
		EventSe_Oneshot(1335, 0, 0, 0);
		ChgEggMobleSMod(5);
		EV_SerifPlay(669);
		EV_Wait(16);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m9001_miles, &MILES_TEXLIST, 1.0f, 0, 8);
		EV_Msg(msgTbl_ev0035[TextLanguage][2]); //"\aGet away from there!"
		EV_SetAction(player, &action_m_m9002_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(671);
		EV_LookFree(player);
		EV_Msg(msgTbl_ev0035[TextLanguage][3]); //"\aAaaaahh!"
		EV_Wait(5);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0052_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EventSe_Play(2, 1336, 1800);
		ChgCaptureMod(cap1, 1);
		EV_Wait(20);
		EV_MsgClose();
		EV_SetAction(player, &action_m_m0112_miles, &MILES_TEXLIST, 0.80000001f, 1, 8);
		ChgEggMobleMod(0);
		EV_CameraPos(1, 0, -575.58002f, 11.79f, 965.90002f);
		EV_CameraAng(1, 0, 0xDF00, 0x1E97, 0);
		EV_Wait(15);
		moveObject(emerald, -584.0f, -2.5f, 958.01001f, -584.0f, 16.0f, 958.01001f, 40);
		EV_Wait(30);
		stopObjectAll();
		EV_FreeObject(&emerald);
		ChgCaptureMod(cap1, 2);
		EV_Wait(19);
		EventSe_Stop(2);
		eggmoble_move_rapid(-564.40002f, 11.5f, 966.65002f, 2);
		EV_Wait(2);
		EV_CameraPos(1, 0, -469.0f, 116.06f, 992.95502f);
		EV_CameraAng(1, 0, 0xDB00, 0x2F00, 0xFE00);
		EV_CameraPos(1, 100, -495.25f, 83.0f, 981.29999f);
		EV_Wait(3);
		eggmoble_turn(0, 0, 0x200, 10, 0);
		EV_Wait(12);
		eggmoble_moveandturn(-255.7f, 279.0f, 1051.0f, 0, 0x1000, 0x4000, 200, 0);
		EventSe_Play(0, 1333, 1800);
		EventSe_Volume(0, -40, 1);
		EV_SerifPlay(672);
		EV_Msg(msgTbl_ev0035[TextLanguage][4]); //"\aNighty-night... Ha ha ha ha!"
		EventSe_Volume(0, 0, 25);
		EV_Wait(25);
		ChgEggMobleSMod(1);
		EV_CameraPos(1, 0, -562.45599f, 1.34f, 969.59998f);
		EV_CameraAng(1, 0, 0x1700, 0xC92D, 0);
		EV_CameraPos(0, 70, -561.78003f, 1.34f, 972.53998f);
		EventSe_Volume(0, -40, 1);
		EV_LookFree(player);
		EV_LookFree(sonic);
		EV_LookPoint(player, -300.0f, 253.39999f, 986.0f);
		EV_LookPoint(sonic, -300.0f, 253.39999f, 986.0f);
		EV_Wait(1);
		EventSe_Volume(0, -120, 70);
		EV_ClrFace(player);
		EV_SerifPlay(673);
		EV_SetFace(player, "AADEVVVVVVVVVVVVVVVVVVVV");
		EV_Msg(msgTbl_ev0035[TextLanguage][5]); //"\aEgg-man..."
		EV_Wait(15);
		WHITE = COverlayCreate(0.016666668f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_MsgClose();
		EV_Wait(60);
		EventSe_Stop(0);
		EventSe_Stop(1);
		EventSe_Stop(2);
		EV_Wait(1);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&emerald);
		delete_eggmoble();
		light_delete(cap1);
		cap1 = 0;
		if(WHITE){
			FreeTask(WHITE);
			WHITE = 0;
		}
		EventSe_Close();
		break;
	}
}