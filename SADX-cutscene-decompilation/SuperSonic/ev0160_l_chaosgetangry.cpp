#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0160[] = {
	(char*)("CHAOS0"), BOSSCHAOS0_TEXLISTS[0],
	(char*)("EV_CHAOS0_MANJU"), &EV_CHAOS0_MANJU_TEXLIST,
	(char*)("CHAOS_SURFACE"), &CHAOS_SURFACE_TEXLIST,
	(char*)("EV_K_PATYA"), ADV03_TEXLISTS[1],
	(char*)("KNUCKLES_NORMAL"), &KNUCKLES_NORMAL_TEXLIST,
	(char*)("KNUCKLES_LONG"), &KNUCKLES_LONG_TEXLIST,
	(char*)("KNUCKLES_DEBU"), &KNUCKLES_DEBU_TEXLIST,
	(char*)("EV_ALIFE"), ADV03_TEXLISTS[0],
	(char*)("M_EM_BLUE"), &M_EM_BLUE_TEXLIST,
	(char*)("M_EM_GREEN"), &M_EM_GREEN_TEXLIST,
	(char*)("M_EM_PURPLE"), &M_EM_PURPLE_TEXLIST,
	(char*)("M_EM_SKY"), &M_EM_SKY_TEXLIST,
	(char*)("M_EM_WHITE"), &M_EM_WHITE_TEXLIST,
	(char*)("M_EM_YELLOW"), &M_EM_YELLOW_TEXLIST,
	(char*)("M_EM_RED"),& texlist_m_em_red,
	(char*)("WAVE7_WA"), &WAVE7_WA_TEXLIST,
	0
};

void ev0160_l_chaosgetangry(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		WHITE = 0;
		BLACK = 0;
		object_blue = 0;
		object_green = 0;
		object_purple = 0;
		object_sky = 0;
		object_white = 0;
		object_yellow = 0;
		object_red = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(116);
		EventSe_Init(5);
		BGM_Play(MusicIDs_evtbgm04);
		EV_SetPos(player, 0.0f, -71.0f, 797.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CreateObject(&object_blue, -8.6300001f, 94.550003f, 20.32f, 0, 0x4000, 0x2000);
		EV_CreateObject(&object_green, 8.6300001f, 94.550003f, 20.32f, 0, 0xB000, 0xE000);
		EV_CreateObject(&object_purple, 20.0f, 94.830002f, 7.8699999f, 0, 0x2000, 0x2000);
		EV_CreateObject(&object_sky, -20.0f, 94.830002f, 7.8699999f, 0, 0x6000, 0xE000);
		EV_CreateObject(&object_white, 18.559999f, 94.599998f, -6.0f, 0, 0x8000, 0x2000);
		EV_CreateObject(&object_yellow, -18.559999f, 94.599998f, -6.0f, 0, 0x4000, 0xE000);
		EV_CreateObject(&object_red, 0.0f, 94.599998f, -22.0f, 0, 0x4000, 0xE000);
		EV_CreatePlayer(2, Tikal, -15.8f, -4.1999998f, 434.39001f, 0x4F0, 0x4C00, 0);
		EV_CreateObject(&K_FAT, 4.8000002f, 6.0f, 408.73999f, 0, 0xC000, 0);
		EV_CreateObject(&K_NORMAL, -4.0999999f, 6.0f, 410.5f, 0, 0xC000, 0);
		EV_CreateObject(&K_TALL, -11.0f, 6.0f, 406.29999f, 0, 0xC000, 0);
		EV_SetMode(K_NORMAL, 0);
		EV_SetMode(K_FAT, 0);
		EV_SetMode(K_TALL, 0);
		EV_SetShadow(K_NORMAL, 1.0f);
		EV_SetShadow(K_FAT, 1.0f);
		EV_SetShadow(K_TALL, 1.0f);
		EV_CreateObject(&PAPA, -261.29999f, 3.0f, 485.0f, 0, 0x4000, 0);
		EV_SetMode(PAPA, 0);
		EV_SetShadow(PAPA, 1.0f);
		EV_CreateObjectFunc(&CHA, EV_Alife, -28.0f, -3.0f, 431.0f, 0, 0x3000, 0);
		EV_CreateObjectFunc(&CHA2, EV_Alife, -15.0f, -2.0f, 426.0f, 0, 0xE000, 0);
		EV_CreateObjectFunc(&CHA3, EV_Alife, -27.0f, -4.0f, 440.0f, 0, 0x7300, 0);
		EV_SetMode(CHA, 0);
		EV_SetMode(CHA2, 0);
		EV_SetMode(CHA3, 0);
		EV_SetShadow(CHA, 0.40000001f);
		EV_SetShadow(CHA2, 0.40000001f);
		EV_SetShadow(CHA3, 0.40000001f);
		CreateChaos0(0.0f, 85.0f, 43.400002f, 0, 0x4000, 0, 80);
		BLACK = COverlayCreate(1.0f, 0.1f, 0.0f, 0.0f, 0.0f);
		EV_Wait(30);
		EV_Wait(1);
		if (BLACK)
		{
			COverlaySetSpeed(BLACK, -0.025f);
		}
		tikal = EV_GetPlayer(2);
		EV_SetFace(tikal, "VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV");
		EV_SetAction(tikal, &action_j_j0008_tikal, &TIKAL_TEXLIST, 0.5f, 1, 0);
		SetWaterChaos0();
		EV_SetMode(object_blue, 0);
		EV_SetMode(object_green, 0);
		EV_SetMode(object_purple, 0);
		EV_SetMode(object_sky, 0);
		EV_SetMode(object_white, 0);
		EV_SetMode(object_yellow, 0);
		EV_SetMode(object_red, 0);
		EV_SetAction(CHA, ADV03_ACTIONS[0], ADV03_TEXLISTS[0], 0.050000001f, 1, 4);
		EV_SetAction(CHA2, ADV03_ACTIONS[1], ADV03_TEXLISTS[0], 0.050000001f, 1, 4);
		EV_SetAction(CHA3, ADV03_ACTIONS[2], ADV03_TEXLISTS[0], 0.050000001f, 1, 4);
		EV_Alife_FaceChange(CHA, 9);
		EV_Alife_FaceChange(CHA2, 9);
		EV_Alife_FaceChange(CHA3, 9);
		EV_ClrAction(K_NORMAL);
		EV_ClrAction(K_FAT);
		EV_ClrAction(K_TALL);
		EV_SetMotion(K_NORMAL, ADV03_OBJECTS[6], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 1.0f, 1, 0);
		EV_SetMotion(K_FAT, ADV03_OBJECTS[3], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 1.0f, 1, 4);
		EV_SetMotion(K_TALL, ADV03_OBJECTS[5], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 1.0f, 1, 4);
		moveObject(K_NORMAL, -14.22f, 1.0f, 447.35001f, 14.22f, 6.0f, 395.0f, 55);
		moveObject(K_FAT, -5.9000001f, 1.0f, 470.0f, -5.9000001f, 6.0f, 400.0f, 60);
		EV_CameraAng(1, 0, 0, 0xC000, 0);
		EV_CameraPos(1, 0, -33.0f, -2.076f, 439.35001f);
		EV_CameraAng(0, 70, 0, 0xC000, 0);
		EV_CameraPos(0, 70, -33.0f, -2.076f, 433.35001f);
		EV_Wait(20);
		moveObject(K_TALL, -27.0f, 1.0f, 460.0f, -27.0f, 6.0f, 400.0f, 65);
		EventSe_Oneshot(1336, 0, 0, 0);
		EV_Wait(50);
		stopObjectAll();
		EV_CameraAng(1, 0, 0x300, 0xEE00, 0);
		EV_CameraPos(1, 0, -37.0f, 3.9000001f, 409.70001f);
		EV_CameraAng(0, 80, 0x1000, 0x1100, 0);
		EV_CameraPos(0, 80, 23.5f, 1.5f, 323.0f);
		moveObject(K_NORMAL, 14.22f, 6.0f, 395.0f, 13.0f, 6.0f, 312.0f, 80);
		moveObject(K_FAT, -5.9000001f, 6.0f, 400.0f, -2.0f, 6.0f, 297.0f, 80);
		moveObject(K_TALL, -27.0f, 6.0f, 400.0f, -18.299999f, 6.0f, 312.0f, 80);
		EV_Wait(81);
		EV_SetPos(object_blue, -8.6300001f, 120.0f, 20.32f);
		EV_SetAng(object_blue, 0, 0x4000, 0x2000);
		EV_SetPos(object_green, 8.6300001f, 120.0f, 20.32f);
		EV_SetAng(object_green, 0, 0xB000, 0xE000);
		EV_SetPos(object_purple, 20.0f, 120.0f, 7.8699999f);
		EV_SetAng(object_purple, 0, 0x2000, 0x2000);
		EV_SetPos(object_sky, -20.0f, 120.0f, 7.8699999f);
		EV_SetAng(object_sky, 0, 0x6000, 0xE000);
		EV_SetPos(object_white, 18.559999f, 120.0f, -6.0f);
		EV_SetAng(object_white, 0, 0x8000, 0x2000);
		EV_SetPos(object_yellow, -18.559999f, 120.0f, -6.0f);
		EV_SetAng(object_yellow, 0, 0x4000, 0xE000);
		EV_SetPos(object_red, 0.0f, 120.0f, -22.0f);
		EV_SetAng(object_red, 0, 0x4000, 0xE000);
		EV_SetAction(object_blue, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_green, &action_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_white, &action_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_purple, &action_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_sky, &action_m_em_sky, &M_EM_SKY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_yellow, &action_m_em_yellow, &M_EM_YELLOW_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_red, &action_m_em_red, &texlist_m_em_red, 1.0f, 1, 0);
		EV_SetPos(CHA, -10.6f, 56.299999f, 158.38f);
		EV_SetPos(CHA2, 11.0f, 84.5f, 114.3f);
		EV_SetPos(K_NORMAL, 12.5f, 96.800003f, 76.0f);
		EV_SetPos(K_FAT, -7.5999999f, 96.800003f, 85.676003f);
		EV_SetMotion(K_FAT, ADV03_OBJECTS[3], motion_kz_0004_k_normal, ADV03_TEXLISTS[3], 0.69999999f, 1, 0);
		EV_SetMotion(K_NORMAL, ADV03_OBJECTS[6], motion_kz_0004_k_normal, ADV03_TEXLISTS[3], 0.69999999f, 1, 0);
		EV_CameraAng(1, 0, 0x1800, 0, 0);
		EV_CameraPos(1, 0, 0.0f, 40.400002f, 190.60001f);
		EV_CameraPos(0, 55, 0.0f, 101.4f, 102.5f);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EventSe_Play(0, 1340, 1800);
		EventSe_Volume(0, -60, 1);
		CreateRotaryEmerald(
			0.0f,
			120.0f,
			0.0f,
			30.0f,
			182,
			object_blue,
			object_green,
			object_purple,
			object_sky,
			object_white,
			object_yellow,
			object_red);
		EventSe_Oneshot(1336, 0, 0, 0);
		SetEffectRotaryEmerald(1, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.0f, 0.0f, 1.0f);
		SetEffectRotaryEmerald(2, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.0f, 1.0f, 0.0f);
		SetEffectRotaryEmerald(3, &ev_effect_list19, 0.40000001f, 0.69999999f, 1.0f, 0.0f, 1.0f);
		SetEffectRotaryEmerald(4, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.5f, 0.5f, 1.0f);
		SetEffectRotaryEmerald(5, &ev_effect_list19, 0.40000001f, 0.69999999f, 1.0f, 1.0f, 1.0f);
		SetEffectRotaryEmerald(6, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.30000001f, 1.0f, 0.5f);
		SetEffectRotaryEmerald(7, &ev_effect_list19, 0.40000001f, 0.69999999f, 1.0f, 0.0f, 0.0f);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EventSe_Volume(0, 60, 50);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 2, 0x1600, 0, 0);
		EV_Wait(2);
		EV_CameraAng(0, 2, 0x1800, 0, 0);
		EV_Wait(3);
		EV_CameraAng(0, 10, 0xFE00, 0, 0);
		EV_CameraPos(0, 5, 0.0f, 99.400002f, 102.5f);
		EV_Wait(3);
		stopObjectAll();
		EV_RemovePlayer(2);
		EV_FreeObject(&CHA3);
		MoveChaos0(0.0f, 90.0f, 43.400002f, 15);
		EV_CameraPos(0, 55, 0.0f, 99.400002f, 55.5f);
		EV_Wait(15);
		EventSe_Oneshot(1336, 0, 0, 0);
		ToHumanChaos0();
		EV_Wait(5);
		EV_CameraAng(1, 8, 0xFE00, 0, 0);
		EV_Wait(18);
		EV_Wait(26);
		EV_CameraAng(1, 25, 0xD00, 0, 0);
		EV_Wait(15);
		EV_CameraPos(1, 25, 0.0f, 95.0f, 60.0f);
		EV_Wait(25);
		EV_FreeObject(&K_NORMAL);
		EV_FreeObject(&CHA);
		EV_FreeObject(&CHA2);
		EV_SetPos(PAPA, 0.0f, 96.800003f, 72.0f);
		EV_SetPos(K_FAT, -10.0f, 96.800003f, 78.0f);
		EV_SetPos(K_TALL, 8.5f, 96.800003f, 82.0f);
		EV_SetAng(PAPA, 0, 0x8000, 0);
		EV_SetAng(K_FAT, 0, 0x8000, 0);
		EV_SetAng(K_TALL, 0, 0x8000, 0);
		EV_ClrAction(PAPA);
		EV_ClrAction(K_FAT);
		EV_ClrAction(K_TALL);
		EV_SetAction(PAPA, &action_p_p0005_patya, ADV03_TEXLISTS[1], 0.60000002f, 0, 0);
		EV_SetMotion(K_TALL, ADV03_OBJECTS[5], motion_kz_0003_k_normal, ADV03_TEXLISTS[3], 0.43000001f, 0, 0);
		EV_CameraPos(1, 0, -7.9000001f, 91.0f, 41.799999f);
		EV_CameraAng(1, 0, 0xA00, 0x8F00, 0);
		EV_SerifPlay(1438);
		EV_Msg(msgTbl_ev0160[TextLanguage][0]); //"\aAaaaagh!   It's a monster!"
		EventSe_Oneshot(1336, 120, 0, 0);
		moveObject(PAPA, 0.0f, 96.800003f, 72.0f, 0.0f, 96.800003f, 80.0f, 30);
		moveObject(K_TALL, 8.5f, 96.800003f, 82.0f, 8.5f, 96.800003f, 91.0f, 30);
		moveObject(K_FAT, -10.0f, 96.800003f, 78.0f, -10.0f, 96.800003f, 88.0f, 30);
		EV_WaitAction(PAPA);
		ChangeMotspd(0.40000001f);
		effect_create2(0, 10, 0.0f, 105.0f, 37.0f, &ev_effect_list4);
		effect_scl(10, 2.5f, 2.5f);
		effect_anim_speed(10, 0.30000001f);
		EV_CameraPos(1, 0, -1.14f, 106.08f, 56.5f);
		EV_CameraAng(1, 0, 0xF500, 0xFA00, 0x400);
		EV_CameraPos(0, 50, 1.14f, 106.08f, 56.5f);
		EV_CameraAng(0, 50, 0xF500, 0x600, -0x400);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(45);
		EventSe_Oneshot(1337, 0, 0, 0);
		EV_Wait(5);
		effect_delete(10);
		crushLightOn(0.0f, 100.0f, 0.0f, 5, 10, 0.69999999f, 0.30000001f, 0xFF00FF00, 0x88FFFFFF);
		EventSe_Volume(0, 120, 20);
		EventSe_Oneshot(1337, 120, 0, 0);
		EventSe_Oneshot(1338, 120, 0, 0);
		EV_CameraPos(1, 0, 0.0f, 101.0f, 57.0f);
		EV_CameraAng(1, 0, 0x1000, 0, 0);
		EV_CameraPerspective(0, 20, 0x5555);
		EV_CameraPos(1, 20, 0.0f, 90.800003f, 64.669998f);
		EV_Wait(40);
		WHITE = COverlayCreate(0.014285714f, 0.1f, 0.75f, 1.0f, 0.75f);
		EV_SerifPlay(1439);
		EV_Msg(msgTbl_ev0160[TextLanguage][1]); //"\aNoooooooo!"
		EV_Wait(20);
		EV_MsgClose();
		EV_Wait(40);
		EventSe_Stop(0);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -1.0f);
		}
		EV_CameraPos(1, 0, -5.4000001f, -69.25f, 811.70001f);
		EV_CameraAng(1, 0, 0xE00, 0xF900, 0);
		EV_Wait(10);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&PAPA);
		DeleteChaos0();
		EV_FreeObject(&K_NORMAL);
		EV_FreeObject(&K_FAT);
		EV_FreeObject(&K_TALL);
		EV_FreeObject(&CHA);
		EV_FreeObject(&CHA2);
		EV_FreeObject(&CHA3);
		effect_delete(10);
		deleteRotaryEmeraldTask();
		EV_FreeObject(&object_blue);
		EV_FreeObject(&object_red);
		EV_FreeObject(&object_yellow);
		EV_FreeObject(&object_sky);
		EV_FreeObject(&object_green);
		EV_FreeObject(&object_white);
		EV_FreeObject(&object_purple);
		crushLightOff();
		if (WHITE)
		{
			FreeTask(WHITE);
			WHITE = 0;
		}
		if (BLACK)
		{
			FreeTask(BLACK);
			BLACK = 0;
		}
		EventSe_Close();
		break;
	}
}