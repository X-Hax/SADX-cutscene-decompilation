#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0064_a_kidnapped(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		egg_amy = 0;
		obj_wing2 = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		seqVars[2] = 1;
		SetBankDir(95);
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_s_square);
		EV_SetPos(player, 389.5f, 44.5f, 1607.3f);
		EV_SetAng(player, 0, 49152, 0);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.5f, 1, 0);
		obj_wing2 = SetEventBirdie0();
		EV_SetPos(obj_wing2,
			player->twp->pos.x - 0.5f,
			player->twp->pos.y + 0.89999998f,
			player->twp->pos.z);
		EV_SetAng(obj_wing2,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		EV_SetMode(obj_wing2, 0);
		EV_SetAction(obj_wing2, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 2.5f,
			player->twp->pos.y + 6.8000002f,
			player->twp->pos.z - 3.5f);
		EV_SetAng(obj_wing2, 0, 49152, 0);
		EV_Wait(1);
		moveObjectOn(obj_wing2, 2.5f, 6.8000002f, -3.5f, 200, player);
		EV_CreatePlayer(3, EggrobForEvent0, 395.10001f, 0.0f, 1351.0f, 0, 49152, 0);
		EV_Wait(1);
		zero = EV_GetPlayer(3);
		EV_SetPos(zero, 395.10001f, 0.0f, 1251.0f);
		EV_SetAng(zero, 0, 49152, 0);
		seqVars[2] = 3;
		EV_Wait(1);
		seqVars[2] = 0;
		EV_CameraPos(0, 0, 333.29999f, 73.0f, 1571.9f);
		EV_CameraAng(0, 0, 2560, 42996, 0);
		EV_CameraPos(0, 100, 331.5f, 2.0f, 1574.7f);
		EV_Wait(100);
		EV_CameraPos(0, 105, 333.5f, 1.5f, 1583.0f);
		EV_CameraAng(0, 105, 2560, 35316, 0);
		EV_SetAction(player, &action_a_a0133_amy, &AMY_TEXLIST, 1.5f, 1, 0);
		EV_MovePoint2(player,
			player->twp->pos.x - 48.0f,
			player->twp->pos.y,
			player->twp->pos.z,
			0.60000002f, 0.059999999f);
		moveObjectOn(obj_wing2, 2.5f, 6.8000002f, -3.0f, 120, player);
		EV_WaitMove(player);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.2f, 1, 0);
		EV_LookPoint(player,
			player->twp->pos.x - 32.0f,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 24.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 16.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(20);
		EV_LookPoint(player,
			player->twp->pos.x - 16.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 24.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 32.0f,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 24.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 16.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 2.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_Wait(20);
		EV_LookPoint(player,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 16.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 24.0f,
			player->twp->pos.y,
			player->twp->pos.z - 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 32.0f,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 24.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 16.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 8.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(30);
		EV_LookPoint(player,
			player->twp->pos.x - 16.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 24.0f,
			player->twp->pos.y,
			player->twp->pos.z + 10.0f);
		EV_Wait(1);
		EV_LookPoint(player,
			player->twp->pos.x - 32.0f,
			player->twp->pos.y,
			player->twp->pos.z);
		EV_SetAction(player, &action_a_a0133_amy, &AMY_TEXLIST, 1.1f, 1, 0);
		EV_Wait(2);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 3.5f,
			player->twp->pos.y + 6.8000002f,
			player->twp->pos.z + 3.5f);
		EV_SetAng(obj_wing2, 0, 0x8000, 0);
		moveObjectOn(obj_wing2, 3.5f, 6.8000002f, 3.5f, 200, player);
		EV_MovePoint2(player,
			player->twp->pos.x,
			player->twp->pos.y,
			player->twp->pos.z - 40.0f,
			0.60000002f, 0.059999999f);
		EV_LookFree(player);
		EV_Wait(1);
		EV_Wait(40);
		EV_MoveFree(player);
		EV_SetPos(player, 333.79999f, 0.0f, 1420.3f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_Wait(1);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 3.5f,
			player->twp->pos.y + 6.8000002f,
			player->twp->pos.z + 3.5f);
		EV_SetAng(obj_wing2, 0, 0x8000, 0);
		moveObjectOn(obj_wing2, 3.5f, 6.8000002f, 3.5f, 200, player);
		EV_CameraPos(1, 0, 330.29999f, 1.2f, 1405.55f);
		EV_CameraAng(1, 0, 3840, 34100, 0);
		EV_CameraTargetObj(1, 20, player, 0.0f, 5.0f, 0.0f, 0);
		EV_CameraChase(player);
		EV_MovePoint2(player, 333.0f, 0.0f, 1338.1f, 0.40000001f, 0.059999999f);
		EV_SerifPlay(879);
		EV_ClrFace(player);
		EV_SetFace(player, "EECCCCDE");
		EV_Msg(msgTbl_ev0064[TextLanguage][0]); // "\aWhew!   \nI'm glad we finally lost th"...
		EV_Wait(90);
		EV_ClrFace(player);
		EV_CameraChaseFree();
		EV_CameraPos(1, 43,
			player->twp->pos.x - 9.0f,
			player->twp->pos.y + 8.0f,
			player->twp->pos.z - 2.0f);
		EV_WaitMove(player);
		EV_SerifPlay(880);
		EV_ClrFace(player);
		EV_SetFace(player, "EECCCCDE");
		EV_Msg(msgTbl_ev0064[TextLanguage][1]); //"\aSonic must've gotten lost, too!"
		EV_SetAction(player, &action_a_a0134_amy, &AMY_TEXLIST, 1.1f, 0, 0);
		EV_SetAction(player, &action_a_a0135_amy, &AMY_TEXLIST, 1.1f, 1, 0);
		EV_CameraPos(1, 120, 325.60001f, 18.5f, 1356.4f);
		EV_Wait(120);
		EV_CameraTargetFree();
		EV_ClrFace(player);
		EV_Wait(15);
		EV_MsgClose();
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 3.5f,
			player->twp->pos.y + 6.8000002f,
			player->twp->pos.z + 3.5f);
		EV_SetAng(obj_wing2, 0, 0x8000, 0);
		moveObjectOn(obj_wing2, 3.5f, 6.8000002f, 3.5f, 200, player);
		EV_CameraPos(1, 120, 327.5f, 18.5f, 1349.4f);
		EV_CameraAng(1, 120, 58524, 62854, 62720);
		EventSe_Oneshot(1339, 128, 0, 0);
		shadowOn(0,
			player->twp->pos.x - 1.0f,
			player->twp->pos.y + 12.0f,
			player->twp->pos.z + 10.0f,
			100, 300, 6.0f);
		EV_Wait(10);
		BGM_Stop();
		EV_Wait(100);
		EV_SetAction(player, &action_a_a0136_amy, &AMY_TEXLIST, 1.1f, 0, 0);
		EV_SetAction(player, &action_a_a0137_amy, &AMY_TEXLIST, 1.1f, 1, 0);
		EV_Wait(40);
		destroy_p_shadowTask_EV0064(0);
		shadowOn(1,
			player->twp->pos.x,
			player->twp->pos.y + 0.1f,
			player->twp->pos.z + 5.0f, 0, 3600, 7.0f);
		EV_SetPos(zero, 333.0f, 10.0f, 1359.0f);
		EV_SetAng(zero, 0, 0x8000, 0);
		EV_SetAng(player, 0, 12800, 0);
		EV_ClrAction(player);
		EV_LookObject(player, zero, 0.0f, 10.0f, 0.0f);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 6.3f,
			player->twp->pos.y + 6.8000002f,
			player->twp->pos.z - 4.4000001f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y,
			(int)player->twp->pos.z);
		EV_CameraPos(0, 0, 335.10001f, 8.1000004f, 1346.4f);
		EV_CameraAng(0, 0, 6300, 29062, 64512);
		EV_CameraPos(0, 16, 341.60001f, 0.69999999f, 1329.0f);
		EV_CameraAng(0, 16, 3996, 29062, 64000);
		EV_Wait(30);
		EventSe_Oneshot(16, 60, 0, 0);
		RumbleA(0, 2);
		EV_Wait(30);
		BGM_Play(MusicIDs_eggrobo);
		EV_CameraPos(0, 0, 333.29999f, 1.3f, 1328.6f);
		EV_CameraAng(0, 0, 1692, 32646, 0);
		EV_SetPos(obj_wing2,
			player->twp->pos.x,
			player->twp->pos.y + 3.8f,
			player->twp->pos.z - 0.5f);
		EV_SetAng(obj_wing2, 0, 0x8000, 0);
		moveObjectOn(obj_wing2, 0.0f, 3.8f, -0.5f, 40, player);
		EV_LookFree(player);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(0, 60, 332.5f, 12.0f, 1328.1f);
		EV_CameraAng(0, 80, 924, 32646, 0);
		EV_SetAction(player, &action_a_a0006_amy, &AMY_TEXLIST, 3.0f, 1, 0);
		EV_SerifPlay(881);
		EV_ClrFace(player);
		EV_SetFace(player, "IJCJIJ");
		EV_Msg(msgTbl_ev0064[TextLanguage][2]); //"\aAhhhhh!"
		EV_Wait(15);
		EV_CameraPos(0, 25, 332.5f, 14.0f, 1349.1f);
		EV_CameraAng(0, 25, 1180, 32646, 0);
		EV_Wait(30);
		EV_ClrFace(player);
		EV_RemovePlayer(3);
		EV_FreeObject(&obj_wing2);
		EV_CreateObjectFunc(&egg_amy, set_amy, 330.0f, 11.0f, 1205.9f, 0, 53248, 0);
		EV_Wait(1);
		EV_SetMode(egg_amy, 0);
		setamyparam(1.1f);
		EV_SetPos(egg_amy, 330.0f, 11.0f, 1205.9f);
		EV_SetAng(egg_amy, 0, 36864, 0);
		EV_CameraPerspective(0, 1, 14746);
		EV_Wait(1);
		EV_CameraPos(0, 0, 323.04999f, 24.1f, 1187.86f);
		EV_CameraAng(0, 0, 4625, 44588, 0);
		EV_CameraPos(0, 60, 323.5f, 14.1f, 1198.0f);
		EV_CameraAng(0, 60, 4625, 44588, 0);
		EV_Wait(70);
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 13289);
		EV_Wait(1);
		EV_CameraPos(0, 0, 324.5f, 17.299999f, 1177.2f);
		EV_CameraAng(0, 0, 17, 34860, 65280);
		EV_CameraPos(0, 30, 323.5f, 4.4000001f, 1170.6f);
		EV_CameraAng(0, 30, 5137, 34860, 65280);
		EV_Wait(70);
		EV_CameraPos(1, 0, 143.2f, 4.0f, 1644.6f);
		EV_CameraAng(1, 0, 2560, 2036, 0);
		EV_CameraTargetFree();
		EV_CameraPos(1, 70, 197.3f, 3.8f, 1622.1f);
		EV_CameraAng(1, 70, 1280, 5376, 0);
		moveObjectAngle2(egg_amy, 192.60001f, 16.0f, 1617.2f, 71.5f, 21.5f, 1461.4f, 0, 53248, 0, 0, 53248, 0, 140);
		EV_SerifPlay(882);
		EV_Msg(msgTbl_ev0064[TextLanguage][3]); //"\aHey, watch it bolt brain, \nlet us do"...
		EV_CameraPos(1, 120, 161.5f, 4.8000002f, 1577.1f);
		EV_CameraAng(1, 120, 1280, 6144, 0);
		EV_SerifPlay(883);
		EV_Wait(60);
		moveObjectAngle2(egg_amy, 71.5f, 21.5f, 1461.4f, 48.5f, 35.799999f, 1398.4f, 0, 53248, 0, 0, 53248, 0, 75);
		EV_Wait(75);
		stopObjectAll();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		seqVars[2] = 0;
		EV_InitPlayer(0);
		EV_RemovePlayer(3);
		EV_FreeObject(&obj_wing2);
		EV_FreeObject(&egg_amy);
		destroy_p_shadowTask_EV0064(0);
		destroy_p_shadowTask_EV0064(1);
		break;
	}
}