#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00F7[] = {
	(char*)("EV_K_PATYA"), ADV03_TEXLISTS[1],
	(char*)("KNUCKLES_NORMAL"), &KNUCKLES_NORMAL_TEXLIST,
	(char*)("KNUCKLES_LONG"), &KNUCKLES_LONG_TEXLIST,
	(char*)("KNUCKLES_DEBU"), &KNUCKLES_DEBU_TEXLIST,
	(char*)("M_EM_BLUE"), &M_EM_BLUE_TEXLIST,
	(char*)("M_EM_GREEN"), &M_EM_GREEN_TEXLIST,
	(char*)("M_EM_PURPLE"), &M_EM_PURPLE_TEXLIST,
	(char*)("M_EM_SKY"), &M_EM_SKY_TEXLIST,
	(char*)("M_EM_RED"), &texlist_m_em_red,
	(char*)("M_EM_WHITE"), &M_EM_WHITE_TEXLIST,
	(char*)("M_EM_YELLOW"), &M_EM_YELLOW_TEXLIST,
	(char*)("EV_ALIFE"), ADV03_TEXLISTS[0],
	(char*)("WAVE7_WA"), &WAVE7_WA_TEXLIST
};

void ev00F7_l_tikalplead(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		object_blue = 0;
		object_green = 0;
		object_purple = 0;
		object_sky = 0;
		object_white = 0;
		object_yellow = 0;
		object_red = 0;
		PAPA = 0;
		K_NORMAL = 0;
		K_FAT = 0;
		K_TALL = 0;
		K_TALL2 = 0;
		CHA = 0;
		CHA2 = 0;
		CHA3 = 0;
		CHA4 = 0;
		WHITE = 0;
		BLACK = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		SetBankDir(116);
		EventSe_Init(5);
		BGM_Play(MusicIDs_tical);
		EV_CreateObject(&object_blue, -8.6300001f, 94.550003f, 20.32f, 0, 0x4000, 0x2000);
		EV_CreateObject(&object_green, 8.6300001f, 94.550003f, 20.32f, 0, 0xB000, 0xE000);
		EV_CreateObject(&object_purple, 20.0f, 94.830002f, 7.8699999f, 0, 0x2000, 0x2000);
		EV_CreateObject(&object_sky, -20.0f, 94.830002f, 7.8699999f, 0, 0x6000, 0xE000);
		EV_CreateObject(&object_white, 18.559999f, 94.599998f, -6.0f, 0, 0x8000, 0x2000);
		EV_CreateObject(&object_yellow, -18.559999f, 94.599998f, -6.0f, 0, 0x4000, 0xE000);
		EV_CreateObject(&object_red, 0.0f, 94.599998f, -22.0f, 0, 0x4000, 0xE000);
		EV_SetPos(player, 0.0f, -71.0f, 797.0f);
		EV_SetAng(player, 0, 0x8000, 0);
		EV_CreatePlayer(2, Tikal, -261.29999f, 3.0f, 455.0f, 0, 0, 0);
		EV_CreateObject(&PAPA, 0.0f, 6.79f, 401.0f, 0, 0xC000, 0);
		EV_SetMode(PAPA, 0);
		EV_SetShadow(PAPA, 1.0f);
		EV_CreateObjectFunc(&CHA, EV_Alife, -261.29999f, 3.0f, 485.0f, 0, 0x4000, 0);
		EV_CreateObjectFunc(&CHA2, EV_Alife, -261.29999f, 13.0f, 485.0f, 0, 0x4000, 0);
		EV_CreateObjectFunc(&CHA3, EV_Alife, -261.29999f, 23.0f, 485.0f, 0, 0x4000, 0);
		EV_CreateObjectFunc(&CHA4, EV_Alife, -261.29999f, 33.0f, 485.0f, 0, 0x4000, 0);
		EV_SetMode(CHA, 0);
		EV_SetMode(CHA2, 0);
		EV_SetMode(CHA3, 0);
		EV_SetMode(CHA4, 0);
		EV_SetShadow(CHA, 0.40000001f);
		EV_SetShadow(CHA2, 0.40000001f);
		EV_SetShadow(CHA3, 0.40000001f);
		EV_SetShadow(CHA4, 0.40000001f);
		EV_CreateObject(&K_FAT, 4.8000002f, 6.0f, 408.73999f, 0, 0xC500, 0);
		EV_CreateObject(&K_NORMAL, -4.0999999f, 6.0f, 410.5f, 0, 0xC100, 0);
		EV_CreateObject(&K_TALL, -11.0f, 6.0f, 406.29999f, 0, 0xCA00, 0);
		EV_CreateObject(&K_TALL2, 12.0f, 6.0f, 403.0f, 0, 0xB900, 0);
		EV_SetMode(K_NORMAL, 0);
		EV_SetMode(K_FAT, 0);
		EV_SetMode(K_TALL, 0);
		EV_SetMode(K_TALL2, 0);
		EV_SetShadow(K_NORMAL, 1.0f);
		EV_SetShadow(K_FAT, 1.0f);
		EV_SetShadow(K_TALL, 1.0f);
		EV_SetShadow(K_TALL2, 1.0f);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_Wait(1);
		tikal = EV_GetPlayer(2);
		EV_SetAction(tikal, &action_j_j0027_tikal, &TIKAL_TEXLIST, 0.5f, 1, 0);
		EV_SetAction(PAPA, ADV03_ACTIONS[7], ADV03_TEXLISTS[1], 0.69999999f, 1, 0);
		EV_SetMode(object_blue, 0);
		EV_SetMode(object_green, 0);
		EV_SetMode(object_purple, 0);
		EV_SetMode(object_sky, 0);
		EV_SetMode(object_white, 0);
		EV_SetMode(object_yellow, 0);
		EV_SetMode(object_red, 0);
		EV_SetMotion(K_NORMAL, ADV03_OBJECTS[6], motion_kz_0000_k_normal, ADV03_TEXLISTS[3], 0.69999999f, 1, 0);
		EV_SetMotion(K_FAT, ADV03_OBJECTS[3], motion_kz_0004_k_normal, ADV03_TEXLISTS[3], 0.89999998f, 1, 0);
		EV_SetMotion(K_TALL, ADV03_OBJECTS[5], motion_kz_0000_k_normal, ADV03_TEXLISTS[3], 0.5f, 1, 0);
		EV_SetMotion(K_TALL2, ADV03_OBJECTS[5], motion_kz_0004_k_normal, ADV03_TEXLISTS[3], 0.40000001f, 1, 0);
		EV_SetAction(CHA, &action_al_stand_al_model, ADV03_TEXLISTS[0], 0.2f, 1, 4);
		EV_SetAction(CHA2, &action_al_stand_al_model, ADV03_TEXLISTS[0], 0.30000001f, 1, 4);
		EV_SetAction(CHA3, &action_al_stand_al_model, ADV03_TEXLISTS[0], 0.2f, 1, 4);
		EV_SetAction(CHA4, &action_al_stand_al_model, ADV03_TEXLISTS[0], 0.30000001f, 1, 4);
		EV_Alife_FaceChange(CHA, 9);
		EV_Alife_FaceChange(CHA2, 9);
		EV_Alife_FaceChange(CHA3, 9);
		EV_Alife_FaceChange(CHA4, 9);
		EV_CameraPos(0, 0, 0.0f, 72.300003f, 438.0f);
		EV_CameraAng(0, 0, 0x200, 0, 0);
		EV_CameraPos(0, 90, 0.0f, 0.75f, 425.64001f);
		EV_CameraAng(0, 90, 0xF00, 0, 0);
		EV_Wait(87);
		EV_SetPos(object_blue, -8.6300001f, 94.550003f, 20.32f);
		EV_SetAng(object_blue, 0, 0x4000, 0x2000);
		EV_SetPos(object_green, 8.6300001f, 94.550003f, 20.32f);
		EV_SetAng(object_green, 0, 0xB000, 0xE000);
		EV_SetPos(object_purple, 20.0f, 94.830002f, 7.8699999f);
		EV_SetAng(object_purple, 0, 0x2000, 0x2000);
		EV_SetPos(object_sky, -20.0f, 94.830002f, 7.8699999f);
		EV_SetAng(object_sky, 0, 0x6000, 0xE000);
		EV_SetPos(object_white, 18.559999f, 94.599998f, -6.0f);
		EV_SetAng(object_white, 0, 0x8000, 0x2000);
		EV_SetPos(object_yellow, -18.559999f, 94.599998f, -6.0f);
		EV_SetAng(object_yellow, 0, 0x4000, 0xE000);
		EV_SetPos(object_red, 0.0f, 94.599998f, -22.0f);
		EV_SetAng(object_red, 0, 0x4000, 0xE000);
		EV_SetAction(object_blue, &action_m_em_blue, &M_EM_BLUE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_green, &action_m_em_green, &M_EM_GREEN_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_white, &action_m_em_white, &M_EM_WHITE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_purple, &action_m_em_purple, &M_EM_PURPLE_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_sky, &action_m_em_sky, &M_EM_SKY_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_yellow, &action_m_em_yellow, &M_EM_YELLOW_TEXLIST, 1.0f, 1, 0);
		EV_SetAction(object_red, &action_m_em_red, &texlist_m_em_red, 1.0f, 1, 0);
		EV_CameraPos(0, 120, 0.0f, 0.38999999f, 428.44f);
		EV_CameraAng(0, 120, 0x1100, 0, 0);
		EV_Wait(5);
		EV_SerifPlay(1430);
		EV_Msg(msgTbl_ev00F7[TextLanguage][0]); //"\aGet out of my way!"
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(10);
		EV_SerifPlay(1437);
		EV_Msg(msgTbl_ev00F7[TextLanguage][1]); //"\aNo way!"
		EV_Wait(1);
		EV_SerifWait();
		EV_SetPos(tikal, 0.0f, 0.0f, 381.0f);
		EV_SetPos(CHA, -2.5999999f, 3.0f, 372.0f);
		EV_SetPos(CHA2, -1.0f, 2.0f, 376.0f);
		EV_SetPos(CHA3, 3.0f, 4.0f, 370.0f);
		EV_SetPos(CHA4, 1.0f, 3.0f, 379.0f);
		EV_SetAng(tikal, 0, 0, 0);
		EV_SetAng(CHA, 0, 0, 0);
		EV_SetAng(CHA2, 0, 0, 0);
		EV_SetAng(CHA3, 0, 0, 0);
		EV_SetAng(CHA4, 0, 0, 0);
		EV_CameraPerspective(1, 1, 0x2000);
		EV_CameraPos(0, 0, 4.2818899f, 8.3000002f, 405.55505f);
		EV_CameraAng(0, 0, 0x200, 0x600, 0);
		EV_CameraPos(0, 60, 2.50948f, 4.1367402f, 403.4465f);
		EV_CameraAng(0, 60, 0x200, 0xA00, 0);
		EV_SerifPlay(1431);
		EV_Msg(msgTbl_ev00F7[TextLanguage][2]); //"\aDid you hear what I said?"
		EV_Wait(1);
		EV_ClrAction(PAPA);
		EV_SetAction(PAPA, &action_p_p0002_patya, ADV03_TEXLISTS[1], 1.0f, 0, 0);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 1.5f, 1, 4);
		EV_SerifWait();
		EV_CameraPerspective(1, 1, 0x4000);
		EV_CameraPos(0, 0, -5.6577001f, 1.0f, 392.10001f);
		EV_CameraAng(0, 0, 0xF00, 0xF000, 0xFD00);
		EV_CameraPos(1, 18, -3.5f, 3.2f, 386.89999f);
		EV_CameraAng(1, 30, 0x1200, 0xF000, 0xFD00);
		EV_CameraPerspective(1, 15, 0x2AAB);
		EV_SerifPlay(1440);
		EV_SetFace(tikal, "E");
		EV_Msg(msgTbl_ev00F7[TextLanguage][3]); //"\aI won't obey!"
		EV_Wait(10);
		EV_CameraPos(0, 40, -3.1400001f, 3.5599999f, 386.04001f);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_SetPos(CHA, -261.29999f, 3.0f, 485.0f);
		EV_SetPos(CHA2, -261.29999f, 13.0f, 485.0f);
		EV_SetPos(CHA3, -261.29999f, 23.0f, 485.0f);
		EV_SetPos(CHA4, -261.29999f, 33.0f, 485.0f);
		EV_SetAction(tikal, &action_j_j0027_tikal, &TIKAL_TEXLIST, 0.5f, 1, 0);
		EV_SetAction(PAPA, &action_k_patya_talk1_patya, ADV03_TEXLISTS[1], 0.60000002f, 0, 4);
		EV_SetAction(PAPA, ADV03_ACTIONS[7], ADV03_TEXLISTS[1], 0.69999999f, 0, 4);
		EV_SetAction(PAPA, &action_k_patya_talk1_patya, ADV03_TEXLISTS[1], 0.60000002f, 0, 4);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 1.0f, 1, 4);
		EV_CameraPos(0, 0, 4.1199999f, 5.7199998f, 372.07001f);
		EV_CameraAng(0, 0, 0x1C0, 0x7C00, 0);
		EV_CameraPerspective(0, 190, 0x2EEF);
		EV_CameraPos(0, 190, -5.9840002f, 6.8299999f, 375.39999f);
		EV_CameraAng(0, 190, 0xFC00, 0x8E00, 0);
		EV_SerifPlay(1432);
		EV_MsgW(60, msgTbl_ev00F7[TextLanguage][4]); //"\aWe need those 7 Emeralds \nto give us"...
		EV_Msg(msgTbl_ev00F7[TextLanguage][5]); //"\aIt's power for the people. And..."
		EV_Wait(1);
		EV_SerifWait();
		EV_CameraPos(0, 40, -6.3499999f, 7.3000002f, 376.42801f);
		EV_CameraAng(0, 40, 0xFD2B, 0x8C50, 20);
		EV_Wait(5);
		EV_SerifPlay(1433);
		EV_Msg(msgTbl_ev00F7[TextLanguage][6]); //"\athey are your people too, you know!\n"...
		EV_Wait(35);
		EV_ClrAction(PAPA);
		EV_SetAction(PAPA, &action_p_p0002_patya, ADV03_TEXLISTS[1], 0.80000001f, 0, 12);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 1.0f, 1, 4);
		EV_CameraPos(0, 40, -5.4200001f, 3.3f, 386.23999f);
		EV_CameraAng(0, 40, 0xB00, 0x9000, 0x100);
		EV_CameraPerspective(0, 40, 0x238E);
		EV_SerifWait();
		EV_Wait(10);
		EV_SetPos(tikal, 0.0f, 0.0f, 381.0f);
		EV_SetPos(CHA, -2.5999999f, 3.0f, 372.0f);
		EV_SetPos(CHA2, -1.0f, 2.0f, 376.0f);
		EV_SetPos(CHA3, 8.0f, 4.0f, 370.0f);
		EV_SetPos(CHA4, 5.0f, 3.0f, 379.0f);
		EV_SetPos(K_NORMAL, -261.29999f, 3.0f, 485.0f);
		EV_SetPos(K_FAT, -261.29999f, 13.0f, 485.0f);
		EV_SetPos(K_TALL, -261.29999f, 23.0f, 485.0f);
		EV_SetPos(K_TALL2, -261.29999f, 33.0f, 485.0f);
		EV_CameraPos(0, 0, -15.7f, 1.0f, 383.35999f);
		EV_CameraAng(0, 0, 0xC00, 0xD200, 0x400);
		EV_CameraPos(0, 110, -13.2f, 1.0f, 388.79999f);
		EV_SerifPlay(1441);
		EV_SetFace(tikal, "EFD");
		EV_Msg(msgTbl_ev00F7[TextLanguage][7]); //"\aGreed is our enemy!"
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_Wait(20);
		EV_CameraPos(0, 50, -15.67f, 1.0f, 402.57001f);
		EV_CameraAng(0, 50, 0xC70, 0xC900, 0x400);
		EV_SerifPlay(1442);
		EV_SetFace(tikal, "FDCE");
		EV_Msg(msgTbl_ev00F7[TextLanguage][8]); //"\aOnce it starts, \nyou will always wan"...
		EV_SetPos(K_FAT, 16.0f, 6.0f, 423.0f);
		EV_SetPos(K_NORMAL, -10.1f, 6.0f, 422.5f);
		EV_SetPos(K_TALL, -8.0f, 6.0f, 429.29999f);
		EV_SetPos(K_TALL2, 12.0f, 6.0f, 423.0f);
		EV_Wait(15);
		EV_CameraPos(0, 120, -15.1f, 1.0f, 405.5f);
		EV_Wait(80);
		EV_SetAction(tikal, &action_j_j0025_tikal, &TIKAL_TEXLIST, 1.0f, 1, 9);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_Wait(5);
		EV_CameraPos(0, 0, -4.0599999f, 9.5749998f, 391.785f);
		EV_CameraAng(0, 0, 0xF300, 0xF200, 0x400);
		EV_CameraPos(0, 55, -3.0999999f, 8.6339998f, 389.10001f);
		EV_SerifPlay(1443);
		EV_SetFace(tikal, "FADE");
		EV_Msg(msgTbl_ev00F7[TextLanguage][9]); //"\aPlease don't do this.  I beg you!"
		EV_Wait(45);
		EV_CameraPos(0, 150, -2.78f, 8.3199997f, 388.20001f);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_Wait(5);
		EV_SetPos(K_FAT, 16.0f, 6.0f, 403.0f);
		EV_SetPos(K_NORMAL, -10.1f, 6.0f, 402.5f);
		EV_SetPos(K_TALL, -8.0f, 6.0f, 409.29999f);
		EV_SetPos(K_TALL2, 12.0f, 6.0f, 403.0f);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_CameraPos(1, 0, -3.3599999f, 5.5599999f, 394.745f);
		EV_CameraAng(1, 0, 0x1100, 0x9B00, 0x300);
		EV_ClrAction(PAPA);
		EV_SetAction(PAPA, &action_p_p0001_patya, ADV03_TEXLISTS[1], 0.5f, 0, 4);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 1.0f, 1, 4);
		EV_SerifPlay(1434);
		EV_Msg(msgTbl_ev00F7[TextLanguage][10]); //"\aBah!"
		EV_Wait(1);
		EV_SerifWait();
		EV_Wait(5);
		EV_SetMotion(K_NORMAL, ADV03_OBJECTS[6], motion_kz_0000_k_normal, ADV03_TEXLISTS[3], 0.30000001f, 1, 0);
		EV_SetMotion(K_FAT, ADV03_OBJECTS[3], motion_kz_0004_k_normal, ADV03_TEXLISTS[3], 0.30000001f, 1, 0);
		EV_SetMotion(K_TALL, ADV03_OBJECTS[5], motion_kz_0004_k_normal, ADV03_TEXLISTS[3], 0.60000002f, 1, 0);
		EV_SetMotion(K_TALL2, ADV03_OBJECTS[5], motion_kz_0000_k_normal, ADV03_TEXLISTS[3], 0.69999999f, 1, 0);
		EV_CameraPos(0, 160, -10.67f, 0.28999999f, 385.375f);
		EV_SerifPlay(1435);
		EV_Msg(msgTbl_ev00F7[TextLanguage][11]); //"\aI don't listen to the words \nof a ch"...
		EV_Wait(25);
		EV_SetAction(PAPA, &action_p_p0002_patya, ADV03_TEXLISTS[1], 0.89999998f, 0, 4);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 0.5f, 1, 4);
		EV_SerifWait();
		EV_SerifPlay(1436);
		EV_Msg(msgTbl_ev00F7[TextLanguage][12]); //"\aReady, men!  Charge!"
		EV_Wait(1);
		EV_ClrAction(PAPA);
		EV_SetAction(PAPA, &action_p_p0004_patya, ADV03_TEXLISTS[1], 0.60000002f, 0, 4);
		EV_SetAction(PAPA, &action_p_p0003_patya, ADV03_TEXLISTS[1], 0.5f, 1, 4);
		EV_SerifWait();
		EV_SetPos(tikal, -261.29999f, 3.0f, 455.0f);
		EV_SetPos(CHA, -261.29999f, 3.0f, 485.0f);
		EV_SetPos(CHA2, -261.29999f, 13.0f, 485.0f);
		EV_SetPos(CHA3, -261.29999f, 23.0f, 485.0f);
		EV_SetPos(CHA4, -261.29999f, 33.0f, 485.0f);
		EV_SetAction(tikal, &action_j_j0027_tikal, &TIKAL_TEXLIST, 1.0f, 1, 0);
		EventSe_Play(0, 1336, 1800);
		EventSe_Volume(0, 120, 1);
		EventSe_Play(1, 1337, 1800);
		EventSe_Volume(1, 120, 1);
		EV_CameraPerspective(0, 30, 0x4E39);
		EV_CameraPos(0, 30, -5.1999998f, 6.3499999f, 375.17999f);
		EV_CameraAng(0, 30, 0x800, 0x8A00, 0);
		EV_ClrAction(K_NORMAL);
		EV_ClrAction(K_FAT);
		EV_ClrAction(K_TALL);
		EV_ClrAction(K_TALL2);
		EV_SetMotion(K_NORMAL, ADV03_OBJECTS[6], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 1.0f, 1, 0);
		EV_SetMotion(K_FAT, ADV03_OBJECTS[3], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 1.0f, 1, 4);
		EV_SetMotion(K_TALL, ADV03_OBJECTS[5], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 1.0f, 1, 4);
		EV_SetMotion(K_TALL2, ADV03_OBJECTS[5], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 1.0f, 1, 0);
		moveObject(K_TALL2, 12.0f, 6.0f, 403.0f, 4.244f, 6.0f, 364.32999f, 39);
		moveObject(K_NORMAL, -10.1f, 6.0f, 402.5f, -3.5799999f, 6.0f, 364.39999f, 40);
		EV_Wait(4);
		moveObject(K_FAT, 16.0f, 6.0f, 403.0f, 9.0f, 6.0f, 361.0f, 41);
		moveObject(K_TALL, -8.0f, 6.0f, 409.29999f, -3.0f, 6.0f, 361.32999f, 41);
		EV_Wait(24);
		stopObjectAll();
		EV_SetPos(PAPA, -261.29999f, 13.0f, 455.0f);
		EV_SetPos(K_NORMAL, -261.29999f, 3.0f, 485.0f);
		EV_SetPos(K_FAT, -261.29999f, 13.0f, 485.0f);
		EV_SetPos(K_TALL, -261.29999f, 23.0f, 485.0f);
		EV_SetPos(K_TALL2, -261.29999f, 33.0f, 485.0f);
		EV_SetPos(tikal, 0.0f, 0.0f, 381.0f);
		EV_SetPos(CHA, -2.5999999f, 3.0f, 372.0f);
		EV_SetPos(CHA2, -1.0f, 2.0f, 376.0f);
		EV_SetPos(CHA3, 5.0f, 4.0f, 370.0f);
		EV_SetPos(CHA4, 1.0f, 3.0f, 379.0f);
		EV_CameraPos(0, 0, 0.0f, 5.5f, 421.0f);
		EV_CameraAng(0, 0, 0x200, 0, 0);
		EV_CameraPerspective(0, 40, 0x2AAB);
		EV_CameraPos(0, 40, 0.0f, 5.5f, 391.0f);
		EV_CameraAng(0, 40, 0x200, 0, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0028_tikal, &TIKAL_TEXLIST, 0.60000002f, 1, 4);
		BGM_Stop();
		EV_SerifPlay(1444);
		EV_SetFace(tikal, "ZZZZZZZZZZZZZZZZ");
		EV_Msg(msgTbl_ev00F7[TextLanguage][13]); //"\aFather!"
		EventSe_Stop(0);
		EventSe_Stop(1);
		EV_MsgClose();
		WHITE = COverlayCreate(0.14285715f, 0.1f, 1.0f, 1.0f, 1.0f);
		EV_SetAction(tikal, &action_j_j0027_tikal, &TIKAL_TEXLIST, 1.0f, 1, 0);
		EV_ClrFace(tikal);
		EV_SetPos(CHA, -261.29999f, 3.0f, 485.0f);
		EV_SetPos(CHA2, -261.29999f, 13.0f, 485.0f);
		EV_SetPos(CHA3, -261.29999f, 23.0f, 485.0f);
		EV_SetPos(CHA4, -261.29999f, 33.0f, 485.0f);
		EV_Wait(8);
		EV_ClrAction(K_NORMAL);
		EV_ClrAction(K_FAT);
		EV_ClrAction(K_TALL);
		EV_ClrAction(K_TALL2);
		EV_SetMotion(K_NORMAL, ADV03_OBJECTS[6], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 0.090000004f, 1, 0);
		EV_SetMotion(K_FAT, ADV03_OBJECTS[3], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 0.1f, 1, 0);
		EV_SetMotion(K_TALL, ADV03_OBJECTS[5], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 0.15000001f, 1, 0);
		EV_SetMotion(K_TALL2, ADV03_OBJECTS[5], motion_kz_0002_k_normal, ADV03_TEXLISTS[3], 0.079999998f, 1, 0);
		EV_CameraPerspective(1, 1, 0x18E4);
		EV_CameraPos(1, 0, -16.07f, 4.4499998f, 366.23001f);
		EV_CameraAng(1, 0, 0x100, 0xA400, 0);
		EV_CameraPos(0, 290, -15.2f, 3.2f, 362.35001f);
		EV_CameraAng(0, 290, 0x100, 0xA100, 0);
		moveObject(K_TALL2, 4.0f, 5.8000002f, 450.0f, 4.0f, 5.8000002f, 330.0f, 420);
		moveObject(K_NORMAL, 10.1f, 5.8000002f, 395.5f, 10.1f, 5.8000002f, 330.0f, 350);
		moveObject(K_FAT, -6.0f, 5.8000002f, 390.0f, -6.0f, 5.8000002f, 320.0f, 350);
		moveObject(K_TALL, 13.0f, 5.8000002f, 410.0f, 13.0f, 5.8000002f, 350.0f, 350);
		EventSe_Oneshot(1338, 0, 0, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0029_tikal, &TIKAL_TEXLIST, 0.2f, 0, 0);
		EV_SetFace(tikal, "ZZZZZZZZZZZZZZZZZVVVVVVVVVVVVVVVVVVVVVVVVVVVV");
		EV_Wait(7);
		BGM_Play(MusicIDs_evtbgm04);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -0.25f);
		}
		EV_Wait(2);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, 0.0f);
		}
		EV_Wait(235);
		EventSe_Oneshot(1338, 0, 0, 0);
		EV_Wait(20);
		createWaveCtrl(-203.8f, 0.0f, 18.799999f, 0.25f, 1.5f, 6, 18, 1);
		EV_CameraPos(1, 0, -184.32001f, 30.58f, 71.629997f);
		EV_CameraAng(1, 0, 0xE305, 0x200, 0);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_Wait(55);
		moveObject(CHA, 6.8000002f, 0.0f, 327.0f, -1.38f, 0.0f, 321.07999f, 200);
		moveObject(CHA3, 0.0f, 1.7f, 332.0f, 0.0f, 0.0f, 321.0f, 200);
		moveObject(CHA4, 18.299999f, 0.0f, 331.20001f, 18.299999f, 0.0f, 3170.0f, 200);
		EV_SetPos(CHA2, 12.35f, 0.66000003f, 335.13f);
		EV_SetPos(CHA4, 18.299999f, 0.0f, 331.20001f);
		EV_ClrAction(CHA);
		EV_ClrAction(CHA2);
		EV_ClrAction(CHA3);
		EV_ClrAction(CHA4);
		EV_SetAction(CHA, &action_al_damage2_al_model, ADV03_TEXLISTS[0], 0.13f, 1, 0);
		EV_SetAction(CHA2, &action_al_damage_al_model, ADV03_TEXLISTS[0], 0.18000001f, 1, 0);
		EV_SetAction(CHA3, &action_al_damage_al_model, ADV03_TEXLISTS[0], 0.13f, 1, 0);
		EV_SetAction(CHA4, &action_al_damage2_al_model, ADV03_TEXLISTS[0], 0.18000001f, 1, 0);
		EV_Wait(5);
		EventSe_Oneshot(1339, 0, 0, 0);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraPos(0, 0, -2.1259999f, 0.28999999f, 321.71301f);
		EV_CameraAng(0, 0, 0xB00, 0x9F00, 0x900);
		EV_CameraPos(0, 70, -3.6199999f, 0.69999999f, 323.0f);
		createWaveCtrl(-203.8f, 0.0f, 18.799999f, 0.40000001f, 1.5f, 6, 19, 3);
		EV_Wait(20);
		EventSe_Oneshot(1339, 0, 0, 0);
		EV_Wait(50);
		EventSe_Stop(2);
		EV_CameraPos(1, 0, -184.32001f, 30.58f, 71.629997f);
		EV_CameraAng(1, 0, 0xE305, 0x200, 0);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_Wait(5);
		createWaveCtrl(-185.0f, 0.0f, 56.650002f, 0.40000001f, 1.5f, 6, 19, 3);
		EV_Wait(60);
		stopObjectAll();
		moveObject(K_TALL2, 4.0f, 5.8000002f, 330.0f, 4.0f, 5.8000002f, 310.0f, 120);
		moveObject(K_NORMAL, 10.1f, 5.8000002f, 330.0f, 10.1f, 5.8000002f, 290.0f, 120);
		moveObject(K_TALL, 12.0f, 5.8000002f, 322.0f, 12.0f, 5.8000002f, 260.0f, 120);
		moveObject(CHA2, 13.85f, 0.0f, 327.35999f, 13.85f, 0.0f, 320.0f, 120);
		moveObject(CHA3, 8.0f, 1.7f, 324.0f, 8.0f, 0.0f, 300.0f, 150);
		EV_ClrAction(CHA);
		EV_ClrAction(CHA2);
		EV_ClrAction(CHA3);
		EV_ClrAction(CHA4);
		EV_SetAction(CHA, &action_al_damage2_al_model, ADV03_TEXLISTS[0], 0.1f, 1, 0);
		EV_SetAction(CHA2, &action_al_damage_al_model, ADV03_TEXLISTS[0], 0.15000001f, 1, 0);
		EV_SetAction(CHA3, &action_al_damage_al_model, ADV03_TEXLISTS[0], 0.1f, 1, 0);
		EV_SetAction(CHA4, &action_al_damage2_al_model, ADV03_TEXLISTS[0], 0.15000001f, 1, 0);
		EV_Wait(5);
		EventSe_Oneshot(1339, 0, 0, 0);
		EV_CameraPerspective(1, 1, 0x3111);
		EV_CameraPos(0, 0, 11.4f, 1.5f, 334.14999f);
		EV_CameraAng(0, 0, 0x800, 0x1400, 0);
		EV_CameraPos(0, 60, 16.700001f, 1.46f, 331.29999f);
		stopWaveCtrl(0);
		stopWaveCtrl(1);
		EV_Wait(20);
		createWaveCtrl(-203.8f, 0.0f, 18.799999f, 0.34999999f, 1.5f, 6, 18, 1);
		createWaveCtrl(-167.0f, 0.0f, 23.0f, 0.40000001f, 1.5f, 6, 19, 3);
		EventSe_Oneshot(1339, 0, 0, 0);
		EV_Wait(5);
		EventSe_Oneshot(1339, 0, 0, 0);
		EV_Wait(35);
		EventSe_Stop(2);
		EV_CameraPos(1, 0, -184.32001f, 30.58f, 71.629997f);
		EV_CameraAng(1, 0, 0xE305, 0x200, 0);
		EV_CameraPerspective(1, 1, 0x2AAB);
		EV_Wait(5);
		createWaveCtrl(-185.0f, 0.0f, 56.650002f, 0.40000001f, 1.5f, 7, 22, 1);
		EV_Wait(70);
		stopWaveCtrl(0);
		stopWaveCtrl(1);
		stopWaveCtrl(2);
		if (WHITE)
		{
			COverlaySetSpeed(WHITE, -1.0f);
		}
		EV_CameraPos(1, 0, 0.0f, 93.0f, 68.0f);
		EV_CameraAng(1, 0, 0x800, 0, 0);
		EV_CameraAng(0, 120, 0x1200, 0, 0);
		moveObject(object_blue, -8.6300001f, 94.550003f, 20.32f, -8.6300001f, 120.0f, 20.32f, 70);
		moveObject(object_green, 8.6300001f, 94.550003f, 20.32f, 8.6300001f, 120.0f, 20.32f, 70);
		moveObject(object_purple, 20.0f, 94.830002f, 7.8699999f, 20.0f, 120.0f, 7.8699999f, 70);
		moveObject(object_sky, -20.0f, 94.830002f, 7.8699999f, -20.0f, 120.0f, 7.8699999f, 70);
		moveObject(object_white, 18.559999f, 94.599998f, -6.0f, 18.559999f, 120.0f, -6.0f, 70);
		moveObject(object_yellow, -18.559999f, 94.599998f, -6.0f, -18.559999f, 120.0f, -6.0f, 70);
		moveObject(object_red, 0.0f, 94.599998f, -22.0f, 0.0f, 120.0f, -22.0f, 70);
		EV_Wait(70);
		CreateRotaryEmerald(
			0.0f, 120.0f, 0.0f,
			30.0f, 182,
			object_blue,
			object_green,
			object_purple,
			object_sky,
			object_white,
			object_yellow,
			object_red);
		SetEffectRotaryEmerald(1, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.0f, 0.0f, 1.0f);
		SetEffectRotaryEmerald(2, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.0f, 1.0f, 0.0f);
		SetEffectRotaryEmerald(3, &ev_effect_list19, 0.40000001f, 0.69999999f, 1.0f, 0.0f, 1.0f);
		SetEffectRotaryEmerald(4, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.5f, 0.5f, 1.0f);
		SetEffectRotaryEmerald(5, &ev_effect_list19, 0.40000001f, 0.69999999f, 1.0f, 1.0f, 1.0f);
		SetEffectRotaryEmerald(6, &ev_effect_list19, 0.40000001f, 0.69999999f, 0.30000001f, 1.0f, 0.5f);
		SetEffectRotaryEmerald(7, &ev_effect_list19, 0.40000001f, 0.69999999f, 1.0f, 0.0f, 0.0f);
		EV_Wait(125);
		BGM_Stop();
		BLACK = COverlayCreate(0.1f, 0.1f, 0.0f, 0.0f, 0.0f);
		EventSe_Play(2, 1340, 1800);
		EventSe_Volume(2, 127, 1);
		EV_Wait(20);
		EventSe_Stop(2);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeObject(&PAPA);
		deleteRotaryEmeraldTask();
		EV_FreeObject(&object_blue);
		EV_FreeObject(&object_red);
		EV_FreeObject(&object_yellow);
		EV_FreeObject(&object_sky);
		EV_FreeObject(&object_green);
		EV_FreeObject(&object_white);
		EV_FreeObject(&object_purple);
		EventSe_Close();
		EV_FreeObject(&K_NORMAL);
		EV_FreeObject(&K_FAT);
		EV_FreeObject(&K_TALL);
		EV_FreeObject(&K_TALL2);
		EV_FreeObject(&CHA);
		EV_FreeObject(&CHA2);
		EV_FreeObject(&CHA3);
		EV_FreeObject(&CHA4);
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
		break;
	}
}