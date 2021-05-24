#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0012_s_meetingamy(int state)
{
	ObjectMaster* player = EV_GetPlayer(0);
	ObjectMaster* amy = 0;

	ObjectMaster* obj_wing1 = 0;

	switch (state) {
	case 0:
		SetBankDir(79);
		break;
	case 1:
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_CreatePlayer(2, Amy_Main, 605.70001f, 0.0f, 1110.8f, 0, 0, 0);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1210.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		amy = EV_GetPlayer(2);
		EV_SetPos(amy, -623.20001f, 5.5999999f, 1079.0f);
		EV_SetAng(amy, 0, 0, 0);
		obj_wing1 = SetEventBirdie0();
		EV_SetPos(obj_wing1, amy->Data1->Position.x + 4.8000002f,
			amy->Data1->Position.y + 2.5f,
			amy->Data1->Position.z + 0.40000001f);
		EV_SetAng(obj_wing1, amy->Data1->Rotation.x,
			0x4000 - amy->Data1->Rotation.y,
			amy->Data1->Rotation.z + 512);
		EV_Wait(1);
		EV_SetMode(obj_wing1, 0);
		EV_SetAction(obj_wing1, &action_w_w9001_wing, &VER2_WING_TEXLIST, 0.80000001f, 1, 0);
		EV_SetPos(obj_wing1, amy->Data1->Position.x + 4.8f,
			amy->Data1->Position.y + 2.5f,
			amy->Data1->Position.z + 2.4000001f);
		EV_SetAng(obj_wing1, (int)(amy->Data1->Position.x),
			(int)(amy->Data1->Position.y + 36864.0f),
			(int)(amy->Data1->Position.z - 512.0f));
		EV_ClrAction(player);
		EV_SetPos(player, -534.20001f, 0.0f, 1200.0f);
		EV_CameraPos(1, 0, -535.0f, 7.1999998f, 1191.3f);
		EV_CameraAng(1, 0, 597, 33219, 0);
		EV_CameraPos(1, 50, -535.0f, 5.1999998f, 1191.3f);
		EV_CameraAng(1, 50, 1109, 33219, 0);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(20);
		EV_SerifPlay(497);
		EV_Msg((msgTbl_ev0012[TextLanguage])[0]); //"\aSonic!   Wait up!"
		EV_SetPos(amy, -525.5f, 0.02f, 1268.9f);
		EV_SetAng(amy, 0, 451, 0);
		EV_SetAction(amy, AMY_ACTIONS[44], &AMY_TEXLIST, 1.3f, 1, 1);
		EV_MovePoint2(amy, -528.20001f, 0.0f, 1208.0f, 0.64999998f, 0.059999999f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s9001_sonic, &SONIC_TEXLIST, 0.25f, 0, 8);
		moveObject(obj_wing1, -520.70001f, 8.0f, 1269.4f, -525.40002f, 8.0f, 1210.4f, 117);
		EV_Wait(10);
		BGM_Play(MusicIDs_amy);
		EV_CameraPos(1, 40, -531.40002f, 5.3000002f, 1191.7f);
		EV_CameraAng(1, 40, 65365, 31683, 0);
		EV_Wait(45);
		EV_LookObject(amy, player, 0.0f, 5.0f, 0.0f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.5f, 1, 16);
		EV_SetAng(player, 0, 64768, 0);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1203.0f);
		EV_SetAng(player, 0, 65168, 0);
		EV_SetPos(amy, -525.5f, 0.02f, 1230.9f);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, -518.29999f, 8.6999998f, 1194.5f);
		EV_CameraAng(1, 0, 64454, 25453, 512);
		EV_MovePoint2(amy, -530.20001f, 0.0f, 1210.0f, 0.89999998f, 0.1f);
		EV_MsgClose();
		EV_CameraPos(1, 120, -523.79999f, 1.2f, 1191.3f);
		EV_CameraAng(1, 120, 2984, 25027, 768);
		EV_WaitMove(amy);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[56], &AMY_TEXLIST, 0.69999999f, 0, 1);
		EV_Wait(1);
		EV_ClrFace(amy);
		EV_SetFace(amy, "EEC0");
		EV_SerifPlay(498);
		EV_Msg((msgTbl_ev0012[TextLanguage])[1]); //"\aLong time no see!"
		EV_ClrFace(amy);
		EV_SerifWait();
		EV_SetAction(player, &action_s_s0037_sonic, &SONIC_TEXLIST, 0.40000001f, 0, 4);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 1.0f, 1, 4);
		EV_ClrFace(player);
		EV_SetFace(player, "DBBAA0");
		EV_SerifPlay(499);
		EV_Msg((msgTbl_ev0012[TextLanguage])[2]); //"\aHuh... A... Amy?"
		moveObjectOn(obj_wing1, 4.5f, 8.0f, 0.2f, 100, amy);
		EV_Wait(2);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1203.0f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1202.8f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1202.6f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1202.4f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1202.2f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1202.0f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1201.8f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1201.6f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1201.4f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1201.2f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1201.0f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1200.8f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1200.6f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1200.4f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1200.2f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1200.0f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1199.8f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1199.6f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1199.4f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1199.2f);
		EV_Wait(1);
		EV_SetPos(player, -534.20001f, 0.0099999998f, 1199.0f);
		EV_WaitAction(amy);
		EV_SetAng(amy, 0, 35328, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 1);
		EV_ClrFace(player);
		EV_LookObject(amy, player, 0.0f, 4.0f, 0.0f);
		EV_MsgClose();
		EV_Wait(10);
		EV_SetAction(amy, AMY_ACTIONS[70], &AMY_TEXLIST, 0.75f, 1, 1);
		EV_Wait(20);
		EV_CameraPos(1, 90, -528.5f, 2.5f, 1189.9f);
		EV_CameraAng(1, 90, 2133, 28611, 768);
		EV_ClrFace(amy);
		switch (VoiceLanguage) {
		case 0:
			EV_SetFace(amy, "FFFFGF0");
			break;
		case 1:
			EV_SetFace(amy, "FF");
			break;
		}
		EV_MovePoint2(amy, -531.0f, 0.0f, 1207.0f, 0.5f, 0.059999999f);
		EV_SerifPlay(500);
		EV_Msg((msgTbl_ev0012[TextLanguage])[3]); //"\aWhat's wrong with you anyway?"
		EV_Wait(15);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 0.75f, 1, 8);
		EV_Wait(40);
		if (VoiceLanguage == 1) EV_ClrFace(amy);
		EV_Wait(10);
		if (!VoiceLanguage) EV_ClrFace(amy);
		EV_Wait(10);
		EV_SerifStop();
		EV_ClrAction(obj_wing1);
		EV_SetAction(obj_wing1, &action_w_w0121_wing, &VER1_WING_TEXLIST, 0.69999999f, 1, 0);
		EV_SetPos(obj_wing1, amy->Data1->Position.x,
			amy->Data1->Position.y + 1.0f, amy->Data1->Position.z - 0.60000002f);
		EV_SetAng(obj_wing1, (int)(amy->Data1->Position.x),
			(int)(amy->Data1->Position.y + 36864.0f),
			(int)(amy->Data1->Position.z - 512.0f));
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0010_amy, &AMY_TEXLIST, 0.75f, 1, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, -533.76001f, 6.9976001f, 1200.51f);
		EV_CameraAng(1, 0, 0, 36352, 0);
		EV_SetAng(player, 0, 3840, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 12);
		EV_ClrFace(amy);
		EV_SetFace(amy, "AGCCGAAAAACEGCCGGDE0");
		EV_SerifPlay(501);
		EV_Msg((msgTbl_ev0012[TextLanguage])[4]); //"\aListen, this birdie seems to be \nin "...
		EV_CameraPos(1, 75, -533.70001f, 7.02f, 1200.45f);
		EV_CameraAng(0, 40, 65024, 36352, 0);
		EV_Wait(40);
		EV_CameraAng(0, 85, 63291, 36352, 0);
		EV_Msg((msgTbl_ev0012[TextLanguage])[5]); //"\aSo you need to be his bodyguard \nfor"...
		EV_Wait(40);
		EV_SerifWait();
		EV_CameraPos(0, 0, -529.27002f, 5.3000002f, 1203.2f);
		EV_CameraAng(0, 0, 1792, 9712, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "AED0");
		EV_CameraPos(0, 8, -526.40002f, 2.7f, 1206.5f);
		EV_CameraAng(0, 8, 4864, 7920, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[122], &SONIC_TEXLIST, 2.0f, 0, 5);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 4);
		EV_CameraPos(0, 30, -525.79999f, 2.2f, 1207.2f);
		EV_CameraAng(0, 30, 4864, 7920, 0);
		EV_SetFace(player, "F");
		dsPlay_oneshot_v(1333, 0, 0, 127, -529.20001f, 2.01f, 1206.0f);
		EV_SerifPlay(502);
		EV_ClrFace(amy);
		EV_Msg((msgTbl_ev0012[TextLanguage])[6]); //"\aYou must be kidding!"
		moveObjectOn(obj_wing1, 0.2f, 1.0f, -0.60000002f, 300, amy);
		EV_SerifWait();
		EV_Wait(15);
		EV_ClrFace(player);
		EV_Wait(30);
		EV_CameraPos(1, 0, -516.59998f, 8.1099997f, 1186.9f);
		EV_CameraAng(1, 0, 64085, 23040, 65024);
		EV_CameraPos(1, 90, -520.54999f, 7.4200001f, 1189.9f);
		EV_CameraAng(1, 90, 64085, 24064, 65024);
		EV_ClrFace(amy);
		EV_SetFace(amy, "EEDDEEDDEEED0");
		EV_SerifPlay(503);
		EV_Msg((msgTbl_ev0012[TextLanguage])[7]); //"\aIf you don't, we're just\ngonna tag a"...
		EV_Wait(20);
		if (!VoiceLanguage) EV_ClrFace(amy);
		EV_Wait(50);
		if (VoiceLanguage == 1) EV_ClrFace(amy);
		EV_Wait(10);
		EV_SetAction(player, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.5f, 1, 4);
		EV_Wait(120);
		DoSoundQueueThing(1325);
		stopObjectAll();
		break;
	case 2:
		stopObjectAll();
		BGM_Stop();
		EV_CameraOff();
		EV_PadOn();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		stopObjectAll();
		EV_FreeObject(&obj_wing1);
		break;
	}
}
