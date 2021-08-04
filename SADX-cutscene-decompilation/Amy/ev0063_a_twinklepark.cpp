#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev0063_a_twinklepark(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		BLACKOUT = 0;
		obj_wing2 = 0;
		seqstore = 0;
		seqsaved = 0;
		seqstore = seqVars[483];
		seqsaved = 1;
		seqVars[483] = 1; //Keep hint boxes spawned in the cutscene.
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_InitPlayer(2);
		SetBankDir(95);
		EventSe_Init(2);
		EV_CreatePlayer(2, SonicTheHedgehog, 323.0f, 0.0f, 1639.0f, 0, 29696, 0);
		EV_Wait(1);
		sonic = EV_GetPlayer(2);
		EV_SetPos(sonic, 329.39999f, 0.0f, 1617.0f);
		EV_SetAng(sonic, 0, 14848, 0);
		EV_SetPos(player, 333.5f, 0.0f, 1545.8f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetAction(sonic, &action_s_s0018_sonic, &SONIC_TEXLIST, 0.44999999f, 1, 0);
		obj_wing2 = SetEventBirdie0();
		EV_SetPos(obj_wing2, player->twp->pos.x,
			player->twp->pos.y + 2.5f,
			player->twp->pos.z + 1.5f);
		EV_SetAng(obj_wing2,
			player->twp->ang.x,
			0x4000 - player->twp->ang.y,
			player->twp->ang.z);
		EV_Wait(1);
		EV_SetMode(obj_wing2, 0);
		EV_SetAction(obj_wing2, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(obj_wing2,
			player->twp->pos.x,
			player->twp->pos.y + 8.0f,
			player->twp->pos.z + 1.5f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y,
			(int)player->twp->pos.z);
		EV_CreatePlayer(3, EggrobForEvent0, 395.10001f, 12.0f, 1201.0f, 0, 49152, 0);
		EV_Wait(1);
		zero = EV_GetPlayer(3);
		EV_SetPos(zero, 395.10001f, 12.0f, 1200.0f);
		EV_SetAng(zero, 0, 49152, 0);
		seqVars[2] = 2;
		BLACKOUT = COverlayCreate(1.0e-32f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_CameraPerspective(1, 1, 12561);
		EV_Wait(1);
		EV_CameraPos(1, 0, 326.5f, 14.8f, 1540.4f);
		EV_CameraAng(1, 0, 62266, 33977, 65280);
		EV_CameraPos(1, 80, 326.5f, 9.1999998f, 1540.4f);
		EV_CameraAng(1, 80, 63290, 33977, 65280);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.5f, 1, 0);
		EV_MovePoint2(player,
			sonic->twp->pos.x + 10.0f,
			sonic->twp->pos.y,
			sonic->twp->pos.z - 4.0f,
			0.60000002f, 0.40000001f);
		moveObject(obj_wing2, 330.70001f, 2.7f, 1545.0f,
			sonic->twp->pos.x + 3.2f,
			sonic->twp->pos.y + 8.3000002f,
			sonic->twp->pos.z - 9.0f,
			125);
		EV_Wait(1);
		EV_SerifPlay(868);
		EV_Msg(msgTbl_ev0063[TextLanguage][0]); //"\aWait up, Sonic! Not fair!"
		EV_Wait(40);
		EV_SetAction(sonic, &action_s_s0028_sonic, &SONIC_TEXLIST, 0.75f, 1, 16);
		EV_CameraPos(1, 0, 351.89999f, 2.8f, 1610.5f);
		EV_CameraAng(1, 0, 1717, 3783, 0);
		EV_CameraAng(1, 65, 1717, 16583, 0);
		EV_SetAng(sonic, 0, 13312, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "SSTSSS");
		EV_SerifPlay(869);
		EV_Msg(msgTbl_ev0063[TextLanguage][1]); //"\aI can't run as fast as you!"
		EV_ClrFace(player);
		EV_WaitMove(player);
		EV_SetAng(player, 0, 59904, 0);
		EV_CameraPos(1, 90, 346.5f, 2.8f, 1621.5f);
		EV_CameraAng(1, 90, 1717, 10203, 0);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[56], &AMY_TEXLIST, 0.80000001f, 0, 8);
		EV_WaitAction(player);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(20);
		EV_Wait(40);
		EV_MsgClose();
		EV_SetAng(sonic, 0, 12288, 0);
		EV_SetAng(player, 0, 53248, 0);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 6.0f,
			player->twp->pos.y + 4.0f,
			player->twp->pos.z + 1.0f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0x9000,
			(int)player->twp->pos.z);
		EV_CameraPos(1, 0, 337.39999f, 2.3f, 1594.0f);
		EV_CameraAng(0, 0, 65205, 31687, 0);
		EV_CameraPos(0, 60, 336.39999f, 4.5f, 1593.0f);
		EV_CameraAng(0, 60, 65205, 31943, 0);
		EV_Wait(30);
		EV_SetAction(sonic, &action_s_s0004_sonic, &SONIC_TEXLIST, 0.80000001f, 1, 8);
		EV_Wait(35);
		EV_LookObject(player, zero, -20.0f, 10.0f, 0.0f);
		EV_ClrFace(player);
		EV_SetFace(player, "IIII");
		EV_Wait(30);
		EV_SerifPlay(870);
		EV_Msg(msgTbl_ev0063[TextLanguage][2]); //"\aAhhh! Look, \nEggman's robot's on the"...
		EV_Wait(10);
		EV_ClrFace(player);
		EV_SetPos(zero, 331.79999f, 12.0f, 1336.2f);
		EV_SetAng(zero, 0, 0, 0);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 7.0f,
			player->twp->pos.y + 3.0f,
			player->twp->pos.z + 0.80000001f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0xA000,
			(int)player->twp->pos.z);
		EV_MovePoint2(zero, 326.79999f, 12.0f, 1547.54f, 0.5f, 0.1f);
		EV_CameraPos(0, 0, 334.79999f, 4.0999999f, 1626.6f);
		EV_CameraAng(0, 0, 3472, 45, 0);
		EV_CameraPos(0, 80, 334.79999f, 1.27f, 1625.6f);
		BGM_Play(MusicIDs_eggrobo);
		EV_SetAng(sonic, 0, 32000, 0);
		EV_SetAng(player, 0, 37376, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "IGGAG");
		EV_Wait(60);
		EV_ClrFace(player);
		EV_ClrAction(sonic);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 6.0f,
			player->twp->pos.y + 3.0f,
			player->twp->pos.z + 2.2f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0x4000,
			(int)player->twp->pos.z);
		EV_CameraPos(1, 0, 344.10001f, 4.3000002f, 1596.9f);
		EV_CameraAng(0, 0, 63925, 21191, 0);
		EV_CameraPos(1, 100, 346.10001f, 6.6999998f, 1616.5f);
		EV_CameraAng(0, 100, 437, 16071, 0);
		EV_SetPos(player, 338.89999f, 0.0f, 1617.2f);
		EV_SetAng(player, 0, 17664, 0);
		EV_SetPos(sonic, 329.39999f, 0.0f, 1608.2f);
		EV_LookFree(player);
		EV_LookPoint(player, 363.10001f, 22.799999f, 1612.2f);
		EV_LookFree(sonic);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "DDDD");
		EV_SerifPlay(871);
		EV_Msg(msgTbl_ev0063[TextLanguage][3]); //"\aDon't panic!   \nI'll handle that bag"...
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.5f, 0, 8);
		EV_SetAction(sonic, &action_s_s0042_sonic, &SONIC_TEXLIST, 0.42500001f, 0, 8);
		EV_SetAction(sonic, &action_s_s0001_sonic, &SONIC_TEXLIST, 0.25f, 0, 8);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_Wait(90);
		EV_ClrFace(sonic);
		EV_ClrFace(player);
		EV_SetFace(player, "IIII");
		EV_SerifPlay(872);
		EV_Msg(msgTbl_ev0063[TextLanguage][4]); // "\aAhhhhh!"
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_ClrFace(player);
		EV_Wait(10);
		EV_LookFree(sonic);
		EV_LookObject(sonic, player, 0.0f, 5.0f, 0.0f);
		EV_SetAction(player, &action_a_a0004_amy, &AMY_TEXLIST, 1.5f, 1, 8);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "GE");
		EV_SerifPlay(873);
		EV_Msg(msgTbl_ev0063[TextLanguage][5]); //"\aNow what's wrong?!"
		EV_Wait(30);
		EV_ClrFace(sonic);
		EV_MsgClose();
		BGM_Stop();
		BGM_Play(MusicIDs_theamy);
		EV_CameraPos(1, 0, 352.5f, 44.779999f, 1607.4f);
		EV_CameraAng(1, 0, 181, 49351, 0);
		EV_CameraPos(0, 120, 313.10999f, 15.53f, 1605.4f);
		EV_CameraAng(0, 100, 3253, 48940, 256);
		EV_SetPos(player, 366.98001f, 0.0f, 1575.95f);
		EV_SetAng(player, 0, 17740, 0);
		EV_LookPoint(player, 360.0f, 9.5f, 1587.0f);
		EV_SetAng(sonic, 0, 20480, 0);
		EV_LookFree(sonic);
		EV_SetAction(sonic, &action_s_s0044_sonic, &SONIC_TEXLIST, 0.60000002f, 0, 8);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.2f, 1, 8);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "G");
		EV_SerifPlay(874);
		EV_Msg(msgTbl_ev0063[TextLanguage][6]); //"\aHuh?"
		EV_Wait(120);
		EV_MsgClose();
		EV_CameraPos(0, 100, 311.0f, 5.8000002f, 1603.2f);
		EV_CameraAng(0, 100, 3765, 47559, 0);
		EV_Wait(15);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 4.0f,
			player->twp->pos.y + 3.0f,
			player->twp->pos.z + 2.0f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0x4000,
			(int)player->twp->pos.z);
		EV_Wait(15);
		EV_SetAction(player, &action_a_a0004_amy, &AMY_TEXLIST, 1.1f, 1, 16);
		EV_Wait(15);
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.1f, 1, 16);
		EV_ClrFace(sonic);
		EV_Wait(55);
		EV_CameraAng(0, 50, 2229, 50119, 0);
		EV_Wait(55);
		EV_CameraPos(1, 0, 361.09f, 6.1500001f, 1570.15f);
		EV_CameraAng(1, 0, 8117, 43975, 4864);
		EV_CameraPos(0, 130, 356.10001f, 0.52999997f, 1567.4f);
		EV_CameraAng(0, 130, 8117, 43975, 5632);
		EV_SetAng(sonic, 0, 25856, 0);
		EV_ClrFace(player);
		EV_SetFace(player, "IIGGAG");
		EV_SerifPlay(875);
		EV_Msg(msgTbl_ev0063[TextLanguage][7]); //"\aLook!   \nIt says cute couples can ge"...
		EV_Wait(170);
		EV_ClrFace(player);
		EV_LookFree(player);
		EV_LookFree(sonic);
		EV_SetAction(sonic, &action_s_s0018_sonic, &SONIC_TEXLIST, 0.5f, 1, 8);
		EV_CameraPos(1, 0, 357.10001f, 10.2f, 1609.3f);
		EV_CameraAng(0, 0, 62133, 11463, 512);
		EV_SetAng(sonic, 0, 0x4000, 0);
		EV_SetPos(player, 345.39999f, 0.0f, 1596.95f);
		EV_SetAng(player, 0, 56064, 0);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 5.5f,
			player->twp->pos.y + 3.0f,
			player->twp->pos.z + 5.0f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0xC000,
			(int)player->twp->pos.z);
		moveObjectOnAngle(obj_wing2, 4.5f, 3.0f, 5.0f, 0, 20480, 0, 200, player);
		EV_LookObject(player, sonic, 0.0f, 5.0f, 0.0f);
		EV_LookObject(sonic, player, 0.0f, 5.0f, 0.0f);
		EV_SetPos(zero, 326.79999f, 0.0f, 1330.54f);
		EV_SetAction(player, &action_a_a0004_amy, &AMY_TEXLIST, 1.5f, 1, 8);
		EV_ClrFace(player);
		EV_SetFace(player, "PPPG");
		EV_SerifPlay(876);
		EV_Msg(msgTbl_ev0063[TextLanguage][8]); //"\aWhat are we waiting for?"
		EV_Wait(50);
		EV_CameraPos(1, 80, 359.39999f, 4.3000002f, 1611.9f);
		EV_CameraAng(1, 80, 65205, 9927, 512);
		EV_LookFree(player);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.1f, 1, 8);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 4.5f,
			player->twp->pos.y + 3.0f,
			player->twp->pos.z + 5.0f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0x8000,
			(int)player->twp->pos.z);
		EV_PlayPad(0, &RUN_ELV);
		EV_ClrFace(player);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 4.5f,
			player->twp->pos.y + 3.0f,
			player->twp->pos.z + 5.0f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0x8000,
			(int)player->twp->pos.z);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "GCCC");
		EV_SerifPlay(877);
		EV_Msg(msgTbl_ev0063[TextLanguage][9]); //"\aAmy!   Wai-wai-wai-wait!"
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0017_sonic, &SONIC_TEXLIST, 0.60000002f, 0, 8);
		EV_WaitAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[2], &SONIC_TEXLIST, 1.2f, 1, 0);
		EV_Wait(45);
		EV_SetAction(sonic, &action_s_s0013_sonic, &SONIC_TEXLIST, 0.5f, 0, 0);
		EV_SetAction(sonic, SONIC_ACTIONS[2], &SONIC_TEXLIST, 1.5f, 1, 0);
		EV_ClrFace(sonic);
		EV_SetFace(sonic, "TCCC");
		EV_SerifPlay(878);
		EV_Msg(msgTbl_ev0063[TextLanguage][10]); //"\aI give up.   She's so weird!"
		EV_Wait(40);
		EV_SerifWait();
		EV_SetAction(sonic, SONIC_ACTIONS[4], &SONIC_TEXLIST, 1.2f, 1, 8);
		EV_Wait(25);
		EV_MovePoint2(sonic,
			player->twp->pos.x - 5.0f,
			player->twp->pos.y,
			player->twp->pos.z - 5.0f,
			0.69999999f, 0.059999999f);
		EV_ClrFace(sonic);
		EV_MsgClose();
		EV_SetAction(player, &action_a_a0004_amy, &AMY_TEXLIST, 1.5f, 1, 8);
		EV_Wait(60);
		EV_CameraPos(1, 0, 341.5f, 0.99000001f, 1587.6f);
		EV_CameraAng(0, 0, 4094, 44985, 65280);
		EV_SetAng(sonic,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y,
			(int)player->twp->pos.z);
		EV_CameraPos(1, 120, 318.70001f, 59.0f, 1579.8f);
		EV_Wait(30);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 0, 8);
		EventSe_Play(1, 1333, 1800);
		EventSe_Volume(1, 110, 1);
		EventSe_Pan(1, -20, 1);
		seqVars[2] = 3;
		EV_Wait(60);
		EventSe_Volume(1, -50, 30);
		EV_Wait(30);
		EV_CameraPos(0, 0, 411.28f, 63.200001f, 1671.4f);
		EV_CameraTargetObj(1, 0, player, 0.0f, 5.0f, 0.0f, 0);
		EventSe_Stop(1);
		EV_SetPos(player, 399.79999f, 50.0f, 1650.54f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetPos(obj_wing2,
			player->twp->pos.x + 8.5f,
			player->twp->pos.y + 3.0f,
			player->twp->pos.z - 4.0f);
		EV_SetAng(obj_wing2,
			(int)player->twp->pos.x,
			(int)player->twp->pos.y + 0x1400,
			(int)player->twp->pos.z);
		moveObjectOn(obj_wing2, 5.5f, 3.0f, -4.0f, 200, player);
		EV_SetAction(player, &action_a_a0015_amy, &AMY_TEXLIST, 1.2f, 1, 16);
		EV_CameraPos(0, 60, 409.28f, 70.199997f, 1667.4f);
		EV_ClrAction(player);
		EV_SetAction(player, AMY_ACTIONS[44], &AMY_TEXLIST, 1.1f, 1, 16);
		EV_Wait(5);
		EV_MovePoint2(player, 401.29999f, 50.0f, 1742.8f, 0.80000001f, 0.60000002f);
		EV_Wait(60);
		EV_CameraPos(0, 80, 409.5f, 56.400002f, 1655.0f);
		EV_MsgClose();
		if (BLACKOUT)
		{
			COverlaySetSpeed(BLACKOUT, 0.02f);
		}
		EV_Wait(60);
		EV_WaitMove(sonic);
		EV_ClrAction(sonic);
		EV_CameraTargetFree();
		stopObjectAll();
		break;
	case 2:
		if (seqsaved)
		{
			seqVars[483] = seqstore;
			seqsaved = 0;
		}
		EV_InitPlayer(0);
		EV_InitPlayer(2);
		EV_InitPlayer(3);
		EV_SerifStop();
		EventSe_Close();
		stopObject(obj_wing2);
		stopObjectAll();
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_FreeObject(&obj_wing2);
		if (BLACKOUT)
		{
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		EV_SetPos(player, 547.5f, 50.5f, 1771.6f);
		EV_SetAng(player, 0, 0x4000, 0);
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}