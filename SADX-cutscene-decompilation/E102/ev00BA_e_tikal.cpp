#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev00BA[] = {
	(char*)("WAVE7_WA"), &WAVE7_WA_TEXLIST,
	(char*)("EV_ALIFE"), ADV03_TEXLISTS[0],
	0
};

void ev00BA_e_tikal(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		CHAO1 = 0;
		CHAO2 = 0;
		CHAO3 = 0;
		CHAO4 = 0;
		CHAO5 = 0;
		CHAO6 = 0;
		CHAO7 = 0;
		CHAO8 = 0;
		CHAO9 = 0;
		CHAO10 = 0;
		CHAO11 = 0;
		CHAO12 = 0;
		CHAO13 = 0;
		CHAO14 = 0;
		CHAO15 = 0;
		CHAO16 = 0;
		W_OUT = 0;
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		SetBankDir(106);
		EventSe_Init(9);
		EV_CreatePlayer(2, Tikal, 0.0f, 0.0f, 511.5f, 0x4F0, 0xB350, 0);
		EV_CreateObjectFunc(&CHAO1, EV_Alife, -123.4f, 0.0f, 313.39999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO2, EV_Alife, -139.0f, 0.0f, 346.60001f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO3, EV_Alife, -145.0f, 0.0f, 363.60001f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO4, EV_Alife, -135.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO5, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO6, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO7, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO8, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO9, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO10, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO11, EV_Alife, -123.4f, 0.0f, 313.39999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO12, EV_Alife, -139.0f, 0.0f, 346.60001f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO13, EV_Alife, -145.0f, 0.0f, 363.60001f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO14, EV_Alife, -135.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO15, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_CreateObjectFunc(&CHAO16, EV_Alife, -115.0f, 0.0f, 358.79999f, 0, 0, 0);
		EV_Wait(1);
		EV_SetMode(CHAO1, 0);
		EV_SetMode(CHAO2, 0);
		EV_SetMode(CHAO3, 0);
		EV_SetMode(CHAO4, 0);
		EV_SetMode(CHAO5, 0);
		EV_SetMode(CHAO6, 0);
		EV_SetMode(CHAO7, 0);
		EV_SetMode(CHAO8, 0);
		EV_SetMode(CHAO9, 0);
		EV_SetMode(CHAO10, 0);
		EV_SetMode(CHAO11, 0);
		EV_SetMode(CHAO12, 0);
		EV_SetMode(CHAO13, 0);
		EV_SetMode(CHAO14, 0);
		EV_SetMode(CHAO15, 0);
		EV_SetMode(CHAO16, 0);
		tikal = EV_GetPlayer(2);
		EV_SetPos(tikal, -80.0f, 0.0f, 369.5f);
		EV_SetAng(tikal, 0, 0xB200, 0);
		EV_SetPos(CHAO1, 0.0f, 3.0f, 351.0f);
		EV_SetAng(CHAO1, 0, 0, 0);
		EV_SetPos(CHAO2, -14.0f, 1.5f, 360.0f);
		EV_SetAng(CHAO2, 0, 0xA500, 0);
		EV_SetPos(CHAO3, 14.0f, 1.5f, 360.0f);
		EV_SetAng(CHAO3, 0, 0x6500, 0);
		EV_SetPos(CHAO4, -5.0f, 1.5f, 370.0f);
		EV_SetAng(CHAO4, 0, 33536, 0);
		EV_SetPos(CHAO5, 5.0f, 1.5f, 370.0f);
		EV_SetAng(CHAO5, 0, 0x7D00, 0);
		EV_SetPos(CHAO6, -23.0f, 1.5f, 363.0f);
		EV_SetAng(CHAO6, 0, 0x8500, 0);
		EV_SetPos(CHAO7, -13.0f, 1.5f, 370.0f);
		EV_SetAng(CHAO7, 0, 0x8200, 0);
		EV_SetPos(CHAO8, 0.0f, 1.5f, 376.0f);
		EV_SetAng(CHAO8, 0, 0x8000, 0);
		EV_SetPos(CHAO9, 14.0f, 1.5f, 370.0f);
		EV_SetAng(CHAO9, 0, 0x7E00, 0);
		EV_SetPos(CHAO10, 23.0f, 1.5f, 363.0f);
		EV_SetAng(CHAO10, 0, 0x7B00, 0);
		EV_SetPos(CHAO11, -18.0f, 1.5f, 347.0f);
		EV_SetAng(CHAO11, 0, 0xFC00, 0);
		EV_SetPos(CHAO12, 18.0f, 1.5f, 347.0f);
		EV_SetAng(CHAO12, 0, 0x400, 0);
		EV_SetPos(CHAO13, -20.0f, 1.5f, 380.0f);
		EV_SetAng(CHAO13, 0, 0x7F00, 0);
		EV_SetPos(CHAO14, -6.0f, 1.5f, 383.0f);
		EV_SetAng(CHAO14, 0, 0x8100, 0);
		EV_SetPos(CHAO15, 20.0f, 1.5f, 380.0f);
		EV_SetAng(CHAO15, 0, 0x8000, 0);
		EV_SetPos(CHAO16, 6.0f, 1.5f, 383.0f);
		EV_SetAng(CHAO16, 0, 0x7F00, 0);
		EV_SetAction(CHAO1, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.85000002f, 1, 0);
		EV_SetAction(CHAO2, &action_al_sing_al_model, ADV03_TEXLISTS[0], 1.0f, 1, 0);
		EV_SetAction(CHAO3, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.87f, 1, 0);
		EV_SetAction(CHAO4, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.80000001f, 1, 0);
		EV_SetAction(CHAO5, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.88999999f, 1, 0);
		EV_SetAction(CHAO6, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.87f, 1, 0);
		EV_SetAction(CHAO7, &action_al_sing_al_model, ADV03_TEXLISTS[0], 1.1f, 1, 0);
		EV_SetAction(CHAO8, &action_al_sing_al_model, ADV03_TEXLISTS[0], 1.05f, 1, 0);
		EV_SetAction(CHAO9, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.88999999f, 1, 0);
		EV_SetAction(CHAO10, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.88499999f, 1, 0);
		EV_SetAction(CHAO11, &action_al_sing_al_model, ADV03_TEXLISTS[0], 1.03f, 1, 0);
		EV_SetAction(CHAO12, &action_al_sing_al_model, ADV03_TEXLISTS[0], 1.05f, 1, 0);
		EV_SetAction(CHAO13, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.83999997f, 1, 0);
		EV_SetAction(CHAO14, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.80000001f, 1, 0);
		EV_SetAction(CHAO15, &action_al_sing_al_model, ADV03_TEXLISTS[0], 0.80000001f, 1, 0);
		EV_SetAction(CHAO16, &action_al_sing_al_model, ADV03_TEXLISTS[0], 1.1f, 1, 0);
		EV_Alife_FaceChange(CHAO1, 8);
		EV_Alife_FaceChange(CHAO2, 2);
		EV_Alife_FaceChange(CHAO3, 10);
		EV_Alife_FaceChange(CHAO4, 8);
		EV_Alife_FaceChange(CHAO5, 2);
		EV_Alife_FaceChange(CHAO6, 10);
		EV_Alife_FaceChange(CHAO7, 2);
		EV_Alife_FaceChange(CHAO8, 7);
		EV_Alife_FaceChange(CHAO9, 2);
		EV_Alife_FaceChange(CHAO10, 8);
		EV_Alife_FaceChange(CHAO11, 8);
		EV_Alife_FaceChange(CHAO12, 2);
		EV_Alife_FaceChange(CHAO13, 10);
		EV_Alife_FaceChange(CHAO14, 8);
		EV_Alife_FaceChange(CHAO15, 10);
		EV_Alife_FaceChange(CHAO16, 2);
		EV_SetShadow(CHAO1, 0.60000002f);
		EV_SetShadow(CHAO2, 0.60000002f);
		EV_SetShadow(CHAO3, 0.60000002f);
		EV_SetShadow(CHAO4, 0.60000002f);
		EV_SetShadow(CHAO5, 0.60000002f);
		EV_SetShadow(CHAO6, 0.60000002f);
		EV_SetShadow(CHAO7, 0.60000002f);
		EV_SetShadow(CHAO8, 0.60000002f);
		EV_SetShadow(CHAO9, 0.60000002f);
		EV_SetShadow(CHAO10, 0.60000002f);
		EV_SetShadow(CHAO11, 0.60000002f);
		EV_SetShadow(CHAO12, 0.60000002f);
		EV_SetShadow(CHAO13, 0.60000002f);
		EV_SetShadow(CHAO14, 0.60000002f);
		EV_SetShadow(CHAO15, 0.60000002f);
		EV_SetShadow(CHAO16, 0.60000002f);
		EV_InitPlayer(0);
		EV_SetPos(player, 0.0f, -10.9f, 475.89999f);
		EV_Wait(5);
		EV_SetAng(player, 0x500, 0x8000, 69);
		EV_CameraPos(1, 0, -4.8000002f, -6.0f, 492.39999f);
		EV_CameraAng(1, 0, 0x700, 0xF400, 0);
		EV_CameraPos(1, 140, -11.8f, -5.2600002f, 491.54999f);
		EV_CameraAng(1, 140, 0x700, 0xF800, 0);
		EventSe_Oneshot(1336, 0, 70, 0);
		EventSe_Oneshot(1337, 0, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 10, 80, 0);
		EventSe_Oneshot(1336, 0, 60, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 20, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 0, 80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 20, 30, 0);
		EventSe_Oneshot(1337, 10, -80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1337, 0, -90, 0);
		EventSe_Oneshot(1336, 10, 80, 0);
		EventSe_Oneshot(1337, 0, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 0, 80, 0);
		EventSe_Oneshot(1336, -20, -40, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 0, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 10, 70, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, -20, 30, 0);
		EventSe_Oneshot(1337, 0, -60, 0);
		EV_Wait(15);
		EventSe_Oneshot(1337, 20, 0, 0);
		EV_CameraPos(1, 0, 0.0f, 3.9400001f, 361.20001f);
		EV_CameraAng(1, 0, 0x800, 0, 0);
		EV_CameraPos(1, 90, 0.0f, 3.5f, 363.20001f);
		EventSe_Oneshot(1336, 0, 120, 0);
		EventSe_Oneshot(1337, 10, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 20, -100, 0);
		EventSe_Oneshot(1336, 0, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, -30, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 10, 80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, -30, 30, 0);
		EventSe_Oneshot(1337, 0, -90, 0);
		EV_Wait(15);
		EventSe_Oneshot(1337, -20, 90, 0);
		EV_CameraPos(1, 0, -37.5f, 21.700001f, 293.20001f);
		EV_CameraAng(1, 0, 0xF400, 0xA00, 0);
		EV_CameraPos(1, 70, -37.900002f, 27.5f, 291.54001f);
		EventSe_Oneshot(1334, 128, -20, 0);
		createWaveCtrl(-73.0f, -0.60000002f, 223.60001f, 0.25f, 1.0f, 6, 18, 1);
		EV_Wait(55);
		EV_CameraPos(1, 0, -13.2f, 2.1800001f, 354.17001f);
		EV_CameraAng(1, 0, 0x400, 0x7B21, 0);
		EventSe_Oneshot(1337, 80, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 60, 80, 0);
		EV_Wait(15);
		EV_CameraPos(1, 100, -11.25f, 2.2f, 354.26001f);
		EV_CameraAng(1, 100, 0x400, 0x7E21, 0);
		EventSe_Oneshot(1336, 30, 120, 0);
		EventSe_Oneshot(1337, 40, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 50, 80, 0);
		EventSe_Oneshot(1336, 50, -100, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 40, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 20, 80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 30, 30, 0);
		EventSe_Oneshot(1337, 30, 80, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 40, -90, 0);
		EV_CameraPos(1, 0, -37.5f, 21.700001f, 293.20001f);
		EV_CameraAng(1, 0, 0xF400, 0xA00, 0);
		EV_CameraPos(1, 70, -37.900002f, 27.5f, 291.54001f);
		EventSe_Oneshot(1334, 128, 40, 0);
		createWaveCtrl(-66.0f, -2.3f, 234.60001f, 0.30000001f, 1.0f, 6, 19, 3);
		EV_Wait(80);
		EV_CameraPos(1, 0, 13.2f, 2.1800001f, 354.17001f);
		EV_CameraAng(1, 0, 0x400, 0x8038, 0);
		EventSe_Oneshot(1337, 30, 0, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 20, 40, 0);
		EV_Wait(15);
		EV_CameraPos(1, 100, 11.25f, 2.2f, 354.26001f);
		EV_CameraAng(1, 100, 0x400, 0x8038, 0);
		EventSe_Oneshot(1336, 20, 120, 0);
		EventSe_Oneshot(1337, -30, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 40, 0, 0);
		EventSe_Oneshot(1337, 80, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, -20, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 30, 80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 40, 100, 0);
		EventSe_Oneshot(1336, 50, -100, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 60, 90, 0);
		EV_CameraPos(1, 0, -37.5f, 21.700001f, 293.20001f);
		EV_CameraAng(1, 0, 0xF400, 0xA00, 0);
		EV_CameraPos(1, 70, -37.900002f, 27.5f, 291.54001f);
		EventSe_Oneshot(1335, 128, -100, 0);
		createWaveCtrl(-73.0f, -0.60000002f, 223.60001f, 0.25f, 1.0f, 6, 18, 1);
		EV_Wait(30);
		EventSe_Oneshot(1334, 128, -100, 0);
		createWaveCtrl(-73.0f, -0.60000002f, 223.60001f, 0.2f, 1.0f, 7, 22, 1);
		EventSe_Oneshot(1333, 128, -100, 0);
		createWaveCtrl(-66.0f, -2.3f, 234.60001f, 0.30000001f, 1.0f, 6, 19, 3);
		EV_Wait(40);
		EV_CameraPos(1, 0, 0.0f, 15.18f, 382.79001f);
		EV_CameraAng(1, 0, 0x500, 0xFB21, 0x200);
		EV_CameraPos(0, 90, 0.0f, 3.1199999f, 382.20001f);
		EV_CameraAng(0, 90, 0xA00, 0, 0);
		EventSe_Oneshot(1336, 10, 120, 0);
		EventSe_Oneshot(1337, 40, -20, 0);
		EV_Wait(15);
		EventSe_Oneshot(1337, 50, 30, 0);
		EventSe_Oneshot(1336, 80, -90, 0);
		EV_Wait(10);
		EventSe_Oneshot(1336, 60, 0, 0);
		EventSe_Oneshot(1337, 70, 90, 0);
		EventSe_Oneshot(1337, -12, -90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 10, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, -11, 80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 40, 80, 0);
		EventSe_Oneshot(1336, -12, -100, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 80, -60, 0);
		EV_CameraPos(0, 100, 0.0f, 0.89999998f, 390.94f);
		EV_CameraAng(0, 100, 0xA00, 0, 0);
		EV_Wait(100);
		EV_CameraPos(1, 0, -37.5f, 21.700001f, 293.20001f);
		EV_CameraAng(1, 0, 0xF400, 0xA00, 0);
		EV_CameraPos(1, 70, -37.900002f, 27.5f, 291.54001f);
		EventSe_Oneshot(1333, 128, -100, 0);
		createWaveCtrl(-75.0f, -0.60000002f, 220.60001f, 0.25f, 1.0f, 6, 18, 1);
		EV_Wait(30);
		EventSe_Oneshot(1334, 110, 60, 0);
		createWaveCtrl(-75.0f, -0.60000002f, 220.60001f, 0.2f, 1.0f, 7, 22, 1);
		EventSe_Oneshot(1335, 110, -70, 0);
		createWaveCtrl(-61.0f, -2.3f, 234.60001f, 0.30000001f, 1.0f, 6, 19, 3);
		EV_Wait(40);
		EV_Wait(1);
		EV_InitPlayer(0);
		EV_SetPos(tikal, -40.0f, -4.0999999f, 433.5f);
		EV_SetAng(tikal, 0x500, 0x8000, 0);
		EV_SetPos(player, 0.0f, -8.8999996f, 420.0f);
		EV_SetAng(player, 0x500, 0x8000, 69);
		EV_MovePoint2(player, 0.0f, 0.0f, 396.32001f, 0.40000001f, 0.059999999f);
		EV_SetPos(tikal, -27.0f, 0.0f, 417.5f);
		EV_SetAng(tikal, 0, 0x6300, 0);
		EV_CameraPos(1, 0, -8.1800003f, 20.1f, 400.64999f);
		EV_CameraAng(1, 0, 0xF000, 0xF521, 0x300);
		EV_CameraPos(1, 90, -9.6599998f, 26.4f, 405.0f);
		EV_CameraAng(1, 90, 0xEB00, 0xF521, 0x300);
		EventSe_Oneshot(1336, 40, -90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 60, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 40, 80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 20, 100, 0);
		EventSe_Oneshot(1337, -30, -100, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 80, -60, 0);
		EV_CameraPos(1, 0, -2.2f, 14.3f, 384.5f);
		EV_CameraAng(1, 0, 0xF00, 0x8B21, 0);
		EV_SetAction(player, E102_ACTIONS[0], &E102_TEXLIST, 0.40000001f, 1, 16);
		EventSe_Oneshot(1336, 40, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 60, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 50, 20, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 20, 30, 0);
		EventSe_Oneshot(1336, 10, -40, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, -60, -10, 0);
		EV_SerifPlay(1213);
		EV_CameraPos(0, 3, -1.9400001f, 14.7f, 385.39999f);
		EV_Wait(3);
		EV_CameraPos(0, 3, -2.2f, 14.3f, 384.5f);
		EV_Msg(msgTbl_ev00BA[TextLanguage][0]); //"\aNo!  Don't go any closer!"
		EventSe_Oneshot(1336, 0, -40, 0);
		EventSe_Oneshot(1337, -60, -10, 0);
		EV_Wait(30);
		EV_CameraPos(1, 0, -19.799999f, 2.5999999f, 427.88f);
		EV_CameraAng(1, 0, 0x700, 0xFA21, 0);
		EV_CameraPos(1, 110, -23.799999f, 2.5999999f, 427.29999f);
		EV_Wait(40);
		BGM_Play(MusicIDs_tical);
		EV_Wait(70);
		EV_MsgClose();
		EV_CameraPos(1, 0, -22.58f, 3.7f, 411.29999f);
		EV_CameraAng(1, 0, 0xE900, 0x6721, 0);
		EV_CameraPos(0, 120, -21.73f, 6.3000002f, 410.39999f);
		EV_CameraAng(0, 120, 0xF700, 0x6721, 0);
		EV_Wait(120);
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "CC");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "CCCE");
		}
		EV_SetAction(tikal, &action_j_j0003_tikal, &TIKAL_TEXLIST, 1.0f, 0, 4);
		EV_SetAction(tikal, &action_j_j0030_tikal, &TIKAL_TEXLIST, 1.2f, 1, 8);
		EV_SerifPlay(1214);
		EV_Wait(30);
		EV_Msg(msgTbl_ev00BA[TextLanguage][1]); //"\aI'm sorry, I see you must not be \non"...
		EV_Wait(70);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_ClrFace(tikal);
		}
		EV_SerifWait();
		if (VoiceLanguage == Languages_English)
		{
			EV_ClrFace(tikal);
		}
		EV_Wait(50);
		EV_MsgClose();
		EV_ClrAction(tikal);
		EV_SetPos(tikal, -15.2f, 0.0f, 397.89999f);
		EV_SetAng(tikal, 0x500, 0x7600, 0);
		EV_MovePoint2(tikal, -13.5f, 0.0f, 391.17001f, 0.60000002f, 0.059999999f);
		EV_CameraPos(1, 0, -14.6f, 8.25f, 376.0f);
		EV_CameraAng(1, 0, 0x300, 0x9621, 0);
		EV_CameraPos(1, 100, -17.16f, 8.3299999f, 377.5f);
		EV_WaitMove(tikal);
		EV_SetAction(tikal, &action_j_j0030_tikal, &TIKAL_TEXLIST, 1.0f, 1, 16);
		EV_Wait(80);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CCCCCCCCCCC");
		EV_SerifPlay(1215);
		EV_Msg(msgTbl_ev00BA[TextLanguage][2]); //"\aDid you notice the presence \nguardin"...
		EV_SerifWait();
		EV_ClrFace(tikal);
		EventSe_Oneshot(1336, 20, 100, 0);
		EventSe_Oneshot(1337, -30, -100, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 0, -30, 0);
		EV_Wait(20);
		EV_SetAction(tikal, &action_j_j0031_tikal, &TIKAL_TEXLIST, 1.2f, 0, 0);
		EV_SetAction(tikal, &action_j_j0030_tikal, &TIKAL_TEXLIST, 1.2f, 1, 16);
		EV_SerifPlay(1216);
		EV_Msg(msgTbl_ev00BA[TextLanguage][3]); //"\aHe's a very loving \nand gentle creat"...
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CCC");
		EventSe_Oneshot(1336, 20, 100, 0);
		EventSe_Oneshot(1337, -30, -100, 0);
		EV_Wait(25);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EventSe_Oneshot(1336, 0, -10, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, -50, -60, 0);
		EV_Wait(15);
		EV_MsgClose();
		EV_CameraPos(1, 0, -23.15f, 6.8699999f, 347.89999f);
		EV_CameraAng(1, 0, 0xFA00, 0x8C21, 0);
		EV_CameraPos(1, 300, 10.57f, 6.0f, 338.60001f);
		EV_CameraAng(1, 300, 0xFB00, 0x7321, 0);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC");
		EV_SerifPlay(1217);
		EV_Msg(msgTbl_ev00BA[TextLanguage][4]); //"\aThese little creatures are too \nvuln"...
		EventSe_Oneshot(1336, 20, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 10, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, -30, -10, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, -20, 60, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 30, -10, 0);
		EV_Wait(20);
		EventSe_Oneshot(1336, 0, 70, 0);
		EV_Wait(20);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EventSe_Oneshot(1337, 30, 20, 0);
		EventSe_Oneshot(1336, 10, 40, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, -20, -60, 0);
		EV_Wait(15);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC");
		EV_SerifPlay(1218);
		EV_Msg(msgTbl_ev00BA[TextLanguage][5]); //"\aThis protection allows them \nto cont"...
		EventSe_Oneshot(1337, -20, 60, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 10, -10, 0);
		EV_Wait(20);
		EventSe_Oneshot(1336, -20, 70, 0);
		EV_Wait(20);
		EventSe_Oneshot(1336, 20, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 10, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 10, -10, 0);
		EV_SerifWait();
		EV_MsgClose();
		EV_ClrFace(tikal);
		EventSe_Oneshot(1337, -10, 40, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 60, -10, 0);
		EV_Wait(20);
		EV_CameraPos(1, 0, 7.3000002f, 13.3f, 371.25f);
		EV_CameraAng(1, 0, 0xFDF9, 0x6F21, 0);
		EV_CameraPos(1, 140, 1.38f, 10.3f, 370.5f);
		EV_CameraAng(1, 140, 0x200, 0x7921, 0);
		EV_SetAction(tikal, &action_j_j0032_tikal, &TIKAL_TEXLIST, 1.2f, 0, 0);
		EV_SetAction(tikal, &action_j_j0030_tikal, &TIKAL_TEXLIST, 1.2f, 1, 16);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC");
		EV_SerifPlay(1219);
		EV_Msg(msgTbl_ev00BA[TextLanguage][6]); //"\aEven I was surprised the first time "...
		EventSe_Oneshot(1337, -10, 100, 0);
		EV_Wait(20);
		EventSe_Oneshot(1336, 0, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 0, -80, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, -10, -110, 0);
		EventSe_Oneshot(1337, -20, 60, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 0, -110, 0);
		EV_ClrFace(tikal);
		EV_SerifWait();
		EventSe_Oneshot(1336, 0, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, -20, -100, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, -10, -110, 0);
		EventSe_Oneshot(1337, -40, 60, 0);
		EV_CameraPos(1, 0, 1.38f, 10.3f, 370.5f);
		EV_CameraAng(1, 0, 0x200, 0x7921, 0);
		EV_CameraPos(1, 230, -27.129999f, 9.0f, 376.17999f);
		EV_CameraAng(1, 230, 0, 0xA021, 0);
		EV_SetAction(tikal, &action_j_j0033_tikal, &TIKAL_TEXLIST, 0.69999999f, 0, 0);
		EV_SetAction(tikal, &action_j_j0030_tikal, &TIKAL_TEXLIST, 1.2f, 1, 16);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CCC");
		EV_SerifPlay(1220);
		EV_Msg(msgTbl_ev00BA[TextLanguage][7]); //"\aNow my father is trying \nto take the"...
		EventSe_Oneshot(1337, -20, 60, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, -30, -10, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 0, 70, 0);
		EV_Wait(20);
		EventSe_Oneshot(1336, -20, 90, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, -10, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, -30, -10, 0);
		EV_Wait(20);
		EV_SerifWait();
		EV_ClrFace(tikal);
		EventSe_Oneshot(1337, 10, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, -30, -10, 0);
		EV_Wait(25);
		EV_CameraPos(1, 0, -27.129999f, 9.0f, 376.17999f);
		EV_CameraAng(1, 0, 0, 0xA021, 0);
		EV_CameraPos(1, 120, -27.200001f, 7.0999999f, 376.28f);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CCCC");
		EV_SerifPlay(1221);
		EV_Msg(msgTbl_ev00BA[TextLanguage][8]); //"\aIt seems his heart is closed off \nto"...
		EV_SerifWait();
		EV_ClrFace(tikal);
		EV_Wait(60);
		EV_CameraPos(1, 0, 0.0f, 7.0f, 434.56f);
		EV_CameraAng(1, 0, 0x500, 0xF221, 0);
		EV_CameraPos(1, 180, -25.57f, 5.0999999f, 419.56f);
		EV_CameraAng(1, 180, 0x500, 0xF221, 0);
		EV_SerifPlay(1222); 
		EV_MsgW(120, msgTbl_ev00BA[TextLanguage][9]); //"\aMy true hope is that some day, \nwe'l"...
		EV_Wait(1);
		EventSe_Oneshot(1336, 0, 70, 0);
		EventSe_Oneshot(1337, 0, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 10, 80, 0);
		EventSe_Oneshot(1336, 0, 60, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 20, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 0, 80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 20, 30, 0);
		EventSe_Oneshot(1337, 10, -80, 0);
		EV_Wait(15);
		EventSe_Oneshot(1337, 0, -90, 0);
		EventSe_Oneshot(1336, 10, 80, 0);
		EventSe_Oneshot(1337, 0, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1336, 0, 80, 0);
		EventSe_Oneshot(1336, -20, -40, 0);
		EV_Wait(20);
		EventSe_Oneshot(1337, 20, -20, 0);
		EV_Wait(25);
		EventSe_Oneshot(1337, 30, 70, 0);
		EV_Wait(15);
		EventSe_Oneshot(1336, 20, 30, 0);
		EventSe_Oneshot(1337, 10, -60, 0);
		EV_Wait(15);
		EventSe_Oneshot(1337, 40, 0, 0);
		EV_SerifWait();
		EV_MsgClose();
		EV_Wait(30);
		EV_CameraPos(1, 0, -2.4000001f, 12.4f, 382.39999f);
		EV_CameraAng(1, 0, 0xE00, 0x8821, 0);
		EV_CameraPos(1, 100, -1.67f, 13.76f, 386.10001f);
		EventSe_Oneshot(1336, 0, 80, 0);
		EventSe_Oneshot(1336, -20, -40, 0);
		EV_Wait(20);
		W_OUT = COverlayCreate(0.016000001f, 0.0f, 1.0f, 1.0f, 1.0f);
		EventSe_Play(1, 760, 90);
		EV_Wait(25);
		EventSe_Oneshot(1336, -10, 80, 0);
		EventSe_Oneshot(1336, -30, -40, 0);
		EV_Wait(10);
		EventSe_Oneshot(1337, -30, -20, 0);
		EV_Wait(55);
		break;
	case 2:
		EV_CameraOff();
		EV_PadOn();
		EventSe_Close();
		stopObjectAll();
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		if (W_OUT)
		{
			FreeTask(W_OUT);
			W_OUT = 0;
		}
		EV_FreeObject(&CHAO1);
		EV_FreeObject(&CHAO2);
		EV_FreeObject(&CHAO3);
		EV_FreeObject(&CHAO4);
		EV_FreeObject(&CHAO5);
		EV_FreeObject(&CHAO6);
		EV_FreeObject(&CHAO7);
		EV_FreeObject(&CHAO8);
		EV_FreeObject(&CHAO9);
		EV_FreeObject(&CHAO10);
		EV_FreeObject(&CHAO11);
		EV_FreeObject(&CHAO12);
		EV_FreeObject(&CHAO13);
		EV_FreeObject(&CHAO14);
		EV_FreeObject(&CHAO15);
		EV_FreeObject(&CHAO16);
		break;
	}
}