#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0069[] = {
	(char*)("EV_EGGMOBLE0"), &EV_EGGMOBLE0_TEXLIST,
	(char*)("VER1_WING"), &VER1_WING_TEXLIST,
	(char*)("VER2_WING"), &VER2_WING_TEXLIST,
	(char*)("MGHAND"), &MGHAND_TEXLIST,
	(char*)("M_EM_SKY"), &M_EM_SKY_TEXLIST,
	0
};

void ev0069_a_eggmantakesbirdie(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		obj_ver2_wing = 0;
		emerald = 0;
		Mhand = 0;
		Mhand2 = 0;
		//BLACK = 0; //Unused. Might be left over from Gamma's entrance in Sonic's story.
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_Wait(1);
		SetBankDir(80);
		EventSe_Init(5);
		EV_InitPlayer(0);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CreateObject(&emerald, -537.33002f, -0.5f, 983.90002f, 0, 0x8000, 0);
		EV_SetMode(emerald, 0);
		EV_SetPos(player, -55.599998f, 1525.67f, 3320.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CreatePlayer(2, SonicTheHedgehog, 2.8199999f, 1633.08f, 3185.52f, 0, 0x8000, 0);
		EV_CreatePlayer(3, MilesTalesPrower, 2.8199999f, 1633.08f, 3190.52f, 0, 0x8000, 0);
		EV_CreatePlayer(4, E102, 2.8199999f, 1633.08f, 3180.52f, 0, 0x8000, 0);
		create_eggmoble(122.17f, 1710.7f, 3169.04f, 0, 0x1400, 0);
		obj_ver2_wing = SetEventBirdie0();
		EV_SetPos(obj_ver2_wing, 2.8199999f, 1638.08f, 3195.52f);
		EV_SetAng(obj_ver2_wing, 0, -0x8000, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0127_amy, &AMY_TEXLIST, 2.0f, 1, 0);
		sonic = EV_GetPlayer(2);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[1], &SONIC_TEXLIST, 1.0f, 1, 0);
		tails = EV_GetPlayer(3);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[79], &MILES_TEXLIST, 1.0f, 1, 0);
		e102 = EV_GetPlayer(4);
		EV_ClrAction(e102);
		EV_SetAction(e102, E102_ACTIONS[0], &E102_TEXLIST, 0.5f, 1, 0);
		EV_SetMode(obj_ver2_wing, 0);
		EV_SetAction(obj_ver2_wing, &action_w_w0127_wing, &VER2_WING_TEXLIST, 2.0f, 1, 0);
		eggmoble = GetEggMobleTask();
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0002_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		Mhand = mghand_init(-27.57f, 2058.1799f, 3221.0f, 0, 0, 0x8000);
		Mhand2 = mghand_init(-27.57f, 2058.1799f, 3221.0f, 0, -0x2000, -0x2000);
		mghandsetspd(Mhand2, 0x1100, 0x900);
		EV_Wait(1);
		BGM_Play(MusicIDs_egcarer1);
		seteggmobleparam(0.5f, 0x100);
		ChgEggMobleMod(5);
		EV_CameraPos(0, 0, -48.549999f, 1550.71f, 3252.25f);
		EV_CameraAng(0, 0, 0x30F, 0x7757, 0);
		EV_CameraPos(1, 100, -49.77f, 1530.71f, 3257.9199f);
		EV_Wait(15);
		EV_MovePoint2(player, -55.599998f, 1525.67f, 3273.1899f, 2.0f, 0.059999999f);
		moveObjectOn(obj_ver2_wing, 0.0f, 0.0f, 0.0f, 900, player);
		EV_Wait(70);
		EV_SerifPlay(922);
		EV_SetFace(player, "HB");
		EV_Msg(msgTbl_ev0069[TextLanguage][0]); //"\aWhere do you think you're going, Amy?"
		EV_ClrAction(player);
		EV_ClrAction(obj_ver2_wing);
		stopObject(obj_ver2_wing);
		EV_SetAng(obj_ver2_wing, 0, 0x8000, 0);
		EV_SetAction(obj_ver2_wing, &action_w_w0835_wing, &VER2_WING_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(player, &action_a_a0835_amy, &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(10);
		EV_CameraPos(1, 70, -65.589996f, 1529.5601f, 3265.0f);
		EV_CameraAng(1, 70, 0x20F, 0xB257, 0);
		EV_Wait(30);
		EV_LookPoint(player, -64.400002f, 1532.0f, 3266.0f);
		EV_Wait(10);
		EV_LookPoint(player, -21.0f, 1532.0f, 3293.0f);
		EV_Wait(10);
		EV_MsgClose();
		EV_ClrAction(player);
		EV_LookFree(player);
		EV_ClrAction(obj_ver2_wing);
		EV_SetAction(player, &action_a_a0814_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(obj_ver2_wing, &action_w_w0814_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetAng(player, 0, 0x5878, 0);
		EV_SetAng(obj_ver2_wing, 0, 0x5878, 0);
		EV_CameraPerspective(0, 1, 0x238E);
		EV_CameraPos(1, 0, -64.379997f, 1531.37f, 3286.1699f);
		EV_CameraAng(0, 0, 0x1900, 0xE000, 0);
		eggmoble_move_normal(122.17f, 1540.0f, 3169.04f, 60);
		EV_CameraAng(0, 90, 0x400, 0xE000, 0);
		EV_Wait(80);
		eggmoble_move_normal(-9.6000004f, 1535.0f, 3241.01f, 40);
		EV_CameraPos(1, 60, -64.279999f, 1528.4f, 3294.8501f);
		EV_CameraAng(0, 60, 0x500, 0xE800, 0);
		EV_Wait(30);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0126_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		moveObjectOn(obj_ver2_wing, 0.0f, 0.0f, 0.0f, 900, player);
		moveObject(player, -55.599998f, 1525.6875f, 3273.657f, -65.889999f, 1526.0f, 3280.3601f, 60);
		EV_Wait(25);
		EV_SetAction(player, &action_a_a0814_amy, &AMY_TEXLIST, 1.0f, 1, 4);
		EV_Wait(10);
		stopObjectAll();
		EV_SetPos(player, -55.599998f, 1525.6875f, 3273.657f);
		EV_SetPos(obj_ver2_wing, -55.599998f, 1525.6875f, 3273.657f);
		EV_CameraPerspective(0, 1, 0xE39);
		EV_CameraPos(1, 0, -25.620001f, 1549.21f, 3228.9299f);
		EV_CameraAng(0, 0, 0xF90F, 0x69D3, 0);
		EV_CameraPos(0, 120, -17.690001f, 1548.12f, 3220.28f);
		EV_CameraAng(0, 120, 0xF90F, 0x69D3, 0);
		EV_LookFree(player);
		EV_LookPoint(player, -9.6000004f, 1550.0f, 3241.01f);
		EV_SetFace(player, "EE");
		EV_SerifPlay(923);
		EV_Msg(msgTbl_ev0069[TextLanguage][1]); //"\aEggman...  No!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(player);
		ChgEggMobleMod(5);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -13.33f, 1548.0f, 3241.6101f);
		EV_CameraAng(0, 0, 0x100, 0xC300, 0);
		EV_CameraPos(0, 120, -13.47f, 1548.0f, 3239.6201f);
		EV_CameraAng(0, 120, 0x100, 0xB800, 0);
		EV_SerifPlay(924);
		EV_Msg(msgTbl_ev0069[TextLanguage][2]); //"\aYou can't get away this easily!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_SetFace(player, "N");
		EV_SetPos(sonic, -8.0f, 1525.6899f, 3370.0f);
		EV_Wait(1);
		EV_SetPos(tails, 8.0f, 1525.6899f, 3383.0f);
		EV_Wait(1);
		EV_LookFree(tails);
		EV_LookPoint(tails, -9.6000004f, 1550.0f, 3241.01f);
		ChgEggMobleMod(0);
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(0, 0, -50.860001f, 1532.59f, 3258.03f);
		EV_CameraAng(0, 0, 0xFEBA, 0x75DD, 0);
		EV_CameraPos(0, 100, -47.41f, 1533.03f, 3244.46f);
		EV_Wait(30);
		EV_ClrFace(player);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 8);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_LookFree(player);
		EV_LookObject(player, sonic, 0.0f, 8.0f, 0.0f);
		EV_Wait(10);
		EV_CameraPerspective(0, 80, 0x3111);
		EV_CameraPos(1, 60, -56.27f, 1532.36f, 3209.03f);
		EV_CameraAng(1, 60, 0x80F, 0x9557, 0);
		EV_Wait(80);
		EV_ClrFace(player);
		EV_CameraPos(1, 60, -11.21f, 1528.34f, 3359.1101f);
		EV_CameraAng(1, 60, 0xA0F, 0x9357, 0);
		EV_Wait(60);
		EV_CameraPos(1, 120, -10.32f, 1528.83f, 3360.8301f);
		EV_CameraAng(1, 120, 0xA0F, 0x9357, 0);
		EV_SerifPlay(925);
		EV_Msg(msgTbl_ev0069[TextLanguage][3]); //"\aSonic, help!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPerspective(0, 1, 0x1555);
		EV_CameraPos(1, 0, -14.71f, 1577.66f, 3205.51f);
		EV_CameraAng(1, 0, 0xF20F, 0x8357, 0);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[3], &SONIC_TEXLIST, 1.0f, 1, 10);
		EV_MovePoint2(sonic, -8.0f, 1525.6899f, 3320.0f, 1.0f, 0.059999999f);
		EV_ClrAction(tails);
		EV_SetAction(tails, MILES_ACTIONS[80], &MILES_TEXLIST, 1.0f, 1, 10);
		EV_MovePoint2(tails, 8.0f, 1525.6899f, 3341.0f, 1.0f, 0.059999999f);
		EV_CameraPos(1, 80, -14.71f, 1562.65f, 3205.51f);
		EV_Wait(60);
		EV_ClrAction(sonic);
		EV_SetAction(sonic, SONIC_ACTIONS[122], &SONIC_TEXLIST, 2.0f, 0, 4);
		EV_SetAction(sonic, SONIC_ACTIONS[123], &SONIC_TEXLIST, 1.0f, 1, 8);
		EV_ClrAction(tails);
		EV_SetAction(tails, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(30);
		ChgEggMobleMod(5);
		EV_CameraPos(0, 30, -29.26f, 1551.6899f, 3236.54f);
		EV_CameraAng(0, 30, 0xF60F, 0xB857, 0);
		EV_Wait(20);
		EV_CameraPos(0, 60, -29.629999f, 1551.6899f, 3238.5f);
		EV_CameraAng(0, 60, 0xF60F, 0xBD57, 0);
		EV_LookFree(player);
		EV_LookPoint(player, -9.6000004f, 1550.0f, 3241.01f);
		EV_SerifPlay(926);
		EV_Msg(msgTbl_ev0069[TextLanguage][4]); //"\aToo late, buddy!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		ChgEggMobleMod(0);
		EV_CameraPos(1, 60, -102.68f, 1532.38f, 3277.51f);
		EV_CameraAng(1, 60, 0x10F, 0xCB57, 0);
		EV_Wait(30);
		EventSe_Play(0, 1336, 1800);
		moveObject(Mhand, 11.0f, 1547.48f, 3231.3999f, 11.0f, 1560.48f, 3231.3999f, 30);
		EV_Wait(30);
		moveObject(Mhand2, -25.0f, 1580.0f, 3271.0f, -45.0f, 1525.0f, 3271.0f, 20);
		chgMghandMod(Mhand2, 1);
		EV_Wait(30);
		chgMghandMod(Mhand2, 2);
		EV_SerifWait();
		moveObject(Mhand2, -45.0f, 1525.0f, 3271.0f, -25.0f, 1580.0f, 3271.0f, 20);
		moveObject(obj_ver2_wing, -55.599998f, 1525.6875f, 3273.657f, -35.599998f, 1580.6875f, 3273.657f, 20);
		EV_SerifPlay(927);
		EV_ClrAction(player);
		EV_SetAction(player, &action_a_a0001_amy, &AMY_TEXLIST, 1.0f, 0, 8);
		EV_Msg(msgTbl_ev0069[TextLanguage][5]); //"\aBirdie!"
		EV_SetAction(player, AMY_ACTIONS[69], &AMY_TEXLIST, 1.0f, 1, 8);
		EV_Wait(40);
		EventSe_Stop(0);
		EV_MsgClose();
		if (Mhand)
		{
			FreeTask(Mhand);
			Mhand = 0;
		}
		if (Mhand2)
		{
			FreeTask(Mhand2);
			Mhand2 = 0;
		}
		EV_SetPos(obj_ver2_wing, -26.0f, 1534.5f, 3242.0f);
		EV_ClrAction(obj_ver2_wing);
		EV_ClrAction(eggmoble);
		EV_SetAction(obj_ver2_wing, &action_w_w9006_wing, &VER2_WING_TEXLIST, 1.0f, 1, 3);
		EV_SetAction(eggmoble, &action_gm_gm9000_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 1, 0);
		ChgEggMobleMod(5);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(0, 0, -50.900002f, 1528.8571f, 3285.2529f);
		EV_CameraAng(0, 0, 0xA00, 0xEF00, 0);
		EventSe_Oneshot(1338, 0, 0, 0);
		EV_CameraPos(0, 45, -56.540001f, 1528.858f, 3283.0859f);
		EV_Wait(45);
		EV_CameraPos(0, 80, -57.450001f, 1528.858f, 3282.6799f);
		EV_ClrAction(eggmoble);
		EV_SetAction(eggmoble, &action_gm_gm0026_eggmoble, &EV_EGGMOBLE0_TEXLIST, 1.0f, 0, 0);
		moveObject(obj_ver2_wing, -26.0f, 1534.5f, 3242.0f, -50.0f, 1566.67f, 3257.0f, 100);
		EV_SetPos(emerald, -12.0f, 1525.5f, 3245.8f);
		EV_Wait(18);
		EV_ClrAction(eggmoble);
		EV_ClrAction(emerald);
		EV_SetAction(eggmoble, &action_gm_gm0023_eggmoble, &EV_EGGMOBLE0_TEXLIST, 0.25f, 1, 6);
		EV_SetAction(emerald, &action_gm_gm0023cs_m_em_sky, &M_EM_SKY_TEXLIST, 0.2f, 1, 0);
		EV_Wait(60);
		EV_SetPos(tails, 3.0f, 1525.6899f, 3345.0f);
		EV_CameraPos(1, 0, 10.48f, 1526.5601f, 3283.8501f);
		EV_CameraAng(1, 0, 0x150F, 0xA457, 0);
		EV_CameraPos(1, 15, -14.64f, 1526.5601f, 3315.01f);
		EV_Wait(15);
		EV_CameraPos(1, 90, -16.52f, 1526.5601f, 3317.3f);
		EV_ClrFace(sonic);
		EV_ClrFace(tails);
		EV_SetFace(tails, "IH");
		EV_SerifPlay(928);
		EV_Msg(msgTbl_ev0069[TextLanguage][6]); //"\aIt's a Chaos Emerald!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(sonic);
		EV_ClrFace(tails);
		EV_SetPos(tails, 8.0f, 1525.6899f, 3341.0f);
		EV_CameraPos(1, 0, -25.549999f, 1530.9301f, 3276.8f);
		EV_CameraAng(1, 0, 0xB0F, 0x7057, 0);
		EV_CameraPos(1, 15, -51.5f, 1530.9301f, 3266.3201f);
		EV_Wait(15);
		EV_CameraPos(1, 90, -53.360001f, 1530.9301f, 3265.5701f);
		EV_SetFace(player, "E");
		EV_SerifPlay(929);
		EV_Msg(msgTbl_ev0069[TextLanguage][7]); //"\aWhat?!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_MsgClose();
		EV_CameraPerspective(1, 1, 0x1555);
		EV_CameraPos(0, 0, -35.23f, 1541.97f, 3266.0f);
		EV_CameraAng(0, 0, 0xB0F, 0xE357, 0);
		EV_CameraPos(0, 120, -15.77f, 1541.97f, 3275.48f);
		EV_CameraAng(0, 120, 0xB0F, 0xF957, 0);
		EV_SerifPlay(930);
		EV_Msg(msgTbl_ev0069[TextLanguage][8]); //"\aI don't need YOU when I've got this!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(0, 0, -10.53f, 1543.0f, 3255.99f);
		EV_CameraAng(0, 0, 0xB0F, 0xFA57, 0);
		EV_CameraPos(1, 20, -9.7299995f, 1544.5f, 3250.27f);
		EV_SerifPlay(931);
		EV_Msg(msgTbl_ev0069[TextLanguage][9]); //"\aGamma!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_SetPos(e102, 0.0f, 1525.7f, 3400.0f);
		EV_Wait(1);
		EV_CameraPos(0, 0, 0.0f, 1569.21f, 3388.22f);
		EV_CameraAng(0, 0, 0x271, 0x8000, 0);
		EV_CameraPos(0, 25, 0.0f, 1543.27f, 3389.79f);
		EventSe_Oneshot(1339, 0, 0, 0);
		EV_Wait(25);
		EV_CameraPos(0, 100, 0.0f, 1544.27f, 3389.79f);
		EV_SerifPlay(932);
		EV_Msg(msgTbl_ev0069[TextLanguage][10]); //"\aAt your service, sir!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EV_FreeObject(&emerald);
		EV_ClrAction(eggmoble);
		EV_CameraPos(0, 45, -3.22f, 1532.25f, 3281.5701f);
		EV_CameraAng(0, 45, 0xFF0F, 0x8057, 0);
		EV_Wait(45);
		EV_LookFree(sonic);
		EV_LookObject(sonic, e102, 0.0f, 6.0f, 0.0f);
		EV_LookFree(tails);
		EV_LookObject(tails, e102, 0.0f, 6.0f, 0.0f);
		EV_ClrAction(player);
		EV_LookFree(player);
		EV_ClrAction(obj_ver2_wing);
		EV_SetAction(player, &action_a_a0814_amy, &AMY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(obj_ver2_wing, &action_w_w0814_wing, &VER2_WING_TEXLIST, 1.0f, 1, 0);
		EV_SetPos(player, -55.599998f, 1525.6875f, 3273.657f);
		EV_SetPos(obj_ver2_wing, -55.599998f, 1525.6875f, 3273.657f);
		EV_SetAng(obj_ver2_wing, 0, 0x4000, 0);
		EV_Wait(20);
		EV_SetAng(sonic, 0, 0, 0);
		EV_SetAng(tails, 0, 0, 0);
		ChgEggMobleMod(0);
		EV_CameraPos(1, 0, -30.65f, 1533.1801f, 3474.3101f);
		EV_CameraAng(1, 0, 0x20D, 0xF3A8, 0);
		EV_CameraPos(0, 150, -84.099998f, 1533.1801f, 3457.5901f);
		EV_CameraAng(0, 150, 0x20D, 0xF2A8, 0);
		EV_SetPos(tails, 8.0f, 1525.6899f, 3325.0f);
		EV_SerifPlay(933);
		EV_Msg(msgTbl_ev0069[TextLanguage][11]); //"\aDispose of these annoying pests!"
		EV_Wait(1);
		EV_SerifWait();
		EV_SerifPlay(934);
		EV_MsgW(60, msgTbl_ev0069[TextLanguage][12]); //"\aGive 'em all you got!"
		EV_Wait(15);
		EV_SerifWait();
		EV_MsgClose();
		EV_CameraPos(1, 0, -41.639999f, 1526.67f, 3295.5801f);
		EV_CameraAng(1, 0, 0x50D, 0x8D24, 0);
		EV_CameraPos(1, 120, -16.98f, 1526.67f, 3287.3401f);
		EV_SerifPlay(935);
		EV_Msg(msgTbl_ev0069[TextLanguage][13]); //"\aAye aye, sir!   Will comply."
		EV_Wait(10);
		EV_SerifWait();
		EV_MsgClose();
		ChgEggMobleMod(0);
		EV_CameraPerspective(0, 1, 0x3111);
		EV_CameraPos(1, 0, -16.75f, 1544.79f, 3256.6201f);
		EV_CameraAng(1, 0, 0xB00, 0xEBE3, 0);
		EV_SerifPlay(936);
		EV_Msg(msgTbl_ev0069[TextLanguage][14]); //"\aI've got better things to do!"
		EV_Wait(1);
		EV_SerifWait();
		EV_MsgClose();
		EventSe_Play(1, 1341, 1800);
		EV_CameraPos(0, 100, -58.75f, 1527.34f, 3293.3401f);
		EV_CameraAng(0, 100, 0xD0D, 0xEE24, 0);
		eggmoble_moveandturn(-15.0f, 1560.0f, 3235.0f, 0, -0x1400, 0, 50, 0);
		EV_Wait(55);
		EV_CameraPos(0, 100, -76.389999f, 1526.74f, 3293.8999f);
		EV_CameraAng(0, 100, 0xA87, 0xF443, 0);
		eggmoble_moveandturn(-90.0f, 1560.0f, 3200.0f, 0, -0x5000, 0, 50, 0);
		EV_Wait(40);
		EV_LookFree(player);
		EV_LookPoint(player, -44.0f, 1532.5f, 3269.3f);
		EventSe_Stop(1);
		EV_CameraPos(1, 0, -9.8999996f, 1529.7f, 3303.187f);
		EV_CameraAng(1, 0, 0xBAE, 0x931F, 0);
		EV_CameraPos(0, 90, -13.72f, 1529.2f, 3311.1331f);
		EV_Wait(50);
		EV_SetAction(sonic, SONIC_ACTIONS[5], &SONIC_TEXLIST, 3.5f, 1, 0);
		EV_MovePoint(sonic, 0.0f, 1525.7f, 3402.0f);
		EV_Wait(15);
		EV_SetAction(e102, E102_ACTIONS[1], &E102_TEXLIST, 1.0f, 0, 8);
		EV_SetAction(e102, E102_ACTIONS[2], &E102_TEXLIST, 1.0f, 1, 0);
		EV_Wait(35);
		EV_SetPos(tails, 8.0f, 1525.6899f, 3341.0f);
		EV_CameraPos(1, 0, -25.549999f, 1530.9301f, 3276.8f);
		EV_CameraAng(1, 0, 0x140F, 0x6057, 0);
		EV_CameraPos(1, 15, -49.77f, 1529.64f, 3268.8359f);
		EV_Wait(15);
		EV_CameraPos(1, 130, -51.360001f, 1529.9301f, 3266.5701f);
		EV_SetFace(player, "FE");
		EV_SerifPlay(937);
		EV_Msg(msgTbl_ev0069[TextLanguage][15]); //"\aStop, Mr. Robot!"
		EV_Wait(1);
		EV_SerifWait();
		EV_ClrFace(player);
		EV_Wait(30);
		EV_MsgClose();
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_RemovePlayer(3);
		EV_RemovePlayer(4);
		EV_FreeObject(&obj_ver2_wing);
		delete_eggmoble();
		if (Mhand)
		{
			FreeTask(Mhand);
			Mhand = 0;
		}
		if (Mhand2)
		{
			FreeTask(Mhand2);
			Mhand2 = 0;
		}
		EV_FreeObject(&emerald);
		EventSe_Close();
		break;
	}
}