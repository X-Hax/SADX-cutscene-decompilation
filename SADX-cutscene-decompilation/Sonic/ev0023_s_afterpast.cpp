#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0023[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST
};

void ev0023_s_afterpast(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_CameraPerspective(1, 1, 0x31C7);
		SetBankDir(75);
		EventSe_Init(3);
		WHITE = COverlayCreate(1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
		EventSe_Play(2, 760, 1800);
		EventSe_Volume(2, -120, 120);
		EV_SetPos(player, -518.40002f, 0.0f, -867.63f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetAction(player, &action_s_s0011_sonic, &SONIC_TEXLIST, 0.34999999f, 1, 0);
		EV_CameraPos(1, 0, -519.29999f, 3.96f, -863.0f);
		EV_CameraAng(1, 0, 0x900, 0xFF00, 0);
		create_eggmoble(-574.45502f, 114.0f, -620.79999f, 0, 0xC800, 0);
		EV_SetFace(player, "VVVVVVVVVVVVVVVVVVVV");
		EV_Wait(30);
		COverlaySetSpeed(WHITE, -0.016666668f);
		EV_Wait(35);
		ChgEggMobleSMod(1);
		EV_SetFace(player, "WXBABAB");
		EV_CameraPos(0, 110, -522.13501f, 3.2969999f, -855.83002f);
		EV_CameraAng(0, 110, 0x900, 0xFB00, 0xFE00);
		EV_Wait(110);
		EventSe_Stop(2);
		EV_SerifPlay(595);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "DAE");
			break;
		case 1:
			EV_SetFace(player, "DD");
			break;
		}
		EV_Msg(msgTbl_ev0023[TextLanguage][0]); //"\aWhat was that all about?"
		EV_Wait(10);
		EV_CameraPos(0, 185, -512.53998f, 4.0650001f, -857.646f);
		EV_CameraAng(0, 185, 0x900, 0x1700, 0x300);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_Wait(10);
		EV_SetAction(player, &action_s_s0018_sonic, &SONIC_TEXLIST, 0.40000001f, 1, 24);
		EV_Wait(5);
		EV_SerifPlay(596);
		EV_SetFace(player, "DAE");
		EV_Msg(msgTbl_ev0023[TextLanguage][1]); //"\aI don't think \nI'm dreaming here."
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		eggmoble_move_normal(-721.47601f, 117.0f, -1141.1169f, 190);
		EV_Wait(10);
		EventSe_Play(0, 1335, 1800);
		EventSe_Oneshot(1336, 0, 0, 0);
		EV_CameraPos(0, 0, -586.75f, 140.0f, -672.02441f);
		EV_CameraAng(0, 0, 0xDF00, 0x200, 0xF800);
		EV_Wait(20);
		BGM_Play(MusicIDs_evtbgm01);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.60000002f, 1, 0);
		EV_Wait(15);
		EV_SetAng(player, 0x100, 0xA400, 0);
		EV_SerifPlay(597);
		EV_Msg(msgTbl_ev0023[TextLanguage][2]); //"\aHmm?"
		EV_Wait(5);
		EventSe_Volume(0, -30, 80);
		EventSe_Pan(0, -60, 80);
		EV_SetPos(player, -482.39999f, 0.0f, -808.40002f);
		EV_CameraPos(0, 0, -472.03f, 3.0f, -810.20001f);
		EV_CameraAng(0, 0, 0x900, 0x4300, 0xFC00);
		EV_CameraPos(0, 80, -473.0f, 3.0f, -805.5647f);
		EV_CameraAng(0, 80, 0x900, 0x2900, 0xFE00);
		EV_MsgClose();
		EV_SetAction(player, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.9f, 1, 0);
		EV_Wait(10);
		EV_MovePoint2(player, -606.40002f, 9.0f, -837.5f, 2.0f, 1.0f);
		EV_Wait(40);
		EventSe_Volume(0, 0, 50);
		EventSe_Pan(0, 0, 1);
		EV_CameraPos(0, 0, -712.37f, 129.826f, -1136.0f);
		EV_CameraAng(0, 0, 0xF600, 0x7500, 0x200);
		EV_CameraAng(0, 50, 0xF600, 0x7000, 0x200);
		EV_LookPoint(player, -721.47601f, 157.0f, -1141.1169f);
		EV_Wait(48);
		EventSe_Stop(0);
		EV_CameraPos(0, 0, -620.83197f, 25.885599f, -865.54602f);
		EV_CameraAng(0, 0, 0xE800, 0x9400, 0x200);
		EV_CameraChase(player);
		EV_Wait(1);
		EV_MovePoint2(player, -721.26801f, 15.843f, -878.164f, 1.3f, 2.0f);
		EV_Wait(20);
		EV_SerifPlay(598);
		EV_SetFace(player, "F");
		EV_Msg(msgTbl_ev0023[TextLanguage][3]); //"\aEggman!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraChaseFree();
		EV_CameraPos(0, 0, -700.47803f, 20.26f, -856.56f);
		EV_CameraAng(0, 0, 0x900, 0xEF00, 0);
		eggmoble_moveandturn(-643.5f, 127.0f, -1375.9f, 0, -0x2000, 0, 110, 1);
		EV_CameraPos(0, 30, -727.76001f, 18.332399f, -869.23297f);
		EV_CameraAng(0, 30, 0xD00, 0xF500, 0x300);
		EV_WaitMove(player);
		EV_CameraPos(0, 30, -731.90002f, 17.587799f, -876.09998f);
		EV_CameraAng(0, 30, 0x900, 0xF500, 0x300);
		EV_MovePoint2(player, -724.0f, 14.443f, -885.37799f, 1.3f, 2.5f);
		EV_WaitMove(player);
		EV_LookFree(player);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_Wait(70);
		EV_CameraPos(0, 0, -735.20001f, 10.0f, -887.70001f); //Note: These cameras are under the floor when using the DC jungle geometry.
		EV_CameraAng(0, 0, 0x900, 0xB900, 0);
		EV_CameraPos(0, 100, -732.38501f, 10.0f, -891.94f);
		EV_CameraAng(0, 100, 0x900, 0xA900, 0);
		EV_Wait(10);
		EV_SerifPlay(599);
		EV_SetFace(player, "CDE");
		EV_Msg(msgTbl_ev0023[TextLanguage][4]); //"\aWhat's he doing here?"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_SetAction(player, &action_s_s0005_sonic, &SONIC_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(player, &action_s_s0007_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_SerifPlay(600);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(player, "F");
			break;
		case 1:
			EV_SetFace(player, "FFF");
			break;
		}
		EV_Msg(msgTbl_ev0023[TextLanguage][5]); //"\aOh, never mind.  \nThis time I'll get"...
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EV_SetPos(player, -724.0f, 14.44f, -885.53998f);
		EV_SetAng(player, 0xFB52, 0x8CC3, 0xFCC5);
		EV_InitPlayer(0);
		if(WHITE){
			FreeTask(WHITE);
			WHITE = 0;
		}
		delete_eggmoble();
		EventSe_Close();
		break;
	}
}