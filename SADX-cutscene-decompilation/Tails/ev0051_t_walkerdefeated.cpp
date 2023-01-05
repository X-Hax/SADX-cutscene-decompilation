#include "SADXModLoader.h"
#include "SADXEventFunctions.h"
#include "SADXEventVariables.h"

PVMEntry texTbl_ev0051[] = { 0 };

void ev0051_t_walkerdefeated(int state)
{
	switch (state) {
	case 1:
		player = EV_GetPlayer(0);
		SetBankDir(92);
		EventSe_Init(1);
		EV_CameraOn();
		EV_PadOff();
		EV_CanselOn();
		EV_InitPlayer(0);
		EV_CameraPos(1, 0, -474.59f, 5.0599999f, 1034.16f);
		EV_CameraAng(1, 0, 0xF9CE, 0xA2BD, 0);
		EV_CameraPos(1, 300, -470.87f, 4.3099999f, 1037.41f);
		EV_CameraAng(1, 300, 0xF9CE, 0xA2BD, 0);
		EventSe_Play(0, 1337, 1800);
		EV_SetPos(player, -466.10999f, -2.5f, 1043.02f);
		EV_SetAng(player, 0, 0x913A, 0);
		EV_Wait(1);
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0001_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_CreateObject(&BOY, -528.15997f, 6.0f, 1244.91f, 0, 0x50F, 0);
		EV_CreateObject(&OYAJI, -532.16998f, 10.0f, 1243.4399f, 0, 0x50F, 0);
		EV_CreateObject(&FAT_B, -527.03998f, 8.3000002f, 1272.46f, 0, 0x50F, 0);
		EV_CreateObject(&LADY, -538.07001f, 10.0f, 1268.95f, 0, 0x50F, 0);
		EV_CreateObject(&GIRL, -533.53003f, 6.0f, 1259.09f, 0, 0x50F, 0);
		EV_CreateObject(&BOY2, -534.28998f, 6.0f, 1266.88f, 0, 0x50F, 0);
		EV_CreateObject(&OYAJI2, -539.62f, 10.0f, 1281.7f, 0, 0x50F, 0);
		EV_CreateObject(&FAT2, -541.08002f, 8.3000002f, 1249.92f, 0, 0x50F, 0);
		EV_CreateObject(&LADY2, -534.69f, 10.0f, 1234.08f, 0, 0x50F, 0);
		EV_CreateObject(&GIRL2, -526.90997f, 6.0f, 1229.34f, 0, 0x50F, 0);
		EV_Wait(1);
		EV_SetMode(BOY, 0);
		EV_ClrAction(BOY);
		EV_SetMotion(BOY, MODEL_SS_PEOPLE_OBJECTS[17], MODEL_SS_PEOPLE_MOTIONS[26], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(OYAJI, 0);
		EV_ClrAction(OYAJI);
		EV_SetMotion(OYAJI, *MODEL_SS_PEOPLE_OBJECTS, MODEL_SS_PEOPLE_MOTIONS[1], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(FAT_B, 0);
		EV_ClrAction(FAT_B);
		EV_SetMotion(FAT_B, MODEL_SS_PEOPLE_OBJECTS[15], MODEL_SS_PEOPLE_MOTIONS[23], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(LADY, 0);
		EV_ClrAction(LADY);
		EV_SetMotion(LADY, MODEL_SS_PEOPLE_OBJECTS[7], MODEL_SS_PEOPLE_MOTIONS[8], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(GIRL, 0);
		EV_ClrAction(GIRL);
		EV_SetMotion(GIRL, MODEL_SS_PEOPLE_OBJECTS[9], MODEL_SS_PEOPLE_MOTIONS[12], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(BOY2, 0);
		EV_ClrAction(BOY2);
		EV_SetMotion(BOY2, MODEL_SS_PEOPLE_OBJECTS[18], MODEL_SS_PEOPLE_MOTIONS[26], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(OYAJI2, 0);
		EV_ClrAction(OYAJI2);
		EV_SetMotion(OYAJI2, MODEL_SS_PEOPLE_OBJECTS[2], MODEL_SS_PEOPLE_MOTIONS[1], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(FAT2, 0);
		EV_ClrAction(FAT2);
		EV_SetMotion(FAT2, MODEL_SS_PEOPLE_OBJECTS[16], MODEL_SS_PEOPLE_MOTIONS[23], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(LADY2, 0);
		EV_ClrAction(LADY2);
		EV_SetMotion(LADY2, MODEL_SS_PEOPLE_OBJECTS[5], MODEL_SS_PEOPLE_MOTIONS[8], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetMode(GIRL2, 0);
		EV_ClrAction(GIRL2);
		EV_SetMotion(GIRL2, MODEL_SS_PEOPLE_OBJECTS[11], MODEL_SS_PEOPLE_MOTIONS[12], ADV00_TEXLISTS[6], 0.5f, 1, 0);
		EV_SetFace(player, "K");
		EV_Wait(40);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "M");
		}
		EV_MsgW(0, msgTbl_ev0051[TextLanguage][0]); //"\aHey!   I did it!"
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "FE");
		}
		EV_SerifPlay(819);
		EV_Wait(100);
		EV_MsgClose();
		EV_CameraPos(1, 0, -509.81f, 4.77f, 1239.4301f);
		EV_CameraAng(1, 0, 0xC00, 0x3B8C, 0);
		EV_CameraPos(1, 150, -513.52002f, 4.77f, 1273.22f);
		EV_CameraAng(1, 150, 0xC00, 0x3B8C, 0);
		EV_SerifPlay(825);
		EV_Wait(30);
		EV_SerifPlay(821);
		EV_Wait(30);
		EV_SerifPlay(824);
		EV_Wait(1);
		EV_CameraPos(1, 0, -472.03f, 8.3900003f, 1033.49f);
		EV_CameraAng(1, 0, 0xEB84, 0x9772, 0);
		EV_CameraPos(1, 200, -470.12f, 6.46f, 1036.3199f);
		EV_CameraAng(1, 200, 0xEB84, 0x9772, 0);
		EV_SetPos(BOY, -431.57001f, 3.0f, 1296.59f);
		EV_SetAng(BOY, 0, 0x79B9, 0);
		EV_SetPos(FAT_B, -452.85999f, 7.0f, 1292.42f);
		EV_SetAng(FAT_B, 0, 0x79B9, 0);
		EV_SetPos(OYAJI, -460.01999f, 7.3000002f, 1278.92f);
		EV_SetAng(OYAJI, 0, 0x79B9, 0);
		EV_SetPos(LADY, -413.94f, 8.0f, 1281.87f);
		EV_SetAng(LADY, 0, 0x79B9, 0);
		EV_SetPos(GIRL, -427.59f, 3.0f, 1286.2f);
		EV_SetAng(GIRL, 0, 0x79B9, 0);
		EV_SetPos(BOY2, -420.69f, 3.0f, 1287.15f);
		EV_SetAng(BOY2, 0, 0x79B9, 0);
		EV_SetPos(FAT2, -444.57999f, 7.0f, 1283.58f);
		EV_SetAng(FAT2, 0, 0x79B9, 0);
		EV_SetPos(OYAJI2, -437.03f, 7.3000002f, 1288.17f);
		EV_SetAng(OYAJI2, 0, 0x79B9, 0);
		EV_SetPos(LADY2, -450.42999f, 8.0f, 1279.9399f);
		EV_SetAng(LADY2, 0, 0x79B9, 0);
		EV_SetPos(GIRL2, -457.17999f, 3.0f, 1281.1f);
		EV_SetAng(GIRL2, 0, 0x79B9, 0);
		EV_Wait(1);
		EV_SetAction(player, &action_m_m0130_miles, &MILES_TEXLIST, 0.5f, 0, 0);
		EV_Wait(15);
		EV_SetAction(player, &action_m_m0131_miles, &MILES_TEXLIST, 1.0f, 1, 0);
		EV_Wait(5);
		EV_SerifPlay(820);
		EV_Wait(5);
		EV_ClrFace(player);
		if (VoiceLanguage == Languages_Japanese)
		{
			EV_SetFace(player, "G");
		}
		if (VoiceLanguage == Languages_English)
		{
			EV_SetFace(player, "GE");
		}
		EV_MsgW(0, msgTbl_ev0051[TextLanguage][1]); //"\aHeh!   I did it all by myself!"
		BGM_Play(MusicIDs_themiles);
		EV_SerifPlay(822);
		EV_Wait(1);
		EV_MsgClose();
		EV_SetFace(player, "bbbbb");
		EV_ClrAction(player);
		EV_SetAction(player, &action_m_m0101_miles, &MILES_TEXLIST, 1.5f, 0, 16);
		EV_Wait(1);
		EV_WaitAction(player);
		EV_CameraPos(1, 0, -463.66f, 51.349998f, 1110.79f);
		EV_CameraAng(1, 0, 0xE1CE, 0xDBD, 0);
		EV_ClrAction(player);
		EV_PlayPad(0, &EV0051_M_JUMP);
		EV_Wait(130);
		EventSe_Volume(0, 120, 60);
		EV_CameraPos(1, 0, -419.63f, -2.23f, 1316.47f);
		EV_CameraAng(1, 0, 0x1384, 0x1172, 0);
		EV_Wait(60);
		EventSe_Volume(0, -120, 90);
		B_OUT = COverlayCreate(0.016666668f, 0.2f, 0.0f, 0.0f, 0.0f);
		EV_Wait(90);
		break;
	case 2:
		EventSe_Close();
		EV_InitPlayer(0);
		EV_FreeObject(&BOY);
		EV_FreeObject(&LADY);
		EV_FreeObject(&GIRL);
		EV_FreeObject(&OYAJI);
		EV_FreeObject(&FAT_B);
		EV_FreeObject(&BOY2);
		EV_FreeObject(&LADY2);
		EV_FreeObject(&GIRL2);
		EV_FreeObject(&OYAJI2);
		EV_FreeObject(&FAT2);
		if(B_OUT){
			FreeTask(B_OUT);
			B_OUT = 0;
		}
		EV_CameraOff();
		EV_PadOn();
		break;
	}
}