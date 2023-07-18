#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev001A[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("MGHAND"), &MGHAND_TEXLIST,
	(char*)("M_EM_SKY"), &M_EM_SKY_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	0
};

void ev001A_s_eggmantakesbirdie(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(80);
		EventSe_Init(5);
		BGM_Play(MusicIDs_egcarer1);
		seqVars[144] = 1; //FLAG_EC_GATE_A_CTRL
		seqVars[44] = 2; //FLAG_EC_EGGLIFT_CTRL
		EV_CreateObject(&emerald, -547.33002f, -0.5f, 973.90002f, 0, 0, 0);
		EV_SetMode(emerald, 0);
		create_eggmoble(22.799999f, 1535.0f, 3231.6001f, 0, 0x900, 0);
		EV_CameraPerspective(1, 1, 0x31C7);
		EV_SetPos(player, -4.1760001f, 1495.0f, 3444.76f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_ClrAction(player);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 0);

		if (enableUnusedCode) {
			EV_CreatePlayer(3, MilesTalesPrower, 14.0f, 1525.6f, 3427.0f, 0, 0x8000, 0);
			EV_Wait(1);
			EV_InitPlayer(3);
			tails = EV_GetPlayer(3);
			EV_ClrAction(tails);
			EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		}
		else {
			EV_CreatePlayer(3, MilesTalesPrower,
				player->twp->pos.x + 8.0f,
				player->twp->pos.y - 4.0f,
				player->twp->pos.z + 8.0f,
				0, 0x8000, 0);
		}

		EV_CreatePlayer(4, E102, -254.8f, 1525.67f, 3754.6001f, 0, 0x8000, 0);
		if (enableUnusedCode) {
			EV_Wait(1);
			e102 = EV_GetPlayer(4);
			EV_ClrAction(e102);
			EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 0.25f, 1, 0); //A slower standing animation for the darkened shot of him.
		}

		EV_CreatePlayer(5, AmyRose, -15.0f, 1525.687f, 3245.5f, 0, 20448, 0);
		BLACK = COverlayCreate(1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		WING = SetEventBirdie0();
		EV_SetPos(WING, 0.0f, 5.5f, 0.0f);
		EV_SetAng(WING, 0, 0x8000, 0);
		EV_Wait(1);
		EV_SetMode(WING, 0);
		amy = EV_GetPlayer(5);
		EV_SetPos(WING,
			amy->twp->pos.x,
			amy->twp->pos.y,
			amy->twp->pos.z);
		EV_SetAng(WING, 0, 11804, 0);
		EV_ClrAction(WING);
		EV_ClrAction(amy);
		EV_SetAction(WING, &action_w_w0124_wing, &VER2_WING_TEXLIST, 1.0f, 1, 16);
		EV_SetAction(amy, &action_a_a0124_amy, &AMY_TEXLIST, 1.0f, 1, 16);
		EV_CameraAng(1, 0, 0xA90, 0xFE0, 0xFF00);
		EV_CameraPos(1, 0, 1.7386f, 1526.6f, 3458.6001f);
		EV_CameraPos(0, 40, 1.7386f, 1546.6f, 3458.6001f);
		seqVars[44] = 3; //FLAG_EC_EGGLIFT_CTRL
		EV_Wait(48);
		COverlaySetSpeed(BLACK, -0.06666667f);
		EV_Wait(20);
		ChgEggMobleMod(0);
		EV_CameraChaseFree();
		EV_SetPos(player, 0.58499998f, 1528.7f, 3442.6001f);
		EV_SetAng(player, 0, 0x8000, 0);
		tails = EV_GetPlayer(3);
		if (!enableUnusedCode) EV_SetPos(tails, 6.3000002f, 1525.7f, 3041.0f); //Hide Tails in a spot behind Amy and Eggman
		EV_CameraAng(1, 0, 0x1100, 0x6F00, 0x100);
		EV_CameraPos(1, 0, 52.855f, 1527.0f, 3423.7871f);
		EV_CameraPos(0, 90, 15.58f, 1527.87f, 3406.7529f);
		EV_Wait(68);
		EV_CameraPos(0, 90, 12.85f, 1527.9399f, 3405.5f);
		EV_Wait(60);
		EV_CameraAng(1, 59, 0xF000, 0x800, 0xFC00);
		EV_CameraPos(1, 59, 5.4555998f, 1555.6f, 3455.6399f);
		EV_Wait(56);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV01AS4);
		EV_CameraAng(0, 90, 0xEC00, 0xF900, 0xFC00);
		EV_CameraPos(0, 90, -7.4000001f, 1579.79f, 3476.8479f);
		EV_Wait(52);
		EV_SetPos(player, -0.5f, 1526.0f, 3411.0f);
		EV_SetAction(player, SONIC_ACTIONS[6], &SONIC_TEXLIST, 2.7f, 1, 8);
		EV_SetPos(tails, 9.5f, 1526.0f, 3421.0f);
		if (enableUnusedCode) EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[48], &MILES_TEXLIST, 2.5f, 1, 8);
		EV_CameraPerspective(1, 1, 0x3C72);
		EV_Wait(1);
		EV_CameraPos(1, 0, -5.4342999f, 1537.0f, 3423.655f);
		EV_CameraAng(1, 0, 0xF390, 0xFAE0, 0x100);
		EV_CameraChase(player);
		EV_MovePoint2(player, -2.0f, 1526.0f, 3344.6001f, 1.7f, 1.9f);
		EV_MovePoint2(tails, 8.0f, 1526.0f, 3354.6001f, 1.5f, 1.9f);
		EV_CameraPerspective(0, 23, 0x31C7);
		EV_Wait(25);
		EV_CameraChaseFree();
		EV_CameraAng(0, 38, 0xA00, 0xE450, 0);
		EV_CameraPos(0, 38, -24.799999f, 1526.15f, 3268.1001f);
		EV_CameraPerspective(0, 38, 0x1C72);
		EV_MoveRotation(amy, 0x3D9, 0x3DFD, 0);
		EV_LookObject(amy, player, 0.0f, 4.0f, 0.0f);
		EV_ClrFace(amy);
		EV_SerifPlay(536);
		EV_SetFace(amy, "EM");
		EV_Msg((msgTbl_ev001A[TextLanguage])[0]); //"\aSonic!"
		EV_Wait(20);
		EV_CameraAng(0, 45, 0xA00, 0xDA50, 0);
		EV_CameraPos(0, 45, -30.6f, 1526.15f, 3262.6201f);
		EV_SerifWait();
		EV_MsgClose();
		ChgEggMobleMod(5);
		EV_CameraPerspective(0, 1, 0x271C);
		EV_CameraAng(1, 0, 0xC20, 0xE150, 0xFB00);
		EV_CameraPos(1, 0, 19.639999f, 1546.0f, 3238.4441f);
		EV_CameraAng(0, 30, 0xE20, 0xC050, 0xFB00);
		EV_CameraPos(0, 30, 14.55f, 1545.3f, 3230.27f);
		EV_SerifPlay(537);
		EV_Msg((msgTbl_ev001A[TextLanguage])[1]); //"\aHuh!   They're too late!"
		eggmoble = GetEggMobleTask();
		EV_SetAction(eggmoble, &action_gm_gm0035_eggmoble, &EV_EGGMOBLE0_TEXLIST, 2.0f, 0, 5);
		EV_WaitAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0020_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 8);
		EV_CameraAng(0, 40, 0xDDB, 0xBBB7, 0xFB00);
		EV_CameraPos(0, 40, 15.13f, 1545.6f, 3229.3799f);
		EV_Wait(30);
		EV_LookFree(amy);
		EV_LookPoint(amy, 39.0f, 1561.7f, 3226.2f);
		EV_MoveRotation(amy, 0x3D9, 0x3DFD, 0);
		EV_SetAng(WING, 0, 20449, 0);
		EV_CameraChaseFree();
		EV_SetPos(player, -8.5f, 1526.0f, 3336.6001f);
		EV_ClrAction(player);
		seqVars[44] = 2; //FLAG_EC_EGGLIFT_CTRL
		ChgEggMobleMod(0);
		Mhand = mghand_init(-27.57f, 1558.1801f, 3221.0f, 0, 0, -0x4000);
		mghandsetspd(Mhand, 0x900, 0x600);
		EV_Wait(1);
		EV_CameraAng(1, 0, 0xE79D, 0x3047, -256);
		EV_CameraPos(1, 0, 36.25f, 1557.0f, 3247.6499f);
		EV_CameraAng(1, 58, 0xA9D, 0x3047, 0xFE00);
		EV_CameraPos(1, 58, 47.529999f, 1526.6f, 3250.95f);
		EV_CameraPerspective(1, 58, 0x2AAB);
		EV_MsgClose();
		EventSe_Play(0, 1336, 1800);
		moveObjectAngle2(Mhand, -27.0f, 1558.2f, 3221.0f, -4.5f, 1525.0f, 3242.5f, 0, 0, -0x4000, -0x1000, 0, -0x2500, 30);
		EV_Wait(20);
		chgMghandMod(Mhand, 1);
		EV_ClrAction(amy);
		EV_SetAction(amy, &action_a_a0126_amy, &AMY_TEXLIST, 2.0f, 1, 0);
		moveObject(amy, -15.0f, 1525.687f, 3245.5f, -20.0f, 1525.687f, 3249.0f, 20);
		moveObjectOn(WING, 0.0f, 0.0f, 0.0f, 10, amy);
		EV_Wait(10);
		EV_CameraPos(0, 90, 45.700001f, 1526.83f, 3255.6001f);
		chgMghandMod(Mhand, 2);
		EV_SetAction(amy, &action_a_a0001_amy, &AMY_TEXLIST, 1.0f, 0, 2);
		EV_SetAction(amy, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_SerifPlay(538);
		EV_SetFace(amy, "E");
		EV_Msg((msgTbl_ev001A[TextLanguage])[2]); //"\aNot the birdie!"
		stopObject(WING);
		EV_SetPos(WING, 42.549999f, 1536.0f, 3227.0f);
		moveObjectAngle2(Mhand, -4.5f, 1525.0f, 3242.5f, 8.0f, 1563.0f, 3221.0f, -0x1000, 0, -0x2500, -0x1000, 0, -0x2500, 28);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV001AS3);
		EV_Wait(30);
		EventSe_Stop(0);
		EV_Wait(50);
		EV_MsgClose();
		EV_MoveRotation(player, 0, 0x2E00, 0);
		EV_SetAction(player, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_LookFree(player);
		EV_LookPoint(player, 39.0f, 1561.7f, 3226.2f);
		EV_LookFree(amy);
		EV_SetPos(tails, -5.0f, 1526.0f, 3304.8f);
		EV_ClrAction(tails);
		EV_Wait(24);
		ChgEggMobleMod(5);
		EV_Wait(3);
		EV_ClrAction(WING);
		EV_ClrAction(eggmoble);
		EV_SetAction(WING, &action_w_w9006_wing, &VER2_WING_TEXLIST, 1.0f, 1, 3);
		EV_SetAction(eggmoble, &action_gm_gm9000_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		EV_Wait(3);
		eggmoble_move_rapid(58.799999f, 1535.0f, 3230.0801f, 1);
		EV_CameraPerspective(0, 1, 0x31C7);
		EV_CameraAng(1, 0, 60061, 0xCA47, 0xFE00);
		EV_CameraPos(1, 0, -34.57f, 1564.1f, 3256.8999f);
		EventSe_Play(1, 1338, 1800);
		EV_SetPos(amy, -12.6f, 1526.0f, 3233.0f);
		EV_SetAng(amy, 0, 0x4000, 0);
		EV_SetPos(player, 3.4300001f, 1526.4f, 3240.6201f);
		EV_SetAng(player, 0, 0x498D, 0);
		EV_Wait(1);
		EV_Wait(1);
		ChgEggMobleMod(5);
		EV_SetAction(tails, MILES_ACTIONS[48], &MILES_TEXLIST, 1.5f, 1, 8);
		EV_MovePoint2(tails, -6.4000001f, 1529.3f, 3257.8f, 1.5f, 2.0f);
		EV_CameraAng(0, 120, 0xFB9D, 0xCA50, 0x80);
		EV_CameraPos(0, 120, -48.32f, 1540.76f, 3256.4451f);
		EV_CameraPerspective(1, 120, 0x2000);
		EV_WaitMove(tails);
		EV_SetAction(tails, MILES_ACTIONS[67], &MILES_TEXLIST, 1.5f, 0, 8);
		EV_WaitAction(tails);
		EV_SetAng(tails, 0, 0x5100, 0);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.5f, 1, 16);
		EV_Wait(10);
		EventSe_Stop(1);
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0026_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 0);
		moveObject(WING, 42.549999f, 1536.0f, 3227.0f, -12.864f, 1555.828f, 3227.0f, 60);
		EV_SetPos(emerald, 43.5f, 1527.5f, 3224.0f);
		EV_Wait(18);
		stopObjectAll();
		EV_SetAng(WING, 0xA00, 0xBF00, 0);
		EV_ClrAction(WING);
		EV_SetAction(WING, &action_w_w9001_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(WING, 61.099998f, 1580.0f, 3203.0f);
		moveObject(WING, 61.099998f, 1580.0f, 3203.0f, -12.6f, 1526.0f, 3233.0f, 250);
		EV_LookPoint(tails, 58.799999f, 1545.0f, 3230.0801f);
		EV_LookPoint(amy, 58.799999f, 1545.0f, 3230.0801f);
		EV_CameraPerspective(1, 1, 0x238E);
		EV_ClrAction(eggmoble);
		EV_ClrAction(emerald);
		EV_SetAction(eggmoble, &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.2f, 1, 0);
		EV_SetAction(emerald, &action_gm_gm0023cs_m_em_sky, &M_EM_SKY_TEXLIST, 0.30000001f, 1, 0);
		EV_CameraAng(1, 0, 0xE7A0, 0x5450, 0);
		EV_CameraPos(1, 0, 73.545998f, 1566.08f, 3216.552f);
		EV_CameraPos(0, 10, 67.0f, 1561.0f, 3220.1001f);
		EventSe_Oneshot(1340, 0, 0, 0);
		EV_SerifPlay(539);
		EV_SetFace(tails, "D");
		EV_Msg((msgTbl_ev001A[TextLanguage])[3]); //"\a...A Chaos Emerald!"
		EV_CameraPos(0, 80, 65.0f, 1559.5f, 3221.1699f);
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(tails);
		EV_MsgClose();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.40000001f, 1, 0);
		EV_CameraPerspective(0, 60, 0x31C7);
		EV_CameraAng(1, 0, 0x39D, 0xD647, 0xFE00);
		EV_CameraPos(1, 0, -17.9f, 1533.323f, 3247.6001f);
		EV_CameraAng(0, 110, 0xE9D, 0xE347, 0x500);
		EV_CameraPos(0, 110, -1.4646f, 1527.95f, 3254.6201f);
		EV_SerifPlay(540);
		EV_Msg((msgTbl_ev001A[TextLanguage])[4]); //"\aNo way!"
		EV_Wait(30);
		EV_MsgClose();
		EV_Wait(20);
		EV_CameraAng(1, 0, 0x1B00, 0xBB00, 0);
		EV_CameraPos(1, 0, 50.799999f, 1545.0f, 3228.0f);
		EV_CameraAng(0, 80, 0x1B00, 0xD000, 0);
		EV_CameraPos(0, 80, 52.220001f, 1545.0f, 3234.0f);
		EV_SerifPlay(541);
		EV_Msg((msgTbl_ev001A[TextLanguage])[5]); //"\aBe gone!   All of you!\nThis is all I"...
		EV_Wait(35);
		e102 = EV_GetPlayer(4);
		EV_SetPos(e102, 0.0f, 1398.0f, 3600.0f);
		task_skywalk = CSkyWalk_create2(e102, 1398.0f);
		EV_Wait(70);
		EV_SetAction(eggmoble, &action_gm_gm0035_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 3);
		EV_CameraPos(1, 20, 55.560001f, 1547.075f, 3231.04f);
		EV_SerifPlay(542);
		EV_Msg((msgTbl_ev001A[TextLanguage])[6]); //"\aGamma!"
		EV_SetAction(player, &action_s_s0038_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_SerifWait();
		EV_FreeObject(&emerald);
		BLACK2 = COverlayCreate(1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
		EV_CameraPos(1, 0, 0.0f, 1418.0f, 3590.0f);
		EV_CameraAng(1, 0, 0xFB00, 0x8000, 0);
		EV_CameraPerspective(1, 1, 0x1C72);
		EV_MsgClose();
		EV_Wait(50);
		COverlaySetSpeed(BLACK2, -0.1f);
		EventSe_Oneshot(1339, 0, 0, 0);
		EV_Wait(2);
		COverlaySetSpeed(BLACK2, 0.0f);
		EV_Wait(38);
		EV_SerifPlay(543);
		EV_Msg((msgTbl_ev001A[TextLanguage])[7]); //"\aWhat is your wish, \nmaster Robotonik"...
		EV_Wait(60);
		EV_MsgClose();
		if(task_skywalk){
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		EV_SetPos(e102, -254.8f, 1525.67f, 3754.6001f);
		seqVars[44] = 3; //FLAG_EC_EGGLIFT_CTRL
		if (enableUnusedCode) EV_ClrAction(e102); //Animation will end too late otherwise
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 0.5f, 1, 0);
		EV_CameraPos(1, 0, 7.1999998f, 1521.26f, 3451.7f);
		EV_CameraAng(1, 0, 0xF500, 0x5700, 0xFC00);
		COverlaySetSpeed(BLACK2, -1.0f);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(37);
		moveObject(e102, 0.0, 1525.0f, 3459.0f, 0.0f, 1540.0f, 3459.0f, 66);
		EV_Wait(5);
		EV_CameraPos(1, 0, -7.0799999f, 1534.76f, 3446.26f);
		EV_CameraAng(1, 0, 0x1100, 0x9D00, 0x300);
		EV_Wait(35);
		EV_CameraPos(1, 0, 21.469999f, 1525.46f, 3417.8f);
		EV_CameraAng(1, 0, 0x1C00, 0x6300, 0);
		EV_Wait(26);
		stopObject(e102);
		EV_SetPos(e102,
			e102->twp->pos.x,
			1540.0f,
			e102->twp->pos.z);
		task_skywalk2 = CSkyWalk_create2(e102, 1540.0f);
		EV_SetPos(Mhand, -34.0f, 1420.0f, 3255.0f);
		EV_SetPos(player, -1.0f, 1526.0f, 3275.864f);
		EV_SetAng(player, 0, 0, 0);
		EV_SetPos(tails, 10.26f, 1526.0f, 3256.78f);
		EV_SetAng(tails, 0, 0, 0);
		EV_LookFree(player);
		EV_LookFree(tails);
		EV_LookFree(amy);
		EV_MoveRotation(amy, 0, 0x300, 0);
		eggmoble_turn(0, 0x3400, 0, 10, 0);
		EV_Wait(50);
		EV_CameraPos(0, 30, 12.4f, 1525.46f, 3409.97f);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[15], &E102_TEXLIST, 1.0f, 0, 0);
		if(task_skywalk2){
			FreeTask(task_skywalk2);
			task_skywalk2 = 0;
		}
		moveObject(e102, 0.0f, 1546.0f, 3459.0f, 0.0f, 1560.0f, 3426.0f, 25);
		EV_Wait(25);
		EV_Wait(60);
		EV_ClrAction(e102);
		EV_Wait(75);
		EV_SetPos(e102, 0.0f, 1524.0f, 3415.0f);
		EV_CameraPos(1, 0, -1.0f, 1539.4f, 3431.0f);
		EV_CameraAng(1, 0, 0x400, 0, 0);
		EV_CameraPerspective(0, 1, 0x216C);
		EV_CameraPos(0, 100, -1.0f, 1528.46f, 3431.0801f);
		EV_Wait(110);
		EV_CameraPos(1, 0, -6.6187f, 1529.36f, 3259.1799f);
		EV_CameraAng(1, 0, 0x400, 0x84C0, 0x200);
		EV_SerifPlay(544);
		EV_Msg((msgTbl_ev001A[TextLanguage])[8]); //"\aGet rid of these pests!"
		EV_CameraPos(0, 130, 4.3099999f, 1529.0f, 3258.3301f);
		EV_CameraAng(0, 130, 0x400, 0x7CC0, 0x200);
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(545);
		EV_Msg((msgTbl_ev001A[TextLanguage])[9]); //"\aShow them what you've got!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraAng(1, 0, 0xEA92, 0x7FD6, 0);
		EV_CameraPos(1, 0, 0.0f, 1550.1801f, 3398.0f);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 1.0f, 1, 0);
		EV_SerifPlay(546);
		EV_Msg((msgTbl_ev001A[TextLanguage])[10]); //"\aAye aye, sir."
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x271C);
		EV_CameraAng(1, 0, 0xF992, 0xF0D6, 0);
		EV_CameraPos(1, 0, -9.3699999f, 1532.78f, 3298.74f);
		EV_SerifPlay(547);
		EV_Msg((msgTbl_ev001A[TextLanguage])[11]); //"\aAnd don't disappoint me, or else..."
		EV_CameraAng(1, 80, 0x392, 0xDED6, 0);
		EV_LookPoint(player, 90.0f, 1567.7f, 3270.0f);
		EV_LookPoint(tails, 90.0f, 1567.7f, 3270.0f);
		EV_LookPoint(amy, 90.0f, 1567.7f, 3270.0f);
		eggmoble_moveandturn(94.459999f, 1561.5475f, 3267.0f, 0, 0x8200, 0, 70, 1);
		EV_SetAction(player, &action_s_s0038_sonic, &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_Wait(72);
		EV_MsgClose();
		EventSe_Play(2, 1341, 1800);
		ChgEggMobleSMod(1);
		EV_Wait(1);
		eggmoble_move_normal(126.0f, 1533.0f, 2759.8569f, 80);
		EV_Wait(37);
		EventSe_Volume(2, -80, 35);
		EV_LookFree(player);
		EV_LookFree(tails);
		EV_LookFree(amy);
		EV_SetAction(player, &action_s_s0009_sonic, &SONIC_TEXLIST, 1.0f, 1, 16);
		EV_CameraPos(0, 60, -9.3699999f, 1532.78f, 3298.74f);
		EV_CameraAng(0, 60, 0x392, 0xEED6, 0xFC00);
		EV_Wait(70);
		EventSe_Stop(2);
		EV_CameraPos(1, 0, 14.37f, 1531.0f, 3380.3501f);
		EV_CameraAng(1, 0, 0x992, 0x61D6, 0);
		EV_CameraPos(0, 70, 25.040001f, 1529.1366f, 3393.1899f);
		EV_CameraAng(0, 70, 0x992, 0x5BD6, 0);
		EV_Wait(20);
		EV_SetAction(e102, E102_ACTIONS[1], &E102_TEXLIST, 0.69999999f, 0, 16);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 16);
		EV_Wait(70);
		EV_CameraPos(1, 0, 6.4200001f, 1528.02f, 3284.7261f);
		EV_CameraAng(1, 0, 0x792, 0x26D6, 0);
		EV_CameraPos(0, 80, 11.6f, 1527.65f, 3280.47f);
		EV_CameraAng(0, 80, 0x792, 0x30D6, 0);
		EV_Wait(100);
		EV_LookFree(player);
		break;
	case 2:
		stopObjectAll();
		EV_CameraOff();
		EV_PadOn();
		if(task_skywalk2){
			FreeTask(task_skywalk2);
			task_skywalk2 = 0;
		}
		if(task_skywalk){
			FreeTask(task_skywalk);
			task_skywalk = 0;
		}
		EV_SetPos(player, 0.0f, 1525.0f, 3415.0f);
		EV_SetAng(player, 0, -0x8000, 0);
		EV_InitPlayer(0);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		EV_RemovePlayer(5);
		EV_FreeObject(&WING);
		EV_FreeObject(&emerald);
		if(Mhand){
			FreeTask(Mhand);
			Mhand = 0;
		}
		delete_eggmoble();
		if(BLACK2){
			FreeTask(BLACK2);
			BLACK2 = 0;
		}
		if(BLACK){
			FreeTask(BLACK);
			BLACK = 0;
		}
		EventSe_Close();
		seqVars[44] = 2; //FLAG_EC_EGGLIFT_CTRL
		seqVars[43] = 1;
		break;
	}
}
