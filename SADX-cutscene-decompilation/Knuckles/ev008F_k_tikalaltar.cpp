#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventStructs.h"
#include "SADXEventVariables.h"

void ev008F_k_tikalaltar(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		CHA = 0;
		CHA2 = 0;
		CHA3 = 0;
		CHA4 = 0;
		CHA5 = 0;
		SetBankDir(97);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		BGM_Play(MusicIDs_tical);
		EV_CreatePlayer(2, Tikal, 0.40000001f, 90.0f, 48.029999f, 0, 29118, 0);
		EV_Wait(1);
		//EV_ClrAction(EV_GetPlayer(1)); //Game calls the wrong ID here. It wouldn't do anything though, because Tikal isn't running an event animation.
		EV_InitPlayer(2);
		EV_SetPos(player, 10.49f, 90.0f, 91.110001f);
		EV_SetAng(player, 0, 35459, 0);
		EV_Wait(1);
		EV_SetPos(player, 10.49f, 90.0f, 91.110001f);
		EV_SetAng(player, 0, 35459, 0);
		EV_CameraPos(1, 0, 11.34f, 96.0f, 79.639999f);
		EV_CameraAng(1, 0, 0, 30172, 0);
		EV_Wait(10);
		EV_SerifPlay(1099);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][0]); //"\aI beg of you.   Hear me now."
		tikal = EV_GetPlayer(2);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "CLAE");
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0015_tikal, &TIKAL_TEXLIST, 0.07f, 0, 8);
		EV_Wait(20);
		EV_CameraPos(1, 20, 14.07f, 94.540001f, 32.380001f);
		EV_CameraAng(1, 20, 64512, 28636, 0);
		EV_Wait(50);
		EV_SerifPlay(1100);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][1]); //"\aMy father is coming here soon."
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "DEAD");
		EV_CameraPos(1, 0, -0.47999999f, 96.849998f, 39.830002f);
		EV_CameraAng(1, 0, 0, 34268, 0);
		EV_Wait(60);
		EV_SerifPlay(1101);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][2]); //"\aAnd I fear what may happen."
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "D");
		EV_Wait(60);
		EV_CameraPos(1, 0, -200.11f, 131.67f, 41.610001f);
		EV_CameraAng(1, 0, 64768, 51164, 0);
		EV_CameraPos(1, 100, -184.45f, 130.5f, 38.549999f);
		EV_CameraAng(1, 100, 64768, 51164, 0);
		EV_SerifPlay(1102);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][3]); //"\aYou must take everyone \naway from he"...
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "ZAAEC");
		EV_Wait(60);
		EV_CameraPos(1, 0, 11.21f, 104.26f, 39.919998f);
		EV_CameraAng(1, 0, 59136, 23004, 0);
		EV_CameraPos(1, 20, -3.21f, 96.849998f, 42.290001f);
		EV_CameraAng(1, 20, 0, 38876, 0);
		EV_Wait(10);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "LE");
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][4]); //"\aOh please!"
		EV_SerifPlay(1103);
		EV_Wait(20);
		EV_MsgClose();
		EV_Wait(1);
		EV_CameraPos(0, 0, -75.260002f, 96.919998f, 63.110001f);
		EV_CameraAng(0, 0, 62208, 53980, 0);
		EV_Wait(10);
		EventSe_Oneshot(1335, 20, 0, 0);
		createWaveCtrl(-40.700001f, 80.0f, 52.68f, 0.22f, 1.0f, 6, 18, 1);
		EV_Wait(30);
		EventSe_Oneshot(1335, 20, 0, 0);
		createWaveCtrl(-40.700001f, 80.0f, 52.68f, 0.22f, 1.0f, 6, 18, 1);
		EventSe_Oneshot(1335, 20, 0, 0);
		createWaveCtrl(-52.009998f, 80.0f, 56.419998f, 0.30000001f, 1.0f, 6, 19, 2);
		EV_Wait(130);
		EV_FreeWaterRipple(1);
		EV_FreeWaterRipple(2);
		EV_CameraPos(1, 0, -1.24f, 100.15f, 44.73f);
		EV_CameraAng(1, 0, 0, 10972, 0);
		EV_MsgClose();
		EV_CameraPos(1, 200, -1.24f, 100.15f, 44.73f);
		EV_CameraAng(1, 200, 0, 52188, 0);
		EV_Wait(190);
		EV_CameraPos(1, 0, -39.029999f, 95.389999f, 24.879999f);
		EV_CameraAng(1, 0, 512, 46300, 0);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_j_j0018_tikal, &TIKAL_TEXLIST, 0.19f, 0, 0);
		EV_Wait(15);
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "EKE");
		EV_SerifPlay(1104);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][5]); //"\aSo, are you saying you can't\nleave t"...
		EV_Wait(60);
		EV_SerifPlay(1105);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][6]); //"\aI understand... \nLet me talk to my f"...
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "ELDBD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "EDD");
		}
		EV_SetAction(tikal, &action_j_j0019_tikal, &TIKAL_TEXLIST, 0.80000001f, 0, 0);
		EV_Wait(1);
		EV_CameraPos(1, 0, 6.3000002f, 93.139999f, 41.189999f);
		EV_CameraAng(1, 0, 3072, 25308, 0);
		EV_CameraPos(1, 300, 4.5100002f, 93.970001f, 43.25f);
		EV_CameraAng(1, 300, 3072, 25308, 0);
		EV_Wait(130);
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "ED");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "EDE");
		}
		EV_SerifPlay(1106);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][7]); //"\aThere must be a better way \nto do th"...
		EV_SetAction(tikal, &action_j_j0020_tikal, &TIKAL_TEXLIST, 1.0f, 0, 8);
		EV_Wait(1);
		EV_WaitAction(tikal);
		EV_CreateObjectFunc(&CHA, EV_Alife, 15.95f, 92.0f, 50.150002f, 0, 61241, 0);
		EV_CreateObjectFunc(&CHA2, EV_Alife, 16.040001f, 92.0f, 46.169998f, 0, 61241, 0);
		EV_CreateObjectFunc(&CHA3, EV_Alife, 7.8499999f, 92.0f, 52.52f, 0, 61241, 0);
		EV_CreateObjectFunc(&CHA4, EV_Alife, 3.98f, 92.0f, 50.32f, 0, 61241, 0);
		EV_CreateObjectFunc(&CHA5, EV_Alife, 11.28f, 92.0f, 59.23f, 0, 61241, 0);
		EV_Alife_FaceChange(CHA, 9);
		EV_Alife_FaceChange(CHA2, 9);
		EV_Alife_FaceChange(CHA3, 9);
		EV_Alife_FaceChange(CHA4, 9);
		EV_Alife_FaceChange(CHA5, 9);
		EV_SetMode(CHA, 0);
		EV_SetMode(CHA2, 0);
		EV_SetMode(CHA3, 0);
		EV_SetMode(CHA4, 0);
		EV_SetMode(CHA5, 0);
		EV_SetShadow(CHA, 0.40000001f);
		EV_SetShadow(CHA2, 0.40000001f);
		EV_SetShadow(CHA3, 0.40000001f);
		EV_SetShadow(CHA4, 0.40000001f);
		EV_SetShadow(CHA5, 0.40000001f);
		EV_SetAction(CHA, &action_al_stand_al_model, *ADV03_TEXLISTS, 0.69999999f, 1, 4);
		EV_SetAction(CHA2, &action_al_stand_al_model, *ADV03_TEXLISTS, 1.0f, 1, 4);
		EV_SetAction(CHA3, &action_al_stand_al_model, *ADV03_TEXLISTS, 0.80000001f, 1, 4);
		EV_SetAction(CHA4, &action_al_stand_al_model, *ADV03_TEXLISTS, 0.89999998f, 1, 4);
		EV_SetAction(CHA5, &action_al_stand_al_model, *ADV03_TEXLISTS, 0.89999998f, 1, 4);
		EV_CameraPos(1, 0, 11.13f, 99.739998f, 57.59f);
		EV_CameraAng(1, 0, 61184, 7644, 0);
		EV_ClrAction(tikal);
		EV_SetAng(tikal, 0, 2126, 0);
		EV_LookAngle(tikal, -0x1FFF, -0x1FFF, 0);
		EV_Wait(50);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(20);
		EventSe_Oneshot(1333, 0, 0, 0);
		EV_Wait(10);
		EventSe_Oneshot(1334, 0, 0, 0);
		EV_Wait(10);
		EV_CameraPos(1, 0, 26.9f, 90.699997f, 53.75f);
		EV_CameraAng(1, 0, 3328, 14556, 0);
		EV_SerifPlay(1107);
		EV_MsgW(1, msgTbl_ev008F[TextLanguage][8]); //"\aDon't worry, my friends.\nI won't let"...
		EV_ClrFace(tikal);
		EV_SetFace(tikal, "EBC");
		EV_Wait(150);
		EV_CameraPos(1, 0, -13.39f, 93.190002f, 58.369999f);
		EV_CameraAng(1, 0, 3328, 52956, 0);
		EV_LookFree(tikal);
		EV_ClrAction(tikal);
		EV_SetAction(tikal, &action_ti_walk, &TIKAL_TEXLIST, 0.80000001f, 1, 0);
		EV_MovePoint2(tikal, 1.97f, 90.0f, 88.989998f, 0.2f, 0.059999999f);
		EV_Wait(30);
		EV_CameraPos(1, 0, 2.1400001f, 95.699997f, 71.949997f);
		EV_CameraAng(1, 0, 1792, 1500, 0);
		EV_CameraPos(1, 200, 4.2800002f, 92.93f, 87.050003f);
		EV_CameraAng(1, 200, 3328, 1500, 0);
		EV_SetAng(CHA, 0, 299, 0);
		EV_SetAng(CHA2, 0, 299, 0);
		EV_SetAng(CHA3, 0, 299, 0);
		EV_SetAng(CHA4, 0, 299, 0);
		EV_SetAng(CHA5, 0, 299, 0);
		EV_SerifPlay(1108);
		EV_ClrFace(tikal);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(tikal, "EBBLBD");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(tikal, "DEF");
		}
		EV_MsgW(0, msgTbl_ev008F[TextLanguage][9]); //"\aI must do something... quickly."
		EV_Wait(90);
		EV_MsgClose();
		EV_CameraPos(1, 20, 6.0500002f, 96.269997f, 84.309998f);
		EV_CameraAng(1, 20, 512, 39900, 0);
		EventSe_Play(0, 760, 1800);
		EventSe_Volume(0, -120, 120);
		EV_FadeToWhite(60, 30, 0);
		EV_Wait(80);
		EV_MoveFree(tikal);
		EV_Wait(10);
		break;
	case 2:
		EventSe_Close();
		EV_FreeObject(&CHA);
		EV_FreeObject(&CHA2);
		EV_FreeObject(&CHA3);
		EV_FreeObject(&CHA4);
		EV_FreeObject(&CHA5);
		EV_InitPlayer(0);
		EV_RemovePlayer(2);
		EV_FreeFadeToWhite();
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}