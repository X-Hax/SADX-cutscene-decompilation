#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0062[] = {
	(char*)("VER1_WING"), &VER1_WING_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST
};

void ev0062_a_meetsonic(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		KOTORI2 = 0;
		EV_InitPlayer(0);
		SetBankDir(79);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_CreatePlayer(2, SonicTheHedgehog, -623.20001f, 5.5999999f, 1079.0f, 0, 0xC000, 0);
		EV_Wait(1);
		EV_SetPos(player, -525.5f, 0.02f, 1340.9f);
		EV_SetAng(player, 0, 0x8068, 0);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, -534.20001f, 0.0099999998f, 1270.0f);
		EV_SetAng(sonic, 0, 0x8000, 0);
		KOTORI2 = SetEventBirdie0();
		EV_SetPos(KOTORI2,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_Wait(1);
		EV_SetAng(KOTORI2, 0, 0x8000, 0);
		EV_SetMode(KOTORI2, 0);
		EV_SetAction(KOTORI2, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, AMY_ACTIONS[70], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(player, -525.5f, 0.02f, 1300.9f, 0.5f, 3.0f);
		moveObjectOn(KOTORI2, 4.8000002f, 7.5f, 0.40000001f, 100, player);
		EV_CameraChase(player);
		EV_CameraPos(1, 0, -537.22998f, 7.8400002f, 1349.59f);
		EV_CameraAng(1, 0, 0xF800, 0xDA00, 0);
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 16);
		EV_SetAction(sonic, SONIC_ACTIONS[3], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_MovePoint2(sonic, -534.20001f, 0.0f, 1204.0f, 0.2f, 0.059999999f);
		EV_Wait(60);
		EV_CameraChaseFree();
		BGM_Play(MusicIDs_thesonic);
		EV_SetPos(player, -599.58002f, 0.0f, 1112.49f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetPos(KOTORI2,
			player->twp->pos.x + 4.8000002f,
			player->twp->pos.y + 7.5f,
			player->twp->pos.z + 0.4f);
		EV_CameraAng(1, 0, 0xFD00, 0x400, 0);
		EV_CameraPos(1, 0, -527.0f, 11.04f, 1322.4f);
		EV_Wait(1);
		EV_CameraPerspective(0, 30, 0x71C);
		EV_CameraTargetObj(1, 30, sonic, 0.0f, 6.0f, 0.0f, 0);
		EV_Wait(50);
		EV_CameraTargetFree();
		EV_Wait(10);
		EV_SetPos(player, -525.5f, 0.02f, 1300.9f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_SetPos(KOTORI2,
			player->twp->pos.x + 4.8000002f,
			player->twp->pos.y + 7.5f,
			player->twp->pos.z + 0.4f);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 16);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraPos(1, 0, -507.92999f, 6.0799999f, 1277.97f);
		EV_CameraAng(1, 0, 0x100, 0x6400, 0);
		EV_CameraPos(1, 60, -520.62f, 6.5700002f, 1293.42f);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(857);
		EV_Msg(msgTbl_ev0062[TextLanguage][0]); //"\aOh, Sonic!"
		EV_Wait(50);
		EV_ClrFace(player);
		EV_Wait(10);
		EV_LookPoint(player, -520.62f, 6.5700002f, 1293.42f);
		EV_Wait(10);
		EV_SetFace(player, "G");
		EV_SerifPlay(858);
		EV_MsgW(60, msgTbl_ev0062[TextLanguage][1]); //"\aHuh... my hero!"
		EV_ClrFace(player);
		EV_LookFree(player);
		EV_LookObject(player, sonic, 0.0f, 7.0f, 0.0f);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.0f, 1, 16);
		EV_MovePoint2(player, -528.20001f, 0.0f, 1240.0f, 0.30000001f, 3.0f);
		moveObjectOn(KOTORI2, 4.8000002f, 7.5f, 0.40000001f, 230, player);
		EV_MsgClose();
		EV_SetFace(player, "R");
		EV_SerifPlay(859);
		EV_Msg(msgTbl_ev0062[TextLanguage][2]); //"\aSo-nic!"
		EV_Wait(10);
		EV_CameraPos(1, 0, -512.66998f, 6.1300001f, 1315.1801f);
		EV_CameraAng(1, 0, 0x100, 0x1D00, 0);
		EV_CameraChase(player);
		EV_Wait(70);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_SetAction(sonic, &action_s_s0002_sonic, &SONIC_TEXLIST, 0.25f, 0, 4);
		EV_Wait(60);
		EV_CameraChaseFree();
		EV_CameraPos(1, 0, -529.40997f, 4.9000001f, 1256.3199f);
		EV_CameraAng(1, 0, 0x200, 0x8800, 0);
		EV_SetPos(player, -525.5f, 0.02f, 1280.9f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_SetPos(KOTORI2,
			player->twp->pos.x + 4.8000002f,
			player->twp->pos.y + 7.5f,
			player->twp->pos.z + 0.4f);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_MovePoint2(player, -534.20001f, 0.0f, 1221.0f, 0.5f, 3.0f);
		moveObjectOn(KOTORI2, 4.8000002f, 7.5f, 0.40000001f, 140, player);
		EV_Wait(1);
		EV_CameraChase(player);
		EV_Wait(50);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_SetAng(sonic, 0, 0xFE90, 0);
		EV_CameraChaseFree();
		EV_CameraPos(1, 60, -514.03998f, 7.6999998f, 1216.6f);
		EV_CameraAng(1, 60, 0xF955, 0x39C3, 0);
		EV_Wait(50);
		EV_SetFace(player, "G");
		EV_SerifPlay(860);
		EV_Msg(msgTbl_ev0062[TextLanguage][3]); //"\aLong time no see..."
		EV_Wait(12);
		EV_ClrAction(player);
		EV_Wait(1);
		EV_SetAction(player, AMY_ACTIONS[56], &AMY_TEXLIST, 1.0f, 0, 8);
		EV_ClrFace(player);
		EV_MsgClose();
		EV_LookObject(player, sonic, 0.0f, 7.0f, 0.0f);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "H");
		EV_SerifPlay(861);
		EV_Msg(msgTbl_ev0062[TextLanguage][4]); //"\aUhh...  Amy!"
		EV_CameraPos(1, 0, -533.09998f, 5.6999998f, 1208.5f);
		EV_CameraAng(1, 0, 0x255, 0xFFC3, 0);
		EV_CameraPos(0, 18, -532.29999f, 2.7f, 1213.3f);
		EV_CameraAng(0, 18, 0xC55, 0x5C3, 0);
		EV_Wait(1);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0037_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 16);
		moveObject(sonic, -534.20001f, 0.0f, 1204.0f, -534.20001f, 0.0f, 1194.0f, 40);
		EV_Wait(42);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0021_sonic, &SONIC_TEXLIST, 1.25f, 1, 4);
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_CameraPos(0, 40, -516.84998f, 4.4099998f, 1187.33f);
		EV_CameraAng(0, 40, 0x255, 0x59C3, 0);
		EV_Wait(40);
		EV_SetPos(KOTORI2,
			player->twp->pos.x + 4.8000002f,
			player->twp->pos.y + 7.5f,
			player->twp->pos.z + 0.4f);
		EV_CameraPos(1, 60, -518.28003f, 4.5799999f, 1190.76f);
		EV_CameraAng(1, 60, 0x255, 0x53C3, 0);
		EV_Wait(10);
		EV_MovePoint2(player, -534.20001f, 0.0f, 1215.0f, 0.5f, 3.0f);
		moveObjectOn(KOTORI2, 4.8000002f, 7.5f, 0.40000001f, 100, player);
		EV_ClrFace(player);
		EV_SetFace(player, "EAG");
		EV_SerifPlay(862);
		EV_MsgW(60, msgTbl_ev0062[TextLanguage][5]); //"\aWhat's your problem?!"
		EV_ClrFace(player);
		EV_Wait(60);
		EV_CameraPos(1, 0, -532.52002f, 6.21f, 1206.87f);
		EV_CameraAng(1, 0, 0xA02, 0x76F0, 0);
		EV_SetPos(KOTORI2,
			player->twp->pos.x - 0.30000001f,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_ClrAction(player);
		EV_ClrAction(KOTORI2);
		EV_SetAction(KOTORI2, &action_w_w0815_wing, &VER1_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(player, &action_a_a0815_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_Wait(15);
		EV_CameraAng(1, 70, 0xF902, 0x76F0, 0);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_LookFree(player);
		EV_SetFace(player, "DACDECE");
		EV_SerifPlay(863);
		EV_MsgW(80, msgTbl_ev0062[TextLanguage][6]); //"\aSee, this little birdie's got in trou"...
		EV_MsgW(100, msgTbl_ev0062[TextLanguage][7]); //"\aI think you should be his bodyguard "...
		EV_MsgClose();
		EV_Wait(18);
		EV_ClrFace(player);
		EV_LookObject(player, sonic, 0.0f, 7.0f, 0.0f);
		EV_CameraPos(1, 0, -509.20001f, 11.52f, 1213.24f);
		EV_CameraAng(1, 0, 0xF955, 0x33C3, 0);
		moveObjectOn(KOTORI2, 4.8000002f, 7.5f, 0.40000001f, 999999, player);
		EV_ClrAction(KOTORI2);
		EV_SetAction(KOTORI2, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 8);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(1, 30, -513.90997f, 10.71f, 1211.78f);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "H");
		EV_SerifPlay(864);
		EV_SetAction(sonic, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 4);
		EV_Msg(msgTbl_ev0062[TextLanguage][8]); //"\aWhat!?"
		EV_Wait(60);
		EV_MsgClose();
		EV_ClrFace(sonic);
		EV_ClrFace(player);
		EV_SetFace(player, "FCAF");
		EV_SerifPlay(865);
		EV_Msg(msgTbl_ev0062[TextLanguage][9]); //"\aDoesn't matter.  \nWe'll just tag alo"...
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[70], &AMY_TEXLIST, 1.0f, 1, 16);
		EV_ClrFace(player);
		EV_CameraChase(player);
		EV_Wait(8);
		EV_MovePoint2(player, -534.0f, 0.0f, 1209.0f, 0.5f, 1.0f);
		EV_SetAction(sonic, &action_s_s0022_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 8);
		EV_CameraChaseFree();
		EV_WaitMove(player);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 16);
		EV_Wait(60);
		EV_CameraPos(1, 0, -524.28998f, 7.2600002f, 1217.85f);
		EV_CameraAng(1, 0, 0xF955, 0x1BC3, 0);
		EV_ClrAction(sonic);
		EV_CameraPos(0, 600, -510.0f, 11.01f, 1235.47f);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "K");
		EV_SerifPlay(866);
		EV_Msg(msgTbl_ev0062[TextLanguage][10]); //"\aNo way! Uh uh."
		EV_Wait(30);
		EV_SetAction(sonic, &action_s_s0037_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		moveObject(sonic, -534.20001f, 0.0f, 1194.0f, -534.20001f, 0.0f, 1184.0f, 30);
		EV_Wait(30);
		EV_ClrFace(sonic);
		EV_ClrAction(sonic);
		EV_PlayPad(2, &EV0062AT);
		EV_Wait(1);
		EV_MsgClose();
		EV_Wait(40);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.0f, 1, 0);
		EV_CameraChase(player);
		EV_MovePoint2(player, -537.53998f, 0.0f, 1127.25f, 0.60000002f, 0.0f);
		EV_Wait(10);
		EV_SerifPlay(867);
		EV_Msg(msgTbl_ev0062[TextLanguage][11]); //"\aCome on, don't run away.\nOhhhhhhhh.."...
		EV_Wait(70);
		EV_LookObject(player, sonic, 0.0f, 7.0f, 0.0f);
		EV_MsgClose();
		EV_CameraChaseFree();
		EV_Wait(40);
		break;
	case 2:
		stopObjectAll();
		EV_SetPos(player, -537.53998f, 0.0f, 1127.25f);
		EV_SetAng(player, 0, 0x81BE, 0);
		EV_CameraPos(1, 0, -546.82501f, 19.75f, 1079.097f);
		EV_CameraAng(1, 0, 0xFB00, 0x87C3, 0);
		EV_RemovePlayer(2);
		EV_FreeObject(&KOTORI2);
		EV_InitPlayer(0);
		EventSe_Close();
		EV_Wait(1);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}