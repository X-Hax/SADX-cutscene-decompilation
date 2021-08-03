#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev00C1_e_sonic(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		BLACKOUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BLACKOUT = COverlayCreate(-1.0e-32f, 1.0f, 0.0f, 0.0f, 0.0f);
		EV_InitPlayer(0);
		EV_SetPos(player, -5.5999999f, 1528.6f, 3504.3f);
		EV_SetAng(player, 0, 36864, 0);
		EV_ClrAction(player);
		EV_SetAction(player, E102_ACTIONS[1], &E102_TEXLIST, 1.0f, 0, 0);
		EV_SetAction(player, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(3, MilesTalesPrower, 13.0f, 1525.0f, 3385.0f, 0, 0, 0);
		EV_CreatePlayer(4, SonicTheHedgehog, 0.0f, 1525.0f, 3380.0f, 0, 0x8000, 0);
		EV_CreatePlayer(5, AmyRose, -20.0f, 1525.6f, 3292.6599f, 0, 19312, 0);
		EV_Wait(1);
		tails = EV_GetPlayer(3);
		EV_SetPos(tails, 13.0f, 1525.0f, 3385.0f);
		EV_SetAng(tails, 0, 0, 0);
		sonic = EV_GetPlayer(4);
		EV_SetPos(sonic, 0.0f, 1525.8f, 3370.0f);
		EV_SetAng(sonic, 0, 0, 0);
		amy = EV_GetPlayer(5);
		EV_SetPos(amy, -9.0f, 1525.6f, 3290.6599f);
		EV_SetAng(amy, 0, 0, 0);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, &action_s_s0006_sonic, &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0010_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_LookObject(sonic, amy, 16.0f, 16.0f, 0.0f);
		EV_LookObject(amy, player, 0.0f, 14.0f, 0.0f);
		create_eggmoble(18.799999f, 1533.1f, 3288.6001f, 0, 0x4000, 0);
		EV_Wait(1);
		seqVars[391] = 1;
		seqVars[44] = 2;
		BGM_Play(MusicIDs_egcarer1);
		EV_Wait(20);
		if (BLACKOUT)
		{
			COverlaySetSpeed(BLACKOUT, -0.016000001f);
		}
		EV_CameraPos(0, 0, 0.89999998f, 1530.8101f, 3441.0f);
		EV_CameraAng(0, 0, 65232, 64225, 0);
		EV_CameraPos(0, 85, 0.89999998f, 1541.8101f, 3441.0f);
		EV_Wait(85);
		EV_CameraPos(0, 3, 0.89999998f, 1542.8101f, 3441.0f);
		EV_CameraAng(0, 3, 0, 64225, 0);
		EV_Wait(3);
		EV_CameraPos(0, 3, 0.89999998f, 1541.8101f, 3441.0f);
		EV_CameraAng(0, 3, 65232, 64225, 0);
		EV_Wait(3);
		EV_CameraPos(0, 3, 0.89999998f, 1542.01f, 3441.0f);
		EV_CameraAng(0, 3, 65280, 64225, 0);
		EV_Wait(3);
		EV_CameraPos(0, 3, 0.89999998f, 1541.8101f, 3441.0f);
		EV_CameraAng(0, 3, 65232, 64225, 0);
		EV_Wait(3);
		EV_CameraAng(1, 25, 64464, 64225, 0);
		EV_Wait(40);
		seqVars[44] = 1;
		EV_SetPos(player, 0.0f, 1544.4f, 3457.8f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CameraPos(0, 0, 0.1f, 1547.7f, 3432.8999f);
		EV_CameraAng(0, 0, 58829, 32257, 0);
		EV_Wait(6);
		EV_CameraPos(1, 40, 0.69999999f, 1539.4f, 3422.23f);
		EV_CameraAng(1, 40, 2909, 32257, 0);
		EV_Wait(50);
		EV_CameraPos(0, 90, 2.1800001f, 1531.8f, 3408.23f);
		EV_CameraAng(0, 90, 2909, 32257, 0);
		EV_Wait(90);
		EV_CameraPos(0, 0, 42.099998f, 1527.6f, 3417.3999f);
		EV_CameraAng(0, 0, 1169, 6898, 512);
		EV_SetPos(player, 4.0f, 1546.6f, 3405.3f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_SerifPlay(1276);
		EV_Msg(msgTbl_ev00C1[TextLanguage][0]); //"\aHow can I serve you, Dr. Robotnik?"
		EV_CameraPos(0, 120, 20.15f, 1528.1f, 3422.8f);
		EV_CameraAng(0, 120, 3217, 4594, 0);
		EV_LookObject(tails, player, 0.0f, 11.0f, 0.0f);
		EV_LookObject(sonic, player, 0.0f, 11.0f, 0.0f);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(40);
		if (BLACKOUT)
		{
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		EV_SetPos(player, 4.0f, 1530.6f, 3405.3f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_SetAction(amy, &action_a_a0010_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_CameraPos(0, 0, 28.200001f, 1551.3101f, 3289.3f);
		EV_CameraAng(0, 0, 60561, 14561, 0);
		EV_SerifPlay(1277);
		EV_Msg(msgTbl_ev00C1[TextLanguage][1]); //"\aEradicate all of those menaces!"
		EV_CameraPos(0, 40, 26.440001f, 1550.3f, 3289.1001f);
		EV_CameraAng(0, 0, 60305, 14561, 0);
		EV_SerifWait();
		EV_LookFree(tails);
		EV_LookObject(tails, player, 0.0f, 15.0f, 0.0f);
		EV_LookFree(sonic);
		EV_LookObject(sonic, player, 0.0f, 15.0f, 0.0f);
		EV_SerifPlay(1278);
		EV_Msg(msgTbl_ev00C1[TextLanguage][2]); //"\aGive them all you got!"
		EV_CameraPos(1, 0, 29.870001f, 1528.4f, 3367.8999f);
		EV_CameraAng(1, 0, 1425, 25569, 0);
		EV_CameraPos(1, 90, 6.5f, 1528.4f, 3355.1001f);
		EV_CameraAng(1, 90, 1425, 31713, 0);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, 3.6199999f, 1530.7f, 3370.1001f);
		EV_CameraAng(1, 0, 3195, 32877, 0);
		EV_CameraPos(0, 55, 3.8f, 1534.7f, 3382.5f);
		EV_CameraAng(0, 55, 3195, 32877, 0);
		EV_SerifPlay(1279);
		EV_Msg(msgTbl_ev00C1[TextLanguage][3]); //"\aAye aye, sir.   I will comply."
		EV_SerifWait();
		EV_CameraPos(0, 0, 19.700001f, 1526.8f, 3417.0f);
		EV_CameraAng(0, 0, 2850, 4628, 0);
		EV_SerifPlay(1280);
		EV_Msg(msgTbl_ev00C1[TextLanguage][4]); // "\aI'm counting on you, Gamma!"
		eggmoble_move_normal(18.799999f, 1552.1f, 3288.6001f, 43);
		EV_Wait(1);
		EV_CameraPos(0, 160, 20.76f, 1535.4f, 3419.2f);
		EV_CameraAng(0, 160, 2594, 4628, 0);
		EV_Wait(50);
		EV_MsgClose();
		eggmoble_turn(0, -16384, 0, 50, 0);
		EV_Wait(54);
		eggmoble_moveandturn(-74.300003f, 1570.5f, 3240.8999f, 0, -16384, 0, 85, 0);
		EV_Wait(89);
		ChgEggMobleSMod(1);
		EV_Wait(1);
		eggmoble_move_normal(-186.8f, 1605.9f, 2450.3999f, 130);
		EV_Wait(130);
		EV_MsgClose();
		EV_Wait(30);
		break;
	case 2:
		EV_SetPos(player, 0.0f, 1525.0f, 3415.0f);
		EV_SetAng(player, 0, -32768, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(5);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		delete_eggmoble();
		if (BLACKOUT)
		{
			FreeTask(BLACKOUT);
			BLACKOUT = 0;
		}
		seqVars[44] = 2;
		seqVars[43] = 1;
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}