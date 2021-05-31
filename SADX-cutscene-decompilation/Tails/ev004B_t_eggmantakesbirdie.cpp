#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev004B_t_eggmantakesbirdie(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_InitPlayer(0);
		SetBankDir(90);
		EventSe_Init(5);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		BGM_Play(MusicIDs_egcarer1);
		seqVars[207] = 1;
		seqVars[44] = 2;
		EV_CreateObject(&emerald, -547.33002f, -0.5f, 973.90002f, 0, 0, 0);
		EV_SetMode(emerald, 0);
		create_eggmoble(22.799999f, 1535.0f, 3231.6001f, 0, 2304, 0);
		EV_CameraPerspective(1, 1, 12743);
		EV_SetPos(player, -4.1760001f, 1495.0f, 3444.76f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);

		//Sonic has the same attempt to put him in front of the elevator as Tails in Sonic's version.
		if (enableUnusedCode) {
			EV_CreatePlayer(3, Sonic_Main, 14.0f, 1525.6f, 3427.0f, 0, 0x8000, 0);
		}
		else {
			EV_CreatePlayer(3, Sonic_Main,
				player->Data1->Position.x + 8.0f,
				player->Data1->Position.y - 4.0f,
				player->Data1->Position.z + 8.0f,
				0, 0x8000, 0);
		}

		EV_Wait(1);
		sonic = EV_GetPlayer(3);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);
		EV_CreatePlayer(5, Amy_Main, -15.0f, 1525.687f, 3245.5f, 0, 20448, 0);
		EV_CreatePlayer(4, Gamma_Main, -254.8f, 1525.67f, 3754.6001f, 0, 0x8000, 0);
		EV_Wait(1);
		e102 = EV_GetPlayer(4);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 0.1f, 1, 0);
		KOTORI = SetEventBirdie0();
		EV_SetPos(KOTORI, 0.0f, 5.5f, 0.0f);
		EV_SetAng(KOTORI, 0, 0x8000, 0);
		EV_SetMode(KOTORI, 0);
		amy = EV_GetPlayer(5);
		EV_SetPos(KOTORI,
			amy->Data1->Position.x,
			amy->Data1->Position.y,
			amy->Data1->Position.z);
		EV_SetAng(KOTORI, 0, 11804, 0);
		EV_ClrAction(KOTORI);
		EV_ClrAction(amy);
		EV_SetAction(KOTORI, &action_w_w0124_wing, &VER2_WING_TEXLIST, 1.0f, 1, 16);
		EV_SetAction(amy, &action_a_a0124_amy, &AMY_TEXLIST, 1.0f, 1, 16);
		ChgEggMobleMod(0);
		if (!enableUnusedCode) {
			EV_SetPos(sonic, -20.0f, 1525.0f, 3466.0f); //Hide Sonic behind the elevator.
		}
		EV_SetAng(player, 0, 30720, 0);
		EV_CameraAng(1, 0, 3072, 33024, 256);
		EV_CameraPos(1, 0, 1.4734f, 1578.6515f, 3399.8916f);
		EV_CameraPos(0, 200, 1.07292f, 1556.64f, 3406.5649f);
		seqVars[44] = 3;
		EV_Wait(68);
		EV_SetPos(player, 0.0f, 1528.7f, 3443.76f);
		EV_Wait(57);
		EV_CameraPos(0, 100, 0.75950003f, 1539.4207f, 3411.7881f);
		EV_Wait(60);
		EV_CameraAng(1, 0, 62976, 3072, 64768);
		EV_CameraPos(1, 0, 45.114521f, 1564.748f, 3467.55f);
		EV_CameraPos(1, 60, 10.503f, 1567.301f, 3477.116f);
		EV_Wait(56);
		EV_ClrAction(player);
		EV_PlayPad(0, &E004BT);
		EV_CameraAng(0, 90, 60416, 63744, 64512);
		EV_CameraPos(0, 90, -7.4000001f, 1579.79f, 3476.8479f);
		EV_Wait(50);
		EV_SetPos(player, -0.5f, 1526.0f, 3411.0f);
		EV_SetAction(player, MILES_ACTIONS[48], &MILES_TEXLIST, 2.5f, 1, 8);
		EV_SetPos(sonic, 9.5f, 1526.0f, 3421.0f);
		EV_SetAction(sonic, SONIC_ACTIONS[6], &SONIC_TEXLIST, 2.7f, 1, 8);
		EV_CameraPerspective(1, 1, 15474);
		EV_Wait(1);
		EV_CameraPos(1, 0, -5.4342999f, 1537.0f, 3423.655f);
		EV_CameraAng(1, 0, 62352, 64224, 256);
		EV_CameraChase(player);
		EV_MovePoint2(player, -2.0f, 1526.0f, 3344.6001f, 1.7f, 1.9f);
		EV_MovePoint2(sonic, 8.0f, 1526.0f, 3354.6001f, 1.5f, 1.9f);
		EV_CameraPerspective(0, 23, 12743);
		EV_Wait(25);
		EV_CameraChaseFree();
		EV_CameraAng(0, 38, 2560, 58448, 0);
		EV_CameraPos(0, 38, -24.799999f, 1526.15f, 3268.1001f);
		EV_CameraPerspective(0, 38, 7282);
		EV_MoveRotation(amy, 985, 15869, 0);
		EV_LookObject(amy, sonic, 0.0f, 4.0f, 0.0f);
		EV_ClrFace(amy);
		if (!VoiceLanguage)
		{
			EV_SetFace(amy, "CD");
		}
		if (VoiceLanguage == 1)
		{
			EV_SetFace(amy, "DF");
		}
		EV_SerifPlay(768);
		EV_Msg(msgTbl_ev004B[TextLanguage][0]); //"\aSonic!   Tails!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(amy);
		ChgEggMobleMod(5);
		EV_CameraPos(1, 0, 3.892f, 1550.1044f, 3235.406f);
		EV_CameraAng(1, 0, 63744, 51200, 0);
		EV_CameraPerspective(1, 1, 12561);
		EV_SerifPlay(769);
		EV_Msg(msgTbl_ev004B[TextLanguage][1]); //"\aHah!   \nYou're a bit late..."
		eggmoble = GetEggMobleTask();
		EV_SetAction(eggmoble, &action_gm_gm0035_eggmoble, &EV_EGGMOBLE0_TEXLIST, 2.0f, 0, 5);
		EV_CameraPos(1, 0, 14.495f, 1548.1829f, 3233.1963f);
		EV_WaitAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
		EV_Wait(30);
		EV_LookFree(amy);
		EV_LookPoint(amy, 39.0f, 1561.7f, 3226.2f);
		EV_MoveRotation(amy, 985, 15869, 0);
		EV_SetAng(KOTORI, 0, 20449, 0);
		EV_CameraChaseFree();
		EV_SetPos(player, -8.5f, 1526.0f, 3336.6001f);
		EV_ClrAction(player);
		ChgEggMobleMod(0);
		Mhand = mghand_init(-27.57f, 1558.1801f, 3221.0f, 0, 0, -16384);
		mghandsetspd(Mhand, 2304, 1536);
		EV_Wait(1);
		EV_CameraAng(1, 0, 59293, 12359, -256);
		EV_CameraPos(1, 0, 36.25f, 1557.0f, 3247.6499f);
		EV_CameraAng(1, 58, 2717, 12359, 65024);
		EV_CameraPos(1, 58, 47.529999f, 1526.6f, 3250.95f);
		EV_CameraPerspective(1, 58, 10923);
		EV_MsgClose();
		EventSe_Play(0, 1333, 1800);
		moveObjectAngle2(Mhand, -27.0f, 1558.2f, 3221.0f, -4.5f, 1525.0f, 3242.5f, 0, 0, -16384, -4096, 0, -9472, 30);
		EV_Wait(20);
		chgMghandMod(Mhand, 1);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0126_amy, &AMY_TEXLIST, 2.0f, 1, 0);
		moveObject(amy, -15.0f, 1525.687f, 3245.5f, -20.0f, 1525.687f, 3249.0f, 20);
		moveObjectOn(KOTORI, 0.0f, 0.0f, 0.0f, 10, amy);
		EV_Wait(10);
		EV_CameraPos(0, 90, 45.700001f, 1526.83f, 3255.6001f);
		chgMghandMod(Mhand, 2);
		EV_SetAction(amy, &action_a_a0001_amy, &AMY_TEXLIST, 1.0f, 0, 2);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_ClrFace(amy);
		EV_SetFace(amy, "F");
		EV_SerifPlay(770);
		EV_Msg(msgTbl_ev004B[TextLanguage][2]); //"\aNot the birdie!"
		stopObject(KOTORI);
		EV_SetPos(KOTORI, 42.549999f, 1536.0f, 3227.0f);
		moveObjectAngle2(Mhand, -4.5f, 1525.0f, 3242.5f, 8.0f, 1563.0f, 3221.0f, -4096, 0, -9472, -4096, 0, -9472, 28);
		EV_Wait(50);
		EventSe_Stop(0);
		EV_MsgClose();
		EV_MoveRotation(sonic, 0, 11776, 0);
		EV_LookFree(sonic);
		EV_LookPoint(sonic, 39.0f, 1561.7f, 3226.2f);
		EV_LookFree(amy);
		EV_SetPos(player, -5.0f, 1526.0f, 3304.8f);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(24);
		ChgEggMobleMod(5);
		EV_Wait(3);
		EV_ClrAction(KOTORI);
		EV_ClrAction(eggmoble);
		EV_SetAction(KOTORI, &action_w_w9006_wing, &VER2_WING_TEXLIST, 1.0f, 1, 3);
		EV_SetAction(eggmoble, &action_gm_gm9000_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(3);
		eggmoble_move_rapid(58.799999f, 1535.0f, 3230.0801f, 1);
		EV_CameraPerspective(0, 1, 12743);
		EV_CameraAng(1, 0, 60061, 51783, 65024);
		EV_CameraPos(1, 0, -34.57f, 1564.1f, 3256.8999f);
		EV_SetPos(amy, -12.6f, 1526.0f, 3233.0f);
		EV_SetAng(amy, 0, 0x4000, 0);
		EV_SetPos(player, 3.4300001f, 1526.4f, 3240.6201f);
		EV_SetAng(player, 0, 18829, 0);
		EV_SetPos(sonic, -6.3463001f, 1525.7273f, 3258.1814f);
		EV_SetAng(sonic, 0, 17408, 0);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(2);
		ChgEggMobleMod(5);
		EV_Wait(20);
		EventSe_Oneshot(1335, 0, 0, 0);
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0026_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 0);
		moveObject(KOTORI, 42.549999f, 1536.0f, 3227.0f, -12.864f, 1555.828f, 3227.0f, 60);
		EV_SetPos(emerald, 44.5f, 1527.5f, 3224.0f);
		EV_Wait(18);
		stopObjectAll();
		EV_Wait(1);
		EV_SetAng(KOTORI, 2560, 48896, 0);
		EV_ClrAction(KOTORI);
		EV_SetAction(KOTORI, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		moveObject(KOTORI, 61.099998f, 1580.0f, 3203.0f, -30.6f, 1537.0f, 3233.0f, 250);
		EV_Wait(1);
		EV_LookPoint(sonic, 58.799999f, 1545.0f, 3230.0801f);
		EV_LookPoint(amy, 58.799999f, 1545.0f, 3230.0801f);
		EV_CameraPerspective(1, 1, 9102);
		EV_ClrAction(eggmoble);
		EV_ClrAction(emerald);
		EV_SetAction(eggmoble, &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.2f, 1, 0);
		EV_SetAction(emerald, &action_gm_gm0023cs_m_em_sky, &M_EM_SKY_TEXLIST, 0.2f, 1, 0);
		EV_CameraAng(1, 0, 59296, 21584, 0);
		EV_CameraPos(1, 0, 73.545998f, 1566.08f, 3216.552f);
		EV_CameraPos(0, 90, 67.0f, 1561.0f, 3220.1001f);
		EV_ClrFace(player);
		EV_SetFace(player, "F");
		EV_SerifPlay(771);
		EV_Msg(msgTbl_ev004B[TextLanguage][4]); //"\aThat's a Chaos Emerald!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.40000001f, 1, 0);
		EV_CameraPerspective(0, 60, 12743);
		EV_CameraAng(1, 0, 925, 54855, 65024);
		EV_CameraPos(1, 0, -17.9f, 1533.323f, 3247.6001f);
		EV_CameraAng(0, 110, 3741, 58183, 1280);
		EV_CameraPos(0, 110, -1.4646f, 1527.95f, 3254.6201f);
		EV_ClrFace(amy);
		EV_SetFace(amy, "IJ");
		EventSe_Oneshot(1338, 0, 0, 0);
		EV_SerifPlay(772);
		EV_Msg(msgTbl_ev004B[TextLanguage][5]); //"\aNo way!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(amy);
		EV_MsgClose();
		EV_Wait(20);
		EV_CameraAng(1, 0, 6912, 47872, 0);
		EV_CameraPos(1, 0, 50.799999f, 1545.0f, 3228.0f);
		EV_CameraAng(0, 80, 6912, 53248, 0);
		EV_CameraPos(0, 80, 52.220001f, 1545.0f, 3234.0f);
		EV_SerifPlay(773);
		EV_Msg(msgTbl_ev004B[TextLanguage][6]); //"\aBe gone!   All of you!\nThis is all I"...
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(1);
		task_skywalk = CSkyWalk_create2(e102, 1540.0f);
		EV_Wait(1);
		EV_SetPos(e102, 0.0f, 1556.0f, 3459.0f);
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0035_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.40000001f, 0, 6);
		EV_CameraPos(1, 20, 55.560001f, 1547.075f, 3231.04f);
		EV_SerifPlay(774);
		EV_Msg(msgTbl_ev004B[TextLanguage][7]); //"\aGamma!"
		EV_Wait(1);
		EV_SerifWait();
		EV_FreeObject(&emerald);
		EV_MsgClose();
		EV_Wait(10);
		EV_CameraPos(1, 0, -0.41780999f, 1555.942f, 3449.4482f);
		EV_CameraAng(1, 0, 4608, 33792, 0);
		EventSe_Oneshot(1336, 0, 0, 0);
		EV_SerifPlay(775);
		EV_Msg(msgTbl_ev004B[TextLanguage][8]); //"\aWhat is your wish, master?"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, 21.469999f, 1525.46f, 3417.8f);
		EV_CameraAng(1, 0, 7168, 25344, 0);
		EV_Wait(26);
		EV_SetPos(Mhand, -34.0f, 1420.0f, 3255.0f);
		EV_SetPos(player, -1.0f, 1526.0f, 3275.864f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetPos(sonic, 10.26f, 1526.0f, 3256.78f);
		EV_SetAng(sonic, 0, 0, 0);
		EV_LookFree(player);
		EV_LookFree(sonic);
		EV_LookFree(amy);
		EV_MoveRotation(amy, 0, 768, 0);
		eggmoble_turn(0, 13312, 0, 10, 0);
		EV_CameraPos(0, 30, 12.4f, 1525.46f, 3409.97f);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[15], &E102_TEXLIST, 1.0f, 0, 0);
		if(task_skywalk){
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		moveObject(e102, 0.0f, 1546.0f, 3459.0f, 0.0f, 1560.0f, 3426.0f, 25);
		EV_Wait(85);
		EV_ClrAction(e102);
		EV_Wait(75);
		EV_SetPos(e102, 0.0f, 1524.0f, 3415.0f);
		EV_CameraPos(1, 0, -1.0f, 1539.4f, 3431.0f);
		EV_CameraAng(1, 0, 1024, 0, 0);
		EV_CameraPerspective(0, 1, 8556);
		EV_CameraPos(0, 100, -1.0f, 1528.46f, 3431.0801f);
		EV_Wait(110);
		EV_CameraPos(1, 0, -2.68891f, 1550.277f, 3246.7524f);
		EV_CameraAng(1, 0, 62336, 0x8000, 0);
		EV_SerifPlay(776);
		EV_Msg(msgTbl_ev004B[TextLanguage][9]); //"\aGet rid of these pests!"
		EV_Wait(1);
		EV_SerifWait();
		EV_CameraPos(0, 130, -1.4263099f, 1535.3641f, 3259.5923f);
		EV_CameraAng(0, 130, 64896, 32512, 0);
		EV_Wait(1);
		EV_SerifPlay(777);
		EV_Msg(msgTbl_ev004B[TextLanguage][10]); //"\aGive them all you got."
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(1);
		EV_CameraAng(1, 0, 60050, 32726, 0);
		EV_CameraPos(1, 0, 0.0f, 1550.1801f, 3398.0f);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(778);
		EV_Msg(msgTbl_ev004B[TextLanguage][11]); //"\aAye aye, master Robotnik!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 10012);
		EV_CameraAng(1, 0, 63890, 61654, 0);
		EV_CameraPos(1, 0, -9.3699999f, 1532.78f, 3298.74f);
		EV_SerifWait();
		EV_Wait(10);
		EV_SerifPlay(779);
		EV_Msg(msgTbl_ev004B[TextLanguage][12]); //"\aI'll leave it up to you,\nGamma..."
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraAng(1, 80, 914, 57046, 0);
		EV_LookPoint(player, 90.0f, 1567.7f, 3270.0f);
		EV_LookPoint(sonic, 90.0f, 1567.7f, 3270.0f);
		EV_LookPoint(amy, 90.0f, 1567.7f, 3270.0f);
		eggmoble_moveandturn(94.459999f, 1561.5475f, 3267.0f, 0, 33280, 0, 70, 1);
		EV_Wait(72);
		EV_MsgClose();
		EventSe_Play(1, 1337, 1800);
		ChgEggMobleSMod(1);
		EV_Wait(1);
		eggmoble_move_normal(126.0f, 1533.0f, 2759.8569f, 80);
		EV_Wait(37);
		EventSe_Volume(1, -80, 35);
		EV_LookFree(player);
		EV_LookFree(sonic);
		EV_LookFree(amy);
		EV_SetAction(sonic, &action_s_s0009_sonic, &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(0, 60, -9.3699999f, 1532.78f, 3298.74f);
		EV_CameraAng(0, 60, 914, 61142, 64512);
		EV_Wait(70);
		EventSe_Stop(1);
		EV_CameraPos(1, 0, 14.37f, 1531.0f, 3380.3501f);
		EV_CameraAng(1, 0, 2450, 25046, 0);
		EV_CameraPos(0, 70, 25.040001f, 1529.1366f, 3393.1899f);
		EV_CameraAng(0, 70, 2450, 23510, 0);
		EV_Wait(20);
		EV_SetAction(e102, E102_ACTIONS[1], &E102_TEXLIST, 0.69999999f, 0, 16);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(70);
		EV_CameraPos(1, 0, 6.4200001f, 1528.02f, 3284.7261f);
		EV_CameraAng(1, 0, 1938, 9942, 0);
		EV_CameraPos(0, 80, 11.6f, 1527.65f, 3280.47f);
		EV_CameraAng(0, 80, 1938, 12502, 0);
		EV_Wait(100);
		EV_LookFree(player);
		EV_Wait(10);
		break;
	case 2:
		seqVars[44] = 2;
		EventSe_Close();
		stopObjectAll();
		if(task_skywalk){
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		EV_RemovePlayer(5);
		EV_SetPos(player, 0.0f, 1525.0f, 3415.0f);
		EV_SetAng(player, 0, -32768, 0);
		EV_InitPlayer(0);
		EV_FreeObject(&emerald);
		EV_FreeObject(&KOTORI);
		if(Mhand){
			FreeTask(Mhand);
			Mhand = 0;
		}
		delete_eggmoble();
		seqVars[43] = 1;
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}